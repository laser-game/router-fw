#include <stdint.h>
#include <stdio.h>

#define ADDRESS         7
#define BUFFER_SIZE     512

#define PACKET_MIN_SIZE 8
#define PACKET_MAX_SIZE 512

typedef enum {
    ANALYSIS_PACKET_STATE_SEARCH_ADDRESS,
    ANALYSIS_PACKET_STATE_SEARCH_SIZE_MSB,
    ANALYSIS_PACKET_STATE_SEARCH_SIZE_LSB,
    ANALYSIS_PACKET_STATE_SEARCH_END
} analysis_packet_state_t;

typedef struct {
    uint8_t  data[BUFFER_SIZE];
    uint32_t crc[BUFFER_SIZE];
    uint16_t index_read;
    uint16_t index_write;
} buffer_t;

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

    uint64_t gp     = 0x104C11DB7;
    uint64_t vector = 0;
    uint8_t i;

    vector = (uint64_t) data << 32;

    for (i = 0; !(gp & mask_msb); i++)
        gp <<= 1;

    for (i = 0; (vector & mask_data); i++)
    {
        if ((vector << i) & mask_msb)
            vector ^= gp;
        gp >>= 1;
    }

    return (uint32_t) (vector & mask_crc);
}

void buffe_init(buffer_t *buffer)
{
    buffer->index_read  = 0;
    buffer->index_write = 0;

    for (uint16_t i = 0; i < BUFFER_SIZE; i++)
    {
        buffer->data[i] = 0;
        buffer->crc[i]  = 0;
    }
}

uint32_t buffer_crc(buffer_t *buffer, uint16_t start, uint16_t stop)
{
    uint32_t crc = 0;
    stop = ((stop+1) >= PACKET_MAX_SIZE) ? 0 : stop + 1;
    for (uint16_t index=start; index != stop; index++)
    {
        index = (index >= PACKET_MAX_SIZE) ? 0 : index;
        crc ^= buffer->crc[index];
    }
    return crc;
}

void buffer_packet_check(buffer_t *buffer)
{
    uint32_t crc;
    uint16_t index, start, stop, size, size_cnt;
    analysis_packet_state_t state = ANALYSIS_PACKET_STATE_SEARCH_ADDRESS;

    start = buffer->index_read;
    stop  = buffer->index_write;
    crc = 0;
    size_cnt = 0;

    for (start; start != stop; start++)
    {
        start = (start >= PACKET_MAX_SIZE) ? 0 : start;
        state = ANALYSIS_PACKET_STATE_SEARCH_ADDRESS;
        for (index = start; index != stop; index++)
        {
            index = (index >= PACKET_MAX_SIZE) ? 0 : index;

            crc  ^= buffer->crc[index];
            size_cnt++;

            switch (state)
            {
                case ANALYSIS_PACKET_STATE_SEARCH_ADDRESS:
                    if (buffer->data[index] == ADDRESS)
                    {
                        start = index;
                        crc   = buffer->crc[index];
                        size_cnt = 1;
                        state = ANALYSIS_PACKET_STATE_SEARCH_SIZE_MSB;
                    }
                    break;

                case ANALYSIS_PACKET_STATE_SEARCH_SIZE_MSB:
                    size = (uint16_t) buffer->data[index] << 8;
                    state = ANALYSIS_PACKET_STATE_SEARCH_SIZE_LSB;
                    break;

                case ANALYSIS_PACKET_STATE_SEARCH_SIZE_LSB:
                    size += buffer->data[index];

                    printf("size: %d\n", size);

                    if (size > PACKET_MAX_SIZE || size < PACKET_MIN_SIZE)
                    {
                        state = ANALYSIS_PACKET_STATE_SEARCH_ADDRESS;
                        printf("size problem\n");
                    }
                    else
                    {
                        state = ANALYSIS_PACKET_STATE_SEARCH_END;
                        printf("size ok\n");
                    }
                    break;

                default:
                    printf("size: %d size_cnt: %d\n", size, size_cnt);
                    printf("FOR-CRC: %08X\n", crc);
                    if (size_cnt == size)
                    {
                        printf("CRC: %X\n", crc);
                        if (!crc)
                        {
                            printf("packet is ok\n");
                        }
                        else
                        {
                            printf("crc problem\n");
                        }
                        state = ANALYSIS_PACKET_STATE_SEARCH_ADDRESS;
                    }
                    else if (size_cnt == size - 4)
                    {
                        printf("size - 4 CRC: %X\n", crc);
                    }
                    break;
            }
        }
    }
} /* buffer_packet_check */

void buffer_insert(buffer_t *buffer, uint8_t data)
{
    buffer->data[buffer->index_write] = data;
    buffer->crc[buffer->index_write]  = crc32(data);

    if (++buffer->index_write >= BUFFER_SIZE)
        buffer->index_write = 0;
}

int main(void)
{
    uint32_t crc;
    buffer_t buffer;
    buffe_init(&buffer);

    buffer_insert(&buffer, 1);
    buffer_insert(&buffer, 7);
    buffer_insert(&buffer, 0);
    buffer_insert(&buffer, 11);
    buffer_insert(&buffer, 1);
    buffer_insert(&buffer, 2);
    buffer_insert(&buffer, 3);
    buffer_insert(&buffer, 4);

    crc = buffer_crc(&buffer, 1, 7);

    buffer_insert(&buffer, (uint8_t)(crc >> 24));
    buffer_insert(&buffer, (uint8_t)(crc >> 16));
    buffer_insert(&buffer, (uint8_t)(crc >> 8));
    buffer_insert(&buffer, (uint8_t)(crc >> 0));


    buffer_packet_check(&buffer);
    buffer_print(&buffer);

    printf("CRC32: %X\n", crc);

    printf("TEST-CRC: 0x%08X\n", crc32(7));
    printf("TEST-CRC: 0x%08X\n", crc32(0));
    printf("TEST-CRC: 0x%08X\n", crc32(11));
    printf("TEST-CRC: 0x%08X\n", crc32(1));
    printf("TEST-CRC: 0x%08X\n", crc32(2));
    printf("TEST-CRC: 0x%08X\n", crc32(3));
    printf("TEST-CRC: 0x%08X\n", crc32(4));
    printf("TEST-CRC: 0x%08X\n", crc32(0x26));
    printf("TEST-CRC: 0x%08X\n", crc32(0x08));
    printf("TEST-CRC: 0x%08X\n", crc32(0xED));
    printf("TEST-CRC: 0x%08X\n", crc32(0xB8));

    return 0;
}
