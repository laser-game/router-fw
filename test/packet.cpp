#include <iostream>
#include <vector>
#include <stdio.h>

#define ADDRESS 7

using namespace std;


class CircularBuffer
{
private:
    const uint16_t BUFFER_SIZE = 512;
    uint16_t index_write;
    uint16_t index_read;
    uint8_t *data;
public:
    CircularBuffer();
    ~CircularBuffer();
    uint16_t size(void) const;
    uint16_t get_index_write(void) const;
    uint16_t get_index_read(void) const;
    void set_index_read(uint16_t index);
    uint8_t read(uint16_t index) const;
    void insert(uint8_t byte);
    void print(void) const;
};

CircularBuffer::CircularBuffer()
{
    index_write = 0;
    index_read  = 0;
    data        = new uint8_t[BUFFER_SIZE];
}

CircularBuffer::~CircularBuffer()
{
    delete data;
}

inline uint16_t CircularBuffer::size(void) const
{
    return BUFFER_SIZE;
}

inline uint16_t CircularBuffer::get_index_write(void) const
{
    return index_write;
}

inline uint16_t CircularBuffer::get_index_read(void) const
{
    return index_read;
}

inline void CircularBuffer::set_index_read(uint16_t index)
{
    index_read = index;
}

inline uint8_t CircularBuffer::read(uint16_t index) const
{
    return data[index];
}

void CircularBuffer::insert(uint8_t byte)
{
    data[index_write] = byte;
    if (++index_write >= BUFFER_SIZE)
        index_write = 0;
}

void CircularBuffer::print() const
{
    printf("buffer:\n");
    for (uint16_t i = 0; i < BUFFER_SIZE; i++)
    {
        if ((i % 32) == 0 && i)
            printf("\n");
        printf("%02X ", data[i]);
    }
    printf("\n\n");
}

class CRC32
{
private:
    uint32_t table[256];
    uint32_t _calculate(uint8_t byte);
public:
    CRC32();
    uint32_t calculate(uint8_t byte);
    uint32_t calculate(CircularBuffer *buffer, uint16_t start, uint16_t size);
};

CRC32::CRC32()
{
    for (uint16_t i = 0; i < 256; i++)
        table[i] = _calculate(i);
}

uint32_t CRC32::_calculate(uint8_t byte)
{
    const uint64_t MASK_MSB  = 0x8000000000;
    const uint64_t MASK_CRC  = 0x00FFFFFFFF;
    const uint64_t MASK_DATA = 0xFF00000000;

    uint64_t gp = 0x104C11DB7;
    uint64_t vector;
    uint64_t mask_bit;
    uint8_t i;

    vector = (uint64_t) byte << 32;

    for (i = 0; !(gp & MASK_MSB); i++)
        gp <<= 1;

    for (i = 0, mask_bit = MASK_MSB; (vector & MASK_DATA); i++, gp >>= 1, mask_bit >>= 1)
    {
        if (vector & mask_bit)
        {
            vector ^= gp;
        }
    }

    return (uint32_t) (vector & MASK_CRC);
}

inline uint32_t CRC32::calculate(uint8_t byte)
{
    return table[byte];
}

uint32_t CRC32::calculate(CircularBuffer *buffer, uint16_t start, uint16_t size)
{
    uint32_t crc = ~0;
    uint16_t index, i;
    for (i = 0; i < size; i++)
    {
        index = start + i;
        index = (index >= buffer->size()) ? 0 : index;
        crc   = table[(crc ^ buffer->read(index)) & 0xFF] ^ (crc >> 8);
    }
    return ~crc;
}

CRC32 CRC32;

class Packet
{
private:
    uint8_t address;
    uint16_t size;
    vector<uint8_t> data;
    const uint8_t PACKET_SIZE_MIN  = 8;
    const uint16_t PACKET_SIZE_MAX = 512;
    const uint8_t PACKET_SIZE_HEAD = 3;
    const uint8_t PACKET_SIZE_CRC  = 4;
    const uint8_t PACKET_SIZE_INFO = PACKET_SIZE_HEAD + PACKET_SIZE_CRC;
public:
    Packet();
    void create(CircularBuffer *buffer, vector<uint8_t> data);
    void find(CircularBuffer *buffer);
};

