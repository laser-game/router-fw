#ifndef __GLOBALS_INLUDED__
#define __GLOBALS_INLUDED__

#define ADDRESS 7

#define vector_uint8_t_array(array...) (vector<uint8_t>({array}))

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <ctime>

#include "crc.hpp"

using namespace std;


void globals_init(void);

#endif // ifndef __GLOBALS_INLUDED__
