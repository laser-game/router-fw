#ifndef __GLOBALS_INLUDED__
#define __GLOBALS_INLUDED__

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <ctime>


#define ADDRESS 7

#include "crc.hpp"
extern CRC32 CRC32_lib;

void globals_init(void);

#endif // ifndef __GLOBALS_INLUDED__
