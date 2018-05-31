#ifndef __USB_INLUDED__
#define __USB_INLUDED__

#include "stm32f4xx_hal.h"
#include <vector>
#include <string>

using namespace std;

class USB
{
private:
    UART_HandleTypeDef *huart;
public:
    uint8_t buffer_rx[1];
    uint8_t buffer_tx[1];
    USB(UART_HandleTypeDef *huart);
    void tx(string str);
    void tx(uint8_t byte);
    void rx(void);
    inline UART_HandleTypeDef *get_huart()
    {
        return huart;
    }
};

#endif // ifndef __USB_INLUDED__
