#include "usb.hpp"

#define USB_UART_TIMEOUT 0xFFFF

USB::USB(UART_HandleTypeDef *huart)
{
    this->huart = huart;
    rx();
}

void USB::tx(string str)
{
    HAL_UART_Transmit(huart, (uint8_t *) str.c_str(), str.size(), USB_UART_TIMEOUT);
}

void USB::tx(uint8_t byte)
{
    HAL_UART_Transmit(huart, (uint8_t *) &byte, 1, USB_UART_TIMEOUT);
}

void USB::rx(void)
{
    HAL_UART_Receive_IT(huart, buffer_rx, 1);
}
