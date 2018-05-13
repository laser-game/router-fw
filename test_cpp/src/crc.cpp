#include "crc.hpp"

uint64_t CRC32::generator_polynomial = 0;
uint32_t *CRC32::table = CRC32::table_init();

uint32_t * CRC32::table_init(vector<uint8_t> gp)
{
    uint32_t *tab = new uint32_t[256];
    generator_polynomial = 1;
    uint16_t i;

    for (i = 0; i < gp.size(); i++)
        generator_polynomial += uint64_t(1) << gp[i];

    for (i = 0; i < 256; i++)
        tab[i] = _calculate(i);

    return tab;
}

uint32_t CRC32::_calculate(uint8_t byte)
{
    const uint64_t MASK_MSB  = 0x8000000000;
    const uint64_t MASK_CRC  = 0x00FFFFFFFF;
    const uint64_t MASK_DATA = 0xFF00000000;

    uint8_t i;
    uint64_t gp = generator_polynomial;

    for (i = 0; !(gp & MASK_MSB); i++)
        gp <<= 1;

    uint64_t vector   = (uint64_t) byte << 32;
    uint64_t mask_bit = MASK_MSB;

    for (i = 0; (vector & MASK_DATA); i++, gp >>= 1, mask_bit >>= 1)
    {
        if (vector & mask_bit)
        {
            vector ^= gp;
        }
    }

    return (uint32_t) (vector & MASK_CRC);
}

uint32_t CRC32::calculate(uint8_t byte)
{
    return table[byte];
}

uint32_t CRC32::calculate(CircularBuffer *buffer, uint16_t start, uint16_t size)
{
    uint32_t crc = ~0;
    uint16_t index, i;
    for (i = 0, index = start; i < size; i++, index++)
        crc = table[(crc ^ buffer->read(index)) & 0xFF] ^ (crc >> 8);
    return ~crc;
}
