#include "hm-trp.hpp"

#define HMTRP_UART_TIMEOUT 0xFFFF

HMTRP::HMTRP(UART_HandleTypeDef *huart)
{
    this->huart = huart;
    config(false);
    enable(true);
    rx();
}

void HMTRP::enable(bool ena)
{
    HAL_GPIO_WritePin(RF_ENABLE_GPIO_Port, RF_ENABLE_Pin, (ena) ? GPIO_PIN_RESET : GPIO_PIN_SET);
}

void HMTRP::config(bool cnf)
{
    HAL_GPIO_WritePin(RF_CONFIG_GPIO_Port, RF_CONFIG_Pin, (cnf) ? GPIO_PIN_RESET : GPIO_PIN_SET);
}

void HMTRP::tx(string str)
{
    HAL_UART_Transmit(huart, (uint8_t *) str.c_str(), str.size(), HMTRP_UART_TIMEOUT);
}

void HMTRP::tx(uint8_t byte)
{
    HAL_UART_Transmit(huart, (uint8_t *) &byte, 1, HMTRP_UART_TIMEOUT);
}

void HMTRP::rx(void)
{
    HAL_UART_Receive_IT(huart, buffer_rx, 1);
}
