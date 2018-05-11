#ifndef __CIRCULAR_BUFFER_INLUDED__
#define __CIRCULAR_BUFFER_INLUDED__

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <ctime>

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
    uint16_t transform_index(uint16_t index) const;
    uint8_t read(uint16_t index) const;
    void insert(uint8_t byte);
    void insert_random_array(uint16_t size);
    void print(void) const;
};

#endif // ifndef __CIRCULAR_BUFFER_INLUDED__
