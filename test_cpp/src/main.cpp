#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <ctime>

#include "globals.hpp"
#include "packet.hpp"

int main(void)
{
    globals_init();

    CircularBuffer buffer;
    Packet packet_tx;
    Packet packet_rx;

    srand(time(NULL));

    packet_tx.create(&buffer, vector<uint8_t>({ 1, 2, 3 }));
    buffer.insert_random_array(3);
    packet_tx.create(&buffer, vector<uint8_t>({ 42, 42, 42, 42, 42, 42, 42 }));
    buffer.insert_random_array(100);
    packet_tx.create(&buffer, vector<uint8_t>({ 3, 3, 3 }));
    buffer.insert_random_array(100);
    packet_tx.create(&buffer, vector<uint8_t>({ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 }));
    buffer.insert_random_array(250);
    packet_tx.create(&buffer, vector<uint8_t>({ 4, 4, 4, 4 }));

    buffer.print();
    packet_rx.find(&buffer);

    return 0;
}
