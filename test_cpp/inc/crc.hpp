#ifndef __CRC_INLUDED__
#define __CRC_INLUDED__

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <ctime>

#include "globals.hpp"
#include "circular_buffer.hpp"

using namespace std;

class CRC32
{
private:
    static uint32_t _table[256];
    static uint64_t _generator_polynomial;
    static uint32_t _calculate(uint8_t byte);
public:
    static void init(vector<uint8_t> gp = vector_uint8_t_array(32, 26, 23, 22, 16, 12, 11, 10, 8, 7, 5, 4, 2, 1));
    static uint32_t calculate(uint8_t byte);
    static uint32_t calculate(CircularBuffer *buffer, uint16_t start, uint16_t size);
};

#endif // ifndef __CRC_INLUDED__
