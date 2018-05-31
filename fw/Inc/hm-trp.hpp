#ifndef __HMTRP_INLUDED__
#define __HMTRP_INLUDED__

#include "stm32f4xx_hal.h"
#include "cm-uart.hpp"
#include <vector>
#include <string>

using namespace std;

class HMTRP : public UART
{
private:
    void enable(bool ena = true);
    void config(bool cnf = true);
public:
    HMTRP(UART_HandleTypeDef *huart);
};

#endif // ifndef __HMTRP_INLUDED__
