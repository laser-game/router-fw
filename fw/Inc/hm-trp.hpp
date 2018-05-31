#ifndef __HMTRP_INLUDED__
#define __HMTRP_INLUDED__

#include "stm32f4xx_hal.h"
#include <vector>
#include <string>

using namespace std;

class HMTRP
{
private:
    UART_HandleTypeDef *huart;
    void enable(bool ena = true);
    void config(bool cnf = true);
public:
    uint8_t buffer_rx[1];
    HMTRP(UART_HandleTypeDef *huart);
    void tx(string str);
    void tx(uint8_t byte);
    void rx(void);
    inline UART_HandleTypeDef *get_huart()
    {
        return huart;
    }
};

#endif // ifndef __HMTRP_INLUDED__
