#ifndef __GLOBALS_INLUDED__
#define __GLOBALS_INLUDED__

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <ctime>

#include "crc.hpp"
#include "packet.hpp"
#include "circular_buffer.hpp"

using namespace std;

#define ADDRESS 7

class CRC32;
extern CRC32 CRC32_lib;

void globals_init(void);

#endif // ifndef __GLOBALS_INLUDED__
