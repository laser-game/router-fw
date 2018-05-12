#include "circular_buffer.hpp"

CircularBuffer::CircularBuffer()
{
    index_write = 0;
    index_read  = 0;
    data        = new uint8_t[BUFFER_SIZE];
}

CircularBuffer::~CircularBuffer()
{
    delete data;
}

void CircularBuffer::insert(uint8_t byte)
{
    data[index_write] = byte;
    if (++index_write >= BUFFER_SIZE)
        index_write = 0;
}

void CircularBuffer::insert_random_array(uint16_t size)
{
    for (uint16_t i = 0; i < size; i++)
        insert(rand() % 256);
}

void CircularBuffer::print() const
{
    printf("buffer:\n");
    for (uint16_t i = 0; i < BUFFER_SIZE; i++)
    {
        if ((i % 32) == 0 && i)
            printf("\n");
        printf("%02X ", data[i]);
    }
    printf("\n\n");
}
