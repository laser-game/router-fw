#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ADDRESS          7
#define BUFFER_SIZE      512

#define PACKET_MIN_SIZE  8
#define PACKET_MAX_SIZE  512
#define PACKET_HEAD_SIZE 3
#define PACKET_CRC_SIZE  4
#define PACKET_INFO_SIZE PACKET_HEAD_SIZE + PACKET_CRC_SIZE

typedef enum {
    ANALYSIS_PACKET_STATE_SEARCH_ADDRESS,
    ANALYSIS_PACKET_STATE_SEARCH_SIZE_MSB,
    ANALYSIS_PACKET_STATE_SEARCH_SIZE_LSB,
    ANALYSIS_PACKET_STATE_SEARCH_END
} analysis_packet_state_t;

typedef struct buffer_t {
    uint8_t  data[BUFFER_SIZE];
    uint16_t index_read;
    uint16_t index_write;
} buffer_t;

uint32_t crc_table[256];

void print_bin_byte(uint8_t byte)
{
    for (uint8_t i = 0; i < 8; i++)
    {
        if (!(i % 4) && i)
            printf(" ");
        printf("%d", ((byte << i) & 0x80) ? 1 : 0);
    }
}

void print_hex_byte(uint8_t byte)
{
    printf("%02X", byte);
}

void print_bin_vector(uint64_t vector)
{
    for (uint8_t i = 0; i < 64; i++)
    {
        if (!(i % 8) && i)
            printf("   ");
        else if (!(i % 4) && i)
            printf(" ");
        printf("%d", ((vector << i) & 0x8000000000000000) ? 1 : 0);
    }
    printf("\n");
}

void print_hex_vector(uint64_t vector)
{
    for (uint8_t i = 0; i < 8; i++)
    {
        printf("%02X ", (int) (vector >> (64 - 8 - i * 8)) & 0xFF);
    }
    printf("\n");
}

void buffer_print(buffer_t *buffer)
{
    printf("buffer:\n");
    for (uint16_t i = 0; i < BUFFER_SIZE; i++)
    {
        if ((i % 32) == 0 && i)
            printf("\n");
        print_hex_byte(buffer->data[i]);
        printf(" ");
    }
    printf("\n");
}

uint32_t crc32(uint8_t data)
{
    const uint64_t mask_msb  = 0x8000000000;
    const uint64_t mask_crc  = 0x00FFFFFFFF;
    const uint64_t mask_data = 0xFF00000000;

    uint64_t gp = 0x104C11DB7;
    uint64_t vector;
    uint64_t mask_bit;
    uint8_t i;

    vector = (uint64_t) data << 32;

    for (i = 0; !(gp & mask_msb); i++)
        gp <<= 1;


    for (i = 0, mask_bit = mask_msb; (vector & mask_data); i++, gp >>= 1, mask_bit >>= 1)
    {
        if (vector & mask_bit)
        {
            vector ^= gp;
        }
    }

    return (uint32_t) (vector & mask_crc);
} /* crc32 */

void crc_table_init(void)
{
    for (uint16_t i = 0; i < 256; i++)
        crc_table[i] = crc32(i);
}

void buffe_init(buffer_t *buffer)
{
    buffer->index_read  = 0;
    buffer->index_write = 0;

    for (uint16_t i = 0; i < BUFFER_SIZE; i++)
        buffer->data[i] = 0;
}

uint32_t buffer_crc(buffer_t *buffer, uint16_t start, uint16_t size)
{
    uint32_t crc = ~0;
    uint16_t index, i;
    for (i = 0; i < size; i++)
    {
        index = start + i;
        index = (index >= PACKET_MAX_SIZE) ? 0 : index;
        crc   = crc_table[(crc ^ buffer->data[index]) & 0xFF] ^ (crc >> 8);
    }
    return ~crc;
}

