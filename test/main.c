#include <stdint.h>
#include <stdio.h>

#define ADDRESS     7
#define BUFFER_SIZE 512

typedef struct {
    uint8_t  data[BUFFER_SIZE];
    uint32_t crc[BUFFER_SIZE];
    uint16_t index_packet_start;
    uint16_t index_packet_check;
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
    buffer->index_packet_start = 0;
    buffer->index_packet_check = 0;
    buffer->index_write        = 0;

    for (uint16_t i = 0; i < BUFFER_SIZE; i++)
    {
        buffer->data[i] = 0;
        buffer->crc[i] = 0;
    }
}

void buffer_insert(buffer_t *buffer, uint8_t data)
{
    buffer->data[buffer->index_write] = data;
    buffer->crc[buffer->index_write]  = crc32(data);
}



int main(void)
{
    buffer_t buffer;
    buffe_init(&buffer);


    buffer_print(&buffer);

    buffer_insert(&buffer, 1);



    buffer_print(&buffer);


    return 0;
}
