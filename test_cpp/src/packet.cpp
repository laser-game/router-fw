#include "packet.hpp"

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

    crc = CRC32::calculate(buffer, start, data.size() + PACKET_SIZE_HEAD);
    buffer->insert((uint8_t) (crc >> 24));
    buffer->insert((uint8_t) (crc >> 16));
    buffer->insert((uint8_t) (crc >> 8));
    buffer->insert((uint8_t) (crc >> 0));
}

void Packet::find(CircularBuffer *buffer)
{
    uint32_t crc;
    uint16_t size, index = buffer->get_index_read();

    for (uint16_t i = 0; i < buffer->size(); i++, index++)
        if (buffer->read(index) == ADDRESS)
        {
            size  = uint16_t(buffer->read(index + 1)) << 8;
            size += uint16_t(buffer->read(index + 2));
            if (size >= PACKET_SIZE_MIN && size <= PACKET_SIZE_MAX)
            {
                crc  = uint32_t(buffer->read(index + size - 4)) << 24;
                crc += uint32_t(buffer->read(index + size - 3)) << 16;
                crc += uint32_t(buffer->read(index + size - 2)) << 8;
                crc += buffer->read(index + size - 1);
                if (crc == CRC32::calculate(buffer, index, size - 4))
                {
                    printf("packet is ok ");
                    printf("crc: %08X ", crc);
                    printf("start: %d stop: %d\n", index, buffer->transform_index(index + size - 1));
                }
            }
        }
}
