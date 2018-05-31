#ifndef __USB_INLUDED__
#define __USB_INLUDED__

#include "stm32f4xx_hal.h"
#include "cm-uart.hpp"
#include <vector>
#include <string>

using namespace std;

class USB : public UART
{
private:
public:
    USB(UART_HandleTypeDef *huart);
};

#endif // ifndef __USB_INLUDED__
