#include <stdint.h>
#include <stdio.h>

#define BUFFER_SIZE 512

typedef struct {
    uint8_t  data;
    uint32_t crc;
} buffer_t;

buffer_t rx_buffer[BUFFER_SIZE];
buffer_t tx_buffer[BUFFER_SIZE];

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

uint32_t crc32(uint8_t data)
{
    const uint64_t mask_msb  = 0x8000000000;
    const uint64_t mask_crc  = 0x00FFFFFFFF;
    const uint64_t mask_data = 0xFF00000000;

    uint64_t gp     = 0x104C11DB7;
    uint64_t vector = 0;
    uint8_t i;

    vector = (uint64_t) data << 32;

    print_bin_vector(vector);

    for (i = 0; !(gp & mask_msb); i++)
        gp <<= 1;

    for (i = 0; vector &mask_data; i++)
    {
        if ((vector << i) & mask_msb)
            vector ^= gp;
        gp >>= 1;
    }

    print_bin_vector(vector);

    return (uint32_t) (vector & mask_crc);
}

int main(void)
{
    crc32(7);
    return 0;
}
