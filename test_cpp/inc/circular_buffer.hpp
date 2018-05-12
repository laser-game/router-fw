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

    inline uint16_t size(void) const
    {
        return BUFFER_SIZE;
    }

    inline uint16_t get_index_write(void) const
    {
        return index_write;
    }

    inline uint16_t get_index_read(void) const
    {
        return index_read;
    }

    inline void set_index_read(uint16_t index)
    {
        index_read = index;
    }

    inline uint16_t transform_index(uint16_t index) const
    {
        return (index >= BUFFER_SIZE) ? index % BUFFER_SIZE : index;
    }

    inline uint8_t read(uint16_t index) const
    {
        return data[transform_index(index)];
    }

    void insert(uint8_t byte);
    void insert_random_array(uint16_t size);
    void print(void) const;
};

#endif // ifndef __CIRCULAR_BUFFER_INLUDED__
