#include "globals.hpp"

CRC32 CRC32_lib;

void globals_init(void)
{
    CRC32_lib = CRC32();
}
