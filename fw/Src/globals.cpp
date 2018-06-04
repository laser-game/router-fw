#include "globals.hpp"

Global *global = Global::instance();

Global * Global::instance()
{
    static Global object;
    return &object;
}

void Global::led(uint8_t byte)
{
    HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, (byte & 0x80) ? GPIO_PIN_RESET : GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, (byte & 0x40) ? GPIO_PIN_RESET : GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, (byte & 0x20) ? GPIO_PIN_RESET : GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, (byte & 0x10) ? GPIO_PIN_RESET : GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, (byte & 0x08) ? GPIO_PIN_RESET : GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, (byte & 0x04) ? GPIO_PIN_RESET : GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, (byte & 0x02) ? GPIO_PIN_RESET : GPIO_PIN_SET);
    HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, (byte & 0x01) ? GPIO_PIN_RESET : GPIO_PIN_SET);
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
    if (huart->Instance == global->hmtrp->get_huart()->Instance)
    {
        global->radio_buffer_rx->insert(global->hmtrp->buffer_rx[0]);
        global->usb->tx(global->hmtrp->buffer_rx[0]);
        global->hmtrp->rx_it();
    }
    else if (huart->Instance == global->usb->get_huart()->Instance)
    {
        global->hmtrp->tx(string("XXXXXXXX"));
        global->usb->rx_it();
    }
}