void buffer_packet_check(buffer_t *buffer)
{
    uint32_t crc, packet_crc;
    uint16_t index, start, stop, size, size_cnt;
    analysis_packet_state_t state = ANALYSIS_PACKET_STATE_SEARCH_ADDRESS;

    start    = buffer->index_read;
    stop     = buffer->index_write;
    size_cnt = 0;
    crc      = 0;

    for (start; start != stop; start++)
    {
        start = (start >= PACKET_MAX_SIZE) ? 0 : start;
        state = ANALYSIS_PACKET_STATE_SEARCH_ADDRESS;
        for (index = start; index != stop; index++)
        {
            index = (index >= PACKET_MAX_SIZE) ? 0 : index;

            size_cnt++;
            switch (state)
            {
                case ANALYSIS_PACKET_STATE_SEARCH_ADDRESS:
                    if (buffer->data[index] == ADDRESS)
                    {
                        start    = index;
                        size_cnt = 1;
                        state    = ANALYSIS_PACKET_STATE_SEARCH_SIZE_MSB;
                    }
                    break;

                case ANALYSIS_PACKET_STATE_SEARCH_SIZE_MSB:
                    size  = (uint16_t) buffer->data[index] << 8;
                    state = ANALYSIS_PACKET_STATE_SEARCH_SIZE_LSB;
                    break;

                case ANALYSIS_PACKET_STATE_SEARCH_SIZE_LSB:
                    size += buffer->data[index];

                    if (size > PACKET_MAX_SIZE || size < PACKET_MIN_SIZE)
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
                        packet_crc = (uint32_t) buffer->data[index] << 24;
                    }
                    else if (size_cnt == size - 2)
                    {
                        packet_crc += (uint32_t) buffer->data[index] << 16;
                    }
                    else if (size_cnt == size - 1)
                    {
                        packet_crc += (uint32_t) buffer->data[index] << 8;
                    }
                    else if (size_cnt == size)
                    {
                        packet_crc += buffer->data[index];
                        crc         = buffer_crc(buffer, start, size - 4);
                        // printf("CRC: %08X - PACKET CRC: %08X\n", crc, packet_crc);
                        if (crc == packet_crc)
                        {
                            printf("\npacket is ok ");
                            printf("crc: %08x ", crc);
                            printf("start: %d stop: %d\n", start, start + size - 1);
                        }
                        state = ANALYSIS_PACKET_STATE_SEARCH_ADDRESS;
                    }
                    break;
            }
        }
    }
} /* buffer_packet_check */

void buffer_insert(buffer_t *buffer, uint8_t data)
{
    buffer->data[buffer->index_write] = data;

    if (++buffer->index_write >= BUFFER_SIZE)
        buffer->index_write = 0;
}

void buffer_insert_zeros(buffer_t *buffer, uint16_t number)
{
    for (; number; number--)
        buffer_insert(buffer, 0);
}

void buffer_insert_ones(buffer_t *buffer, uint16_t number)
{
    for (; number; number--)
        buffer_insert(buffer, 0xFF);
}

void buffer_insert_rand(buffer_t *buffer, uint16_t number)
{
    for (; number; number--)
        buffer_insert(buffer, rand() % 256);
}

void packet_create(buffer_t *buffer, uint16_t data_size, uint8_t data[])
{
    uint32_t crc;
    uint16_t size = data_size + PACKET_INFO_SIZE;
    uint16_t start = buffer->index_write;

    buffer_insert(buffer, ADDRESS);
    buffer_insert(buffer, (uint8_t)(size >> 8));
    buffer_insert(buffer, (uint8_t)(size & 0xFF));

    printf("data size: %d\n", data_size);

    for (uint8_t i=0; i < data_size; i++)
        buffer_insert(buffer, data[i]);

    crc = buffer_crc(buffer, start, data_size + PACKET_HEAD_SIZE);
    buffer_insert(buffer, (uint8_t) (crc >> 24));
    buffer_insert(buffer, (uint8_t) (crc >> 16));
    buffer_insert(buffer, (uint8_t) (crc >> 8));
    buffer_insert(buffer, (uint8_t) (crc >> 0));
}

int main(void)
{
    uint16_t i;
    uint32_t crc;
    buffer_t buffer;
    buffe_init(&buffer);
    crc_table_init();

    srand(time(NULL));

    buffer_insert_ones(&buffer, 13);
    packet_create(&buffer, 4, (uint8_t[]){ 1, 2, 3, 4 });
    buffer_insert_ones(&buffer, 230);
    packet_create(&buffer, 7, (uint8_t[]){ 7, 7, 7, 7, 7, 7, 7 });

    buffer_print(&buffer);
    buffer_packet_check(&buffer);

    return 0;
} /* main */
