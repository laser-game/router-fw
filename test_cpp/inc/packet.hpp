#ifndef __PACKET_INLUDED__
#define __PACKET_INLUDED__

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <ctime>

#include "globals.hpp"
#include "circular_buffer.hpp"

#define packet_data_array(array...) (vector<uint8_t>({array}))

using namespace std;

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

#endif // ifndef __PACKET_INLUDED__