Packet::Packet(){ }

void Packet::create(CircularBuffer *buffer, vector<uint8_t> data)
{
    uint32_t crc;
    uint16_t size  = data.size() + PACKET_SIZE_INFO;
    uint16_t start = buffer->get_index_write();

    buffer->insert(ADDRESS);
    buffer->insert((uint8_t) (size >> 8));
    buffer->insert((uint8_t) (size & 0xFF));

    for (uint8_t i = 0; i < data.size(); i++)
        buffer->insert(data[i]);

    crc = CRC32.calculate(buffer, start, data.size() + PACKET_SIZE_HEAD);
    buffer->insert((uint8_t) (crc >> 24));
    buffer->insert((uint8_t) (crc >> 16));
    buffer->insert((uint8_t) (crc >> 8));
    buffer->insert((uint8_t) (crc >> 0));
}

void Packet::find(CircularBuffer *buffer)
{
    typedef enum {
        ANALYSIS_PACKET_STATE_SEARCH_ADDRESS,
        ANALYSIS_PACKET_STATE_SEARCH_SIZE_MSB,
        ANALYSIS_PACKET_STATE_SEARCH_SIZE_LSB,
        ANALYSIS_PACKET_STATE_SEARCH_END
    } analysis_packet_state_t;

    uint32_t crc_calculate, crc_read;
    uint16_t i, index, size, size_cnt;
    analysis_packet_state_t state = ANALYSIS_PACKET_STATE_SEARCH_ADDRESS;

    size_cnt = 0;
    index    = buffer->get_index_read();

    for (i = 0; i < buffer->size(); i++, size_cnt++, index++)
    {
        index = (index >= PACKET_SIZE_MAX) ? 0 : index;
        switch (state)
        {
            case ANALYSIS_PACKET_STATE_SEARCH_ADDRESS:
                if (buffer->read(index) == ADDRESS)
                {
                    size_cnt = 1;
                    state    = ANALYSIS_PACKET_STATE_SEARCH_SIZE_MSB;
                }
                break;

            case ANALYSIS_PACKET_STATE_SEARCH_SIZE_MSB:
                size  = uint16_t(buffer->read(index)) << 8;
                state = ANALYSIS_PACKET_STATE_SEARCH_SIZE_LSB;
                break;

            case ANALYSIS_PACKET_STATE_SEARCH_SIZE_LSB:
                size += buffer->read(index);
                if (size > PACKET_SIZE_MAX || size < PACKET_SIZE_MIN)
                {
                    state = ANALYSIS_PACKET_STATE_SEARCH_ADDRESS;
                }
                else
                {
                    state = ANALYSIS_PACKET_STATE_SEARCH_END;
                }
                break;

            default:                
                if (size_cnt == size - 3)
                {
                    crc_read = uint32_t(buffer->read(index)) << 24;
                }
                else if (size_cnt == size - 2)
                {
                    crc_read += uint32_t(buffer->read(index)) << 16;
                }
                else if (size_cnt == size - 1)
                {
                    crc_read += uint32_t(buffer->read(index)) << 8;
                }
                else if (size_cnt == size)
                {
                    crc_read     += buffer->read(index);
                    crc_calculate = CRC32.calculate(buffer, buffer->get_index_read(), size - 4);
                    if (crc_read == crc_calculate)
                    {
                        printf("packet is ok ");
                        printf("crc: %08x ", crc_read);
                        printf("start: %d stop: %d\n", buffer->get_index_read(), index);
                    }
                    state = ANALYSIS_PACKET_STATE_SEARCH_ADDRESS;
                }
                break;
        }
    }
} // find

int main(void)
{
    CircularBuffer buffer;
    Packet packet_tx;
    Packet packet_rx;

    packet_tx.create(&buffer, (vector<uint8_t> ){ 1, 2, 3 });

    buffer.print();

    packet_rx.find(&buffer);

    return 0;
}
