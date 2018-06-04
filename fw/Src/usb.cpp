#include "usb.hpp"


USB::USB(UART_HandleTypeDef *huart) : UART(huart)
{
    rx_it();
}
