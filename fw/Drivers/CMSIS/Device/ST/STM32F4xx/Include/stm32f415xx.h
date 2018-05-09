/**
 ******************************************************************************
 * @file    stm32f415xx.h
 * @author  MCD Application Team
 * @brief   CMSIS STM32F415xx Device Peripheral Access Layer Header File.
 *
 *          This file contains:
 *           - Data structures and the address mapping for all peripherals
 *           - peripherals registers declarations and bits definition
 *           - Macros to access peripheral’s registers hardware
 *
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT(c) 2017 STMicroelectronics</center></h2>
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of STMicroelectronics nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */

/** @addtogroup CMSIS_Device
 * @{
 */

/** @addtogroup stm32f415xx
 * @{
 */

#ifndef __STM32F415xx_H
#define __STM32F415xx_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** @addtogroup Configuration_section_for_CMSIS
 * @{
 */

/**
 * @brief Configuration of the Cortex-M4 Processor and Core Peripherals
 */
#define __CM4_REV              0x0001U /*!< Core revision r0p1                            */
#define __MPU_PRESENT          1U      /*!< STM32F4XX provides an MPU                     */
#define __NVIC_PRIO_BITS       4U      /*!< STM32F4XX uses 4 Bits for the Priority Levels */
#define __Vendor_SysTickConfig 0U      /*!< Set to 1 if different SysTick Config is used  */
#define __FPU_PRESENT          1U      /*!< FPU present                                   */

/**
 * @}
 */

/** @addtogroup Peripheral_interrupt_number_definition
 * @{
 */

/**
 * @brief STM32F4XX Interrupt Number Definition, according to the selected device
 *        in @ref Library_configuration_section
 */
typedef enum {
    /******  Cortex-M4 Processor Exceptions Numbers ****************************************************************/
    NonMaskableInt_IRQn     = -14, /*!< 2 Non Maskable Interrupt                                          */
    MemoryManagement_IRQn   = -12, /*!< 4 Cortex-M4 Memory Management Interrupt                           */
    BusFault_IRQn           = -11, /*!< 5 Cortex-M4 Bus Fault Interrupt                                   */
    UsageFault_IRQn         = -10, /*!< 6 Cortex-M4 Usage Fault Interrupt                                 */
    SVCall_IRQn             = -5,  /*!< 11 Cortex-M4 SV Call Interrupt                                    */
    DebugMonitor_IRQn       = -4,  /*!< 12 Cortex-M4 Debug Monitor Interrupt                              */
    PendSV_IRQn             = -2,  /*!< 14 Cortex-M4 Pend SV Interrupt                                    */
    SysTick_IRQn            = -1,  /*!< 15 Cortex-M4 System Tick Interrupt                                */
    /******  STM32 specific Interrupt Numbers **********************************************************************/
    WWDG_IRQn               = 0,  /*!< Window WatchDog Interrupt                                         */
    PVD_IRQn                = 1,  /*!< PVD through EXTI Line detection Interrupt                         */
    TAMP_STAMP_IRQn         = 2,  /*!< Tamper and TimeStamp interrupts through the EXTI line             */
    RTC_WKUP_IRQn           = 3,  /*!< RTC Wakeup interrupt through the EXTI line                        */
    FLASH_IRQn              = 4,  /*!< FLASH global Interrupt                                            */
    RCC_IRQn                = 5,  /*!< RCC global Interrupt                                              */
    EXTI0_IRQn              = 6,  /*!< EXTI Line0 Interrupt                                              */
    EXTI1_IRQn              = 7,  /*!< EXTI Line1 Interrupt                                              */
    EXTI2_IRQn              = 8,  /*!< EXTI Line2 Interrupt                                              */
    EXTI3_IRQn              = 9,  /*!< EXTI Line3 Interrupt                                              */
    EXTI4_IRQn              = 10, /*!< EXTI Line4 Interrupt                                              */
    DMA1_Stream0_IRQn       = 11, /*!< DMA1 Stream 0 global Interrupt                                    */
    DMA1_Stream1_IRQn       = 12, /*!< DMA1 Stream 1 global Interrupt                                    */
    DMA1_Stream2_IRQn       = 13, /*!< DMA1 Stream 2 global Interrupt                                    */
    DMA1_Stream3_IRQn       = 14, /*!< DMA1 Stream 3 global Interrupt                                    */
    DMA1_Stream4_IRQn       = 15, /*!< DMA1 Stream 4 global Interrupt                                    */
    DMA1_Stream5_IRQn       = 16, /*!< DMA1 Stream 5 global Interrupt                                    */
    DMA1_Stream6_IRQn       = 17, /*!< DMA1 Stream 6 global Interrupt                                    */
    ADC_IRQn                = 18, /*!< ADC1, ADC2 and ADC3 global Interrupts                             */
    CAN1_TX_IRQn            = 19, /*!< CAN1 TX Interrupt                                                 */
    CAN1_RX0_IRQn           = 20, /*!< CAN1 RX0 Interrupt                                                */
    CAN1_RX1_IRQn           = 21, /*!< CAN1 RX1 Interrupt                                                */
    CAN1_SCE_IRQn           = 22, /*!< CAN1 SCE Interrupt                                                */
    EXTI9_5_IRQn            = 23, /*!< External Line[9:5] Interrupts                                     */
    TIM1_BRK_TIM9_IRQn      = 24, /*!< TIM1 Break interrupt and TIM9 global interrupt                    */
    TIM1_UP_TIM10_IRQn      = 25, /*!< TIM1 Update Interrupt and TIM10 global interrupt                  */
    TIM1_TRG_COM_TIM11_IRQn = 26, /*!< TIM1 Trigger and Commutation Interrupt and TIM11 global interrupt */
    TIM1_CC_IRQn            = 27, /*!< TIM1 Capture Compare Interrupt                                    */
    TIM2_IRQn               = 28, /*!< TIM2 global Interrupt                                             */
    TIM3_IRQn               = 29, /*!< TIM3 global Interrupt                                             */
    TIM4_IRQn               = 30, /*!< TIM4 global Interrupt                                             */
    I2C1_EV_IRQn            = 31, /*!< I2C1 Event Interrupt                                              */
    I2C1_ER_IRQn            = 32, /*!< I2C1 Error Interrupt                                              */
    I2C2_EV_IRQn            = 33, /*!< I2C2 Event Interrupt                                              */
    I2C2_ER_IRQn            = 34, /*!< I2C2 Error Interrupt                                              */
    SPI1_IRQn               = 35, /*!< SPI1 global Interrupt                                             */
    SPI2_IRQn               = 36, /*!< SPI2 global Interrupt                                             */
    USART1_IRQn             = 37, /*!< USART1 global Interrupt                                           */
    USART2_IRQn             = 38, /*!< USART2 global Interrupt                                           */
    USART3_IRQn             = 39, /*!< USART3 global Interrupt                                           */
    EXTI15_10_IRQn          = 40, /*!< External Line[15:10] Interrupts                                   */
    RTC_Alarm_IRQn          = 41, /*!< RTC Alarm (A and B) through EXTI Line Interrupt                   */
    OTG_FS_WKUP_IRQn        = 42, /*!< USB OTG FS Wakeup through EXTI line interrupt                     */
    TIM8_BRK_TIM12_IRQn     = 43, /*!< TIM8 Break Interrupt and TIM12 global interrupt                   */
    TIM8_UP_TIM13_IRQn      = 44, /*!< TIM8 Update Interrupt and TIM13 global interrupt                  */
    TIM8_TRG_COM_TIM14_IRQn = 45, /*!< TIM8 Trigger and Commutation Interrupt and TIM14 global interrupt */
    TIM8_CC_IRQn            = 46, /*!< TIM8 Capture Compare global interrupt                             */
    DMA1_Stream7_IRQn       = 47, /*!< DMA1 Stream7 Interrupt                                            */
    FSMC_IRQn               = 48, /*!< FSMC global Interrupt                                             */
    SDIO_IRQn               = 49, /*!< SDIO global Interrupt                                             */
    TIM5_IRQn               = 50, /*!< TIM5 global Interrupt                                             */
    SPI3_IRQn               = 51, /*!< SPI3 global Interrupt                                             */
    UART4_IRQn              = 52, /*!< UART4 global Interrupt                                            */
    UART5_IRQn              = 53, /*!< UART5 global Interrupt                                            */
    TIM6_DAC_IRQn           = 54, /*!< TIM6 global and DAC1&2 underrun error  interrupts                 */
    TIM7_IRQn               = 55, /*!< TIM7 global interrupt                                             */
    DMA2_Stream0_IRQn       = 56, /*!< DMA2 Stream 0 global Interrupt                                    */
    DMA2_Stream1_IRQn       = 57, /*!< DMA2 Stream 1 global Interrupt                                    */
    DMA2_Stream2_IRQn       = 58, /*!< DMA2 Stream 2 global Interrupt                                    */
    DMA2_Stream3_IRQn       = 59, /*!< DMA2 Stream 3 global Interrupt                                    */
    DMA2_Stream4_IRQn       = 60, /*!< DMA2 Stream 4 global Interrupt                                    */
    CAN2_TX_IRQn            = 63, /*!< CAN2 TX Interrupt                                                 */
    CAN2_RX0_IRQn           = 64, /*!< CAN2 RX0 Interrupt                                                */
    CAN2_RX1_IRQn           = 65, /*!< CAN2 RX1 Interrupt                                                */
    CAN2_SCE_IRQn           = 66, /*!< CAN2 SCE Interrupt                                                */
    OTG_FS_IRQn             = 67, /*!< USB OTG FS global Interrupt                                       */
    DMA2_Stream5_IRQn       = 68, /*!< DMA2 Stream 5 global interrupt                                    */
    DMA2_Stream6_IRQn       = 69, /*!< DMA2 Stream 6 global interrupt                                    */
    DMA2_Stream7_IRQn       = 70, /*!< DMA2 Stream 7 global interrupt                                    */
    USART6_IRQn             = 71, /*!< USART6 global interrupt                                           */
    I2C3_EV_IRQn            = 72, /*!< I2C3 event interrupt                                              */
    I2C3_ER_IRQn            = 73, /*!< I2C3 error interrupt                                              */
    OTG_HS_EP1_OUT_IRQn     = 74, /*!< USB OTG HS End Point 1 Out global interrupt                       */
    OTG_HS_EP1_IN_IRQn      = 75, /*!< USB OTG HS End Point 1 In global interrupt                        */
    OTG_HS_WKUP_IRQn        = 76, /*!< USB OTG HS Wakeup through EXTI interrupt                          */
    OTG_HS_IRQn             = 77, /*!< USB OTG HS global interrupt                                       */
    CRYP_IRQn               = 79, /*!< CRYP crypto global interrupt                                      */
    HASH_RNG_IRQn           = 80, /*!< Hash and Rng global interrupt                                     */
    FPU_IRQn                = 81  /*!< FPU global interrupt                                               */
} IRQn_Type;

/**
 * @}
 */

#include "core_cm4.h" /* Cortex-M4 processor and core peripherals */
#include "system_stm32f4xx.h"
#include <stdint.h>

/** @addtogroup Peripheral_registers_structures
 * @{
 */

/**
 * @brief Analog to Digital Converter
 */

typedef struct {
    __IO uint32_t SR;    /*!< ADC status register,                         Address offset: 0x00 */
    __IO uint32_t CR1;   /*!< ADC control register 1,                      Address offset: 0x04 */
    __IO uint32_t CR2;   /*!< ADC control register 2,                      Address offset: 0x08 */
    __IO uint32_t SMPR1; /*!< ADC sample time register 1,                  Address offset: 0x0C */
    __IO uint32_t SMPR2; /*!< ADC sample time register 2,                  Address offset: 0x10 */
    __IO uint32_t JOFR1; /*!< ADC injected channel data offset register 1, Address offset: 0x14 */
    __IO uint32_t JOFR2; /*!< ADC injected channel data offset register 2, Address offset: 0x18 */
    __IO uint32_t JOFR3; /*!< ADC injected channel data offset register 3, Address offset: 0x1C */
    __IO uint32_t JOFR4; /*!< ADC injected channel data offset register 4, Address offset: 0x20 */
    __IO uint32_t HTR;   /*!< ADC watchdog higher threshold register,      Address offset: 0x24 */
    __IO uint32_t LTR;   /*!< ADC watchdog lower threshold register,       Address offset: 0x28 */
    __IO uint32_t SQR1;  /*!< ADC regular sequence register 1,             Address offset: 0x2C */
    __IO uint32_t SQR2;  /*!< ADC regular sequence register 2,             Address offset: 0x30 */
    __IO uint32_t SQR3;  /*!< ADC regular sequence register 3,             Address offset: 0x34 */
    __IO uint32_t JSQR;  /*!< ADC injected sequence register,              Address offset: 0x38*/
    __IO uint32_t JDR1;  /*!< ADC injected data register 1,                Address offset: 0x3C */
    __IO uint32_t JDR2;  /*!< ADC injected data register 2,                Address offset: 0x40 */
    __IO uint32_t JDR3;  /*!< ADC injected data register 3,                Address offset: 0x44 */
    __IO uint32_t JDR4;  /*!< ADC injected data register 4,                Address offset: 0x48 */
    __IO uint32_t DR;    /*!< ADC regular data register,                   Address offset: 0x4C */
} ADC_TypeDef;

typedef struct {
    __IO uint32_t CSR; /*!< ADC Common status register,                  Address offset: ADC1 base address + 0x300 */
    __IO uint32_t CCR; /*!< ADC common control register,                 Address offset: ADC1 base address + 0x304 */
    __IO uint32_t CDR; /*!< ADC common regular data register for dual
                        *   AND triple modes,                            Address offset: ADC1 base address + 0x308 */
} ADC_Common_TypeDef;


/**
 * @brief Controller Area Network TxMailBox
 */

typedef struct {
    __IO uint32_t TIR;  /*!< CAN TX mailbox identifier register */
    __IO uint32_t TDTR; /*!< CAN mailbox data length control and time stamp register */
    __IO uint32_t TDLR; /*!< CAN mailbox data low register */
    __IO uint32_t TDHR; /*!< CAN mailbox data high register */
} CAN_TxMailBox_TypeDef;

/**
 * @brief Controller Area Network FIFOMailBox
 */

typedef struct {
    __IO uint32_t RIR;  /*!< CAN receive FIFO mailbox identifier register */
    __IO uint32_t RDTR; /*!< CAN receive FIFO mailbox data length control and time stamp register */
    __IO uint32_t RDLR; /*!< CAN receive FIFO mailbox data low register */
    __IO uint32_t RDHR; /*!< CAN receive FIFO mailbox data high register */
} CAN_FIFOMailBox_TypeDef;

/**
 * @brief Controller Area Network FilterRegister
 */

typedef struct {
    __IO uint32_t FR1; /*!< CAN Filter bank register 1 */
    __IO uint32_t FR2; /*!< CAN Filter bank register 1 */
} CAN_FilterRegister_TypeDef;

/**
 * @brief Controller Area Network
 */

typedef struct {
    __IO uint32_t              MCR;                 /*!< CAN master control register,         Address offset: 0x00          */
    __IO uint32_t              MSR;                 /*!< CAN master status register,          Address offset: 0x04          */
    __IO uint32_t              TSR;                 /*!< CAN transmit status register,        Address offset: 0x08          */
    __IO uint32_t              RF0R;                /*!< CAN receive FIFO 0 register,         Address offset: 0x0C          */
    __IO uint32_t              RF1R;                /*!< CAN receive FIFO 1 register,         Address offset: 0x10          */
    __IO uint32_t              IER;                 /*!< CAN interrupt enable register,       Address offset: 0x14          */
    __IO uint32_t              ESR;                 /*!< CAN error status register,           Address offset: 0x18          */
    __IO uint32_t              BTR;                 /*!< CAN bit timing register,             Address offset: 0x1C          */
    uint32_t                   RESERVED0[88];       /*!< Reserved, 0x020 - 0x17F                                            */
    CAN_TxMailBox_TypeDef      sTxMailBox[3];       /*!< CAN Tx MailBox,                      Address offset: 0x180 - 0x1AC */
    CAN_FIFOMailBox_TypeDef    sFIFOMailBox[2];     /*!< CAN FIFO MailBox,                    Address offset: 0x1B0 - 0x1CC */
    uint32_t                   RESERVED1[12];       /*!< Reserved, 0x1D0 - 0x1FF                                            */
    __IO uint32_t              FMR;                 /*!< CAN filter master register,          Address offset: 0x200         */
    __IO uint32_t              FM1R;                /*!< CAN filter mode register,            Address offset: 0x204         */
    uint32_t                   RESERVED2;           /*!< Reserved, 0x208                                                    */
    __IO uint32_t              FS1R;                /*!< CAN filter scale register,           Address offset: 0x20C         */
    uint32_t                   RESERVED3;           /*!< Reserved, 0x210                                                    */
    __IO uint32_t              FFA1R;               /*!< CAN filter FIFO assignment register, Address offset: 0x214         */
    uint32_t                   RESERVED4;           /*!< Reserved, 0x218                                                    */
    __IO uint32_t              FA1R;                /*!< CAN filter activation register,      Address offset: 0x21C         */
    uint32_t                   RESERVED5[8];        /*!< Reserved, 0x220-0x23F                                              */
    CAN_FilterRegister_TypeDef sFilterRegister[28]; /*!< CAN Filter Register,                 Address offset: 0x240-0x31C   */
} CAN_TypeDef;

/**
 * @brief CRC calculation unit
 */

typedef struct {
    __IO uint32_t DR;        /*!< CRC Data register,             Address offset: 0x00 */
    __IO uint8_t  IDR;       /*!< CRC Independent data register, Address offset: 0x04 */
    uint8_t       RESERVED0; /*!< Reserved, 0x05                                      */
    uint16_t      RESERVED1; /*!< Reserved, 0x06                                      */
    __IO uint32_t CR;        /*!< CRC Control register,          Address offset: 0x08 */
} CRC_TypeDef;

/**
 * @brief Digital to Analog Converter
 */

typedef struct {
    __IO uint32_t CR;      /*!< DAC control register,                                    Address offset: 0x00 */
    __IO uint32_t SWTRIGR; /*!< DAC software trigger register,                           Address offset: 0x04 */
    __IO uint32_t DHR12R1; /*!< DAC channel1 12-bit right-aligned data holding register, Address offset: 0x08 */
    __IO uint32_t DHR12L1; /*!< DAC channel1 12-bit left aligned data holding register,  Address offset: 0x0C */
    __IO uint32_t DHR8R1;  /*!< DAC channel1 8-bit right aligned data holding register,  Address offset: 0x10 */
    __IO uint32_t DHR12R2; /*!< DAC channel2 12-bit right aligned data holding register, Address offset: 0x14 */
    __IO uint32_t DHR12L2; /*!< DAC channel2 12-bit left aligned data holding register,  Address offset: 0x18 */
    __IO uint32_t DHR8R2;  /*!< DAC channel2 8-bit right-aligned data holding register,  Address offset: 0x1C */
    __IO uint32_t DHR12RD; /*!< Dual DAC 12-bit right-aligned data holding register,     Address offset: 0x20 */
    __IO uint32_t DHR12LD; /*!< DUAL DAC 12-bit left aligned data holding register,      Address offset: 0x24 */
    __IO uint32_t DHR8RD;  /*!< DUAL DAC 8-bit right aligned data holding register,      Address offset: 0x28 */
    __IO uint32_t DOR1;    /*!< DAC channel1 data output register,                       Address offset: 0x2C */
    __IO uint32_t DOR2;    /*!< DAC channel2 data output register,                       Address offset: 0x30 */
    __IO uint32_t SR;      /*!< DAC status register,                                     Address offset: 0x34 */
} DAC_TypeDef;

/**
 * @brief Debug MCU
 */

typedef struct {
    __IO uint32_t IDCODE; /*!< MCU device ID code,               Address offset: 0x00 */
    __IO uint32_t CR;     /*!< Debug MCU configuration register, Address offset: 0x04 */
    __IO uint32_t APB1FZ; /*!< Debug MCU APB1 freeze register,   Address offset: 0x08 */
    __IO uint32_t APB2FZ; /*!< Debug MCU APB2 freeze register,   Address offset: 0x0C */
} DBGMCU_TypeDef;


/**
 * @brief DMA Controller
 */

typedef struct {
    __IO uint32_t CR;   /*!< DMA stream x configuration register      */
    __IO uint32_t NDTR; /*!< DMA stream x number of data register     */
    __IO uint32_t PAR;  /*!< DMA stream x peripheral address register */
    __IO uint32_t M0AR; /*!< DMA stream x memory 0 address register   */
    __IO uint32_t M1AR; /*!< DMA stream x memory 1 address register   */
    __IO uint32_t FCR;  /*!< DMA stream x FIFO control register       */
} DMA_Stream_TypeDef;

typedef struct {
    __IO uint32_t LISR;  /*!< DMA low interrupt status register,      Address offset: 0x00 */
    __IO uint32_t HISR;  /*!< DMA high interrupt status register,     Address offset: 0x04 */
    __IO uint32_t LIFCR; /*!< DMA low interrupt flag clear register,  Address offset: 0x08 */
    __IO uint32_t HIFCR; /*!< DMA high interrupt flag clear register, Address offset: 0x0C */
} DMA_TypeDef;

/**
 * @brief External Interrupt/Event Controller
 */

typedef struct {
    __IO uint32_t IMR;   /*!< EXTI Interrupt mask register,            Address offset: 0x00 */
    __IO uint32_t EMR;   /*!< EXTI Event mask register,                Address offset: 0x04 */
    __IO uint32_t RTSR;  /*!< EXTI Rising trigger selection register,  Address offset: 0x08 */
    __IO uint32_t FTSR;  /*!< EXTI Falling trigger selection register, Address offset: 0x0C */
    __IO uint32_t SWIER; /*!< EXTI Software interrupt event register,  Address offset: 0x10 */
    __IO uint32_t PR;    /*!< EXTI Pending register,                   Address offset: 0x14 */
} EXTI_TypeDef;

/**
 * @brief FLASH Registers
 */

typedef struct {
    __IO uint32_t ACR;     /*!< FLASH access control register,   Address offset: 0x00 */
    __IO uint32_t KEYR;    /*!< FLASH key register,              Address offset: 0x04 */
    __IO uint32_t OPTKEYR; /*!< FLASH option key register,       Address offset: 0x08 */
    __IO uint32_t SR;      /*!< FLASH status register,           Address offset: 0x0C */
    __IO uint32_t CR;      /*!< FLASH control register,          Address offset: 0x10 */
    __IO uint32_t OPTCR;   /*!< FLASH option control register ,  Address offset: 0x14 */
    __IO uint32_t OPTCR1;  /*!< FLASH option control register 1, Address offset: 0x18 */
} FLASH_TypeDef;


/**
 * @brief Flexible Static Memory Controller
 */

typedef struct {
    __IO uint32_t BTCR[8]; /*!< NOR/PSRAM chip-select control register(BCR) and chip-select timing register(BTR), Address offset: 0x00-1C */
} FSMC_Bank1_TypeDef;

/**
 * @brief Flexible Static Memory Controller Bank1E
 */

typedef struct {
    __IO uint32_t BWTR[7]; /*!< NOR/PSRAM write timing registers, Address offset: 0x104-0x11C */
} FSMC_Bank1E_TypeDef;

/**
 * @brief Flexible Static Memory Controller Bank2
 */

typedef struct {
    __IO uint32_t PCR2;      /*!< NAND Flash control register 2,                       Address offset: 0x60 */
    __IO uint32_t SR2;       /*!< NAND Flash FIFO status and interrupt register 2,     Address offset: 0x64 */
    __IO uint32_t PMEM2;     /*!< NAND Flash Common memory space timing register 2,    Address offset: 0x68 */
    __IO uint32_t PATT2;     /*!< NAND Flash Attribute memory space timing register 2, Address offset: 0x6C */
    uint32_t      RESERVED0; /*!< Reserved, 0x70                                                            */
    __IO uint32_t ECCR2;     /*!< NAND Flash ECC result registers 2,                   Address offset: 0x74 */
    uint32_t      RESERVED1; /*!< Reserved, 0x78                                                            */
    uint32_t      RESERVED2; /*!< Reserved, 0x7C                                                            */
    __IO uint32_t PCR3;      /*!< NAND Flash control register 3,                       Address offset: 0x80 */
    __IO uint32_t SR3;       /*!< NAND Flash FIFO status and interrupt register 3,     Address offset: 0x84 */
    __IO uint32_t PMEM3;     /*!< NAND Flash Common memory space timing register 3,    Address offset: 0x88 */
    __IO uint32_t PATT3;     /*!< NAND Flash Attribute memory space timing register 3, Address offset: 0x8C */
    uint32_t      RESERVED3; /*!< Reserved, 0x90                                                            */
    __IO uint32_t ECCR3;     /*!< NAND Flash ECC result registers 3,                   Address offset: 0x94 */
} FSMC_Bank2_3_TypeDef;

/**
 * @brief Flexible Static Memory Controller Bank4
 */

typedef struct {
    __IO uint32_t PCR4;  /*!< PC Card  control register 4,                       Address offset: 0xA0 */
    __IO uint32_t SR4;   /*!< PC Card  FIFO status and interrupt register 4,     Address offset: 0xA4 */
    __IO uint32_t PMEM4; /*!< PC Card  Common memory space timing register 4,    Address offset: 0xA8 */
    __IO uint32_t PATT4; /*!< PC Card  Attribute memory space timing register 4, Address offset: 0xAC */
    __IO uint32_t PIO4;  /*!< PC Card  I/O space timing register 4,              Address offset: 0xB0 */
} FSMC_Bank4_TypeDef;

/**
 * @brief General Purpose I/O
 */

typedef struct {
    __IO uint32_t MODER;   /*!< GPIO port mode register,               Address offset: 0x00      */
    __IO uint32_t OTYPER;  /*!< GPIO port output type register,        Address offset: 0x04      */
    __IO uint32_t OSPEEDR; /*!< GPIO port output speed register,       Address offset: 0x08      */
    __IO uint32_t PUPDR;   /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
    __IO uint32_t IDR;     /*!< GPIO port input data register,         Address offset: 0x10      */
    __IO uint32_t ODR;     /*!< GPIO port output data register,        Address offset: 0x14      */
    __IO uint32_t BSRR;    /*!< GPIO port bit set/reset register,      Address offset: 0x18      */
    __IO uint32_t LCKR;    /*!< GPIO port configuration lock register, Address offset: 0x1C      */
    __IO uint32_t AFR[2];  /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
} GPIO_TypeDef;

/**
 * @brief System configuration controller
 */

typedef struct {
    __IO uint32_t MEMRMP;      /*!< SYSCFG memory remap register,                      Address offset: 0x00      */
    __IO uint32_t PMC;         /*!< SYSCFG peripheral mode configuration register,     Address offset: 0x04      */
    __IO uint32_t EXTICR[4];   /*!< SYSCFG external interrupt configuration registers, Address offset: 0x08-0x14 */
    uint32_t      RESERVED[2]; /*!< Reserved, 0x18-0x1C                                                          */
    __IO uint32_t CMPCR;       /*!< SYSCFG Compensation cell control register,         Address offset: 0x20      */
} SYSCFG_TypeDef;

/**
 * @brief Inter-integrated Circuit Interface
 */

typedef struct {
    __IO uint32_t CR1;   /*!< I2C Control register 1,     Address offset: 0x00 */
    __IO uint32_t CR2;   /*!< I2C Control register 2,     Address offset: 0x04 */
    __IO uint32_t OAR1;  /*!< I2C Own address register 1, Address offset: 0x08 */
    __IO uint32_t OAR2;  /*!< I2C Own address register 2, Address offset: 0x0C */
    __IO uint32_t DR;    /*!< I2C Data register,          Address offset: 0x10 */
    __IO uint32_t SR1;   /*!< I2C Status register 1,      Address offset: 0x14 */
    __IO uint32_t SR2;   /*!< I2C Status register 2,      Address offset: 0x18 */
    __IO uint32_t CCR;   /*!< I2C Clock control register, Address offset: 0x1C */
    __IO uint32_t TRISE; /*!< I2C TRISE register,         Address offset: 0x20 */
} I2C_TypeDef;

/**
 * @brief Independent WATCHDOG
 */

typedef struct {
    __IO uint32_t KR;  /*!< IWDG Key register,       Address offset: 0x00 */
    __IO uint32_t PR;  /*!< IWDG Prescaler register, Address offset: 0x04 */
    __IO uint32_t RLR; /*!< IWDG Reload register,    Address offset: 0x08 */
    __IO uint32_t SR;  /*!< IWDG Status register,    Address offset: 0x0C */
} IWDG_TypeDef;


/**
 * @brief Power Control
 */

typedef struct {
    __IO uint32_t CR;  /*!< PWR power control register,        Address offset: 0x00 */
    __IO uint32_t CSR; /*!< PWR power control/status register, Address offset: 0x04 */
} PWR_TypeDef;

/**
 * @brief Reset and Clock Control
 */

typedef struct {
    __IO uint32_t CR;           /*!< RCC clock control register,                                  Address offset: 0x00 */
    __IO uint32_t PLLCFGR;      /*!< RCC PLL configuration register,                              Address offset: 0x04 */
    __IO uint32_t CFGR;         /*!< RCC clock configuration register,                            Address offset: 0x08 */
    __IO uint32_t CIR;          /*!< RCC clock interrupt register,                                Address offset: 0x0C */
    __IO uint32_t AHB1RSTR;     /*!< RCC AHB1 peripheral reset register,                          Address offset: 0x10 */
    __IO uint32_t AHB2RSTR;     /*!< RCC AHB2 peripheral reset register,                          Address offset: 0x14 */
    __IO uint32_t AHB3RSTR;     /*!< RCC AHB3 peripheral reset register,                          Address offset: 0x18 */
    uint32_t      RESERVED0;    /*!< Reserved, 0x1C                                                                    */
    __IO uint32_t APB1RSTR;     /*!< RCC APB1 peripheral reset register,                          Address offset: 0x20 */
    __IO uint32_t APB2RSTR;     /*!< RCC APB2 peripheral reset register,                          Address offset: 0x24 */
    uint32_t      RESERVED1[2]; /*!< Reserved, 0x28-0x2C                                                               */
    __IO uint32_t AHB1ENR;      /*!< RCC AHB1 peripheral clock register,                          Address offset: 0x30 */
    __IO uint32_t AHB2ENR;      /*!< RCC AHB2 peripheral clock register,                          Address offset: 0x34 */
    __IO uint32_t AHB3ENR;      /*!< RCC AHB3 peripheral clock register,                          Address offset: 0x38 */
    uint32_t      RESERVED2;    /*!< Reserved, 0x3C                                                                    */
    __IO uint32_t APB1ENR;      /*!< RCC APB1 peripheral clock enable register,                   Address offset: 0x40 */
    __IO uint32_t APB2ENR;      /*!< RCC APB2 peripheral clock enable register,                   Address offset: 0x44 */
    uint32_t      RESERVED3[2]; /*!< Reserved, 0x48-0x4C                                                               */
    __IO uint32_t AHB1LPENR;    /*!< RCC AHB1 peripheral clock enable in low power mode register, Address offset: 0x50 */
    __IO uint32_t AHB2LPENR;    /*!< RCC AHB2 peripheral clock enable in low power mode register, Address offset: 0x54 */
    __IO uint32_t AHB3LPENR;    /*!< RCC AHB3 peripheral clock enable in low power mode register, Address offset: 0x58 */
    uint32_t      RESERVED4;    /*!< Reserved, 0x5C                                                                    */
    __IO uint32_t APB1LPENR;    /*!< RCC APB1 peripheral clock enable in low power mode register, Address offset: 0x60 */
    __IO uint32_t APB2LPENR;    /*!< RCC APB2 peripheral clock enable in low power mode register, Address offset: 0x64 */
    uint32_t      RESERVED5[2]; /*!< Reserved, 0x68-0x6C                                                               */
    __IO uint32_t BDCR;         /*!< RCC Backup domain control register,                          Address offset: 0x70 */
    __IO uint32_t CSR;          /*!< RCC clock control & status register,                         Address offset: 0x74 */
    uint32_t      RESERVED6[2]; /*!< Reserved, 0x78-0x7C                                                               */
    __IO uint32_t SSCGR;        /*!< RCC spread spectrum clock generation register,               Address offset: 0x80 */
    __IO uint32_t PLLI2SCFGR;   /*!< RCC PLLI2S configuration register,                           Address offset: 0x84 */
} RCC_TypeDef;

/**
 * @brief Real-Time Clock
 */

typedef struct {
    __IO uint32_t TR;     /*!< RTC time register,                                        Address offset: 0x00 */
    __IO uint32_t DR;     /*!< RTC date register,                                        Address offset: 0x04 */
    __IO uint32_t CR;     /*!< RTC control register,                                     Address offset: 0x08 */
    __IO uint32_t ISR;    /*!< RTC initialization and status register,                   Address offset: 0x0C */
    __IO uint32_t PRER;   /*!< RTC prescaler register,                                   Address offset: 0x10 */
    __IO uint32_t WUTR;   /*!< RTC wakeup timer register,                                Address offset: 0x14 */
    __IO uint32_t CALIBR; /*!< RTC calibration register,                                 Address offset: 0x18 */
    __IO uint32_t ALRMAR; /*!< RTC alarm A register,                                     Address offset: 0x1C */
    __IO uint32_t ALRMBR; /*!< RTC alarm B register,                                     Address offset: 0x20 */
    __IO uint32_t WPR;    /*!< RTC write protection register,                            Address offset: 0x24 */
    __IO uint32_t SSR;    /*!< RTC sub second register,                                  Address offset: 0x28 */
    __IO uint32_t SHIFTR; /*!< RTC shift control register,                               Address offset: 0x2C */
    __IO uint32_t TSTR;   /*!< RTC time stamp time register,                             Address offset: 0x30 */
    __IO uint32_t TSDR;   /*!< RTC time stamp date register,                             Address offset: 0x34 */
    __IO uint32_t TSSSR;  /*!< RTC time-stamp sub second register,                       Address offset: 0x38 */
    __IO uint32_t CALR;   /*!< RTC calibration register,                                 Address offset: 0x3C */
    __IO uint32_t TAFCR;  /*!< RTC tamper and alternate function configuration register, Address offset: 0x40 */
    __IO uint32_t ALRMASSR; /*!< RTC alarm A sub second register,                          Address offset: 0x44 */
    __IO uint32_t ALRMBSSR; /*!< RTC alarm B sub second register,                          Address offset: 0x48 */
    uint32_t      RESERVED7; /*!< Reserved, 0x4C                                                                 */
    __IO uint32_t BKP0R;     /*!< RTC backup register 1,                                    Address offset: 0x50 */
    __IO uint32_t BKP1R;     /*!< RTC backup register 1,                                    Address offset: 0x54 */
    __IO uint32_t BKP2R;     /*!< RTC backup register 2,                                    Address offset: 0x58 */
    __IO uint32_t BKP3R;     /*!< RTC backup register 3,                                    Address offset: 0x5C */
    __IO uint32_t BKP4R;     /*!< RTC backup register 4,                                    Address offset: 0x60 */
    __IO uint32_t BKP5R;     /*!< RTC backup register 5,                                    Address offset: 0x64 */
    __IO uint32_t BKP6R;     /*!< RTC backup register 6,                                    Address offset: 0x68 */
    __IO uint32_t BKP7R;     /*!< RTC backup register 7,                                    Address offset: 0x6C */
    __IO uint32_t BKP8R;     /*!< RTC backup register 8,                                    Address offset: 0x70 */
    __IO uint32_t BKP9R;     /*!< RTC backup register 9,                                    Address offset: 0x74 */
    __IO uint32_t BKP10R;    /*!< RTC backup register 10,                                   Address offset: 0x78 */
    __IO uint32_t BKP11R;    /*!< RTC backup register 11,                                   Address offset: 0x7C */
    __IO uint32_t BKP12R;    /*!< RTC backup register 12,                                   Address offset: 0x80 */
    __IO uint32_t BKP13R;    /*!< RTC backup register 13,                                   Address offset: 0x84 */
    __IO uint32_t BKP14R;    /*!< RTC backup register 14,                                   Address offset: 0x88 */
    __IO uint32_t BKP15R;    /*!< RTC backup register 15,                                   Address offset: 0x8C */
    __IO uint32_t BKP16R;    /*!< RTC backup register 16,                                   Address offset: 0x90 */
    __IO uint32_t BKP17R;    /*!< RTC backup register 17,                                   Address offset: 0x94 */
    __IO uint32_t BKP18R;    /*!< RTC backup register 18,                                   Address offset: 0x98 */
    __IO uint32_t BKP19R;    /*!< RTC backup register 19,                                   Address offset: 0x9C */
} RTC_TypeDef;

/**
 * @brief SD host Interface
 */

typedef struct {
    __IO uint32_t       POWER;         /*!< SDIO power control register,    Address offset: 0x00 */
    __IO uint32_t       CLKCR;         /*!< SDI clock control register,     Address offset: 0x04 */
    __IO uint32_t       ARG;           /*!< SDIO argument register,         Address offset: 0x08 */
    __IO uint32_t       CMD;           /*!< SDIO command register,          Address offset: 0x0C */
    __IO const uint32_t RESPCMD;       /*!< SDIO command response register, Address offset: 0x10 */
    __IO const uint32_t RESP1;         /*!< SDIO response 1 register,       Address offset: 0x14 */
    __IO const uint32_t RESP2;         /*!< SDIO response 2 register,       Address offset: 0x18 */
    __IO const uint32_t RESP3;         /*!< SDIO response 3 register,       Address offset: 0x1C */
    __IO const uint32_t RESP4;         /*!< SDIO response 4 register,       Address offset: 0x20 */
    __IO uint32_t       DTIMER;        /*!< SDIO data timer register,       Address offset: 0x24 */
    __IO uint32_t       DLEN;          /*!< SDIO data length register,      Address offset: 0x28 */
    __IO uint32_t       DCTRL;         /*!< SDIO data control register,     Address offset: 0x2C */
    __IO const uint32_t DCOUNT;        /*!< SDIO data counter register,     Address offset: 0x30 */
    __IO const uint32_t STA;           /*!< SDIO status register,           Address offset: 0x34 */
    __IO uint32_t       ICR;           /*!< SDIO interrupt clear register,  Address offset: 0x38 */
    __IO uint32_t       MASK;          /*!< SDIO mask register,             Address offset: 0x3C */
    uint32_t            RESERVED0[2];  /*!< Reserved, 0x40-0x44                                  */
    __IO const uint32_t FIFOCNT;       /*!< SDIO FIFO counter register,     Address offset: 0x48 */
    uint32_t            RESERVED1[13]; /*!< Reserved, 0x4C-0x7C                                  */
    __IO uint32_t       FIFO;          /*!< SDIO data FIFO register,        Address offset: 0x80 */
} SDIO_TypeDef;

/**
 * @brief Serial Peripheral Interface
 */

typedef struct {
    __IO uint32_t CR1;     /*!< SPI control register 1 (not used in I2S mode),      Address offset: 0x00 */
    __IO uint32_t CR2;     /*!< SPI control register 2,                             Address offset: 0x04 */
    __IO uint32_t SR;      /*!< SPI status register,                                Address offset: 0x08 */
    __IO uint32_t DR;      /*!< SPI data register,                                  Address offset: 0x0C */
    __IO uint32_t CRCPR;   /*!< SPI CRC polynomial register (not used in I2S mode), Address offset: 0x10 */
    __IO uint32_t RXCRCR;  /*!< SPI RX CRC register (not used in I2S mode),         Address offset: 0x14 */
    __IO uint32_t TXCRCR;  /*!< SPI TX CRC register (not used in I2S mode),         Address offset: 0x18 */
    __IO uint32_t I2SCFGR; /*!< SPI_I2S configuration register,                     Address offset: 0x1C */
    __IO uint32_t I2SPR;   /*!< SPI_I2S prescaler register,                         Address offset: 0x20 */
} SPI_TypeDef;


/**
 * @brief TIM
 */

typedef struct {
    __IO uint32_t CR1;   /*!< TIM control register 1,              Address offset: 0x00 */
    __IO uint32_t CR2;   /*!< TIM control register 2,              Address offset: 0x04 */
    __IO uint32_t SMCR;  /*!< TIM slave mode control register,     Address offset: 0x08 */
    __IO uint32_t DIER;  /*!< TIM DMA/interrupt enable register,   Address offset: 0x0C */
    __IO uint32_t SR;    /*!< TIM status register,                 Address offset: 0x10 */
    __IO uint32_t EGR;   /*!< TIM event generation register,       Address offset: 0x14 */
    __IO uint32_t CCMR1; /*!< TIM capture/compare mode register 1, Address offset: 0x18 */
    __IO uint32_t CCMR2; /*!< TIM capture/compare mode register 2, Address offset: 0x1C */
    __IO uint32_t CCER;  /*!< TIM capture/compare enable register, Address offset: 0x20 */
    __IO uint32_t CNT;   /*!< TIM counter register,                Address offset: 0x24 */
    __IO uint32_t PSC;   /*!< TIM prescaler,                       Address offset: 0x28 */
    __IO uint32_t ARR;   /*!< TIM auto-reload register,            Address offset: 0x2C */
    __IO uint32_t RCR;   /*!< TIM repetition counter register,     Address offset: 0x30 */
    __IO uint32_t CCR1;  /*!< TIM capture/compare register 1,      Address offset: 0x34 */
    __IO uint32_t CCR2;  /*!< TIM capture/compare register 2,      Address offset: 0x38 */
    __IO uint32_t CCR3;  /*!< TIM capture/compare register 3,      Address offset: 0x3C */
    __IO uint32_t CCR4;  /*!< TIM capture/compare register 4,      Address offset: 0x40 */
    __IO uint32_t BDTR;  /*!< TIM break and dead-time register,    Address offset: 0x44 */
    __IO uint32_t DCR;   /*!< TIM DMA control register,            Address offset: 0x48 */
    __IO uint32_t DMAR;  /*!< TIM DMA address for full transfer,   Address offset: 0x4C */
    __IO uint32_t OR;    /*!< TIM option register,                 Address offset: 0x50 */
} TIM_TypeDef;

/**
 * @brief Universal Synchronous Asynchronous Receiver Transmitter
 */

typedef struct {
    __IO uint32_t SR;   /*!< USART Status register,                   Address offset: 0x00 */
    __IO uint32_t DR;   /*!< USART Data register,                     Address offset: 0x04 */
    __IO uint32_t BRR;  /*!< USART Baud rate register,                Address offset: 0x08 */
    __IO uint32_t CR1;  /*!< USART Control register 1,                Address offset: 0x0C */
    __IO uint32_t CR2;  /*!< USART Control register 2,                Address offset: 0x10 */
    __IO uint32_t CR3;  /*!< USART Control register 3,                Address offset: 0x14 */
    __IO uint32_t GTPR; /*!< USART Guard time and prescaler register, Address offset: 0x18 */
} USART_TypeDef;

/**
 * @brief Window WATCHDOG
 */

typedef struct {
    __IO uint32_t CR;  /*!< WWDG Control register,       Address offset: 0x00 */
    __IO uint32_t CFR; /*!< WWDG Configuration register, Address offset: 0x04 */
    __IO uint32_t SR;  /*!< WWDG Status register,        Address offset: 0x08 */
} WWDG_TypeDef;

/**
 * @brief Crypto Processor
 */

typedef struct {
    __IO uint32_t CR;         /*!< CRYP control register,                                    Address offset: 0x00 */
    __IO uint32_t SR;         /*!< CRYP status register,                                     Address offset: 0x04 */
    __IO uint32_t DR;         /*!< CRYP data input register,                                 Address offset: 0x08 */
    __IO uint32_t DOUT;       /*!< CRYP data output register,                                Address offset: 0x0C */
    __IO uint32_t DMACR;      /*!< CRYP DMA control register,                                Address offset: 0x10 */
    __IO uint32_t IMSCR;      /*!< CRYP interrupt mask set/clear register,                   Address offset: 0x14 */
    __IO uint32_t RISR;       /*!< CRYP raw interrupt status register,                       Address offset: 0x18 */
    __IO uint32_t MISR;       /*!< CRYP masked interrupt status register,                    Address offset: 0x1C */
    __IO uint32_t K0LR;       /*!< CRYP key left  register 0,                                Address offset: 0x20 */
    __IO uint32_t K0RR;       /*!< CRYP key right register 0,                                Address offset: 0x24 */
    __IO uint32_t K1LR;       /*!< CRYP key left  register 1,                                Address offset: 0x28 */
    __IO uint32_t K1RR;       /*!< CRYP key right register 1,                                Address offset: 0x2C */
    __IO uint32_t K2LR;       /*!< CRYP key left  register 2,                                Address offset: 0x30 */
    __IO uint32_t K2RR;       /*!< CRYP key right register 2,                                Address offset: 0x34 */
    __IO uint32_t K3LR;       /*!< CRYP key left  register 3,                                Address offset: 0x38 */
    __IO uint32_t K3RR;       /*!< CRYP key right register 3,                                Address offset: 0x3C */
    __IO uint32_t IV0LR;      /*!< CRYP initialization vector left-word  register 0,         Address offset: 0x40 */
    __IO uint32_t IV0RR;      /*!< CRYP initialization vector right-word register 0,         Address offset: 0x44 */
    __IO uint32_t IV1LR;      /*!< CRYP initialization vector left-word  register 1,         Address offset: 0x48 */
    __IO uint32_t IV1RR;      /*!< CRYP initialization vector right-word register 1,         Address offset: 0x4C */
    __IO uint32_t CSGCMCCM0R; /*!< CRYP GCM/GMAC or CCM/CMAC context swap register 0,        Address offset: 0x50 */
    __IO uint32_t CSGCMCCM1R; /*!< CRYP GCM/GMAC or CCM/CMAC context swap register 1,        Address offset: 0x54 */
    __IO uint32_t CSGCMCCM2R; /*!< CRYP GCM/GMAC or CCM/CMAC context swap register 2,        Address offset: 0x58 */
    __IO uint32_t CSGCMCCM3R; /*!< CRYP GCM/GMAC or CCM/CMAC context swap register 3,        Address offset: 0x5C */
    __IO uint32_t CSGCMCCM4R; /*!< CRYP GCM/GMAC or CCM/CMAC context swap register 4,        Address offset: 0x60 */
    __IO uint32_t CSGCMCCM5R; /*!< CRYP GCM/GMAC or CCM/CMAC context swap register 5,        Address offset: 0x64 */
    __IO uint32_t CSGCMCCM6R; /*!< CRYP GCM/GMAC or CCM/CMAC context swap register 6,        Address offset: 0x68 */
    __IO uint32_t CSGCMCCM7R; /*!< CRYP GCM/GMAC or CCM/CMAC context swap register 7,        Address offset: 0x6C */
    __IO uint32_t CSGCM0R;    /*!< CRYP GCM/GMAC context swap register 0,                    Address offset: 0x70 */
    __IO uint32_t CSGCM1R;    /*!< CRYP GCM/GMAC context swap register 1,                    Address offset: 0x74 */
    __IO uint32_t CSGCM2R;    /*!< CRYP GCM/GMAC context swap register 2,                    Address offset: 0x78 */
    __IO uint32_t CSGCM3R;    /*!< CRYP GCM/GMAC context swap register 3,                    Address offset: 0x7C */
    __IO uint32_t CSGCM4R;    /*!< CRYP GCM/GMAC context swap register 4,                    Address offset: 0x80 */
    __IO uint32_t CSGCM5R;    /*!< CRYP GCM/GMAC context swap register 5,                    Address offset: 0x84 */
    __IO uint32_t CSGCM6R;    /*!< CRYP GCM/GMAC context swap register 6,                    Address offset: 0x88 */
    __IO uint32_t CSGCM7R;    /*!< CRYP GCM/GMAC context swap register 7,                    Address offset: 0x8C */
} CRYP_TypeDef;

/**
 * @brief HASH
 */

typedef struct {
    __IO uint32_t CR;           /*!< HASH control register,          Address offset: 0x00        */
    __IO uint32_t DIN;          /*!< HASH data input register,       Address offset: 0x04        */
    __IO uint32_t STR;          /*!< HASH start register,            Address offset: 0x08        */
    __IO uint32_t HR[5];        /*!< HASH digest registers,          Address offset: 0x0C-0x1C   */
    __IO uint32_t IMR;          /*!< HASH interrupt enable register, Address offset: 0x20        */
    __IO uint32_t SR;           /*!< HASH status register,           Address offset: 0x24        */
    uint32_t      RESERVED[52]; /*!< Reserved, 0x28-0xF4                                         */
    __IO uint32_t CSR[54];      /*!< HASH context swap registers,    Address offset: 0x0F8-0x1CC */
} HASH_TypeDef;

/**
 * @brief HASH_DIGEST
 */

typedef struct {
    __IO uint32_t HR[8]; /*!< HASH digest registers,          Address offset: 0x310-0x32C */
} HASH_DIGEST_TypeDef;

/**
 * @brief RNG
 */

typedef struct {
    __IO uint32_t CR; /*!< RNG control register, Address offset: 0x00 */
    __IO uint32_t SR; /*!< RNG status register,  Address offset: 0x04 */
    __IO uint32_t DR; /*!< RNG data register,    Address offset: 0x08 */
} RNG_TypeDef;

/**
 * @brief USB_OTG_Core_Registers
 */
typedef struct {
    __IO uint32_t GOTGCTL;            /*!< USB_OTG Control and Status Register          000h */
    __IO uint32_t GOTGINT;            /*!< USB_OTG Interrupt Register                   004h */
    __IO uint32_t GAHBCFG;            /*!< Core AHB Configuration Register              008h */
    __IO uint32_t GUSBCFG;            /*!< Core USB Configuration Register              00Ch */
    __IO uint32_t GRSTCTL;            /*!< Core Reset Register                          010h */
    __IO uint32_t GINTSTS;            /*!< Core Interrupt Register                      014h */
    __IO uint32_t GINTMSK;            /*!< Core Interrupt Mask Register                 018h */
    __IO uint32_t GRXSTSR;            /*!< Receive Sts Q Read Register                  01Ch */
    __IO uint32_t GRXSTSP;            /*!< Receive Sts Q Read & POP Register            020h */
    __IO uint32_t GRXFSIZ;            /*!< Receive FIFO Size Register                   024h */
    __IO uint32_t DIEPTXF0_HNPTXFSIZ; /*!< EP0 / Non Periodic Tx FIFO Size Register     028h */
    __IO uint32_t HNPTXSTS;           /*!< Non Periodic Tx FIFO/Queue Sts reg           02Ch */
    uint32_t      Reserved30[2];      /*!< Reserved                                     030h */
    __IO uint32_t GCCFG;              /*!< General Purpose IO Register                  038h */
    __IO uint32_t CID;                /*!< User ID Register                             03Ch */
    uint32_t      Reserved40[48];     /*!< Reserved                                0x40-0xFF */
    __IO uint32_t HPTXFSIZ;           /*!< Host Periodic Tx FIFO Size Reg               100h */
    __IO uint32_t DIEPTXF[0x0F];      /*!< dev Periodic Transmit FIFO                        */
} USB_OTG_GlobalTypeDef;

/**
 * @brief USB_OTG_device_Registers
 */
typedef struct {
    __IO uint32_t DCFG;           /*!< dev Configuration Register   800h */
    __IO uint32_t DCTL;           /*!< dev Control Register         804h */
    __IO uint32_t DSTS;           /*!< dev Status Register (RO)     808h */
    uint32_t      Reserved0C;     /*!< Reserved                     80Ch */
    __IO uint32_t DIEPMSK;        /*!< dev IN Endpoint Mask         810h */
    __IO uint32_t DOEPMSK;        /*!< dev OUT Endpoint Mask        814h */
    __IO uint32_t DAINT;          /*!< dev All Endpoints Itr Reg    818h */
    __IO uint32_t DAINTMSK;       /*!< dev All Endpoints Itr Mask   81Ch */
    uint32_t      Reserved20;     /*!< Reserved                     820h */
    uint32_t      Reserved9;      /*!< Reserved                     824h */
    __IO uint32_t DVBUSDIS;       /*!< dev VBUS discharge Register  828h */
    __IO uint32_t DVBUSPULSE;     /*!< dev VBUS Pulse Register      82Ch */
    __IO uint32_t DTHRCTL;        /*!< dev threshold                830h */
    __IO uint32_t DIEPEMPMSK;     /*!< dev empty msk                834h */
    __IO uint32_t DEACHINT;       /*!< dedicated EP interrupt       838h */
    __IO uint32_t DEACHMSK;       /*!< dedicated EP msk             83Ch */
    uint32_t      Reserved40;     /*!< dedicated EP mask            840h */
    __IO uint32_t DINEP1MSK;      /*!< dedicated EP mask            844h */
    uint32_t      Reserved44[15]; /*!< Reserved                 844-87Ch */
    __IO uint32_t DOUTEP1MSK;     /*!< dedicated EP msk             884h */
} USB_OTG_DeviceTypeDef;

/**
 * @brief USB_OTG_IN_Endpoint-Specific_Register
 */
typedef struct {
    __IO uint32_t DIEPCTL;    /*!< dev IN Endpoint Control Reg    900h + (ep_num * 20h) + 00h */
    uint32_t      Reserved04; /*!< Reserved                       900h + (ep_num * 20h) + 04h */
    __IO uint32_t DIEPINT;    /*!< dev IN Endpoint Itr Reg        900h + (ep_num * 20h) + 08h */
    uint32_t      Reserved0C; /*!< Reserved                       900h + (ep_num * 20h) + 0Ch */
    __IO uint32_t DIEPTSIZ;   /*!< IN Endpoint Txfer Size         900h + (ep_num * 20h) + 10h */
    __IO uint32_t DIEPDMA;    /*!< IN Endpoint DMA Address Reg    900h + (ep_num * 20h) + 14h */
    __IO uint32_t DTXFSTS;    /*!< IN Endpoint Tx FIFO Status Reg 900h + (ep_num * 20h) + 18h */
    uint32_t      Reserved18; /*!< Reserved  900h+(ep_num*20h)+1Ch-900h+ (ep_num * 20h) + 1Ch */
} USB_OTG_INEndpointTypeDef;

/**
 * @brief USB_OTG_OUT_Endpoint-Specific_Registers
 */
typedef struct {
    __IO uint32_t DOEPCTL;       /*!< dev OUT Endpoint Control Reg           B00h + (ep_num * 20h) + 00h */
    uint32_t      Reserved04;    /*!< Reserved                               B00h + (ep_num * 20h) + 04h */
    __IO uint32_t DOEPINT;       /*!< dev OUT Endpoint Itr Reg               B00h + (ep_num * 20h) + 08h */
    uint32_t      Reserved0C;    /*!< Reserved                               B00h + (ep_num * 20h) + 0Ch */
    __IO uint32_t DOEPTSIZ;      /*!< dev OUT Endpoint Txfer Size            B00h + (ep_num * 20h) + 10h */
    __IO uint32_t DOEPDMA;       /*!< dev OUT Endpoint DMA Address           B00h + (ep_num * 20h) + 14h */
    uint32_t      Reserved18[2]; /*!< Reserved B00h + (ep_num * 20h) + 18h - B00h + (ep_num * 20h) + 1Ch */
} USB_OTG_OUTEndpointTypeDef;

/**
 * @brief USB_OTG_Host_Mode_Register_Structures
 */
typedef struct {
    __IO uint32_t HCFG;        /*!< Host Configuration Register          400h */
    __IO uint32_t HFIR;        /*!< Host Frame Interval Register         404h */
    __IO uint32_t HFNUM;       /*!< Host Frame Nbr/Frame Remaining       408h */
    uint32_t      Reserved40C; /*!< Reserved                             40Ch */
    __IO uint32_t HPTXSTS;     /*!< Host Periodic Tx FIFO/ Queue Status  410h */
    __IO uint32_t HAINT;       /*!< Host All Channels Interrupt Register 414h */
    __IO uint32_t HAINTMSK;    /*!< Host All Channels Interrupt Mask     418h */
} USB_OTG_HostTypeDef;

/**
 * @brief USB_OTG_Host_Channel_Specific_Registers
 */
typedef struct {
    __IO uint32_t HCCHAR;      /*!< Host Channel Characteristics Register    500h */
    __IO uint32_t HCSPLT;      /*!< Host Channel Split Control Register      504h */
    __IO uint32_t HCINT;       /*!< Host Channel Interrupt Register          508h */
    __IO uint32_t HCINTMSK;    /*!< Host Channel Interrupt Mask Register     50Ch */
    __IO uint32_t HCTSIZ;      /*!< Host Channel Transfer Size Register      510h */
    __IO uint32_t HCDMA;       /*!< Host Channel DMA Address Register        514h */
    uint32_t      Reserved[2]; /*!< Reserved                                      */
} USB_OTG_HostChannelTypeDef;

/**
 * @}
 */

/** @addtogroup Peripheral_memory_map
 * @{
 */
#define FLASH_BASE      0x08000000U /*!< FLASH(up to 1 MB) base address in the alias region                         */
#define CCMDATARAM_BASE 0x10000000U /*!< CCM(core coupled memory) data RAM(64 KB) base address in the alias region  */
#define SRAM1_BASE      0x20000000U /*!< SRAM1(112 KB) base address in the alias region                              */
#define SRAM2_BASE      0x2001C000U /*!< SRAM2(16 KB) base address in the alias region                              */
#define PERIPH_BASE     0x40000000U /*!< Peripheral base address in the alias region                                */
#define BKPSRAM_BASE    0x40024000U /*!< Backup SRAM(4 KB) base address in the alias region                         */
#define FSMC_R_BASE     0xA0000000U /*!< FSMC registers base address                                                */
#define SRAM1_BB_BASE   0x22000000U /*!< SRAM1(112 KB) base address in the bit-band region                          */
#define SRAM2_BB_BASE   0x22380000U /*!< SRAM2(16 KB) base address in the bit-band region                           */
#define PERIPH_BB_BASE  0x42000000U /*!< Peripheral base address in the bit-band region                             */
#define BKPSRAM_BB_BASE 0x42480000U /*!< Backup SRAM(4 KB) base address in the bit-band region                      */
#define FLASH_END       0x080FFFFFU /*!< FLASH end address                                                          */
#define FLASH_OTP_BASE  0x1FFF7800U /*!< Base address of : (up to 528 Bytes) embedded FLASH OTP Area                */
#define FLASH_OTP_END   0x1FFF7A0FU /*!< End address of : (up to 528 Bytes) embedded FLASH OTP Area                 */
#define CCMDATARAM_END  0x1000FFFFU /*!< CCM data RAM end address                                                   */

/* Legacy defines */
#define SRAM_BASE    SRAM1_BASE
#define SRAM_BB_BASE SRAM1_BB_BASE

/*!< Peripheral memory map */
#define APB1PERIPH_BASE PERIPH_BASE
#define APB2PERIPH_BASE (PERIPH_BASE + 0x00010000U)
#define AHB1PERIPH_BASE (PERIPH_BASE + 0x00020000U)
#define AHB2PERIPH_BASE (PERIPH_BASE + 0x10000000U)

/*!< APB1 peripherals */
#define TIM2_BASE    (APB1PERIPH_BASE + 0x0000U)
#define TIM3_BASE    (APB1PERIPH_BASE + 0x0400U)
#define TIM4_BASE    (APB1PERIPH_BASE + 0x0800U)
#define TIM5_BASE    (APB1PERIPH_BASE + 0x0C00U)
#define TIM6_BASE    (APB1PERIPH_BASE + 0x1000U)
#define TIM7_BASE    (APB1PERIPH_BASE + 0x1400U)
#define TIM12_BASE   (APB1PERIPH_BASE + 0x1800U)
#define TIM13_BASE   (APB1PERIPH_BASE + 0x1C00U)
#define TIM14_BASE   (APB1PERIPH_BASE + 0x2000U)
#define RTC_BASE     (APB1PERIPH_BASE + 0x2800U)
#define WWDG_BASE    (APB1PERIPH_BASE + 0x2C00U)
#define IWDG_BASE    (APB1PERIPH_BASE + 0x3000U)
#define I2S2ext_BASE (APB1PERIPH_BASE + 0x3400U)
#define SPI2_BASE    (APB1PERIPH_BASE + 0x3800U)
#define SPI3_BASE    (APB1PERIPH_BASE + 0x3C00U)
#define I2S3ext_BASE (APB1PERIPH_BASE + 0x4000U)
#define USART2_BASE  (APB1PERIPH_BASE + 0x4400U)
#define USART3_BASE  (APB1PERIPH_BASE + 0x4800U)
#define UART4_BASE   (APB1PERIPH_BASE + 0x4C00U)
#define UART5_BASE   (APB1PERIPH_BASE + 0x5000U)
#define I2C1_BASE    (APB1PERIPH_BASE + 0x5400U)
#define I2C2_BASE    (APB1PERIPH_BASE + 0x5800U)
#define I2C3_BASE    (APB1PERIPH_BASE + 0x5C00U)
#define CAN1_BASE    (APB1PERIPH_BASE + 0x6400U)
#define CAN2_BASE    (APB1PERIPH_BASE + 0x6800U)
#define PWR_BASE     (APB1PERIPH_BASE + 0x7000U)
#define DAC_BASE     (APB1PERIPH_BASE + 0x7400U)

/*!< APB2 peripherals */
#define TIM1_BASE          (APB2PERIPH_BASE + 0x0000U)
#define TIM8_BASE          (APB2PERIPH_BASE + 0x0400U)
#define USART1_BASE        (APB2PERIPH_BASE + 0x1000U)
#define USART6_BASE        (APB2PERIPH_BASE + 0x1400U)
#define ADC1_BASE          (APB2PERIPH_BASE + 0x2000U)
#define ADC2_BASE          (APB2PERIPH_BASE + 0x2100U)
#define ADC3_BASE          (APB2PERIPH_BASE + 0x2200U)
#define ADC123_COMMON_BASE (APB2PERIPH_BASE + 0x2300U)
/* Legacy define */
#define ADC_BASE           ADC123_COMMON_BASE
#define SDIO_BASE          (APB2PERIPH_BASE + 0x2C00U)
#define SPI1_BASE          (APB2PERIPH_BASE + 0x3000U)
#define SYSCFG_BASE        (APB2PERIPH_BASE + 0x3800U)
#define EXTI_BASE          (APB2PERIPH_BASE + 0x3C00U)
#define TIM9_BASE          (APB2PERIPH_BASE + 0x4000U)
#define TIM10_BASE         (APB2PERIPH_BASE + 0x4400U)
#define TIM11_BASE         (APB2PERIPH_BASE + 0x4800U)

/*!< AHB1 peripherals */
#define GPIOA_BASE        (AHB1PERIPH_BASE + 0x0000U)
#define GPIOB_BASE        (AHB1PERIPH_BASE + 0x0400U)
#define GPIOC_BASE        (AHB1PERIPH_BASE + 0x0800U)
#define GPIOD_BASE        (AHB1PERIPH_BASE + 0x0C00U)
#define GPIOE_BASE        (AHB1PERIPH_BASE + 0x1000U)
#define GPIOF_BASE        (AHB1PERIPH_BASE + 0x1400U)
#define GPIOG_BASE        (AHB1PERIPH_BASE + 0x1800U)
#define GPIOH_BASE        (AHB1PERIPH_BASE + 0x1C00U)
#define GPIOI_BASE        (AHB1PERIPH_BASE + 0x2000U)
#define CRC_BASE          (AHB1PERIPH_BASE + 0x3000U)
#define RCC_BASE          (AHB1PERIPH_BASE + 0x3800U)
#define FLASH_R_BASE      (AHB1PERIPH_BASE + 0x3C00U)
#define DMA1_BASE         (AHB1PERIPH_BASE + 0x6000U)
#define DMA1_Stream0_BASE (DMA1_BASE + 0x010U)
#define DMA1_Stream1_BASE (DMA1_BASE + 0x028U)
#define DMA1_Stream2_BASE (DMA1_BASE + 0x040U)
#define DMA1_Stream3_BASE (DMA1_BASE + 0x058U)
#define DMA1_Stream4_BASE (DMA1_BASE + 0x070U)
#define DMA1_Stream5_BASE (DMA1_BASE + 0x088U)
#define DMA1_Stream6_BASE (DMA1_BASE + 0x0A0U)
#define DMA1_Stream7_BASE (DMA1_BASE + 0x0B8U)
#define DMA2_BASE         (AHB1PERIPH_BASE + 0x6400U)
#define DMA2_Stream0_BASE (DMA2_BASE + 0x010U)
#define DMA2_Stream1_BASE (DMA2_BASE + 0x028U)
#define DMA2_Stream2_BASE (DMA2_BASE + 0x040U)
#define DMA2_Stream3_BASE (DMA2_BASE + 0x058U)
#define DMA2_Stream4_BASE (DMA2_BASE + 0x070U)
#define DMA2_Stream5_BASE (DMA2_BASE + 0x088U)
#define DMA2_Stream6_BASE (DMA2_BASE + 0x0A0U)
#define DMA2_Stream7_BASE (DMA2_BASE + 0x0B8U)

/*!< AHB2 peripherals */
#define CRYP_BASE        (AHB2PERIPH_BASE + 0x60000U)
#define HASH_BASE        (AHB2PERIPH_BASE + 0x60400U)
#define HASH_DIGEST_BASE (AHB2PERIPH_BASE + 0x60710U)
#define RNG_BASE         (AHB2PERIPH_BASE + 0x60800U)

/*!< FSMC Bankx registers base address */
#define FSMC_Bank1_R_BASE   (FSMC_R_BASE + 0x0000U)
#define FSMC_Bank1E_R_BASE  (FSMC_R_BASE + 0x0104U)
#define FSMC_Bank2_3_R_BASE (FSMC_R_BASE + 0x0060U)
#define FSMC_Bank4_R_BASE   (FSMC_R_BASE + 0x00A0U)


/*!< Debug MCU registers base address */
#define DBGMCU_BASE               0xE0042000U
/*!< USB registers base address */
#define USB_OTG_HS_PERIPH_BASE    0x40040000U
#define USB_OTG_FS_PERIPH_BASE    0x50000000U

#define USB_OTG_GLOBAL_BASE       0x000U
#define USB_OTG_DEVICE_BASE       0x800U
#define USB_OTG_IN_ENDPOINT_BASE  0x900U
#define USB_OTG_OUT_ENDPOINT_BASE 0xB00U
#define USB_OTG_EP_REG_SIZE       0x20U
#define USB_OTG_HOST_BASE         0x400U
#define USB_OTG_HOST_PORT_BASE    0x440U
#define USB_OTG_HOST_CHANNEL_BASE 0x500U
#define USB_OTG_HOST_CHANNEL_SIZE 0x20U
#define USB_OTG_PCGCCTL_BASE      0xE00U
#define USB_OTG_FIFO_BASE         0x1000U
#define USB_OTG_FIFO_SIZE         0x1000U

#define UID_BASE                  0x1FFF7A10U /*!< Unique device ID register base address */
#define FLASHSIZE_BASE            0x1FFF7A22U /*!< FLASH Size register base address       */
#define PACKAGE_BASE              0x1FFF7BF0U /*!< Package size register base address     */

/**
 * @}
 */

/** @addtogroup Peripheral_declaration
 * @{
 */
#define TIM2          ((TIM_TypeDef *) TIM2_BASE)
#define TIM3          ((TIM_TypeDef *) TIM3_BASE)
#define TIM4          ((TIM_TypeDef *) TIM4_BASE)
#define TIM5          ((TIM_TypeDef *) TIM5_BASE)
#define TIM6          ((TIM_TypeDef *) TIM6_BASE)
#define TIM7          ((TIM_TypeDef *) TIM7_BASE)
#define TIM12         ((TIM_TypeDef *) TIM12_BASE)
#define TIM13         ((TIM_TypeDef *) TIM13_BASE)
#define TIM14         ((TIM_TypeDef *) TIM14_BASE)
#define RTC           ((RTC_TypeDef *) RTC_BASE)
#define WWDG          ((WWDG_TypeDef *) WWDG_BASE)
#define IWDG          ((IWDG_TypeDef *) IWDG_BASE)
#define I2S2ext       ((SPI_TypeDef *) I2S2ext_BASE)
#define SPI2          ((SPI_TypeDef *) SPI2_BASE)
#define SPI3          ((SPI_TypeDef *) SPI3_BASE)
#define I2S3ext       ((SPI_TypeDef *) I2S3ext_BASE)
#define USART2        ((USART_TypeDef *) USART2_BASE)
#define USART3        ((USART_TypeDef *) USART3_BASE)
#define UART4         ((USART_TypeDef *) UART4_BASE)
#define UART5         ((USART_TypeDef *) UART5_BASE)
#define I2C1          ((I2C_TypeDef *) I2C1_BASE)
#define I2C2          ((I2C_TypeDef *) I2C2_BASE)
#define I2C3          ((I2C_TypeDef *) I2C3_BASE)
#define CAN1          ((CAN_TypeDef *) CAN1_BASE)
#define CAN2          ((CAN_TypeDef *) CAN2_BASE)
#define PWR           ((PWR_TypeDef *) PWR_BASE)
#define DAC1          ((DAC_TypeDef *) DAC_BASE)
#define DAC           ((DAC_TypeDef *) DAC_BASE) /* Kept for legacy purpose */
#define TIM1          ((TIM_TypeDef *) TIM1_BASE)
#define TIM8          ((TIM_TypeDef *) TIM8_BASE)
#define USART1        ((USART_TypeDef *) USART1_BASE)
#define USART6        ((USART_TypeDef *) USART6_BASE)
#define ADC1          ((ADC_TypeDef *) ADC1_BASE)
#define ADC2          ((ADC_TypeDef *) ADC2_BASE)
#define ADC3          ((ADC_TypeDef *) ADC3_BASE)
#define ADC123_COMMON ((ADC_Common_TypeDef *) ADC123_COMMON_BASE)
/* Legacy define */
#define ADC           ADC123_COMMON
#define SDIO          ((SDIO_TypeDef *) SDIO_BASE)
#define SPI1          ((SPI_TypeDef *) SPI1_BASE)
#define SYSCFG        ((SYSCFG_TypeDef *) SYSCFG_BASE)
#define EXTI          ((EXTI_TypeDef *) EXTI_BASE)
#define TIM9          ((TIM_TypeDef *) TIM9_BASE)
#define TIM10         ((TIM_TypeDef *) TIM10_BASE)
#define TIM11         ((TIM_TypeDef *) TIM11_BASE)
#define GPIOA         ((GPIO_TypeDef *) GPIOA_BASE)
#define GPIOB         ((GPIO_TypeDef *) GPIOB_BASE)
#define GPIOC         ((GPIO_TypeDef *) GPIOC_BASE)
#define GPIOD         ((GPIO_TypeDef *) GPIOD_BASE)
#define GPIOE         ((GPIO_TypeDef *) GPIOE_BASE)
#define GPIOF         ((GPIO_TypeDef *) GPIOF_BASE)
#define GPIOG         ((GPIO_TypeDef *) GPIOG_BASE)
#define GPIOH         ((GPIO_TypeDef *) GPIOH_BASE)
#define GPIOI         ((GPIO_TypeDef *) GPIOI_BASE)
#define CRC           ((CRC_TypeDef *) CRC_BASE)
#define RCC           ((RCC_TypeDef *) RCC_BASE)
#define FLASH         ((FLASH_TypeDef *) FLASH_R_BASE)
#define DMA1          ((DMA_TypeDef *) DMA1_BASE)
#define DMA1_Stream0  ((DMA_Stream_TypeDef *) DMA1_Stream0_BASE)
#define DMA1_Stream1  ((DMA_Stream_TypeDef *) DMA1_Stream1_BASE)
#define DMA1_Stream2  ((DMA_Stream_TypeDef *) DMA1_Stream2_BASE)
#define DMA1_Stream3  ((DMA_Stream_TypeDef *) DMA1_Stream3_BASE)
#define DMA1_Stream4  ((DMA_Stream_TypeDef *) DMA1_Stream4_BASE)
#define DMA1_Stream5  ((DMA_Stream_TypeDef *) DMA1_Stream5_BASE)
#define DMA1_Stream6  ((DMA_Stream_TypeDef *) DMA1_Stream6_BASE)
#define DMA1_Stream7  ((DMA_Stream_TypeDef *) DMA1_Stream7_BASE)
#define DMA2          ((DMA_TypeDef *) DMA2_BASE)
#define DMA2_Stream0  ((DMA_Stream_TypeDef *) DMA2_Stream0_BASE)
#define DMA2_Stream1  ((DMA_Stream_TypeDef *) DMA2_Stream1_BASE)
#define DMA2_Stream2  ((DMA_Stream_TypeDef *) DMA2_Stream2_BASE)
#define DMA2_Stream3  ((DMA_Stream_TypeDef *) DMA2_Stream3_BASE)
#define DMA2_Stream4  ((DMA_Stream_TypeDef *) DMA2_Stream4_BASE)
#define DMA2_Stream5  ((DMA_Stream_TypeDef *) DMA2_Stream5_BASE)
#define DMA2_Stream6  ((DMA_Stream_TypeDef *) DMA2_Stream6_BASE)
#define DMA2_Stream7  ((DMA_Stream_TypeDef *) DMA2_Stream7_BASE)
#define CRYP          ((CRYP_TypeDef *) CRYP_BASE)
#define HASH          ((HASH_TypeDef *) HASH_BASE)
#define HASH_DIGEST   ((HASH_DIGEST_TypeDef *) HASH_DIGEST_BASE)
#define RNG           ((RNG_TypeDef *) RNG_BASE)
#define FSMC_Bank1    ((FSMC_Bank1_TypeDef *) FSMC_Bank1_R_BASE)
#define FSMC_Bank1E   ((FSMC_Bank1E_TypeDef *) FSMC_Bank1E_R_BASE)
#define FSMC_Bank2_3  ((FSMC_Bank2_3_TypeDef *) FSMC_Bank2_3_R_BASE)
#define FSMC_Bank4    ((FSMC_Bank4_TypeDef *) FSMC_Bank4_R_BASE)
#define DBGMCU        ((DBGMCU_TypeDef *) DBGMCU_BASE)
#define USB_OTG_FS    ((USB_OTG_GlobalTypeDef *) USB_OTG_FS_PERIPH_BASE)
#define USB_OTG_HS    ((USB_OTG_GlobalTypeDef *) USB_OTG_HS_PERIPH_BASE)

/**
 * @}
 */

/** @addtogroup Exported_constants
 * @{
 */

/** @addtogroup Peripheral_Registers_Bits_Definition
 * @{
 */

/******************************************************************************/
/*                         Peripheral Registers_Bits_Definition               */
/******************************************************************************/

/******************************************************************************/
/*                                                                            */
/*                        Analog to Digital Converter                         */
/*                                                                            */
/******************************************************************************/

/*
 * @brief Specific device feature definitions (not present on all devices in the STM32F4 serie)
 */
#define ADC_MULTIMODE_SUPPORT /*!<ADC Multimode feature available on specific devices */

/********************  Bit definition for ADC_SR register  ********************/
#define ADC_SR_AWD_Pos   (0U)
#define ADC_SR_AWD_Msk   (0x1U << ADC_SR_AWD_Pos) /*!< 0x00000001 */
#define ADC_SR_AWD       ADC_SR_AWD_Msk           /*!<Analog watchdog flag */
#define ADC_SR_EOC_Pos   (1U)
#define ADC_SR_EOC_Msk   (0x1U << ADC_SR_EOC_Pos) /*!< 0x00000002 */
#define ADC_SR_EOC       ADC_SR_EOC_Msk           /*!<End of conversion */
#define ADC_SR_JEOC_Pos  (2U)
#define ADC_SR_JEOC_Msk  (0x1U << ADC_SR_JEOC_Pos) /*!< 0x00000004 */
#define ADC_SR_JEOC      ADC_SR_JEOC_Msk           /*!<Injected channel end of conversion */
#define ADC_SR_JSTRT_Pos (3U)
#define ADC_SR_JSTRT_Msk (0x1U << ADC_SR_JSTRT_Pos) /*!< 0x00000008 */
#define ADC_SR_JSTRT     ADC_SR_JSTRT_Msk           /*!<Injected channel Start flag */
#define ADC_SR_STRT_Pos  (4U)
#define ADC_SR_STRT_Msk  (0x1U << ADC_SR_STRT_Pos) /*!< 0x00000010 */
#define ADC_SR_STRT      ADC_SR_STRT_Msk           /*!<Regular channel Start flag */
#define ADC_SR_OVR_Pos   (5U)
#define ADC_SR_OVR_Msk   (0x1U << ADC_SR_OVR_Pos) /*!< 0x00000020 */
#define ADC_SR_OVR       ADC_SR_OVR_Msk           /*!<Overrun flag */

/*******************  Bit definition for ADC_CR1 register  ********************/
#define ADC_CR1_AWDCH_Pos   (0U)
#define ADC_CR1_AWDCH_Msk   (0x1FU << ADC_CR1_AWDCH_Pos) /*!< 0x0000001F */
#define ADC_CR1_AWDCH       ADC_CR1_AWDCH_Msk            /*!<AWDCH[4:0] bits (Analog watchdog channel select bits) */
#define ADC_CR1_AWDCH_0     (0x01U << ADC_CR1_AWDCH_Pos) /*!< 0x00000001 */
#define ADC_CR1_AWDCH_1     (0x02U << ADC_CR1_AWDCH_Pos) /*!< 0x00000002 */
#define ADC_CR1_AWDCH_2     (0x04U << ADC_CR1_AWDCH_Pos) /*!< 0x00000004 */
#define ADC_CR1_AWDCH_3     (0x08U << ADC_CR1_AWDCH_Pos) /*!< 0x00000008 */
#define ADC_CR1_AWDCH_4     (0x10U << ADC_CR1_AWDCH_Pos) /*!< 0x00000010 */
#define ADC_CR1_EOCIE_Pos   (5U)
#define ADC_CR1_EOCIE_Msk   (0x1U << ADC_CR1_EOCIE_Pos) /*!< 0x00000020 */
#define ADC_CR1_EOCIE       ADC_CR1_EOCIE_Msk           /*!<Interrupt enable for EOC */
#define ADC_CR1_AWDIE_Pos   (6U)
#define ADC_CR1_AWDIE_Msk   (0x1U << ADC_CR1_AWDIE_Pos) /*!< 0x00000040 */
#define ADC_CR1_AWDIE       ADC_CR1_AWDIE_Msk           /*!<AAnalog Watchdog interrupt enable */
#define ADC_CR1_JEOCIE_Pos  (7U)
#define ADC_CR1_JEOCIE_Msk  (0x1U << ADC_CR1_JEOCIE_Pos) /*!< 0x00000080 */
#define ADC_CR1_JEOCIE      ADC_CR1_JEOCIE_Msk           /*!<Interrupt enable for injected channels */
#define ADC_CR1_SCAN_Pos    (8U)
#define ADC_CR1_SCAN_Msk    (0x1U << ADC_CR1_SCAN_Pos) /*!< 0x00000100 */
#define ADC_CR1_SCAN        ADC_CR1_SCAN_Msk           /*!<Scan mode */
#define ADC_CR1_AWDSGL_Pos  (9U)
#define ADC_CR1_AWDSGL_Msk  (0x1U << ADC_CR1_AWDSGL_Pos) /*!< 0x00000200 */
#define ADC_CR1_AWDSGL      ADC_CR1_AWDSGL_Msk           /*!<Enable the watchdog on a single channel in scan mode */
#define ADC_CR1_JAUTO_Pos   (10U)
#define ADC_CR1_JAUTO_Msk   (0x1U << ADC_CR1_JAUTO_Pos) /*!< 0x00000400 */
#define ADC_CR1_JAUTO       ADC_CR1_JAUTO_Msk           /*!<Automatic injected group conversion */
#define ADC_CR1_DISCEN_Pos  (11U)
#define ADC_CR1_DISCEN_Msk  (0x1U << ADC_CR1_DISCEN_Pos) /*!< 0x00000800 */
#define ADC_CR1_DISCEN      ADC_CR1_DISCEN_Msk           /*!<Discontinuous mode on regular channels */
#define ADC_CR1_JDISCEN_Pos (12U)
#define ADC_CR1_JDISCEN_Msk (0x1U << ADC_CR1_JDISCEN_Pos) /*!< 0x00001000 */
#define ADC_CR1_JDISCEN     ADC_CR1_JDISCEN_Msk           /*!<Discontinuous mode on injected channels */
#define ADC_CR1_DISCNUM_Pos (13U)
#define ADC_CR1_DISCNUM_Msk (0x7U << ADC_CR1_DISCNUM_Pos) /*!< 0x0000E000 */
#define ADC_CR1_DISCNUM     ADC_CR1_DISCNUM_Msk           /*!<DISCNUM[2:0] bits (Discontinuous mode channel count) */
#define ADC_CR1_DISCNUM_0   (0x1U << ADC_CR1_DISCNUM_Pos) /*!< 0x00002000 */
#define ADC_CR1_DISCNUM_1   (0x2U << ADC_CR1_DISCNUM_Pos) /*!< 0x00004000 */
#define ADC_CR1_DISCNUM_2   (0x4U << ADC_CR1_DISCNUM_Pos) /*!< 0x00008000 */
#define ADC_CR1_JAWDEN_Pos  (22U)
#define ADC_CR1_JAWDEN_Msk  (0x1U << ADC_CR1_JAWDEN_Pos) /*!< 0x00400000 */
#define ADC_CR1_JAWDEN      ADC_CR1_JAWDEN_Msk           /*!<Analog watchdog enable on injected channels */
#define ADC_CR1_AWDEN_Pos   (23U)
#define ADC_CR1_AWDEN_Msk   (0x1U << ADC_CR1_AWDEN_Pos) /*!< 0x00800000 */
#define ADC_CR1_AWDEN       ADC_CR1_AWDEN_Msk           /*!<Analog watchdog enable on regular channels */
#define ADC_CR1_RES_Pos     (24U)
#define ADC_CR1_RES_Msk     (0x3U << ADC_CR1_RES_Pos) /*!< 0x03000000 */
#define ADC_CR1_RES         ADC_CR1_RES_Msk           /*!<RES[2:0] bits (Resolution) */
#define ADC_CR1_RES_0       (0x1U << ADC_CR1_RES_Pos) /*!< 0x01000000 */
#define ADC_CR1_RES_1       (0x2U << ADC_CR1_RES_Pos) /*!< 0x02000000 */
#define ADC_CR1_OVRIE_Pos   (26U)
#define ADC_CR1_OVRIE_Msk   (0x1U << ADC_CR1_OVRIE_Pos) /*!< 0x04000000 */
#define ADC_CR1_OVRIE       ADC_CR1_OVRIE_Msk           /*!<overrun interrupt enable */

/*******************  Bit definition for ADC_CR2 register  ********************/
#define ADC_CR2_ADON_Pos     (0U)
#define ADC_CR2_ADON_Msk     (0x1U << ADC_CR2_ADON_Pos) /*!< 0x00000001 */
#define ADC_CR2_ADON         ADC_CR2_ADON_Msk           /*!<A/D Converter ON / OFF */
#define ADC_CR2_CONT_Pos     (1U)
#define ADC_CR2_CONT_Msk     (0x1U << ADC_CR2_CONT_Pos) /*!< 0x00000002 */
#define ADC_CR2_CONT         ADC_CR2_CONT_Msk           /*!<Continuous Conversion */
#define ADC_CR2_DMA_Pos      (8U)
#define ADC_CR2_DMA_Msk      (0x1U << ADC_CR2_DMA_Pos) /*!< 0x00000100 */
#define ADC_CR2_DMA          ADC_CR2_DMA_Msk           /*!<Direct Memory access mode */
#define ADC_CR2_DDS_Pos      (9U)
#define ADC_CR2_DDS_Msk      (0x1U << ADC_CR2_DDS_Pos) /*!< 0x00000200 */
#define ADC_CR2_DDS          ADC_CR2_DDS_Msk           /*!<DMA disable selection (Single ADC) */
#define ADC_CR2_EOCS_Pos     (10U)
#define ADC_CR2_EOCS_Msk     (0x1U << ADC_CR2_EOCS_Pos) /*!< 0x00000400 */
#define ADC_CR2_EOCS         ADC_CR2_EOCS_Msk           /*!<End of conversion selection */
#define ADC_CR2_ALIGN_Pos    (11U)
#define ADC_CR2_ALIGN_Msk    (0x1U << ADC_CR2_ALIGN_Pos) /*!< 0x00000800 */
#define ADC_CR2_ALIGN        ADC_CR2_ALIGN_Msk           /*!<Data Alignment */
#define ADC_CR2_JEXTSEL_Pos  (16U)
#define ADC_CR2_JEXTSEL_Msk  (0xFU << ADC_CR2_JEXTSEL_Pos) /*!< 0x000F0000 */
#define ADC_CR2_JEXTSEL      ADC_CR2_JEXTSEL_Msk           /*!<JEXTSEL[3:0] bits (External event select for injected group) */
#define ADC_CR2_JEXTSEL_0    (0x1U << ADC_CR2_JEXTSEL_Pos) /*!< 0x00010000 */
#define ADC_CR2_JEXTSEL_1    (0x2U << ADC_CR2_JEXTSEL_Pos) /*!< 0x00020000 */
#define ADC_CR2_JEXTSEL_2    (0x4U << ADC_CR2_JEXTSEL_Pos) /*!< 0x00040000 */
#define ADC_CR2_JEXTSEL_3    (0x8U << ADC_CR2_JEXTSEL_Pos) /*!< 0x00080000 */
#define ADC_CR2_JEXTEN_Pos   (20U)
#define ADC_CR2_JEXTEN_Msk   (0x3U << ADC_CR2_JEXTEN_Pos) /*!< 0x00300000 */
#define ADC_CR2_JEXTEN       ADC_CR2_JEXTEN_Msk           /*!<JEXTEN[1:0] bits (External Trigger Conversion mode for injected channelsp) */
#define ADC_CR2_JEXTEN_0     (0x1U << ADC_CR2_JEXTEN_Pos) /*!< 0x00100000 */
#define ADC_CR2_JEXTEN_1     (0x2U << ADC_CR2_JEXTEN_Pos) /*!< 0x00200000 */
#define ADC_CR2_JSWSTART_Pos (22U)
#define ADC_CR2_JSWSTART_Msk (0x1U << ADC_CR2_JSWSTART_Pos) /*!< 0x00400000 */
#define ADC_CR2_JSWSTART     ADC_CR2_JSWSTART_Msk           /*!<Start Conversion of injected channels */
#define ADC_CR2_EXTSEL_Pos   (24U)
#define ADC_CR2_EXTSEL_Msk   (0xFU << ADC_CR2_EXTSEL_Pos) /*!< 0x0F000000 */
#define ADC_CR2_EXTSEL       ADC_CR2_EXTSEL_Msk           /*!<EXTSEL[3:0] bits (External Event Select for regular group) */
#define ADC_CR2_EXTSEL_0     (0x1U << ADC_CR2_EXTSEL_Pos) /*!< 0x01000000 */
#define ADC_CR2_EXTSEL_1     (0x2U << ADC_CR2_EXTSEL_Pos) /*!< 0x02000000 */
#define ADC_CR2_EXTSEL_2     (0x4U << ADC_CR2_EXTSEL_Pos) /*!< 0x04000000 */
#define ADC_CR2_EXTSEL_3     (0x8U << ADC_CR2_EXTSEL_Pos) /*!< 0x08000000 */
#define ADC_CR2_EXTEN_Pos    (28U)
#define ADC_CR2_EXTEN_Msk    (0x3U << ADC_CR2_EXTEN_Pos) /*!< 0x30000000 */
#define ADC_CR2_EXTEN        ADC_CR2_EXTEN_Msk           /*!<EXTEN[1:0] bits (External Trigger Conversion mode for regular channelsp) */
#define ADC_CR2_EXTEN_0      (0x1U << ADC_CR2_EXTEN_Pos) /*!< 0x10000000 */
#define ADC_CR2_EXTEN_1      (0x2U << ADC_CR2_EXTEN_Pos) /*!< 0x20000000 */
#define ADC_CR2_SWSTART_Pos  (30U)
#define ADC_CR2_SWSTART_Msk  (0x1U << ADC_CR2_SWSTART_Pos) /*!< 0x40000000 */
#define ADC_CR2_SWSTART      ADC_CR2_SWSTART_Msk           /*!<Start Conversion of regular channels */

/******************  Bit definition for ADC_SMPR1 register  *******************/
#define ADC_SMPR1_SMP10_Pos (0U)
#define ADC_SMPR1_SMP10_Msk (0x7U << ADC_SMPR1_SMP10_Pos) /*!< 0x00000007 */
#define ADC_SMPR1_SMP10     ADC_SMPR1_SMP10_Msk           /*!<SMP10[2:0] bits (Channel 10 Sample time selection) */
#define ADC_SMPR1_SMP10_0   (0x1U << ADC_SMPR1_SMP10_Pos) /*!< 0x00000001 */
#define ADC_SMPR1_SMP10_1   (0x2U << ADC_SMPR1_SMP10_Pos) /*!< 0x00000002 */
#define ADC_SMPR1_SMP10_2   (0x4U << ADC_SMPR1_SMP10_Pos) /*!< 0x00000004 */
#define ADC_SMPR1_SMP11_Pos (3U)
#define ADC_SMPR1_SMP11_Msk (0x7U << ADC_SMPR1_SMP11_Pos) /*!< 0x00000038 */
#define ADC_SMPR1_SMP11     ADC_SMPR1_SMP11_Msk           /*!<SMP11[2:0] bits (Channel 11 Sample time selection) */
#define ADC_SMPR1_SMP11_0   (0x1U << ADC_SMPR1_SMP11_Pos) /*!< 0x00000008 */
#define ADC_SMPR1_SMP11_1   (0x2U << ADC_SMPR1_SMP11_Pos) /*!< 0x00000010 */
#define ADC_SMPR1_SMP11_2   (0x4U << ADC_SMPR1_SMP11_Pos) /*!< 0x00000020 */
#define ADC_SMPR1_SMP12_Pos (6U)
#define ADC_SMPR1_SMP12_Msk (0x7U << ADC_SMPR1_SMP12_Pos) /*!< 0x000001C0 */
#define ADC_SMPR1_SMP12     ADC_SMPR1_SMP12_Msk           /*!<SMP12[2:0] bits (Channel 12 Sample time selection) */
#define ADC_SMPR1_SMP12_0   (0x1U << ADC_SMPR1_SMP12_Pos) /*!< 0x00000040 */
#define ADC_SMPR1_SMP12_1   (0x2U << ADC_SMPR1_SMP12_Pos) /*!< 0x00000080 */
#define ADC_SMPR1_SMP12_2   (0x4U << ADC_SMPR1_SMP12_Pos) /*!< 0x00000100 */
#define ADC_SMPR1_SMP13_Pos (9U)
#define ADC_SMPR1_SMP13_Msk (0x7U << ADC_SMPR1_SMP13_Pos) /*!< 0x00000E00 */
#define ADC_SMPR1_SMP13     ADC_SMPR1_SMP13_Msk           /*!<SMP13[2:0] bits (Channel 13 Sample time selection) */
#define ADC_SMPR1_SMP13_0   (0x1U << ADC_SMPR1_SMP13_Pos) /*!< 0x00000200 */
#define ADC_SMPR1_SMP13_1   (0x2U << ADC_SMPR1_SMP13_Pos) /*!< 0x00000400 */
#define ADC_SMPR1_SMP13_2   (0x4U << ADC_SMPR1_SMP13_Pos) /*!< 0x00000800 */
#define ADC_SMPR1_SMP14_Pos (12U)
#define ADC_SMPR1_SMP14_Msk (0x7U << ADC_SMPR1_SMP14_Pos) /*!< 0x00007000 */
#define ADC_SMPR1_SMP14     ADC_SMPR1_SMP14_Msk           /*!<SMP14[2:0] bits (Channel 14 Sample time selection) */
#define ADC_SMPR1_SMP14_0   (0x1U << ADC_SMPR1_SMP14_Pos) /*!< 0x00001000 */
#define ADC_SMPR1_SMP14_1   (0x2U << ADC_SMPR1_SMP14_Pos) /*!< 0x00002000 */
#define ADC_SMPR1_SMP14_2   (0x4U << ADC_SMPR1_SMP14_Pos) /*!< 0x00004000 */
#define ADC_SMPR1_SMP15_Pos (15U)
#define ADC_SMPR1_SMP15_Msk (0x7U << ADC_SMPR1_SMP15_Pos) /*!< 0x00038000 */
#define ADC_SMPR1_SMP15     ADC_SMPR1_SMP15_Msk           /*!<SMP15[2:0] bits (Channel 15 Sample time selection) */
#define ADC_SMPR1_SMP15_0   (0x1U << ADC_SMPR1_SMP15_Pos) /*!< 0x00008000 */
#define ADC_SMPR1_SMP15_1   (0x2U << ADC_SMPR1_SMP15_Pos) /*!< 0x00010000 */
#define ADC_SMPR1_SMP15_2   (0x4U << ADC_SMPR1_SMP15_Pos) /*!< 0x00020000 */
#define ADC_SMPR1_SMP16_Pos (18U)
#define ADC_SMPR1_SMP16_Msk (0x7U << ADC_SMPR1_SMP16_Pos) /*!< 0x001C0000 */
#define ADC_SMPR1_SMP16     ADC_SMPR1_SMP16_Msk           /*!<SMP16[2:0] bits (Channel 16 Sample time selection) */
#define ADC_SMPR1_SMP16_0   (0x1U << ADC_SMPR1_SMP16_Pos) /*!< 0x00040000 */
#define ADC_SMPR1_SMP16_1   (0x2U << ADC_SMPR1_SMP16_Pos) /*!< 0x00080000 */
#define ADC_SMPR1_SMP16_2   (0x4U << ADC_SMPR1_SMP16_Pos) /*!< 0x00100000 */
#define ADC_SMPR1_SMP17_Pos (21U)
#define ADC_SMPR1_SMP17_Msk (0x7U << ADC_SMPR1_SMP17_Pos) /*!< 0x00E00000 */
#define ADC_SMPR1_SMP17     ADC_SMPR1_SMP17_Msk           /*!<SMP17[2:0] bits (Channel 17 Sample time selection) */
#define ADC_SMPR1_SMP17_0   (0x1U << ADC_SMPR1_SMP17_Pos) /*!< 0x00200000 */
#define ADC_SMPR1_SMP17_1   (0x2U << ADC_SMPR1_SMP17_Pos) /*!< 0x00400000 */
#define ADC_SMPR1_SMP17_2   (0x4U << ADC_SMPR1_SMP17_Pos) /*!< 0x00800000 */
#define ADC_SMPR1_SMP18_Pos (24U)
#define ADC_SMPR1_SMP18_Msk (0x7U << ADC_SMPR1_SMP18_Pos) /*!< 0x07000000 */
#define ADC_SMPR1_SMP18     ADC_SMPR1_SMP18_Msk           /*!<SMP18[2:0] bits (Channel 18 Sample time selection) */
#define ADC_SMPR1_SMP18_0   (0x1U << ADC_SMPR1_SMP18_Pos) /*!< 0x01000000 */
#define ADC_SMPR1_SMP18_1   (0x2U << ADC_SMPR1_SMP18_Pos) /*!< 0x02000000 */
#define ADC_SMPR1_SMP18_2   (0x4U << ADC_SMPR1_SMP18_Pos) /*!< 0x04000000 */

/******************  Bit definition for ADC_SMPR2 register  *******************/
#define ADC_SMPR2_SMP0_Pos (0U)
#define ADC_SMPR2_SMP0_Msk (0x7U << ADC_SMPR2_SMP0_Pos) /*!< 0x00000007 */
#define ADC_SMPR2_SMP0     ADC_SMPR2_SMP0_Msk           /*!<SMP0[2:0] bits (Channel 0 Sample time selection) */
#define ADC_SMPR2_SMP0_0   (0x1U << ADC_SMPR2_SMP0_Pos) /*!< 0x00000001 */
#define ADC_SMPR2_SMP0_1   (0x2U << ADC_SMPR2_SMP0_Pos) /*!< 0x00000002 */
#define ADC_SMPR2_SMP0_2   (0x4U << ADC_SMPR2_SMP0_Pos) /*!< 0x00000004 */
#define ADC_SMPR2_SMP1_Pos (3U)
#define ADC_SMPR2_SMP1_Msk (0x7U << ADC_SMPR2_SMP1_Pos) /*!< 0x00000038 */
#define ADC_SMPR2_SMP1     ADC_SMPR2_SMP1_Msk           /*!<SMP1[2:0] bits (Channel 1 Sample time selection) */
#define ADC_SMPR2_SMP1_0   (0x1U << ADC_SMPR2_SMP1_Pos) /*!< 0x00000008 */
#define ADC_SMPR2_SMP1_1   (0x2U << ADC_SMPR2_SMP1_Pos) /*!< 0x00000010 */
#define ADC_SMPR2_SMP1_2   (0x4U << ADC_SMPR2_SMP1_Pos) /*!< 0x00000020 */
#define ADC_SMPR2_SMP2_Pos (6U)
#define ADC_SMPR2_SMP2_Msk (0x7U << ADC_SMPR2_SMP2_Pos) /*!< 0x000001C0 */
#define ADC_SMPR2_SMP2     ADC_SMPR2_SMP2_Msk           /*!<SMP2[2:0] bits (Channel 2 Sample time selection) */
#define ADC_SMPR2_SMP2_0   (0x1U << ADC_SMPR2_SMP2_Pos) /*!< 0x00000040 */
#define ADC_SMPR2_SMP2_1   (0x2U << ADC_SMPR2_SMP2_Pos) /*!< 0x00000080 */
#define ADC_SMPR2_SMP2_2   (0x4U << ADC_SMPR2_SMP2_Pos) /*!< 0x00000100 */
#define ADC_SMPR2_SMP3_Pos (9U)
#define ADC_SMPR2_SMP3_Msk (0x7U << ADC_SMPR2_SMP3_Pos) /*!< 0x00000E00 */
#define ADC_SMPR2_SMP3     ADC_SMPR2_SMP3_Msk           /*!<SMP3[2:0] bits (Channel 3 Sample time selection) */
#define ADC_SMPR2_SMP3_0   (0x1U << ADC_SMPR2_SMP3_Pos) /*!< 0x00000200 */
#define ADC_SMPR2_SMP3_1   (0x2U << ADC_SMPR2_SMP3_Pos) /*!< 0x00000400 */
#define ADC_SMPR2_SMP3_2   (0x4U << ADC_SMPR2_SMP3_Pos) /*!< 0x00000800 */
#define ADC_SMPR2_SMP4_Pos (12U)
#define ADC_SMPR2_SMP4_Msk (0x7U << ADC_SMPR2_SMP4_Pos) /*!< 0x00007000 */
#define ADC_SMPR2_SMP4     ADC_SMPR2_SMP4_Msk           /*!<SMP4[2:0] bits (Channel 4 Sample time selection) */
#define ADC_SMPR2_SMP4_0   (0x1U << ADC_SMPR2_SMP4_Pos) /*!< 0x00001000 */
#define ADC_SMPR2_SMP4_1   (0x2U << ADC_SMPR2_SMP4_Pos) /*!< 0x00002000 */
#define ADC_SMPR2_SMP4_2   (0x4U << ADC_SMPR2_SMP4_Pos) /*!< 0x00004000 */
#define ADC_SMPR2_SMP5_Pos (15U)
#define ADC_SMPR2_SMP5_Msk (0x7U << ADC_SMPR2_SMP5_Pos) /*!< 0x00038000 */
#define ADC_SMPR2_SMP5     ADC_SMPR2_SMP5_Msk           /*!<SMP5[2:0] bits (Channel 5 Sample time selection) */
#define ADC_SMPR2_SMP5_0   (0x1U << ADC_SMPR2_SMP5_Pos) /*!< 0x00008000 */
#define ADC_SMPR2_SMP5_1   (0x2U << ADC_SMPR2_SMP5_Pos) /*!< 0x00010000 */
#define ADC_SMPR2_SMP5_2   (0x4U << ADC_SMPR2_SMP5_Pos) /*!< 0x00020000 */
#define ADC_SMPR2_SMP6_Pos (18U)
#define ADC_SMPR2_SMP6_Msk (0x7U << ADC_SMPR2_SMP6_Pos) /*!< 0x001C0000 */
#define ADC_SMPR2_SMP6     ADC_SMPR2_SMP6_Msk           /*!<SMP6[2:0] bits (Channel 6 Sample time selection) */
#define ADC_SMPR2_SMP6_0   (0x1U << ADC_SMPR2_SMP6_Pos) /*!< 0x00040000 */
#define ADC_SMPR2_SMP6_1   (0x2U << ADC_SMPR2_SMP6_Pos) /*!< 0x00080000 */
#define ADC_SMPR2_SMP6_2   (0x4U << ADC_SMPR2_SMP6_Pos) /*!< 0x00100000 */
#define ADC_SMPR2_SMP7_Pos (21U)
#define ADC_SMPR2_SMP7_Msk (0x7U << ADC_SMPR2_SMP7_Pos) /*!< 0x00E00000 */
#define ADC_SMPR2_SMP7     ADC_SMPR2_SMP7_Msk           /*!<SMP7[2:0] bits (Channel 7 Sample time selection) */
#define ADC_SMPR2_SMP7_0   (0x1U << ADC_SMPR2_SMP7_Pos) /*!< 0x00200000 */
#define ADC_SMPR2_SMP7_1   (0x2U << ADC_SMPR2_SMP7_Pos) /*!< 0x00400000 */
#define ADC_SMPR2_SMP7_2   (0x4U << ADC_SMPR2_SMP7_Pos) /*!< 0x00800000 */
#define ADC_SMPR2_SMP8_Pos (24U)
#define ADC_SMPR2_SMP8_Msk (0x7U << ADC_SMPR2_SMP8_Pos) /*!< 0x07000000 */
#define ADC_SMPR2_SMP8     ADC_SMPR2_SMP8_Msk           /*!<SMP8[2:0] bits (Channel 8 Sample time selection) */
#define ADC_SMPR2_SMP8_0   (0x1U << ADC_SMPR2_SMP8_Pos) /*!< 0x01000000 */
#define ADC_SMPR2_SMP8_1   (0x2U << ADC_SMPR2_SMP8_Pos) /*!< 0x02000000 */
#define ADC_SMPR2_SMP8_2   (0x4U << ADC_SMPR2_SMP8_Pos) /*!< 0x04000000 */
#define ADC_SMPR2_SMP9_Pos (27U)
#define ADC_SMPR2_SMP9_Msk (0x7U << ADC_SMPR2_SMP9_Pos) /*!< 0x38000000 */
#define ADC_SMPR2_SMP9     ADC_SMPR2_SMP9_Msk           /*!<SMP9[2:0] bits (Channel 9 Sample time selection) */
#define ADC_SMPR2_SMP9_0   (0x1U << ADC_SMPR2_SMP9_Pos) /*!< 0x08000000 */
#define ADC_SMPR2_SMP9_1   (0x2U << ADC_SMPR2_SMP9_Pos) /*!< 0x10000000 */
#define ADC_SMPR2_SMP9_2   (0x4U << ADC_SMPR2_SMP9_Pos) /*!< 0x20000000 */

/******************  Bit definition for ADC_JOFR1 register  *******************/
#define ADC_JOFR1_JOFFSET1_Pos (0U)
#define ADC_JOFR1_JOFFSET1_Msk (0xFFFU << ADC_JOFR1_JOFFSET1_Pos) /*!< 0x00000FFF */
#define ADC_JOFR1_JOFFSET1     ADC_JOFR1_JOFFSET1_Msk             /*!<Data offset for injected channel 1 */

/******************  Bit definition for ADC_JOFR2 register  *******************/
#define ADC_JOFR2_JOFFSET2_Pos (0U)
#define ADC_JOFR2_JOFFSET2_Msk (0xFFFU << ADC_JOFR2_JOFFSET2_Pos) /*!< 0x00000FFF */
#define ADC_JOFR2_JOFFSET2     ADC_JOFR2_JOFFSET2_Msk             /*!<Data offset for injected channel 2 */

/******************  Bit definition for ADC_JOFR3 register  *******************/
#define ADC_JOFR3_JOFFSET3_Pos (0U)
#define ADC_JOFR3_JOFFSET3_Msk (0xFFFU << ADC_JOFR3_JOFFSET3_Pos) /*!< 0x00000FFF */
#define ADC_JOFR3_JOFFSET3     ADC_JOFR3_JOFFSET3_Msk             /*!<Data offset for injected channel 3 */

/******************  Bit definition for ADC_JOFR4 register  *******************/
#define ADC_JOFR4_JOFFSET4_Pos (0U)
#define ADC_JOFR4_JOFFSET4_Msk (0xFFFU << ADC_JOFR4_JOFFSET4_Pos) /*!< 0x00000FFF */
#define ADC_JOFR4_JOFFSET4     ADC_JOFR4_JOFFSET4_Msk             /*!<Data offset for injected channel 4 */

/*******************  Bit definition for ADC_HTR register  ********************/
#define ADC_HTR_HT_Pos (0U)
#define ADC_HTR_HT_Msk (0xFFFU << ADC_HTR_HT_Pos) /*!< 0x00000FFF */
#define ADC_HTR_HT     ADC_HTR_HT_Msk             /*!<Analog watchdog high threshold */

/*******************  Bit definition for ADC_LTR register  ********************/
#define ADC_LTR_LT_Pos (0U)
#define ADC_LTR_LT_Msk (0xFFFU << ADC_LTR_LT_Pos) /*!< 0x00000FFF */
#define ADC_LTR_LT     ADC_LTR_LT_Msk             /*!<Analog watchdog low threshold */

/*******************  Bit definition for ADC_SQR1 register  *******************/
#define ADC_SQR1_SQ13_Pos (0U)
#define ADC_SQR1_SQ13_Msk (0x1FU << ADC_SQR1_SQ13_Pos) /*!< 0x0000001F */
#define ADC_SQR1_SQ13     ADC_SQR1_SQ13_Msk            /*!<SQ13[4:0] bits (13th conversion in regular sequence) */
#define ADC_SQR1_SQ13_0   (0x01U << ADC_SQR1_SQ13_Pos) /*!< 0x00000001 */
#define ADC_SQR1_SQ13_1   (0x02U << ADC_SQR1_SQ13_Pos) /*!< 0x00000002 */
#define ADC_SQR1_SQ13_2   (0x04U << ADC_SQR1_SQ13_Pos) /*!< 0x00000004 */
#define ADC_SQR1_SQ13_3   (0x08U << ADC_SQR1_SQ13_Pos) /*!< 0x00000008 */
#define ADC_SQR1_SQ13_4   (0x10U << ADC_SQR1_SQ13_Pos) /*!< 0x00000010 */
#define ADC_SQR1_SQ14_Pos (5U)
#define ADC_SQR1_SQ14_Msk (0x1FU << ADC_SQR1_SQ14_Pos) /*!< 0x000003E0 */
#define ADC_SQR1_SQ14     ADC_SQR1_SQ14_Msk            /*!<SQ14[4:0] bits (14th conversion in regular sequence) */
#define ADC_SQR1_SQ14_0   (0x01U << ADC_SQR1_SQ14_Pos) /*!< 0x00000020 */
#define ADC_SQR1_SQ14_1   (0x02U << ADC_SQR1_SQ14_Pos) /*!< 0x00000040 */
#define ADC_SQR1_SQ14_2   (0x04U << ADC_SQR1_SQ14_Pos) /*!< 0x00000080 */
#define ADC_SQR1_SQ14_3   (0x08U << ADC_SQR1_SQ14_Pos) /*!< 0x00000100 */
#define ADC_SQR1_SQ14_4   (0x10U << ADC_SQR1_SQ14_Pos) /*!< 0x00000200 */
#define ADC_SQR1_SQ15_Pos (10U)
#define ADC_SQR1_SQ15_Msk (0x1FU << ADC_SQR1_SQ15_Pos) /*!< 0x00007C00 */
#define ADC_SQR1_SQ15     ADC_SQR1_SQ15_Msk            /*!<SQ15[4:0] bits (15th conversion in regular sequence) */
#define ADC_SQR1_SQ15_0   (0x01U << ADC_SQR1_SQ15_Pos) /*!< 0x00000400 */
#define ADC_SQR1_SQ15_1   (0x02U << ADC_SQR1_SQ15_Pos) /*!< 0x00000800 */
#define ADC_SQR1_SQ15_2   (0x04U << ADC_SQR1_SQ15_Pos) /*!< 0x00001000 */
#define ADC_SQR1_SQ15_3   (0x08U << ADC_SQR1_SQ15_Pos) /*!< 0x00002000 */
#define ADC_SQR1_SQ15_4   (0x10U << ADC_SQR1_SQ15_Pos) /*!< 0x00004000 */
#define ADC_SQR1_SQ16_Pos (15U)
#define ADC_SQR1_SQ16_Msk (0x1FU << ADC_SQR1_SQ16_Pos) /*!< 0x000F8000 */
#define ADC_SQR1_SQ16     ADC_SQR1_SQ16_Msk            /*!<SQ16[4:0] bits (16th conversion in regular sequence) */
#define ADC_SQR1_SQ16_0   (0x01U << ADC_SQR1_SQ16_Pos) /*!< 0x00008000 */
#define ADC_SQR1_SQ16_1   (0x02U << ADC_SQR1_SQ16_Pos) /*!< 0x00010000 */
#define ADC_SQR1_SQ16_2   (0x04U << ADC_SQR1_SQ16_Pos) /*!< 0x00020000 */
#define ADC_SQR1_SQ16_3   (0x08U << ADC_SQR1_SQ16_Pos) /*!< 0x00040000 */
#define ADC_SQR1_SQ16_4   (0x10U << ADC_SQR1_SQ16_Pos) /*!< 0x00080000 */
#define ADC_SQR1_L_Pos    (20U)
#define ADC_SQR1_L_Msk    (0xFU << ADC_SQR1_L_Pos) /*!< 0x00F00000 */
#define ADC_SQR1_L        ADC_SQR1_L_Msk           /*!<L[3:0] bits (Regular channel sequence length) */
#define ADC_SQR1_L_0      (0x1U << ADC_SQR1_L_Pos) /*!< 0x00100000 */
#define ADC_SQR1_L_1      (0x2U << ADC_SQR1_L_Pos) /*!< 0x00200000 */
#define ADC_SQR1_L_2      (0x4U << ADC_SQR1_L_Pos) /*!< 0x00400000 */
#define ADC_SQR1_L_3      (0x8U << ADC_SQR1_L_Pos) /*!< 0x00800000 */

/*******************  Bit definition for ADC_SQR2 register  *******************/
#define ADC_SQR2_SQ7_Pos  (0U)
#define ADC_SQR2_SQ7_Msk  (0x1FU << ADC_SQR2_SQ7_Pos) /*!< 0x0000001F */
#define ADC_SQR2_SQ7      ADC_SQR2_SQ7_Msk            /*!<SQ7[4:0] bits (7th conversion in regular sequence) */
#define ADC_SQR2_SQ7_0    (0x01U << ADC_SQR2_SQ7_Pos) /*!< 0x00000001 */
#define ADC_SQR2_SQ7_1    (0x02U << ADC_SQR2_SQ7_Pos) /*!< 0x00000002 */
#define ADC_SQR2_SQ7_2    (0x04U << ADC_SQR2_SQ7_Pos) /*!< 0x00000004 */
#define ADC_SQR2_SQ7_3    (0x08U << ADC_SQR2_SQ7_Pos) /*!< 0x00000008 */
#define ADC_SQR2_SQ7_4    (0x10U << ADC_SQR2_SQ7_Pos) /*!< 0x00000010 */
#define ADC_SQR2_SQ8_Pos  (5U)
#define ADC_SQR2_SQ8_Msk  (0x1FU << ADC_SQR2_SQ8_Pos) /*!< 0x000003E0 */
#define ADC_SQR2_SQ8      ADC_SQR2_SQ8_Msk            /*!<SQ8[4:0] bits (8th conversion in regular sequence) */
#define ADC_SQR2_SQ8_0    (0x01U << ADC_SQR2_SQ8_Pos) /*!< 0x00000020 */
#define ADC_SQR2_SQ8_1    (0x02U << ADC_SQR2_SQ8_Pos) /*!< 0x00000040 */
#define ADC_SQR2_SQ8_2    (0x04U << ADC_SQR2_SQ8_Pos) /*!< 0x00000080 */
#define ADC_SQR2_SQ8_3    (0x08U << ADC_SQR2_SQ8_Pos) /*!< 0x00000100 */
#define ADC_SQR2_SQ8_4    (0x10U << ADC_SQR2_SQ8_Pos) /*!< 0x00000200 */
#define ADC_SQR2_SQ9_Pos  (10U)
#define ADC_SQR2_SQ9_Msk  (0x1FU << ADC_SQR2_SQ9_Pos) /*!< 0x00007C00 */
#define ADC_SQR2_SQ9      ADC_SQR2_SQ9_Msk            /*!<SQ9[4:0] bits (9th conversion in regular sequence) */
#define ADC_SQR2_SQ9_0    (0x01U << ADC_SQR2_SQ9_Pos) /*!< 0x00000400 */
#define ADC_SQR2_SQ9_1    (0x02U << ADC_SQR2_SQ9_Pos) /*!< 0x00000800 */
#define ADC_SQR2_SQ9_2    (0x04U << ADC_SQR2_SQ9_Pos) /*!< 0x00001000 */
#define ADC_SQR2_SQ9_3    (0x08U << ADC_SQR2_SQ9_Pos) /*!< 0x00002000 */
#define ADC_SQR2_SQ9_4    (0x10U << ADC_SQR2_SQ9_Pos) /*!< 0x00004000 */
#define ADC_SQR2_SQ10_Pos (15U)
#define ADC_SQR2_SQ10_Msk (0x1FU << ADC_SQR2_SQ10_Pos) /*!< 0x000F8000 */
#define ADC_SQR2_SQ10     ADC_SQR2_SQ10_Msk            /*!<SQ10[4:0] bits (10th conversion in regular sequence) */
#define ADC_SQR2_SQ10_0   (0x01U << ADC_SQR2_SQ10_Pos) /*!< 0x00008000 */
#define ADC_SQR2_SQ10_1   (0x02U << ADC_SQR2_SQ10_Pos) /*!< 0x00010000 */
#define ADC_SQR2_SQ10_2   (0x04U << ADC_SQR2_SQ10_Pos) /*!< 0x00020000 */
#define ADC_SQR2_SQ10_3   (0x08U << ADC_SQR2_SQ10_Pos) /*!< 0x00040000 */
#define ADC_SQR2_SQ10_4   (0x10U << ADC_SQR2_SQ10_Pos) /*!< 0x00080000 */
#define ADC_SQR2_SQ11_Pos (20U)
#define ADC_SQR2_SQ11_Msk (0x1FU << ADC_SQR2_SQ11_Pos) /*!< 0x01F00000 */
#define ADC_SQR2_SQ11     ADC_SQR2_SQ11_Msk            /*!<SQ11[4:0] bits (11th conversion in regular sequence) */
#define ADC_SQR2_SQ11_0   (0x01U << ADC_SQR2_SQ11_Pos) /*!< 0x00100000 */
#define ADC_SQR2_SQ11_1   (0x02U << ADC_SQR2_SQ11_Pos) /*!< 0x00200000 */
#define ADC_SQR2_SQ11_2   (0x04U << ADC_SQR2_SQ11_Pos) /*!< 0x00400000 */
#define ADC_SQR2_SQ11_3   (0x08U << ADC_SQR2_SQ11_Pos) /*!< 0x00800000 */
#define ADC_SQR2_SQ11_4   (0x10U << ADC_SQR2_SQ11_Pos) /*!< 0x01000000 */
#define ADC_SQR2_SQ12_Pos (25U)
#define ADC_SQR2_SQ12_Msk (0x1FU << ADC_SQR2_SQ12_Pos) /*!< 0x3E000000 */
#define ADC_SQR2_SQ12     ADC_SQR2_SQ12_Msk            /*!<SQ12[4:0] bits (12th conversion in regular sequence) */
#define ADC_SQR2_SQ12_0   (0x01U << ADC_SQR2_SQ12_Pos) /*!< 0x02000000 */
#define ADC_SQR2_SQ12_1   (0x02U << ADC_SQR2_SQ12_Pos) /*!< 0x04000000 */
#define ADC_SQR2_SQ12_2   (0x04U << ADC_SQR2_SQ12_Pos) /*!< 0x08000000 */
#define ADC_SQR2_SQ12_3   (0x08U << ADC_SQR2_SQ12_Pos) /*!< 0x10000000 */
#define ADC_SQR2_SQ12_4   (0x10U << ADC_SQR2_SQ12_Pos) /*!< 0x20000000 */

/*******************  Bit definition for ADC_SQR3 register  *******************/
#define ADC_SQR3_SQ1_Pos (0U)
#define ADC_SQR3_SQ1_Msk (0x1FU << ADC_SQR3_SQ1_Pos) /*!< 0x0000001F */
#define ADC_SQR3_SQ1     ADC_SQR3_SQ1_Msk            /*!<SQ1[4:0] bits (1st conversion in regular sequence) */
#define ADC_SQR3_SQ1_0   (0x01U << ADC_SQR3_SQ1_Pos) /*!< 0x00000001 */
#define ADC_SQR3_SQ1_1   (0x02U << ADC_SQR3_SQ1_Pos) /*!< 0x00000002 */
#define ADC_SQR3_SQ1_2   (0x04U << ADC_SQR3_SQ1_Pos) /*!< 0x00000004 */
#define ADC_SQR3_SQ1_3   (0x08U << ADC_SQR3_SQ1_Pos) /*!< 0x00000008 */
#define ADC_SQR3_SQ1_4   (0x10U << ADC_SQR3_SQ1_Pos) /*!< 0x00000010 */
#define ADC_SQR3_SQ2_Pos (5U)
#define ADC_SQR3_SQ2_Msk (0x1FU << ADC_SQR3_SQ2_Pos) /*!< 0x000003E0 */
#define ADC_SQR3_SQ2     ADC_SQR3_SQ2_Msk            /*!<SQ2[4:0] bits (2nd conversion in regular sequence) */
#define ADC_SQR3_SQ2_0   (0x01U << ADC_SQR3_SQ2_Pos) /*!< 0x00000020 */
#define ADC_SQR3_SQ2_1   (0x02U << ADC_SQR3_SQ2_Pos) /*!< 0x00000040 */
#define ADC_SQR3_SQ2_2   (0x04U << ADC_SQR3_SQ2_Pos) /*!< 0x00000080 */
#define ADC_SQR3_SQ2_3   (0x08U << ADC_SQR3_SQ2_Pos) /*!< 0x00000100 */
#define ADC_SQR3_SQ2_4   (0x10U << ADC_SQR3_SQ2_Pos) /*!< 0x00000200 */
#define ADC_SQR3_SQ3_Pos (10U)
#define ADC_SQR3_SQ3_Msk (0x1FU << ADC_SQR3_SQ3_Pos) /*!< 0x00007C00 */
#define ADC_SQR3_SQ3     ADC_SQR3_SQ3_Msk            /*!<SQ3[4:0] bits (3rd conversion in regular sequence) */
#define ADC_SQR3_SQ3_0   (0x01U << ADC_SQR3_SQ3_Pos) /*!< 0x00000400 */
#define ADC_SQR3_SQ3_1   (0x02U << ADC_SQR3_SQ3_Pos) /*!< 0x00000800 */
#define ADC_SQR3_SQ3_2   (0x04U << ADC_SQR3_SQ3_Pos) /*!< 0x00001000 */
#define ADC_SQR3_SQ3_3   (0x08U << ADC_SQR3_SQ3_Pos) /*!< 0x00002000 */
#define ADC_SQR3_SQ3_4   (0x10U << ADC_SQR3_SQ3_Pos) /*!< 0x00004000 */
#define ADC_SQR3_SQ4_Pos (15U)
#define ADC_SQR3_SQ4_Msk (0x1FU << ADC_SQR3_SQ4_Pos) /*!< 0x000F8000 */
#define ADC_SQR3_SQ4     ADC_SQR3_SQ4_Msk            /*!<SQ4[4:0] bits (4th conversion in regular sequence) */
#define ADC_SQR3_SQ4_0   (0x01U << ADC_SQR3_SQ4_Pos) /*!< 0x00008000 */
#define ADC_SQR3_SQ4_1   (0x02U << ADC_SQR3_SQ4_Pos) /*!< 0x00010000 */
#define ADC_SQR3_SQ4_2   (0x04U << ADC_SQR3_SQ4_Pos) /*!< 0x00020000 */
#define ADC_SQR3_SQ4_3   (0x08U << ADC_SQR3_SQ4_Pos) /*!< 0x00040000 */
#define ADC_SQR3_SQ4_4   (0x10U << ADC_SQR3_SQ4_Pos) /*!< 0x00080000 */
#define ADC_SQR3_SQ5_Pos (20U)
#define ADC_SQR3_SQ5_Msk (0x1FU << ADC_SQR3_SQ5_Pos) /*!< 0x01F00000 */
#define ADC_SQR3_SQ5     ADC_SQR3_SQ5_Msk            /*!<SQ5[4:0] bits (5th conversion in regular sequence) */
#define ADC_SQR3_SQ5_0   (0x01U << ADC_SQR3_SQ5_Pos) /*!< 0x00100000 */
#define ADC_SQR3_SQ5_1   (0x02U << ADC_SQR3_SQ5_Pos) /*!< 0x00200000 */
#define ADC_SQR3_SQ5_2   (0x04U << ADC_SQR3_SQ5_Pos) /*!< 0x00400000 */
#define ADC_SQR3_SQ5_3   (0x08U << ADC_SQR3_SQ5_Pos) /*!< 0x00800000 */
#define ADC_SQR3_SQ5_4   (0x10U << ADC_SQR3_SQ5_Pos) /*!< 0x01000000 */
#define ADC_SQR3_SQ6_Pos (25U)
#define ADC_SQR3_SQ6_Msk (0x1FU << ADC_SQR3_SQ6_Pos) /*!< 0x3E000000 */
#define ADC_SQR3_SQ6     ADC_SQR3_SQ6_Msk            /*!<SQ6[4:0] bits (6th conversion in regular sequence) */
#define ADC_SQR3_SQ6_0   (0x01U << ADC_SQR3_SQ6_Pos) /*!< 0x02000000 */
#define ADC_SQR3_SQ6_1   (0x02U << ADC_SQR3_SQ6_Pos) /*!< 0x04000000 */
#define ADC_SQR3_SQ6_2   (0x04U << ADC_SQR3_SQ6_Pos) /*!< 0x08000000 */
#define ADC_SQR3_SQ6_3   (0x08U << ADC_SQR3_SQ6_Pos) /*!< 0x10000000 */
#define ADC_SQR3_SQ6_4   (0x10U << ADC_SQR3_SQ6_Pos) /*!< 0x20000000 */

/*******************  Bit definition for ADC_JSQR register  *******************/
#define ADC_JSQR_JSQ1_Pos (0U)
#define ADC_JSQR_JSQ1_Msk (0x1FU << ADC_JSQR_JSQ1_Pos) /*!< 0x0000001F */
#define ADC_JSQR_JSQ1     ADC_JSQR_JSQ1_Msk            /*!<JSQ1[4:0] bits (1st conversion in injected sequence) */
#define ADC_JSQR_JSQ1_0   (0x01U << ADC_JSQR_JSQ1_Pos) /*!< 0x00000001 */
#define ADC_JSQR_JSQ1_1   (0x02U << ADC_JSQR_JSQ1_Pos) /*!< 0x00000002 */
#define ADC_JSQR_JSQ1_2   (0x04U << ADC_JSQR_JSQ1_Pos) /*!< 0x00000004 */
#define ADC_JSQR_JSQ1_3   (0x08U << ADC_JSQR_JSQ1_Pos) /*!< 0x00000008 */
#define ADC_JSQR_JSQ1_4   (0x10U << ADC_JSQR_JSQ1_Pos) /*!< 0x00000010 */
#define ADC_JSQR_JSQ2_Pos (5U)
#define ADC_JSQR_JSQ2_Msk (0x1FU << ADC_JSQR_JSQ2_Pos) /*!< 0x000003E0 */
#define ADC_JSQR_JSQ2     ADC_JSQR_JSQ2_Msk            /*!<JSQ2[4:0] bits (2nd conversion in injected sequence) */
#define ADC_JSQR_JSQ2_0   (0x01U << ADC_JSQR_JSQ2_Pos) /*!< 0x00000020 */
#define ADC_JSQR_JSQ2_1   (0x02U << ADC_JSQR_JSQ2_Pos) /*!< 0x00000040 */
#define ADC_JSQR_JSQ2_2   (0x04U << ADC_JSQR_JSQ2_Pos) /*!< 0x00000080 */
#define ADC_JSQR_JSQ2_3   (0x08U << ADC_JSQR_JSQ2_Pos) /*!< 0x00000100 */
#define ADC_JSQR_JSQ2_4   (0x10U << ADC_JSQR_JSQ2_Pos) /*!< 0x00000200 */
#define ADC_JSQR_JSQ3_Pos (10U)
#define ADC_JSQR_JSQ3_Msk (0x1FU << ADC_JSQR_JSQ3_Pos) /*!< 0x00007C00 */
#define ADC_JSQR_JSQ3     ADC_JSQR_JSQ3_Msk            /*!<JSQ3[4:0] bits (3rd conversion in injected sequence) */
#define ADC_JSQR_JSQ3_0   (0x01U << ADC_JSQR_JSQ3_Pos) /*!< 0x00000400 */
#define ADC_JSQR_JSQ3_1   (0x02U << ADC_JSQR_JSQ3_Pos) /*!< 0x00000800 */
#define ADC_JSQR_JSQ3_2   (0x04U << ADC_JSQR_JSQ3_Pos) /*!< 0x00001000 */
#define ADC_JSQR_JSQ3_3   (0x08U << ADC_JSQR_JSQ3_Pos) /*!< 0x00002000 */
#define ADC_JSQR_JSQ3_4   (0x10U << ADC_JSQR_JSQ3_Pos) /*!< 0x00004000 */
#define ADC_JSQR_JSQ4_Pos (15U)
#define ADC_JSQR_JSQ4_Msk (0x1FU << ADC_JSQR_JSQ4_Pos) /*!< 0x000F8000 */
#define ADC_JSQR_JSQ4     ADC_JSQR_JSQ4_Msk            /*!<JSQ4[4:0] bits (4th conversion in injected sequence) */
#define ADC_JSQR_JSQ4_0   (0x01U << ADC_JSQR_JSQ4_Pos) /*!< 0x00008000 */
#define ADC_JSQR_JSQ4_1   (0x02U << ADC_JSQR_JSQ4_Pos) /*!< 0x00010000 */
#define ADC_JSQR_JSQ4_2   (0x04U << ADC_JSQR_JSQ4_Pos) /*!< 0x00020000 */
#define ADC_JSQR_JSQ4_3   (0x08U << ADC_JSQR_JSQ4_Pos) /*!< 0x00040000 */
#define ADC_JSQR_JSQ4_4   (0x10U << ADC_JSQR_JSQ4_Pos) /*!< 0x00080000 */
#define ADC_JSQR_JL_Pos   (20U)
#define ADC_JSQR_JL_Msk   (0x3U << ADC_JSQR_JL_Pos) /*!< 0x00300000 */
#define ADC_JSQR_JL       ADC_JSQR_JL_Msk           /*!<JL[1:0] bits (Injected Sequence length) */
#define ADC_JSQR_JL_0     (0x1U << ADC_JSQR_JL_Pos) /*!< 0x00100000 */
#define ADC_JSQR_JL_1     (0x2U << ADC_JSQR_JL_Pos) /*!< 0x00200000 */

/*******************  Bit definition for ADC_JDR1 register  *******************/
#define ADC_JDR1_JDATA_Pos (0U)
#define ADC_JDR1_JDATA_Msk (0xFFFFU << ADC_JDR1_JDATA_Pos) /*!< 0x0000FFFF */
#define ADC_JDR1_JDATA     ADC_JDR1_JDATA_Msk              /*!<Injected data */

/*******************  Bit definition for ADC_JDR2 register  *******************/
#define ADC_JDR2_JDATA_Pos (0U)
#define ADC_JDR2_JDATA_Msk (0xFFFFU << ADC_JDR2_JDATA_Pos) /*!< 0x0000FFFF */
#define ADC_JDR2_JDATA     ADC_JDR2_JDATA_Msk              /*!<Injected data */

/*******************  Bit definition for ADC_JDR3 register  *******************/
#define ADC_JDR3_JDATA_Pos (0U)
#define ADC_JDR3_JDATA_Msk (0xFFFFU << ADC_JDR3_JDATA_Pos) /*!< 0x0000FFFF */
#define ADC_JDR3_JDATA     ADC_JDR3_JDATA_Msk              /*!<Injected data */

/*******************  Bit definition for ADC_JDR4 register  *******************/
#define ADC_JDR4_JDATA_Pos (0U)
#define ADC_JDR4_JDATA_Msk (0xFFFFU << ADC_JDR4_JDATA_Pos) /*!< 0x0000FFFF */
#define ADC_JDR4_JDATA     ADC_JDR4_JDATA_Msk              /*!<Injected data */

/********************  Bit definition for ADC_DR register  ********************/
#define ADC_DR_DATA_Pos     (0U)
#define ADC_DR_DATA_Msk     (0xFFFFU << ADC_DR_DATA_Pos) /*!< 0x0000FFFF */
#define ADC_DR_DATA         ADC_DR_DATA_Msk              /*!<Regular data */
#define ADC_DR_ADC2DATA_Pos (16U)
#define ADC_DR_ADC2DATA_Msk (0xFFFFU << ADC_DR_ADC2DATA_Pos) /*!< 0xFFFF0000 */
#define ADC_DR_ADC2DATA     ADC_DR_ADC2DATA_Msk              /*!<ADC2 data */

/*******************  Bit definition for ADC_CSR register  ********************/
#define ADC_CSR_AWD1_Pos   (0U)
#define ADC_CSR_AWD1_Msk   (0x1U << ADC_CSR_AWD1_Pos) /*!< 0x00000001 */
#define ADC_CSR_AWD1       ADC_CSR_AWD1_Msk           /*!<ADC1 Analog watchdog flag */
#define ADC_CSR_EOC1_Pos   (1U)
#define ADC_CSR_EOC1_Msk   (0x1U << ADC_CSR_EOC1_Pos) /*!< 0x00000002 */
#define ADC_CSR_EOC1       ADC_CSR_EOC1_Msk           /*!<ADC1 End of conversion */
#define ADC_CSR_JEOC1_Pos  (2U)
#define ADC_CSR_JEOC1_Msk  (0x1U << ADC_CSR_JEOC1_Pos) /*!< 0x00000004 */
#define ADC_CSR_JEOC1      ADC_CSR_JEOC1_Msk           /*!<ADC1 Injected channel end of conversion */
#define ADC_CSR_JSTRT1_Pos (3U)
#define ADC_CSR_JSTRT1_Msk (0x1U << ADC_CSR_JSTRT1_Pos) /*!< 0x00000008 */
#define ADC_CSR_JSTRT1     ADC_CSR_JSTRT1_Msk           /*!<ADC1 Injected channel Start flag */
#define ADC_CSR_STRT1_Pos  (4U)
#define ADC_CSR_STRT1_Msk  (0x1U << ADC_CSR_STRT1_Pos) /*!< 0x00000010 */
#define ADC_CSR_STRT1      ADC_CSR_STRT1_Msk           /*!<ADC1 Regular channel Start flag */
#define ADC_CSR_OVR1_Pos   (5U)
#define ADC_CSR_OVR1_Msk   (0x1U << ADC_CSR_OVR1_Pos) /*!< 0x00000020 */
#define ADC_CSR_OVR1       ADC_CSR_OVR1_Msk           /*!<ADC1 DMA overrun  flag */
#define ADC_CSR_AWD2_Pos   (8U)
#define ADC_CSR_AWD2_Msk   (0x1U << ADC_CSR_AWD2_Pos) /*!< 0x00000100 */
#define ADC_CSR_AWD2       ADC_CSR_AWD2_Msk           /*!<ADC2 Analog watchdog flag */
#define ADC_CSR_EOC2_Pos   (9U)
#define ADC_CSR_EOC2_Msk   (0x1U << ADC_CSR_EOC2_Pos) /*!< 0x00000200 */
#define ADC_CSR_EOC2       ADC_CSR_EOC2_Msk           /*!<ADC2 End of conversion */
#define ADC_CSR_JEOC2_Pos  (10U)
#define ADC_CSR_JEOC2_Msk  (0x1U << ADC_CSR_JEOC2_Pos) /*!< 0x00000400 */
#define ADC_CSR_JEOC2      ADC_CSR_JEOC2_Msk           /*!<ADC2 Injected channel end of conversion */
#define ADC_CSR_JSTRT2_Pos (11U)
#define ADC_CSR_JSTRT2_Msk (0x1U << ADC_CSR_JSTRT2_Pos) /*!< 0x00000800 */
#define ADC_CSR_JSTRT2     ADC_CSR_JSTRT2_Msk           /*!<ADC2 Injected channel Start flag */
#define ADC_CSR_STRT2_Pos  (12U)
#define ADC_CSR_STRT2_Msk  (0x1U << ADC_CSR_STRT2_Pos) /*!< 0x00001000 */
#define ADC_CSR_STRT2      ADC_CSR_STRT2_Msk           /*!<ADC2 Regular channel Start flag */
#define ADC_CSR_OVR2_Pos   (13U)
#define ADC_CSR_OVR2_Msk   (0x1U << ADC_CSR_OVR2_Pos) /*!< 0x00002000 */
#define ADC_CSR_OVR2       ADC_CSR_OVR2_Msk           /*!<ADC2 DMA overrun  flag */
#define ADC_CSR_AWD3_Pos   (16U)
#define ADC_CSR_AWD3_Msk   (0x1U << ADC_CSR_AWD3_Pos) /*!< 0x00010000 */
#define ADC_CSR_AWD3       ADC_CSR_AWD3_Msk           /*!<ADC3 Analog watchdog flag */
#define ADC_CSR_EOC3_Pos   (17U)
#define ADC_CSR_EOC3_Msk   (0x1U << ADC_CSR_EOC3_Pos) /*!< 0x00020000 */
#define ADC_CSR_EOC3       ADC_CSR_EOC3_Msk           /*!<ADC3 End of conversion */
#define ADC_CSR_JEOC3_Pos  (18U)
#define ADC_CSR_JEOC3_Msk  (0x1U << ADC_CSR_JEOC3_Pos) /*!< 0x00040000 */
#define ADC_CSR_JEOC3      ADC_CSR_JEOC3_Msk           /*!<ADC3 Injected channel end of conversion */
#define ADC_CSR_JSTRT3_Pos (19U)
#define ADC_CSR_JSTRT3_Msk (0x1U << ADC_CSR_JSTRT3_Pos) /*!< 0x00080000 */
#define ADC_CSR_JSTRT3     ADC_CSR_JSTRT3_Msk           /*!<ADC3 Injected channel Start flag */
#define ADC_CSR_STRT3_Pos  (20U)
#define ADC_CSR_STRT3_Msk  (0x1U << ADC_CSR_STRT3_Pos) /*!< 0x00100000 */
#define ADC_CSR_STRT3      ADC_CSR_STRT3_Msk           /*!<ADC3 Regular channel Start flag */
#define ADC_CSR_OVR3_Pos   (21U)
#define ADC_CSR_OVR3_Msk   (0x1U << ADC_CSR_OVR3_Pos) /*!< 0x00200000 */
#define ADC_CSR_OVR3       ADC_CSR_OVR3_Msk           /*!<ADC3 DMA overrun  flag */

/* Legacy defines */
#define  ADC_CSR_DOVR1 ADC_CSR_OVR1
#define  ADC_CSR_DOVR2 ADC_CSR_OVR2
#define  ADC_CSR_DOVR3 ADC_CSR_OVR3

/*******************  Bit definition for ADC_CCR register  ********************/
#define ADC_CCR_MULTI_Pos   (0U)
#define ADC_CCR_MULTI_Msk   (0x1FU << ADC_CCR_MULTI_Pos) /*!< 0x0000001F */
#define ADC_CCR_MULTI       ADC_CCR_MULTI_Msk            /*!<MULTI[4:0] bits (Multi-ADC mode selection) */
#define ADC_CCR_MULTI_0     (0x01U << ADC_CCR_MULTI_Pos) /*!< 0x00000001 */
#define ADC_CCR_MULTI_1     (0x02U << ADC_CCR_MULTI_Pos) /*!< 0x00000002 */
#define ADC_CCR_MULTI_2     (0x04U << ADC_CCR_MULTI_Pos) /*!< 0x00000004 */
#define ADC_CCR_MULTI_3     (0x08U << ADC_CCR_MULTI_Pos) /*!< 0x00000008 */
#define ADC_CCR_MULTI_4     (0x10U << ADC_CCR_MULTI_Pos) /*!< 0x00000010 */
#define ADC_CCR_DELAY_Pos   (8U)
#define ADC_CCR_DELAY_Msk   (0xFU << ADC_CCR_DELAY_Pos) /*!< 0x00000F00 */
#define ADC_CCR_DELAY       ADC_CCR_DELAY_Msk           /*!<DELAY[3:0] bits (Delay between 2 sampling phases) */
#define ADC_CCR_DELAY_0     (0x1U << ADC_CCR_DELAY_Pos) /*!< 0x00000100 */
#define ADC_CCR_DELAY_1     (0x2U << ADC_CCR_DELAY_Pos) /*!< 0x00000200 */
#define ADC_CCR_DELAY_2     (0x4U << ADC_CCR_DELAY_Pos) /*!< 0x00000400 */
#define ADC_CCR_DELAY_3     (0x8U << ADC_CCR_DELAY_Pos) /*!< 0x00000800 */
#define ADC_CCR_DDS_Pos     (13U)
#define ADC_CCR_DDS_Msk     (0x1U << ADC_CCR_DDS_Pos) /*!< 0x00002000 */
#define ADC_CCR_DDS         ADC_CCR_DDS_Msk           /*!<DMA disable selection (Multi-ADC mode) */
#define ADC_CCR_DMA_Pos     (14U)
#define ADC_CCR_DMA_Msk     (0x3U << ADC_CCR_DMA_Pos) /*!< 0x0000C000 */
#define ADC_CCR_DMA         ADC_CCR_DMA_Msk           /*!<DMA[1:0] bits (Direct Memory Access mode for multimode) */
#define ADC_CCR_DMA_0       (0x1U << ADC_CCR_DMA_Pos) /*!< 0x00004000 */
#define ADC_CCR_DMA_1       (0x2U << ADC_CCR_DMA_Pos) /*!< 0x00008000 */
#define ADC_CCR_ADCPRE_Pos  (16U)
#define ADC_CCR_ADCPRE_Msk  (0x3U << ADC_CCR_ADCPRE_Pos) /*!< 0x00030000 */
#define ADC_CCR_ADCPRE      ADC_CCR_ADCPRE_Msk           /*!<ADCPRE[1:0] bits (ADC prescaler) */
#define ADC_CCR_ADCPRE_0    (0x1U << ADC_CCR_ADCPRE_Pos) /*!< 0x00010000 */
#define ADC_CCR_ADCPRE_1    (0x2U << ADC_CCR_ADCPRE_Pos) /*!< 0x00020000 */
#define ADC_CCR_VBATE_Pos   (22U)
#define ADC_CCR_VBATE_Msk   (0x1U << ADC_CCR_VBATE_Pos) /*!< 0x00400000 */
#define ADC_CCR_VBATE       ADC_CCR_VBATE_Msk           /*!<VBAT Enable */
#define ADC_CCR_TSVREFE_Pos (23U)
#define ADC_CCR_TSVREFE_Msk (0x1U << ADC_CCR_TSVREFE_Pos) /*!< 0x00800000 */
#define ADC_CCR_TSVREFE     ADC_CCR_TSVREFE_Msk           /*!<Temperature Sensor and VREFINT Enable */

/*******************  Bit definition for ADC_CDR register  ********************/
#define ADC_CDR_DATA1_Pos (0U)
#define ADC_CDR_DATA1_Msk (0xFFFFU << ADC_CDR_DATA1_Pos) /*!< 0x0000FFFF */
#define ADC_CDR_DATA1     ADC_CDR_DATA1_Msk              /*!<1st data of a pair of regular conversions */
#define ADC_CDR_DATA2_Pos (16U)
#define ADC_CDR_DATA2_Msk (0xFFFFU << ADC_CDR_DATA2_Pos) /*!< 0xFFFF0000 */
#define ADC_CDR_DATA2     ADC_CDR_DATA2_Msk              /*!<2nd data of a pair of regular conversions */

/* Legacy defines */
#define ADC_CDR_RDATA_MST ADC_CDR_DATA1
#define ADC_CDR_RDATA_SLV ADC_CDR_DATA2

/******************************************************************************/
/*                                                                            */
/*                         Controller Area Network                            */
/*                                                                            */
/******************************************************************************/
/*!<CAN control and status registers */
/*******************  Bit definition for CAN_MCR register  ********************/
#define CAN_MCR_INRQ_Pos  (0U)
#define CAN_MCR_INRQ_Msk  (0x1U << CAN_MCR_INRQ_Pos) /*!< 0x00000001 */
#define CAN_MCR_INRQ      CAN_MCR_INRQ_Msk           /*!<Initialization Request */
#define CAN_MCR_SLEEP_Pos (1U)
#define CAN_MCR_SLEEP_Msk (0x1U << CAN_MCR_SLEEP_Pos) /*!< 0x00000002 */
#define CAN_MCR_SLEEP     CAN_MCR_SLEEP_Msk           /*!<Sleep Mode Request */
#define CAN_MCR_TXFP_Pos  (2U)
#define CAN_MCR_TXFP_Msk  (0x1U << CAN_MCR_TXFP_Pos) /*!< 0x00000004 */
#define CAN_MCR_TXFP      CAN_MCR_TXFP_Msk           /*!<Transmit FIFO Priority */
#define CAN_MCR_RFLM_Pos  (3U)
#define CAN_MCR_RFLM_Msk  (0x1U << CAN_MCR_RFLM_Pos) /*!< 0x00000008 */
#define CAN_MCR_RFLM      CAN_MCR_RFLM_Msk           /*!<Receive FIFO Locked Mode */
#define CAN_MCR_NART_Pos  (4U)
#define CAN_MCR_NART_Msk  (0x1U << CAN_MCR_NART_Pos) /*!< 0x00000010 */
#define CAN_MCR_NART      CAN_MCR_NART_Msk           /*!<No Automatic Retransmission */
#define CAN_MCR_AWUM_Pos  (5U)
#define CAN_MCR_AWUM_Msk  (0x1U << CAN_MCR_AWUM_Pos) /*!< 0x00000020 */
#define CAN_MCR_AWUM      CAN_MCR_AWUM_Msk           /*!<Automatic Wakeup Mode */
#define CAN_MCR_ABOM_Pos  (6U)
#define CAN_MCR_ABOM_Msk  (0x1U << CAN_MCR_ABOM_Pos) /*!< 0x00000040 */
#define CAN_MCR_ABOM      CAN_MCR_ABOM_Msk           /*!<Automatic Bus-Off Management */
#define CAN_MCR_TTCM_Pos  (7U)
#define CAN_MCR_TTCM_Msk  (0x1U << CAN_MCR_TTCM_Pos) /*!< 0x00000080 */
#define CAN_MCR_TTCM      CAN_MCR_TTCM_Msk           /*!<Time Triggered Communication Mode */
#define CAN_MCR_RESET_Pos (15U)
#define CAN_MCR_RESET_Msk (0x1U << CAN_MCR_RESET_Pos) /*!< 0x00008000 */
#define CAN_MCR_RESET     CAN_MCR_RESET_Msk           /*!<bxCAN software master reset */
#define CAN_MCR_DBF_Pos   (16U)
#define CAN_MCR_DBF_Msk   (0x1U << CAN_MCR_DBF_Pos) /*!< 0x00010000 */
#define CAN_MCR_DBF       CAN_MCR_DBF_Msk           /*!<bxCAN Debug freeze */
/*******************  Bit definition for CAN_MSR register  ********************/
#define CAN_MSR_INAK_Pos  (0U)
#define CAN_MSR_INAK_Msk  (0x1U << CAN_MSR_INAK_Pos) /*!< 0x00000001 */
#define CAN_MSR_INAK      CAN_MSR_INAK_Msk           /*!<Initialization Acknowledge */
#define CAN_MSR_SLAK_Pos  (1U)
#define CAN_MSR_SLAK_Msk  (0x1U << CAN_MSR_SLAK_Pos) /*!< 0x00000002 */
#define CAN_MSR_SLAK      CAN_MSR_SLAK_Msk           /*!<Sleep Acknowledge */
#define CAN_MSR_ERRI_Pos  (2U)
#define CAN_MSR_ERRI_Msk  (0x1U << CAN_MSR_ERRI_Pos) /*!< 0x00000004 */
#define CAN_MSR_ERRI      CAN_MSR_ERRI_Msk           /*!<Error Interrupt */
#define CAN_MSR_WKUI_Pos  (3U)
#define CAN_MSR_WKUI_Msk  (0x1U << CAN_MSR_WKUI_Pos) /*!< 0x00000008 */
#define CAN_MSR_WKUI      CAN_MSR_WKUI_Msk           /*!<Wakeup Interrupt */
#define CAN_MSR_SLAKI_Pos (4U)
#define CAN_MSR_SLAKI_Msk (0x1U << CAN_MSR_SLAKI_Pos) /*!< 0x00000010 */
#define CAN_MSR_SLAKI     CAN_MSR_SLAKI_Msk           /*!<Sleep Acknowledge Interrupt */
#define CAN_MSR_TXM_Pos   (8U)
#define CAN_MSR_TXM_Msk   (0x1U << CAN_MSR_TXM_Pos) /*!< 0x00000100 */
#define CAN_MSR_TXM       CAN_MSR_TXM_Msk           /*!<Transmit Mode */
#define CAN_MSR_RXM_Pos   (9U)
#define CAN_MSR_RXM_Msk   (0x1U << CAN_MSR_RXM_Pos) /*!< 0x00000200 */
#define CAN_MSR_RXM       CAN_MSR_RXM_Msk           /*!<Receive Mode */
#define CAN_MSR_SAMP_Pos  (10U)
#define CAN_MSR_SAMP_Msk  (0x1U << CAN_MSR_SAMP_Pos) /*!< 0x00000400 */
#define CAN_MSR_SAMP      CAN_MSR_SAMP_Msk           /*!<Last Sample Point */
#define CAN_MSR_RX_Pos    (11U)
#define CAN_MSR_RX_Msk    (0x1U << CAN_MSR_RX_Pos) /*!< 0x00000800 */
#define CAN_MSR_RX        CAN_MSR_RX_Msk           /*!<CAN Rx Signal */

/*******************  Bit definition for CAN_TSR register  ********************/
#define CAN_TSR_RQCP0_Pos (0U)
#define CAN_TSR_RQCP0_Msk (0x1U << CAN_TSR_RQCP0_Pos) /*!< 0x00000001 */
#define CAN_TSR_RQCP0     CAN_TSR_RQCP0_Msk           /*!<Request Completed Mailbox0 */
#define CAN_TSR_TXOK0_Pos (1U)
#define CAN_TSR_TXOK0_Msk (0x1U << CAN_TSR_TXOK0_Pos) /*!< 0x00000002 */
#define CAN_TSR_TXOK0     CAN_TSR_TXOK0_Msk           /*!<Transmission OK of Mailbox0 */
#define CAN_TSR_ALST0_Pos (2U)
#define CAN_TSR_ALST0_Msk (0x1U << CAN_TSR_ALST0_Pos) /*!< 0x00000004 */
#define CAN_TSR_ALST0     CAN_TSR_ALST0_Msk           /*!<Arbitration Lost for Mailbox0 */
#define CAN_TSR_TERR0_Pos (3U)
#define CAN_TSR_TERR0_Msk (0x1U << CAN_TSR_TERR0_Pos) /*!< 0x00000008 */
#define CAN_TSR_TERR0     CAN_TSR_TERR0_Msk           /*!<Transmission Error of Mailbox0 */
#define CAN_TSR_ABRQ0_Pos (7U)
#define CAN_TSR_ABRQ0_Msk (0x1U << CAN_TSR_ABRQ0_Pos) /*!< 0x00000080 */
#define CAN_TSR_ABRQ0     CAN_TSR_ABRQ0_Msk           /*!<Abort Request for Mailbox0 */
#define CAN_TSR_RQCP1_Pos (8U)
#define CAN_TSR_RQCP1_Msk (0x1U << CAN_TSR_RQCP1_Pos) /*!< 0x00000100 */
#define CAN_TSR_RQCP1     CAN_TSR_RQCP1_Msk           /*!<Request Completed Mailbox1 */
#define CAN_TSR_TXOK1_Pos (9U)
#define CAN_TSR_TXOK1_Msk (0x1U << CAN_TSR_TXOK1_Pos) /*!< 0x00000200 */
#define CAN_TSR_TXOK1     CAN_TSR_TXOK1_Msk           /*!<Transmission OK of Mailbox1 */
#define CAN_TSR_ALST1_Pos (10U)
#define CAN_TSR_ALST1_Msk (0x1U << CAN_TSR_ALST1_Pos) /*!< 0x00000400 */
#define CAN_TSR_ALST1     CAN_TSR_ALST1_Msk           /*!<Arbitration Lost for Mailbox1 */
#define CAN_TSR_TERR1_Pos (11U)
#define CAN_TSR_TERR1_Msk (0x1U << CAN_TSR_TERR1_Pos) /*!< 0x00000800 */
#define CAN_TSR_TERR1     CAN_TSR_TERR1_Msk           /*!<Transmission Error of Mailbox1 */
#define CAN_TSR_ABRQ1_Pos (15U)
#define CAN_TSR_ABRQ1_Msk (0x1U << CAN_TSR_ABRQ1_Pos) /*!< 0x00008000 */
#define CAN_TSR_ABRQ1     CAN_TSR_ABRQ1_Msk           /*!<Abort Request for Mailbox 1 */
#define CAN_TSR_RQCP2_Pos (16U)
#define CAN_TSR_RQCP2_Msk (0x1U << CAN_TSR_RQCP2_Pos) /*!< 0x00010000 */
#define CAN_TSR_RQCP2     CAN_TSR_RQCP2_Msk           /*!<Request Completed Mailbox2 */
#define CAN_TSR_TXOK2_Pos (17U)
#define CAN_TSR_TXOK2_Msk (0x1U << CAN_TSR_TXOK2_Pos) /*!< 0x00020000 */
#define CAN_TSR_TXOK2     CAN_TSR_TXOK2_Msk           /*!<Transmission OK of Mailbox 2 */
#define CAN_TSR_ALST2_Pos (18U)
#define CAN_TSR_ALST2_Msk (0x1U << CAN_TSR_ALST2_Pos) /*!< 0x00040000 */
#define CAN_TSR_ALST2     CAN_TSR_ALST2_Msk           /*!<Arbitration Lost for mailbox 2 */
#define CAN_TSR_TERR2_Pos (19U)
#define CAN_TSR_TERR2_Msk (0x1U << CAN_TSR_TERR2_Pos) /*!< 0x00080000 */
#define CAN_TSR_TERR2     CAN_TSR_TERR2_Msk           /*!<Transmission Error of Mailbox 2 */
#define CAN_TSR_ABRQ2_Pos (23U)
#define CAN_TSR_ABRQ2_Msk (0x1U << CAN_TSR_ABRQ2_Pos) /*!< 0x00800000 */
#define CAN_TSR_ABRQ2     CAN_TSR_ABRQ2_Msk           /*!<Abort Request for Mailbox 2 */
#define CAN_TSR_CODE_Pos  (24U)
#define CAN_TSR_CODE_Msk  (0x3U << CAN_TSR_CODE_Pos) /*!< 0x03000000 */
#define CAN_TSR_CODE      CAN_TSR_CODE_Msk           /*!<Mailbox Code */

#define CAN_TSR_TME_Pos   (26U)
#define CAN_TSR_TME_Msk   (0x7U << CAN_TSR_TME_Pos) /*!< 0x1C000000 */
#define CAN_TSR_TME       CAN_TSR_TME_Msk           /*!<TME[2:0] bits */
#define CAN_TSR_TME0_Pos  (26U)
#define CAN_TSR_TME0_Msk  (0x1U << CAN_TSR_TME0_Pos) /*!< 0x04000000 */
#define CAN_TSR_TME0      CAN_TSR_TME0_Msk           /*!<Transmit Mailbox 0 Empty */
#define CAN_TSR_TME1_Pos  (27U)
#define CAN_TSR_TME1_Msk  (0x1U << CAN_TSR_TME1_Pos) /*!< 0x08000000 */
#define CAN_TSR_TME1      CAN_TSR_TME1_Msk           /*!<Transmit Mailbox 1 Empty */
#define CAN_TSR_TME2_Pos  (28U)
#define CAN_TSR_TME2_Msk  (0x1U << CAN_TSR_TME2_Pos) /*!< 0x10000000 */
#define CAN_TSR_TME2      CAN_TSR_TME2_Msk           /*!<Transmit Mailbox 2 Empty */

#define CAN_TSR_LOW_Pos   (29U)
#define CAN_TSR_LOW_Msk   (0x7U << CAN_TSR_LOW_Pos) /*!< 0xE0000000 */
#define CAN_TSR_LOW       CAN_TSR_LOW_Msk           /*!<LOW[2:0] bits */
#define CAN_TSR_LOW0_Pos  (29U)
#define CAN_TSR_LOW0_Msk  (0x1U << CAN_TSR_LOW0_Pos) /*!< 0x20000000 */
#define CAN_TSR_LOW0      CAN_TSR_LOW0_Msk           /*!<Lowest Priority Flag for Mailbox 0 */
#define CAN_TSR_LOW1_Pos  (30U)
#define CAN_TSR_LOW1_Msk  (0x1U << CAN_TSR_LOW1_Pos) /*!< 0x40000000 */
#define CAN_TSR_LOW1      CAN_TSR_LOW1_Msk           /*!<Lowest Priority Flag for Mailbox 1 */
#define CAN_TSR_LOW2_Pos  (31U)
#define CAN_TSR_LOW2_Msk  (0x1U << CAN_TSR_LOW2_Pos) /*!< 0x80000000 */
#define CAN_TSR_LOW2      CAN_TSR_LOW2_Msk           /*!<Lowest Priority Flag for Mailbox 2 */

/*******************  Bit definition for CAN_RF0R register  *******************/
#define CAN_RF0R_FMP0_Pos  (0U)
#define CAN_RF0R_FMP0_Msk  (0x3U << CAN_RF0R_FMP0_Pos) /*!< 0x00000003 */
#define CAN_RF0R_FMP0      CAN_RF0R_FMP0_Msk           /*!<FIFO 0 Message Pending */
#define CAN_RF0R_FULL0_Pos (3U)
#define CAN_RF0R_FULL0_Msk (0x1U << CAN_RF0R_FULL0_Pos) /*!< 0x00000008 */
#define CAN_RF0R_FULL0     CAN_RF0R_FULL0_Msk           /*!<FIFO 0 Full */
#define CAN_RF0R_FOVR0_Pos (4U)
#define CAN_RF0R_FOVR0_Msk (0x1U << CAN_RF0R_FOVR0_Pos) /*!< 0x00000010 */
#define CAN_RF0R_FOVR0     CAN_RF0R_FOVR0_Msk           /*!<FIFO 0 Overrun */
#define CAN_RF0R_RFOM0_Pos (5U)
#define CAN_RF0R_RFOM0_Msk (0x1U << CAN_RF0R_RFOM0_Pos) /*!< 0x00000020 */
#define CAN_RF0R_RFOM0     CAN_RF0R_RFOM0_Msk           /*!<Release FIFO 0 Output Mailbox */

/*******************  Bit definition for CAN_RF1R register  *******************/
#define CAN_RF1R_FMP1_Pos  (0U)
#define CAN_RF1R_FMP1_Msk  (0x3U << CAN_RF1R_FMP1_Pos) /*!< 0x00000003 */
#define CAN_RF1R_FMP1      CAN_RF1R_FMP1_Msk           /*!<FIFO 1 Message Pending */
#define CAN_RF1R_FULL1_Pos (3U)
#define CAN_RF1R_FULL1_Msk (0x1U << CAN_RF1R_FULL1_Pos) /*!< 0x00000008 */
#define CAN_RF1R_FULL1     CAN_RF1R_FULL1_Msk           /*!<FIFO 1 Full */
#define CAN_RF1R_FOVR1_Pos (4U)
#define CAN_RF1R_FOVR1_Msk (0x1U << CAN_RF1R_FOVR1_Pos) /*!< 0x00000010 */
#define CAN_RF1R_FOVR1     CAN_RF1R_FOVR1_Msk           /*!<FIFO 1 Overrun */
#define CAN_RF1R_RFOM1_Pos (5U)
#define CAN_RF1R_RFOM1_Msk (0x1U << CAN_RF1R_RFOM1_Pos) /*!< 0x00000020 */
#define CAN_RF1R_RFOM1     CAN_RF1R_RFOM1_Msk           /*!<Release FIFO 1 Output Mailbox */

/********************  Bit definition for CAN_IER register  *******************/
#define CAN_IER_TMEIE_Pos  (0U)
#define CAN_IER_TMEIE_Msk  (0x1U << CAN_IER_TMEIE_Pos) /*!< 0x00000001 */
#define CAN_IER_TMEIE      CAN_IER_TMEIE_Msk           /*!<Transmit Mailbox Empty Interrupt Enable */
#define CAN_IER_FMPIE0_Pos (1U)
#define CAN_IER_FMPIE0_Msk (0x1U << CAN_IER_FMPIE0_Pos) /*!< 0x00000002 */
#define CAN_IER_FMPIE0     CAN_IER_FMPIE0_Msk           /*!<FIFO Message Pending Interrupt Enable */
#define CAN_IER_FFIE0_Pos  (2U)
#define CAN_IER_FFIE0_Msk  (0x1U << CAN_IER_FFIE0_Pos) /*!< 0x00000004 */
#define CAN_IER_FFIE0      CAN_IER_FFIE0_Msk           /*!<FIFO Full Interrupt Enable */
#define CAN_IER_FOVIE0_Pos (3U)
#define CAN_IER_FOVIE0_Msk (0x1U << CAN_IER_FOVIE0_Pos) /*!< 0x00000008 */
#define CAN_IER_FOVIE0     CAN_IER_FOVIE0_Msk           /*!<FIFO Overrun Interrupt Enable */
#define CAN_IER_FMPIE1_Pos (4U)
#define CAN_IER_FMPIE1_Msk (0x1U << CAN_IER_FMPIE1_Pos) /*!< 0x00000010 */
#define CAN_IER_FMPIE1     CAN_IER_FMPIE1_Msk           /*!<FIFO Message Pending Interrupt Enable */
#define CAN_IER_FFIE1_Pos  (5U)
#define CAN_IER_FFIE1_Msk  (0x1U << CAN_IER_FFIE1_Pos) /*!< 0x00000020 */
#define CAN_IER_FFIE1      CAN_IER_FFIE1_Msk           /*!<FIFO Full Interrupt Enable */
#define CAN_IER_FOVIE1_Pos (6U)
#define CAN_IER_FOVIE1_Msk (0x1U << CAN_IER_FOVIE1_Pos) /*!< 0x00000040 */
#define CAN_IER_FOVIE1     CAN_IER_FOVIE1_Msk           /*!<FIFO Overrun Interrupt Enable */
#define CAN_IER_EWGIE_Pos  (8U)
#define CAN_IER_EWGIE_Msk  (0x1U << CAN_IER_EWGIE_Pos) /*!< 0x00000100 */
#define CAN_IER_EWGIE      CAN_IER_EWGIE_Msk           /*!<Error Warning Interrupt Enable */
#define CAN_IER_EPVIE_Pos  (9U)
#define CAN_IER_EPVIE_Msk  (0x1U << CAN_IER_EPVIE_Pos) /*!< 0x00000200 */
#define CAN_IER_EPVIE      CAN_IER_EPVIE_Msk           /*!<Error Passive Interrupt Enable */
#define CAN_IER_BOFIE_Pos  (10U)
#define CAN_IER_BOFIE_Msk  (0x1U << CAN_IER_BOFIE_Pos) /*!< 0x00000400 */
#define CAN_IER_BOFIE      CAN_IER_BOFIE_Msk           /*!<Bus-Off Interrupt Enable */
#define CAN_IER_LECIE_Pos  (11U)
#define CAN_IER_LECIE_Msk  (0x1U << CAN_IER_LECIE_Pos) /*!< 0x00000800 */
#define CAN_IER_LECIE      CAN_IER_LECIE_Msk           /*!<Last Error Code Interrupt Enable */
#define CAN_IER_ERRIE_Pos  (15U)
#define CAN_IER_ERRIE_Msk  (0x1U << CAN_IER_ERRIE_Pos) /*!< 0x00008000 */
#define CAN_IER_ERRIE      CAN_IER_ERRIE_Msk           /*!<Error Interrupt Enable */
#define CAN_IER_WKUIE_Pos  (16U)
#define CAN_IER_WKUIE_Msk  (0x1U << CAN_IER_WKUIE_Pos) /*!< 0x00010000 */
#define CAN_IER_WKUIE      CAN_IER_WKUIE_Msk           /*!<Wakeup Interrupt Enable */
#define CAN_IER_SLKIE_Pos  (17U)
#define CAN_IER_SLKIE_Msk  (0x1U << CAN_IER_SLKIE_Pos) /*!< 0x00020000 */
#define CAN_IER_SLKIE      CAN_IER_SLKIE_Msk           /*!<Sleep Interrupt Enable */
#define CAN_IER_EWGIE_Pos  (8U)

/********************  Bit definition for CAN_ESR register  *******************/
#define CAN_ESR_EWGF_Pos (0U)
#define CAN_ESR_EWGF_Msk (0x1U << CAN_ESR_EWGF_Pos) /*!< 0x00000001 */
#define CAN_ESR_EWGF     CAN_ESR_EWGF_Msk           /*!<Error Warning Flag */
#define CAN_ESR_EPVF_Pos (1U)
#define CAN_ESR_EPVF_Msk (0x1U << CAN_ESR_EPVF_Pos) /*!< 0x00000002 */
#define CAN_ESR_EPVF     CAN_ESR_EPVF_Msk           /*!<Error Passive Flag */
#define CAN_ESR_BOFF_Pos (2U)
#define CAN_ESR_BOFF_Msk (0x1U << CAN_ESR_BOFF_Pos) /*!< 0x00000004 */
#define CAN_ESR_BOFF     CAN_ESR_BOFF_Msk           /*!<Bus-Off Flag */

#define CAN_ESR_LEC_Pos  (4U)
#define CAN_ESR_LEC_Msk  (0x7U << CAN_ESR_LEC_Pos) /*!< 0x00000070 */
#define CAN_ESR_LEC      CAN_ESR_LEC_Msk           /*!<LEC[2:0] bits (Last Error Code) */
#define CAN_ESR_LEC_0    (0x1U << CAN_ESR_LEC_Pos) /*!< 0x00000010 */
#define CAN_ESR_LEC_1    (0x2U << CAN_ESR_LEC_Pos) /*!< 0x00000020 */
#define CAN_ESR_LEC_2    (0x4U << CAN_ESR_LEC_Pos) /*!< 0x00000040 */

#define CAN_ESR_TEC_Pos  (16U)
#define CAN_ESR_TEC_Msk  (0xFFU << CAN_ESR_TEC_Pos) /*!< 0x00FF0000 */
#define CAN_ESR_TEC      CAN_ESR_TEC_Msk            /*!<Least significant byte of the 9-bit Transmit Error Counter */
#define CAN_ESR_REC_Pos  (24U)
#define CAN_ESR_REC_Msk  (0xFFU << CAN_ESR_REC_Pos) /*!< 0xFF000000 */
#define CAN_ESR_REC      CAN_ESR_REC_Msk            /*!<Receive Error Counter */

/*******************  Bit definition for CAN_BTR register  ********************/
#define CAN_BTR_BRP_Pos  (0U)
#define CAN_BTR_BRP_Msk  (0x3FFU << CAN_BTR_BRP_Pos) /*!< 0x000003FF */
#define CAN_BTR_BRP      CAN_BTR_BRP_Msk             /*!<Baud Rate Prescaler */
#define CAN_BTR_TS1_Pos  (16U)
#define CAN_BTR_TS1_Msk  (0xFU << CAN_BTR_TS1_Pos) /*!< 0x000F0000 */
#define CAN_BTR_TS1      CAN_BTR_TS1_Msk           /*!<Time Segment 1 */
#define CAN_BTR_TS1_0    (0x1U << CAN_BTR_TS1_Pos) /*!< 0x00010000 */
#define CAN_BTR_TS1_1    (0x2U << CAN_BTR_TS1_Pos) /*!< 0x00020000 */
#define CAN_BTR_TS1_2    (0x4U << CAN_BTR_TS1_Pos) /*!< 0x00040000 */
#define CAN_BTR_TS1_3    (0x8U << CAN_BTR_TS1_Pos) /*!< 0x00080000 */
#define CAN_BTR_TS2_Pos  (20U)
#define CAN_BTR_TS2_Msk  (0x7U << CAN_BTR_TS2_Pos) /*!< 0x00700000 */
#define CAN_BTR_TS2      CAN_BTR_TS2_Msk           /*!<Time Segment 2 */
#define CAN_BTR_TS2_0    (0x1U << CAN_BTR_TS2_Pos) /*!< 0x00100000 */
#define CAN_BTR_TS2_1    (0x2U << CAN_BTR_TS2_Pos) /*!< 0x00200000 */
#define CAN_BTR_TS2_2    (0x4U << CAN_BTR_TS2_Pos) /*!< 0x00400000 */
#define CAN_BTR_SJW_Pos  (24U)
#define CAN_BTR_SJW_Msk  (0x3U << CAN_BTR_SJW_Pos) /*!< 0x03000000 */
#define CAN_BTR_SJW      CAN_BTR_SJW_Msk           /*!<Resynchronization Jump Width */
#define CAN_BTR_SJW_0    (0x1U << CAN_BTR_SJW_Pos) /*!< 0x01000000 */
#define CAN_BTR_SJW_1    (0x2U << CAN_BTR_SJW_Pos) /*!< 0x02000000 */
#define CAN_BTR_LBKM_Pos (30U)
#define CAN_BTR_LBKM_Msk (0x1U << CAN_BTR_LBKM_Pos) /*!< 0x40000000 */
#define CAN_BTR_LBKM     CAN_BTR_LBKM_Msk           /*!<Loop Back Mode (Debug) */
#define CAN_BTR_SILM_Pos (31U)
#define CAN_BTR_SILM_Msk (0x1U << CAN_BTR_SILM_Pos) /*!< 0x80000000 */
#define CAN_BTR_SILM     CAN_BTR_SILM_Msk           /*!<Silent Mode */


/*!<Mailbox registers */
/******************  Bit definition for CAN_TI0R register  ********************/
#define CAN_TI0R_TXRQ_Pos (0U)
#define CAN_TI0R_TXRQ_Msk (0x1U << CAN_TI0R_TXRQ_Pos) /*!< 0x00000001 */
#define CAN_TI0R_TXRQ     CAN_TI0R_TXRQ_Msk           /*!<Transmit Mailbox Request */
#define CAN_TI0R_RTR_Pos  (1U)
#define CAN_TI0R_RTR_Msk  (0x1U << CAN_TI0R_RTR_Pos) /*!< 0x00000002 */
#define CAN_TI0R_RTR      CAN_TI0R_RTR_Msk           /*!<Remote Transmission Request */
#define CAN_TI0R_IDE_Pos  (2U)
#define CAN_TI0R_IDE_Msk  (0x1U << CAN_TI0R_IDE_Pos) /*!< 0x00000004 */
#define CAN_TI0R_IDE      CAN_TI0R_IDE_Msk           /*!<Identifier Extension */
#define CAN_TI0R_EXID_Pos (3U)
#define CAN_TI0R_EXID_Msk (0x3FFFFU << CAN_TI0R_EXID_Pos) /*!< 0x001FFFF8 */
#define CAN_TI0R_EXID     CAN_TI0R_EXID_Msk               /*!<Extended Identifier */
#define CAN_TI0R_STID_Pos (21U)
#define CAN_TI0R_STID_Msk (0x7FFU << CAN_TI0R_STID_Pos) /*!< 0xFFE00000 */
#define CAN_TI0R_STID     CAN_TI0R_STID_Msk             /*!<Standard Identifier or Extended Identifier */

/******************  Bit definition for CAN_TDT0R register  *******************/
#define CAN_TDT0R_DLC_Pos  (0U)
#define CAN_TDT0R_DLC_Msk  (0xFU << CAN_TDT0R_DLC_Pos) /*!< 0x0000000F */
#define CAN_TDT0R_DLC      CAN_TDT0R_DLC_Msk           /*!<Data Length Code */
#define CAN_TDT0R_TGT_Pos  (8U)
#define CAN_TDT0R_TGT_Msk  (0x1U << CAN_TDT0R_TGT_Pos) /*!< 0x00000100 */
#define CAN_TDT0R_TGT      CAN_TDT0R_TGT_Msk           /*!<Transmit Global Time */
#define CAN_TDT0R_TIME_Pos (16U)
#define CAN_TDT0R_TIME_Msk (0xFFFFU << CAN_TDT0R_TIME_Pos) /*!< 0xFFFF0000 */
#define CAN_TDT0R_TIME     CAN_TDT0R_TIME_Msk              /*!<Message Time Stamp */

/******************  Bit definition for CAN_TDL0R register  *******************/
#define CAN_TDL0R_DATA0_Pos (0U)
#define CAN_TDL0R_DATA0_Msk (0xFFU << CAN_TDL0R_DATA0_Pos) /*!< 0x000000FF */
#define CAN_TDL0R_DATA0     CAN_TDL0R_DATA0_Msk            /*!<Data byte 0 */
#define CAN_TDL0R_DATA1_Pos (8U)
#define CAN_TDL0R_DATA1_Msk (0xFFU << CAN_TDL0R_DATA1_Pos) /*!< 0x0000FF00 */
#define CAN_TDL0R_DATA1     CAN_TDL0R_DATA1_Msk            /*!<Data byte 1 */
#define CAN_TDL0R_DATA2_Pos (16U)
#define CAN_TDL0R_DATA2_Msk (0xFFU << CAN_TDL0R_DATA2_Pos) /*!< 0x00FF0000 */
#define CAN_TDL0R_DATA2     CAN_TDL0R_DATA2_Msk            /*!<Data byte 2 */
#define CAN_TDL0R_DATA3_Pos (24U)
#define CAN_TDL0R_DATA3_Msk (0xFFU << CAN_TDL0R_DATA3_Pos) /*!< 0xFF000000 */
#define CAN_TDL0R_DATA3     CAN_TDL0R_DATA3_Msk            /*!<Data byte 3 */

/******************  Bit definition for CAN_TDH0R register  *******************/
#define CAN_TDH0R_DATA4_Pos (0U)
#define CAN_TDH0R_DATA4_Msk (0xFFU << CAN_TDH0R_DATA4_Pos) /*!< 0x000000FF */
#define CAN_TDH0R_DATA4     CAN_TDH0R_DATA4_Msk            /*!<Data byte 4 */
#define CAN_TDH0R_DATA5_Pos (8U)
#define CAN_TDH0R_DATA5_Msk (0xFFU << CAN_TDH0R_DATA5_Pos) /*!< 0x0000FF00 */
#define CAN_TDH0R_DATA5     CAN_TDH0R_DATA5_Msk            /*!<Data byte 5 */
#define CAN_TDH0R_DATA6_Pos (16U)
#define CAN_TDH0R_DATA6_Msk (0xFFU << CAN_TDH0R_DATA6_Pos) /*!< 0x00FF0000 */
#define CAN_TDH0R_DATA6     CAN_TDH0R_DATA6_Msk            /*!<Data byte 6 */
#define CAN_TDH0R_DATA7_Pos (24U)
#define CAN_TDH0R_DATA7_Msk (0xFFU << CAN_TDH0R_DATA7_Pos) /*!< 0xFF000000 */
#define CAN_TDH0R_DATA7     CAN_TDH0R_DATA7_Msk            /*!<Data byte 7 */

/*******************  Bit definition for CAN_TI1R register  *******************/
#define CAN_TI1R_TXRQ_Pos (0U)
#define CAN_TI1R_TXRQ_Msk (0x1U << CAN_TI1R_TXRQ_Pos) /*!< 0x00000001 */
#define CAN_TI1R_TXRQ     CAN_TI1R_TXRQ_Msk           /*!<Transmit Mailbox Request */
#define CAN_TI1R_RTR_Pos  (1U)
#define CAN_TI1R_RTR_Msk  (0x1U << CAN_TI1R_RTR_Pos) /*!< 0x00000002 */
#define CAN_TI1R_RTR      CAN_TI1R_RTR_Msk           /*!<Remote Transmission Request */
#define CAN_TI1R_IDE_Pos  (2U)
#define CAN_TI1R_IDE_Msk  (0x1U << CAN_TI1R_IDE_Pos) /*!< 0x00000004 */
#define CAN_TI1R_IDE      CAN_TI1R_IDE_Msk           /*!<Identifier Extension */
#define CAN_TI1R_EXID_Pos (3U)
#define CAN_TI1R_EXID_Msk (0x3FFFFU << CAN_TI1R_EXID_Pos) /*!< 0x001FFFF8 */
#define CAN_TI1R_EXID     CAN_TI1R_EXID_Msk               /*!<Extended Identifier */
#define CAN_TI1R_STID_Pos (21U)
#define CAN_TI1R_STID_Msk (0x7FFU << CAN_TI1R_STID_Pos) /*!< 0xFFE00000 */
#define CAN_TI1R_STID     CAN_TI1R_STID_Msk             /*!<Standard Identifier or Extended Identifier */

/*******************  Bit definition for CAN_TDT1R register  ******************/
#define CAN_TDT1R_DLC_Pos  (0U)
#define CAN_TDT1R_DLC_Msk  (0xFU << CAN_TDT1R_DLC_Pos) /*!< 0x0000000F */
#define CAN_TDT1R_DLC      CAN_TDT1R_DLC_Msk           /*!<Data Length Code */
#define CAN_TDT1R_TGT_Pos  (8U)
#define CAN_TDT1R_TGT_Msk  (0x1U << CAN_TDT1R_TGT_Pos) /*!< 0x00000100 */
#define CAN_TDT1R_TGT      CAN_TDT1R_TGT_Msk           /*!<Transmit Global Time */
#define CAN_TDT1R_TIME_Pos (16U)
#define CAN_TDT1R_TIME_Msk (0xFFFFU << CAN_TDT1R_TIME_Pos) /*!< 0xFFFF0000 */
#define CAN_TDT1R_TIME     CAN_TDT1R_TIME_Msk              /*!<Message Time Stamp */

/*******************  Bit definition for CAN_TDL1R register  ******************/
#define CAN_TDL1R_DATA0_Pos (0U)
#define CAN_TDL1R_DATA0_Msk (0xFFU << CAN_TDL1R_DATA0_Pos) /*!< 0x000000FF */
#define CAN_TDL1R_DATA0     CAN_TDL1R_DATA0_Msk            /*!<Data byte 0 */
#define CAN_TDL1R_DATA1_Pos (8U)
#define CAN_TDL1R_DATA1_Msk (0xFFU << CAN_TDL1R_DATA1_Pos) /*!< 0x0000FF00 */
#define CAN_TDL1R_DATA1     CAN_TDL1R_DATA1_Msk            /*!<Data byte 1 */
#define CAN_TDL1R_DATA2_Pos (16U)
#define CAN_TDL1R_DATA2_Msk (0xFFU << CAN_TDL1R_DATA2_Pos) /*!< 0x00FF0000 */
#define CAN_TDL1R_DATA2     CAN_TDL1R_DATA2_Msk            /*!<Data byte 2 */
#define CAN_TDL1R_DATA3_Pos (24U)
#define CAN_TDL1R_DATA3_Msk (0xFFU << CAN_TDL1R_DATA3_Pos) /*!< 0xFF000000 */
#define CAN_TDL1R_DATA3     CAN_TDL1R_DATA3_Msk            /*!<Data byte 3 */

/*******************  Bit definition for CAN_TDH1R register  ******************/
#define CAN_TDH1R_DATA4_Pos (0U)
#define CAN_TDH1R_DATA4_Msk (0xFFU << CAN_TDH1R_DATA4_Pos) /*!< 0x000000FF */
#define CAN_TDH1R_DATA4     CAN_TDH1R_DATA4_Msk            /*!<Data byte 4 */
#define CAN_TDH1R_DATA5_Pos (8U)
#define CAN_TDH1R_DATA5_Msk (0xFFU << CAN_TDH1R_DATA5_Pos) /*!< 0x0000FF00 */
#define CAN_TDH1R_DATA5     CAN_TDH1R_DATA5_Msk            /*!<Data byte 5 */
#define CAN_TDH1R_DATA6_Pos (16U)
#define CAN_TDH1R_DATA6_Msk (0xFFU << CAN_TDH1R_DATA6_Pos) /*!< 0x00FF0000 */
#define CAN_TDH1R_DATA6     CAN_TDH1R_DATA6_Msk            /*!<Data byte 6 */
#define CAN_TDH1R_DATA7_Pos (24U)
#define CAN_TDH1R_DATA7_Msk (0xFFU << CAN_TDH1R_DATA7_Pos) /*!< 0xFF000000 */
#define CAN_TDH1R_DATA7     CAN_TDH1R_DATA7_Msk            /*!<Data byte 7 */

/*******************  Bit definition for CAN_TI2R register  *******************/
#define CAN_TI2R_TXRQ_Pos (0U)
#define CAN_TI2R_TXRQ_Msk (0x1U << CAN_TI2R_TXRQ_Pos) /*!< 0x00000001 */
#define CAN_TI2R_TXRQ     CAN_TI2R_TXRQ_Msk           /*!<Transmit Mailbox Request */
#define CAN_TI2R_RTR_Pos  (1U)
#define CAN_TI2R_RTR_Msk  (0x1U << CAN_TI2R_RTR_Pos) /*!< 0x00000002 */
#define CAN_TI2R_RTR      CAN_TI2R_RTR_Msk           /*!<Remote Transmission Request */
#define CAN_TI2R_IDE_Pos  (2U)
#define CAN_TI2R_IDE_Msk  (0x1U << CAN_TI2R_IDE_Pos) /*!< 0x00000004 */
#define CAN_TI2R_IDE      CAN_TI2R_IDE_Msk           /*!<Identifier Extension */
#define CAN_TI2R_EXID_Pos (3U)
#define CAN_TI2R_EXID_Msk (0x3FFFFU << CAN_TI2R_EXID_Pos) /*!< 0x001FFFF8 */
#define CAN_TI2R_EXID     CAN_TI2R_EXID_Msk               /*!<Extended identifier */
#define CAN_TI2R_STID_Pos (21U)
#define CAN_TI2R_STID_Msk (0x7FFU << CAN_TI2R_STID_Pos) /*!< 0xFFE00000 */
#define CAN_TI2R_STID     CAN_TI2R_STID_Msk             /*!<Standard Identifier or Extended Identifier */

/*******************  Bit definition for CAN_TDT2R register  ******************/
#define CAN_TDT2R_DLC_Pos  (0U)
#define CAN_TDT2R_DLC_Msk  (0xFU << CAN_TDT2R_DLC_Pos) /*!< 0x0000000F */
#define CAN_TDT2R_DLC      CAN_TDT2R_DLC_Msk           /*!<Data Length Code */
#define CAN_TDT2R_TGT_Pos  (8U)
#define CAN_TDT2R_TGT_Msk  (0x1U << CAN_TDT2R_TGT_Pos) /*!< 0x00000100 */
#define CAN_TDT2R_TGT      CAN_TDT2R_TGT_Msk           /*!<Transmit Global Time */
#define CAN_TDT2R_TIME_Pos (16U)
#define CAN_TDT2R_TIME_Msk (0xFFFFU << CAN_TDT2R_TIME_Pos) /*!< 0xFFFF0000 */
#define CAN_TDT2R_TIME     CAN_TDT2R_TIME_Msk              /*!<Message Time Stamp */

/*******************  Bit definition for CAN_TDL2R register  ******************/
#define CAN_TDL2R_DATA0_Pos (0U)
#define CAN_TDL2R_DATA0_Msk (0xFFU << CAN_TDL2R_DATA0_Pos) /*!< 0x000000FF */
#define CAN_TDL2R_DATA0     CAN_TDL2R_DATA0_Msk            /*!<Data byte 0 */
#define CAN_TDL2R_DATA1_Pos (8U)
#define CAN_TDL2R_DATA1_Msk (0xFFU << CAN_TDL2R_DATA1_Pos) /*!< 0x0000FF00 */
#define CAN_TDL2R_DATA1     CAN_TDL2R_DATA1_Msk            /*!<Data byte 1 */
#define CAN_TDL2R_DATA2_Pos (16U)
#define CAN_TDL2R_DATA2_Msk (0xFFU << CAN_TDL2R_DATA2_Pos) /*!< 0x00FF0000 */
#define CAN_TDL2R_DATA2     CAN_TDL2R_DATA2_Msk            /*!<Data byte 2 */
#define CAN_TDL2R_DATA3_Pos (24U)
#define CAN_TDL2R_DATA3_Msk (0xFFU << CAN_TDL2R_DATA3_Pos) /*!< 0xFF000000 */
#define CAN_TDL2R_DATA3     CAN_TDL2R_DATA3_Msk            /*!<Data byte 3 */

/*******************  Bit definition for CAN_TDH2R register  ******************/
#define CAN_TDH2R_DATA4_Pos (0U)
#define CAN_TDH2R_DATA4_Msk (0xFFU << CAN_TDH2R_DATA4_Pos) /*!< 0x000000FF */
#define CAN_TDH2R_DATA4     CAN_TDH2R_DATA4_Msk            /*!<Data byte 4 */
#define CAN_TDH2R_DATA5_Pos (8U)
#define CAN_TDH2R_DATA5_Msk (0xFFU << CAN_TDH2R_DATA5_Pos) /*!< 0x0000FF00 */
#define CAN_TDH2R_DATA5     CAN_TDH2R_DATA5_Msk            /*!<Data byte 5 */
#define CAN_TDH2R_DATA6_Pos (16U)
#define CAN_TDH2R_DATA6_Msk (0xFFU << CAN_TDH2R_DATA6_Pos) /*!< 0x00FF0000 */
#define CAN_TDH2R_DATA6     CAN_TDH2R_DATA6_Msk            /*!<Data byte 6 */
#define CAN_TDH2R_DATA7_Pos (24U)
#define CAN_TDH2R_DATA7_Msk (0xFFU << CAN_TDH2R_DATA7_Pos) /*!< 0xFF000000 */
#define CAN_TDH2R_DATA7     CAN_TDH2R_DATA7_Msk            /*!<Data byte 7 */

/*******************  Bit definition for CAN_RI0R register  *******************/
#define CAN_RI0R_RTR_Pos  (1U)
#define CAN_RI0R_RTR_Msk  (0x1U << CAN_RI0R_RTR_Pos) /*!< 0x00000002 */
#define CAN_RI0R_RTR      CAN_RI0R_RTR_Msk           /*!<Remote Transmission Request */
#define CAN_RI0R_IDE_Pos  (2U)
#define CAN_RI0R_IDE_Msk  (0x1U << CAN_RI0R_IDE_Pos) /*!< 0x00000004 */
#define CAN_RI0R_IDE      CAN_RI0R_IDE_Msk           /*!<Identifier Extension */
#define CAN_RI0R_EXID_Pos (3U)
#define CAN_RI0R_EXID_Msk (0x3FFFFU << CAN_RI0R_EXID_Pos) /*!< 0x001FFFF8 */
#define CAN_RI0R_EXID     CAN_RI0R_EXID_Msk               /*!<Extended Identifier */
#define CAN_RI0R_STID_Pos (21U)
#define CAN_RI0R_STID_Msk (0x7FFU << CAN_RI0R_STID_Pos) /*!< 0xFFE00000 */
#define CAN_RI0R_STID     CAN_RI0R_STID_Msk             /*!<Standard Identifier or Extended Identifier */

/*******************  Bit definition for CAN_RDT0R register  ******************/
#define CAN_RDT0R_DLC_Pos  (0U)
#define CAN_RDT0R_DLC_Msk  (0xFU << CAN_RDT0R_DLC_Pos) /*!< 0x0000000F */
#define CAN_RDT0R_DLC      CAN_RDT0R_DLC_Msk           /*!<Data Length Code */
#define CAN_RDT0R_FMI_Pos  (8U)
#define CAN_RDT0R_FMI_Msk  (0xFFU << CAN_RDT0R_FMI_Pos) /*!< 0x0000FF00 */
#define CAN_RDT0R_FMI      CAN_RDT0R_FMI_Msk            /*!<Filter Match Index */
#define CAN_RDT0R_TIME_Pos (16U)
#define CAN_RDT0R_TIME_Msk (0xFFFFU << CAN_RDT0R_TIME_Pos) /*!< 0xFFFF0000 */
#define CAN_RDT0R_TIME     CAN_RDT0R_TIME_Msk              /*!<Message Time Stamp */

/*******************  Bit definition for CAN_RDL0R register  ******************/
#define CAN_RDL0R_DATA0_Pos (0U)
#define CAN_RDL0R_DATA0_Msk (0xFFU << CAN_RDL0R_DATA0_Pos) /*!< 0x000000FF */
#define CAN_RDL0R_DATA0     CAN_RDL0R_DATA0_Msk            /*!<Data byte 0 */
#define CAN_RDL0R_DATA1_Pos (8U)
#define CAN_RDL0R_DATA1_Msk (0xFFU << CAN_RDL0R_DATA1_Pos) /*!< 0x0000FF00 */
#define CAN_RDL0R_DATA1     CAN_RDL0R_DATA1_Msk            /*!<Data byte 1 */
#define CAN_RDL0R_DATA2_Pos (16U)
#define CAN_RDL0R_DATA2_Msk (0xFFU << CAN_RDL0R_DATA2_Pos) /*!< 0x00FF0000 */
#define CAN_RDL0R_DATA2     CAN_RDL0R_DATA2_Msk            /*!<Data byte 2 */
#define CAN_RDL0R_DATA3_Pos (24U)
#define CAN_RDL0R_DATA3_Msk (0xFFU << CAN_RDL0R_DATA3_Pos) /*!< 0xFF000000 */
#define CAN_RDL0R_DATA3     CAN_RDL0R_DATA3_Msk            /*!<Data byte 3 */

/*******************  Bit definition for CAN_RDH0R register  ******************/
#define CAN_RDH0R_DATA4_Pos (0U)
#define CAN_RDH0R_DATA4_Msk (0xFFU << CAN_RDH0R_DATA4_Pos) /*!< 0x000000FF */
#define CAN_RDH0R_DATA4     CAN_RDH0R_DATA4_Msk            /*!<Data byte 4 */
#define CAN_RDH0R_DATA5_Pos (8U)
#define CAN_RDH0R_DATA5_Msk (0xFFU << CAN_RDH0R_DATA5_Pos) /*!< 0x0000FF00 */
#define CAN_RDH0R_DATA5     CAN_RDH0R_DATA5_Msk            /*!<Data byte 5 */
#define CAN_RDH0R_DATA6_Pos (16U)
#define CAN_RDH0R_DATA6_Msk (0xFFU << CAN_RDH0R_DATA6_Pos) /*!< 0x00FF0000 */
#define CAN_RDH0R_DATA6     CAN_RDH0R_DATA6_Msk            /*!<Data byte 6 */
#define CAN_RDH0R_DATA7_Pos (24U)
#define CAN_RDH0R_DATA7_Msk (0xFFU << CAN_RDH0R_DATA7_Pos) /*!< 0xFF000000 */
#define CAN_RDH0R_DATA7     CAN_RDH0R_DATA7_Msk            /*!<Data byte 7 */

/*******************  Bit definition for CAN_RI1R register  *******************/
#define CAN_RI1R_RTR_Pos  (1U)
#define CAN_RI1R_RTR_Msk  (0x1U << CAN_RI1R_RTR_Pos) /*!< 0x00000002 */
#define CAN_RI1R_RTR      CAN_RI1R_RTR_Msk           /*!<Remote Transmission Request */
#define CAN_RI1R_IDE_Pos  (2U)
#define CAN_RI1R_IDE_Msk  (0x1U << CAN_RI1R_IDE_Pos) /*!< 0x00000004 */
#define CAN_RI1R_IDE      CAN_RI1R_IDE_Msk           /*!<Identifier Extension */
#define CAN_RI1R_EXID_Pos (3U)
#define CAN_RI1R_EXID_Msk (0x3FFFFU << CAN_RI1R_EXID_Pos) /*!< 0x001FFFF8 */
#define CAN_RI1R_EXID     CAN_RI1R_EXID_Msk               /*!<Extended identifier */
#define CAN_RI1R_STID_Pos (21U)
#define CAN_RI1R_STID_Msk (0x7FFU << CAN_RI1R_STID_Pos) /*!< 0xFFE00000 */
#define CAN_RI1R_STID     CAN_RI1R_STID_Msk             /*!<Standard Identifier or Extended Identifier */

/*******************  Bit definition for CAN_RDT1R register  ******************/
#define CAN_RDT1R_DLC_Pos  (0U)
#define CAN_RDT1R_DLC_Msk  (0xFU << CAN_RDT1R_DLC_Pos) /*!< 0x0000000F */
#define CAN_RDT1R_DLC      CAN_RDT1R_DLC_Msk           /*!<Data Length Code */
#define CAN_RDT1R_FMI_Pos  (8U)
#define CAN_RDT1R_FMI_Msk  (0xFFU << CAN_RDT1R_FMI_Pos) /*!< 0x0000FF00 */
#define CAN_RDT1R_FMI      CAN_RDT1R_FMI_Msk            /*!<Filter Match Index */
#define CAN_RDT1R_TIME_Pos (16U)
#define CAN_RDT1R_TIME_Msk (0xFFFFU << CAN_RDT1R_TIME_Pos) /*!< 0xFFFF0000 */
#define CAN_RDT1R_TIME     CAN_RDT1R_TIME_Msk              /*!<Message Time Stamp */

/*******************  Bit definition for CAN_RDL1R register  ******************/
#define CAN_RDL1R_DATA0_Pos (0U)
#define CAN_RDL1R_DATA0_Msk (0xFFU << CAN_RDL1R_DATA0_Pos) /*!< 0x000000FF */
#define CAN_RDL1R_DATA0     CAN_RDL1R_DATA0_Msk            /*!<Data byte 0 */
#define CAN_RDL1R_DATA1_Pos (8U)
#define CAN_RDL1R_DATA1_Msk (0xFFU << CAN_RDL1R_DATA1_Pos) /*!< 0x0000FF00 */
#define CAN_RDL1R_DATA1     CAN_RDL1R_DATA1_Msk            /*!<Data byte 1 */
#define CAN_RDL1R_DATA2_Pos (16U)
#define CAN_RDL1R_DATA2_Msk (0xFFU << CAN_RDL1R_DATA2_Pos) /*!< 0x00FF0000 */
#define CAN_RDL1R_DATA2     CAN_RDL1R_DATA2_Msk            /*!<Data byte 2 */
#define CAN_RDL1R_DATA3_Pos (24U)
#define CAN_RDL1R_DATA3_Msk (0xFFU << CAN_RDL1R_DATA3_Pos) /*!< 0xFF000000 */
#define CAN_RDL1R_DATA3     CAN_RDL1R_DATA3_Msk            /*!<Data byte 3 */

/*******************  Bit definition for CAN_RDH1R register  ******************/
#define CAN_RDH1R_DATA4_Pos (0U)
#define CAN_RDH1R_DATA4_Msk (0xFFU << CAN_RDH1R_DATA4_Pos) /*!< 0x000000FF */
#define CAN_RDH1R_DATA4     CAN_RDH1R_DATA4_Msk            /*!<Data byte 4 */
#define CAN_RDH1R_DATA5_Pos (8U)
#define CAN_RDH1R_DATA5_Msk (0xFFU << CAN_RDH1R_DATA5_Pos) /*!< 0x0000FF00 */
#define CAN_RDH1R_DATA5     CAN_RDH1R_DATA5_Msk            /*!<Data byte 5 */
#define CAN_RDH1R_DATA6_Pos (16U)
#define CAN_RDH1R_DATA6_Msk (0xFFU << CAN_RDH1R_DATA6_Pos) /*!< 0x00FF0000 */
#define CAN_RDH1R_DATA6     CAN_RDH1R_DATA6_Msk            /*!<Data byte 6 */
#define CAN_RDH1R_DATA7_Pos (24U)
#define CAN_RDH1R_DATA7_Msk (0xFFU << CAN_RDH1R_DATA7_Pos) /*!< 0xFF000000 */
#define CAN_RDH1R_DATA7     CAN_RDH1R_DATA7_Msk            /*!<Data byte 7 */

/*!<CAN filter registers */
/*******************  Bit definition for CAN_FMR register  ********************/
#define CAN_FMR_FINIT_Pos  (0U)
#define CAN_FMR_FINIT_Msk  (0x1U << CAN_FMR_FINIT_Pos) /*!< 0x00000001 */
#define CAN_FMR_FINIT      CAN_FMR_FINIT_Msk           /*!<Filter Init Mode */
#define CAN_FMR_CAN2SB_Pos (8U)
#define CAN_FMR_CAN2SB_Msk (0x3FU << CAN_FMR_CAN2SB_Pos) /*!< 0x00003F00 */
#define CAN_FMR_CAN2SB     CAN_FMR_CAN2SB_Msk            /*!<CAN2 start bank */

/*******************  Bit definition for CAN_FM1R register  *******************/
#define CAN_FM1R_FBM_Pos   (0U)
#define CAN_FM1R_FBM_Msk   (0xFFFFFFFU << CAN_FM1R_FBM_Pos) /*!< 0x0FFFFFFF */
#define CAN_FM1R_FBM       CAN_FM1R_FBM_Msk                 /*!<Filter Mode */
#define CAN_FM1R_FBM0_Pos  (0U)
#define CAN_FM1R_FBM0_Msk  (0x1U << CAN_FM1R_FBM0_Pos) /*!< 0x00000001 */
#define CAN_FM1R_FBM0      CAN_FM1R_FBM0_Msk           /*!<Filter Init Mode bit 0 */
#define CAN_FM1R_FBM1_Pos  (1U)
#define CAN_FM1R_FBM1_Msk  (0x1U << CAN_FM1R_FBM1_Pos) /*!< 0x00000002 */
#define CAN_FM1R_FBM1      CAN_FM1R_FBM1_Msk           /*!<Filter Init Mode bit 1 */
#define CAN_FM1R_FBM2_Pos  (2U)
#define CAN_FM1R_FBM2_Msk  (0x1U << CAN_FM1R_FBM2_Pos) /*!< 0x00000004 */
#define CAN_FM1R_FBM2      CAN_FM1R_FBM2_Msk           /*!<Filter Init Mode bit 2 */
#define CAN_FM1R_FBM3_Pos  (3U)
#define CAN_FM1R_FBM3_Msk  (0x1U << CAN_FM1R_FBM3_Pos) /*!< 0x00000008 */
#define CAN_FM1R_FBM3      CAN_FM1R_FBM3_Msk           /*!<Filter Init Mode bit 3 */
#define CAN_FM1R_FBM4_Pos  (4U)
#define CAN_FM1R_FBM4_Msk  (0x1U << CAN_FM1R_FBM4_Pos) /*!< 0x00000010 */
#define CAN_FM1R_FBM4      CAN_FM1R_FBM4_Msk           /*!<Filter Init Mode bit 4 */
#define CAN_FM1R_FBM5_Pos  (5U)
#define CAN_FM1R_FBM5_Msk  (0x1U << CAN_FM1R_FBM5_Pos) /*!< 0x00000020 */
#define CAN_FM1R_FBM5      CAN_FM1R_FBM5_Msk           /*!<Filter Init Mode bit 5 */
#define CAN_FM1R_FBM6_Pos  (6U)
#define CAN_FM1R_FBM6_Msk  (0x1U << CAN_FM1R_FBM6_Pos) /*!< 0x00000040 */
#define CAN_FM1R_FBM6      CAN_FM1R_FBM6_Msk           /*!<Filter Init Mode bit 6 */
#define CAN_FM1R_FBM7_Pos  (7U)
#define CAN_FM1R_FBM7_Msk  (0x1U << CAN_FM1R_FBM7_Pos) /*!< 0x00000080 */
#define CAN_FM1R_FBM7      CAN_FM1R_FBM7_Msk           /*!<Filter Init Mode bit 7 */
#define CAN_FM1R_FBM8_Pos  (8U)
#define CAN_FM1R_FBM8_Msk  (0x1U << CAN_FM1R_FBM8_Pos) /*!< 0x00000100 */
#define CAN_FM1R_FBM8      CAN_FM1R_FBM8_Msk           /*!<Filter Init Mode bit 8 */
#define CAN_FM1R_FBM9_Pos  (9U)
#define CAN_FM1R_FBM9_Msk  (0x1U << CAN_FM1R_FBM9_Pos) /*!< 0x00000200 */
#define CAN_FM1R_FBM9      CAN_FM1R_FBM9_Msk           /*!<Filter Init Mode bit 9 */
#define CAN_FM1R_FBM10_Pos (10U)
#define CAN_FM1R_FBM10_Msk (0x1U << CAN_FM1R_FBM10_Pos) /*!< 0x00000400 */
#define CAN_FM1R_FBM10     CAN_FM1R_FBM10_Msk           /*!<Filter Init Mode bit 10 */
#define CAN_FM1R_FBM11_Pos (11U)
#define CAN_FM1R_FBM11_Msk (0x1U << CAN_FM1R_FBM11_Pos) /*!< 0x00000800 */
#define CAN_FM1R_FBM11     CAN_FM1R_FBM11_Msk           /*!<Filter Init Mode bit 11 */
#define CAN_FM1R_FBM12_Pos (12U)
#define CAN_FM1R_FBM12_Msk (0x1U << CAN_FM1R_FBM12_Pos) /*!< 0x00001000 */
#define CAN_FM1R_FBM12     CAN_FM1R_FBM12_Msk           /*!<Filter Init Mode bit 12 */
#define CAN_FM1R_FBM13_Pos (13U)
#define CAN_FM1R_FBM13_Msk (0x1U << CAN_FM1R_FBM13_Pos) /*!< 0x00002000 */
#define CAN_FM1R_FBM13     CAN_FM1R_FBM13_Msk           /*!<Filter Init Mode bit 13 */
#define CAN_FM1R_FBM14_Pos (14U)
#define CAN_FM1R_FBM14_Msk (0x1U << CAN_FM1R_FBM14_Pos) /*!< 0x00004000 */
#define CAN_FM1R_FBM14     CAN_FM1R_FBM14_Msk           /*!<Filter Init Mode bit 14 */
#define CAN_FM1R_FBM15_Pos (15U)
#define CAN_FM1R_FBM15_Msk (0x1U << CAN_FM1R_FBM15_Pos) /*!< 0x00008000 */
#define CAN_FM1R_FBM15     CAN_FM1R_FBM15_Msk           /*!<Filter Init Mode bit 15 */
#define CAN_FM1R_FBM16_Pos (16U)
#define CAN_FM1R_FBM16_Msk (0x1U << CAN_FM1R_FBM16_Pos) /*!< 0x00010000 */
#define CAN_FM1R_FBM16     CAN_FM1R_FBM16_Msk           /*!<Filter Init Mode bit 16 */
#define CAN_FM1R_FBM17_Pos (17U)
#define CAN_FM1R_FBM17_Msk (0x1U << CAN_FM1R_FBM17_Pos) /*!< 0x00020000 */
#define CAN_FM1R_FBM17     CAN_FM1R_FBM17_Msk           /*!<Filter Init Mode bit 17 */
#define CAN_FM1R_FBM18_Pos (18U)
#define CAN_FM1R_FBM18_Msk (0x1U << CAN_FM1R_FBM18_Pos) /*!< 0x00040000 */
#define CAN_FM1R_FBM18     CAN_FM1R_FBM18_Msk           /*!<Filter Init Mode bit 18 */
#define CAN_FM1R_FBM19_Pos (19U)
#define CAN_FM1R_FBM19_Msk (0x1U << CAN_FM1R_FBM19_Pos) /*!< 0x00080000 */
#define CAN_FM1R_FBM19     CAN_FM1R_FBM19_Msk           /*!<Filter Init Mode bit 19 */
#define CAN_FM1R_FBM20_Pos (20U)
#define CAN_FM1R_FBM20_Msk (0x1U << CAN_FM1R_FBM20_Pos) /*!< 0x00100000 */
#define CAN_FM1R_FBM20     CAN_FM1R_FBM20_Msk           /*!<Filter Init Mode bit 20 */
#define CAN_FM1R_FBM21_Pos (21U)
#define CAN_FM1R_FBM21_Msk (0x1U << CAN_FM1R_FBM21_Pos) /*!< 0x00200000 */
#define CAN_FM1R_FBM21     CAN_FM1R_FBM21_Msk           /*!<Filter Init Mode bit 21 */
#define CAN_FM1R_FBM22_Pos (22U)
#define CAN_FM1R_FBM22_Msk (0x1U << CAN_FM1R_FBM22_Pos) /*!< 0x00400000 */
#define CAN_FM1R_FBM22     CAN_FM1R_FBM22_Msk           /*!<Filter Init Mode bit 22 */
#define CAN_FM1R_FBM23_Pos (23U)
#define CAN_FM1R_FBM23_Msk (0x1U << CAN_FM1R_FBM23_Pos) /*!< 0x00800000 */
#define CAN_FM1R_FBM23     CAN_FM1R_FBM23_Msk           /*!<Filter Init Mode bit 23 */
#define CAN_FM1R_FBM24_Pos (24U)
#define CAN_FM1R_FBM24_Msk (0x1U << CAN_FM1R_FBM24_Pos) /*!< 0x01000000 */
#define CAN_FM1R_FBM24     CAN_FM1R_FBM24_Msk           /*!<Filter Init Mode bit 24 */
#define CAN_FM1R_FBM25_Pos (25U)
#define CAN_FM1R_FBM25_Msk (0x1U << CAN_FM1R_FBM25_Pos) /*!< 0x02000000 */
#define CAN_FM1R_FBM25     CAN_FM1R_FBM25_Msk           /*!<Filter Init Mode bit 25 */
#define CAN_FM1R_FBM26_Pos (26U)
#define CAN_FM1R_FBM26_Msk (0x1U << CAN_FM1R_FBM26_Pos) /*!< 0x04000000 */
#define CAN_FM1R_FBM26     CAN_FM1R_FBM26_Msk           /*!<Filter Init Mode bit 26 */
#define CAN_FM1R_FBM27_Pos (27U)
#define CAN_FM1R_FBM27_Msk (0x1U << CAN_FM1R_FBM27_Pos) /*!< 0x08000000 */
#define CAN_FM1R_FBM27     CAN_FM1R_FBM27_Msk           /*!<Filter Init Mode bit 27 */

/*******************  Bit definition for CAN_FS1R register  *******************/
#define CAN_FS1R_FSC_Pos   (0U)
#define CAN_FS1R_FSC_Msk   (0xFFFFFFFU << CAN_FS1R_FSC_Pos) /*!< 0x0FFFFFFF */
#define CAN_FS1R_FSC       CAN_FS1R_FSC_Msk                 /*!<Filter Scale Configuration */
#define CAN_FS1R_FSC0_Pos  (0U)
#define CAN_FS1R_FSC0_Msk  (0x1U << CAN_FS1R_FSC0_Pos) /*!< 0x00000001 */
#define CAN_FS1R_FSC0      CAN_FS1R_FSC0_Msk           /*!<Filter Scale Configuration bit 0 */
#define CAN_FS1R_FSC1_Pos  (1U)
#define CAN_FS1R_FSC1_Msk  (0x1U << CAN_FS1R_FSC1_Pos) /*!< 0x00000002 */
#define CAN_FS1R_FSC1      CAN_FS1R_FSC1_Msk           /*!<Filter Scale Configuration bit 1 */
#define CAN_FS1R_FSC2_Pos  (2U)
#define CAN_FS1R_FSC2_Msk  (0x1U << CAN_FS1R_FSC2_Pos) /*!< 0x00000004 */
#define CAN_FS1R_FSC2      CAN_FS1R_FSC2_Msk           /*!<Filter Scale Configuration bit 2 */
#define CAN_FS1R_FSC3_Pos  (3U)
#define CAN_FS1R_FSC3_Msk  (0x1U << CAN_FS1R_FSC3_Pos) /*!< 0x00000008 */
#define CAN_FS1R_FSC3      CAN_FS1R_FSC3_Msk           /*!<Filter Scale Configuration bit 3 */
#define CAN_FS1R_FSC4_Pos  (4U)
#define CAN_FS1R_FSC4_Msk  (0x1U << CAN_FS1R_FSC4_Pos) /*!< 0x00000010 */
#define CAN_FS1R_FSC4      CAN_FS1R_FSC4_Msk           /*!<Filter Scale Configuration bit 4 */
#define CAN_FS1R_FSC5_Pos  (5U)
#define CAN_FS1R_FSC5_Msk  (0x1U << CAN_FS1R_FSC5_Pos) /*!< 0x00000020 */
#define CAN_FS1R_FSC5      CAN_FS1R_FSC5_Msk           /*!<Filter Scale Configuration bit 5 */
#define CAN_FS1R_FSC6_Pos  (6U)
#define CAN_FS1R_FSC6_Msk  (0x1U << CAN_FS1R_FSC6_Pos) /*!< 0x00000040 */
#define CAN_FS1R_FSC6      CAN_FS1R_FSC6_Msk           /*!<Filter Scale Configuration bit 6 */
#define CAN_FS1R_FSC7_Pos  (7U)
#define CAN_FS1R_FSC7_Msk  (0x1U << CAN_FS1R_FSC7_Pos) /*!< 0x00000080 */
#define CAN_FS1R_FSC7      CAN_FS1R_FSC7_Msk           /*!<Filter Scale Configuration bit 7 */
#define CAN_FS1R_FSC8_Pos  (8U)
#define CAN_FS1R_FSC8_Msk  (0x1U << CAN_FS1R_FSC8_Pos) /*!< 0x00000100 */
#define CAN_FS1R_FSC8      CAN_FS1R_FSC8_Msk           /*!<Filter Scale Configuration bit 8 */
#define CAN_FS1R_FSC9_Pos  (9U)
#define CAN_FS1R_FSC9_Msk  (0x1U << CAN_FS1R_FSC9_Pos) /*!< 0x00000200 */
#define CAN_FS1R_FSC9      CAN_FS1R_FSC9_Msk           /*!<Filter Scale Configuration bit 9 */
#define CAN_FS1R_FSC10_Pos (10U)
#define CAN_FS1R_FSC10_Msk (0x1U << CAN_FS1R_FSC10_Pos) /*!< 0x00000400 */
#define CAN_FS1R_FSC10     CAN_FS1R_FSC10_Msk           /*!<Filter Scale Configuration bit 10 */
#define CAN_FS1R_FSC11_Pos (11U)
#define CAN_FS1R_FSC11_Msk (0x1U << CAN_FS1R_FSC11_Pos) /*!< 0x00000800 */
#define CAN_FS1R_FSC11     CAN_FS1R_FSC11_Msk           /*!<Filter Scale Configuration bit 11 */
#define CAN_FS1R_FSC12_Pos (12U)
#define CAN_FS1R_FSC12_Msk (0x1U << CAN_FS1R_FSC12_Pos) /*!< 0x00001000 */
#define CAN_FS1R_FSC12     CAN_FS1R_FSC12_Msk           /*!<Filter Scale Configuration bit 12 */
#define CAN_FS1R_FSC13_Pos (13U)
#define CAN_FS1R_FSC13_Msk (0x1U << CAN_FS1R_FSC13_Pos) /*!< 0x00002000 */
#define CAN_FS1R_FSC13     CAN_FS1R_FSC13_Msk           /*!<Filter Scale Configuration bit 13 */
#define CAN_FS1R_FSC14_Pos (14U)
#define CAN_FS1R_FSC14_Msk (0x1U << CAN_FS1R_FSC14_Pos) /*!< 0x00004000 */
#define CAN_FS1R_FSC14     CAN_FS1R_FSC14_Msk           /*!<Filter Scale Configuration bit 14 */
#define CAN_FS1R_FSC15_Pos (15U)
#define CAN_FS1R_FSC15_Msk (0x1U << CAN_FS1R_FSC15_Pos) /*!< 0x00008000 */
#define CAN_FS1R_FSC15     CAN_FS1R_FSC15_Msk           /*!<Filter Scale Configuration bit 15 */
#define CAN_FS1R_FSC16_Pos (16U)
#define CAN_FS1R_FSC16_Msk (0x1U << CAN_FS1R_FSC16_Pos) /*!< 0x00010000 */
#define CAN_FS1R_FSC16     CAN_FS1R_FSC16_Msk           /*!<Filter Scale Configuration bit 16 */
#define CAN_FS1R_FSC17_Pos (17U)
#define CAN_FS1R_FSC17_Msk (0x1U << CAN_FS1R_FSC17_Pos) /*!< 0x00020000 */
#define CAN_FS1R_FSC17     CAN_FS1R_FSC17_Msk           /*!<Filter Scale Configuration bit 17 */
#define CAN_FS1R_FSC18_Pos (18U)
#define CAN_FS1R_FSC18_Msk (0x1U << CAN_FS1R_FSC18_Pos) /*!< 0x00040000 */
#define CAN_FS1R_FSC18     CAN_FS1R_FSC18_Msk           /*!<Filter Scale Configuration bit 18 */
#define CAN_FS1R_FSC19_Pos (19U)
#define CAN_FS1R_FSC19_Msk (0x1U << CAN_FS1R_FSC19_Pos) /*!< 0x00080000 */
#define CAN_FS1R_FSC19     CAN_FS1R_FSC19_Msk           /*!<Filter Scale Configuration bit 19 */
#define CAN_FS1R_FSC20_Pos (20U)
#define CAN_FS1R_FSC20_Msk (0x1U << CAN_FS1R_FSC20_Pos) /*!< 0x00100000 */
#define CAN_FS1R_FSC20     CAN_FS1R_FSC20_Msk           /*!<Filter Scale Configuration bit 20 */
#define CAN_FS1R_FSC21_Pos (21U)
#define CAN_FS1R_FSC21_Msk (0x1U << CAN_FS1R_FSC21_Pos) /*!< 0x00200000 */
#define CAN_FS1R_FSC21     CAN_FS1R_FSC21_Msk           /*!<Filter Scale Configuration bit 21 */
#define CAN_FS1R_FSC22_Pos (22U)
#define CAN_FS1R_FSC22_Msk (0x1U << CAN_FS1R_FSC22_Pos) /*!< 0x00400000 */
#define CAN_FS1R_FSC22     CAN_FS1R_FSC22_Msk           /*!<Filter Scale Configuration bit 22 */
#define CAN_FS1R_FSC23_Pos (23U)
#define CAN_FS1R_FSC23_Msk (0x1U << CAN_FS1R_FSC23_Pos) /*!< 0x00800000 */
#define CAN_FS1R_FSC23     CAN_FS1R_FSC23_Msk           /*!<Filter Scale Configuration bit 23 */
#define CAN_FS1R_FSC24_Pos (24U)
#define CAN_FS1R_FSC24_Msk (0x1U << CAN_FS1R_FSC24_Pos) /*!< 0x01000000 */
#define CAN_FS1R_FSC24     CAN_FS1R_FSC24_Msk           /*!<Filter Scale Configuration bit 24 */
#define CAN_FS1R_FSC25_Pos (25U)
#define CAN_FS1R_FSC25_Msk (0x1U << CAN_FS1R_FSC25_Pos) /*!< 0x02000000 */
#define CAN_FS1R_FSC25     CAN_FS1R_FSC25_Msk           /*!<Filter Scale Configuration bit 25 */
#define CAN_FS1R_FSC26_Pos (26U)
#define CAN_FS1R_FSC26_Msk (0x1U << CAN_FS1R_FSC26_Pos) /*!< 0x04000000 */
#define CAN_FS1R_FSC26     CAN_FS1R_FSC26_Msk           /*!<Filter Scale Configuration bit 26 */
#define CAN_FS1R_FSC27_Pos (27U)
#define CAN_FS1R_FSC27_Msk (0x1U << CAN_FS1R_FSC27_Pos) /*!< 0x08000000 */
#define CAN_FS1R_FSC27     CAN_FS1R_FSC27_Msk           /*!<Filter Scale Configuration bit 27 */

/******************  Bit definition for CAN_FFA1R register  *******************/
#define CAN_FFA1R_FFA_Pos   (0U)
#define CAN_FFA1R_FFA_Msk   (0xFFFFFFFU << CAN_FFA1R_FFA_Pos) /*!< 0x0FFFFFFF */
#define CAN_FFA1R_FFA       CAN_FFA1R_FFA_Msk                 /*!<Filter FIFO Assignment */
#define CAN_FFA1R_FFA0_Pos  (0U)
#define CAN_FFA1R_FFA0_Msk  (0x1U << CAN_FFA1R_FFA0_Pos) /*!< 0x00000001 */
#define CAN_FFA1R_FFA0      CAN_FFA1R_FFA0_Msk           /*!<Filter FIFO Assignment bit 0 */
#define CAN_FFA1R_FFA1_Pos  (1U)
#define CAN_FFA1R_FFA1_Msk  (0x1U << CAN_FFA1R_FFA1_Pos) /*!< 0x00000002 */
#define CAN_FFA1R_FFA1      CAN_FFA1R_FFA1_Msk           /*!<Filter FIFO Assignment bit 1 */
#define CAN_FFA1R_FFA2_Pos  (2U)
#define CAN_FFA1R_FFA2_Msk  (0x1U << CAN_FFA1R_FFA2_Pos) /*!< 0x00000004 */
#define CAN_FFA1R_FFA2      CAN_FFA1R_FFA2_Msk           /*!<Filter FIFO Assignment bit 2 */
#define CAN_FFA1R_FFA3_Pos  (3U)
#define CAN_FFA1R_FFA3_Msk  (0x1U << CAN_FFA1R_FFA3_Pos) /*!< 0x00000008 */
#define CAN_FFA1R_FFA3      CAN_FFA1R_FFA3_Msk           /*!<Filter FIFO Assignment bit 3 */
#define CAN_FFA1R_FFA4_Pos  (4U)
#define CAN_FFA1R_FFA4_Msk  (0x1U << CAN_FFA1R_FFA4_Pos) /*!< 0x00000010 */
#define CAN_FFA1R_FFA4      CAN_FFA1R_FFA4_Msk           /*!<Filter FIFO Assignment bit 4 */
#define CAN_FFA1R_FFA5_Pos  (5U)
#define CAN_FFA1R_FFA5_Msk  (0x1U << CAN_FFA1R_FFA5_Pos) /*!< 0x00000020 */
#define CAN_FFA1R_FFA5      CAN_FFA1R_FFA5_Msk           /*!<Filter FIFO Assignment bit 5 */
#define CAN_FFA1R_FFA6_Pos  (6U)
#define CAN_FFA1R_FFA6_Msk  (0x1U << CAN_FFA1R_FFA6_Pos) /*!< 0x00000040 */
#define CAN_FFA1R_FFA6      CAN_FFA1R_FFA6_Msk           /*!<Filter FIFO Assignment bit 6 */
#define CAN_FFA1R_FFA7_Pos  (7U)
#define CAN_FFA1R_FFA7_Msk  (0x1U << CAN_FFA1R_FFA7_Pos) /*!< 0x00000080 */
#define CAN_FFA1R_FFA7      CAN_FFA1R_FFA7_Msk           /*!<Filter FIFO Assignment bit 7 */
#define CAN_FFA1R_FFA8_Pos  (8U)
#define CAN_FFA1R_FFA8_Msk  (0x1U << CAN_FFA1R_FFA8_Pos) /*!< 0x00000100 */
#define CAN_FFA1R_FFA8      CAN_FFA1R_FFA8_Msk           /*!<Filter FIFO Assignment bit 8 */
#define CAN_FFA1R_FFA9_Pos  (9U)
#define CAN_FFA1R_FFA9_Msk  (0x1U << CAN_FFA1R_FFA9_Pos) /*!< 0x00000200 */
#define CAN_FFA1R_FFA9      CAN_FFA1R_FFA9_Msk           /*!<Filter FIFO Assignment bit 9 */
#define CAN_FFA1R_FFA10_Pos (10U)
#define CAN_FFA1R_FFA10_Msk (0x1U << CAN_FFA1R_FFA10_Pos) /*!< 0x00000400 */
#define CAN_FFA1R_FFA10     CAN_FFA1R_FFA10_Msk           /*!<Filter FIFO Assignment bit 10 */
#define CAN_FFA1R_FFA11_Pos (11U)
#define CAN_FFA1R_FFA11_Msk (0x1U << CAN_FFA1R_FFA11_Pos) /*!< 0x00000800 */
#define CAN_FFA1R_FFA11     CAN_FFA1R_FFA11_Msk           /*!<Filter FIFO Assignment bit 11 */
#define CAN_FFA1R_FFA12_Pos (12U)
#define CAN_FFA1R_FFA12_Msk (0x1U << CAN_FFA1R_FFA12_Pos) /*!< 0x00001000 */
#define CAN_FFA1R_FFA12     CAN_FFA1R_FFA12_Msk           /*!<Filter FIFO Assignment bit 12 */
#define CAN_FFA1R_FFA13_Pos (13U)
#define CAN_FFA1R_FFA13_Msk (0x1U << CAN_FFA1R_FFA13_Pos) /*!< 0x00002000 */
#define CAN_FFA1R_FFA13     CAN_FFA1R_FFA13_Msk           /*!<Filter FIFO Assignment bit 13 */
#define CAN_FFA1R_FFA14_Pos (14U)
#define CAN_FFA1R_FFA14_Msk (0x1U << CAN_FFA1R_FFA14_Pos) /*!< 0x00004000 */
#define CAN_FFA1R_FFA14     CAN_FFA1R_FFA14_Msk           /*!<Filter FIFO Assignment bit 14 */
#define CAN_FFA1R_FFA15_Pos (15U)
#define CAN_FFA1R_FFA15_Msk (0x1U << CAN_FFA1R_FFA15_Pos) /*!< 0x00008000 */
#define CAN_FFA1R_FFA15     CAN_FFA1R_FFA15_Msk           /*!<Filter FIFO Assignment bit 15 */
#define CAN_FFA1R_FFA16_Pos (16U)
#define CAN_FFA1R_FFA16_Msk (0x1U << CAN_FFA1R_FFA16_Pos) /*!< 0x00010000 */
#define CAN_FFA1R_FFA16     CAN_FFA1R_FFA16_Msk           /*!<Filter FIFO Assignment bit 16 */
#define CAN_FFA1R_FFA17_Pos (17U)
#define CAN_FFA1R_FFA17_Msk (0x1U << CAN_FFA1R_FFA17_Pos) /*!< 0x00020000 */
#define CAN_FFA1R_FFA17     CAN_FFA1R_FFA17_Msk           /*!<Filter FIFO Assignment bit 17 */
#define CAN_FFA1R_FFA18_Pos (18U)
#define CAN_FFA1R_FFA18_Msk (0x1U << CAN_FFA1R_FFA18_Pos) /*!< 0x00040000 */
#define CAN_FFA1R_FFA18     CAN_FFA1R_FFA18_Msk           /*!<Filter FIFO Assignment bit 18 */
#define CAN_FFA1R_FFA19_Pos (19U)
#define CAN_FFA1R_FFA19_Msk (0x1U << CAN_FFA1R_FFA19_Pos) /*!< 0x00080000 */
#define CAN_FFA1R_FFA19     CAN_FFA1R_FFA19_Msk           /*!<Filter FIFO Assignment bit 19 */
#define CAN_FFA1R_FFA20_Pos (20U)
#define CAN_FFA1R_FFA20_Msk (0x1U << CAN_FFA1R_FFA20_Pos) /*!< 0x00100000 */
#define CAN_FFA1R_FFA20     CAN_FFA1R_FFA20_Msk           /*!<Filter FIFO Assignment bit 20 */
#define CAN_FFA1R_FFA21_Pos (21U)
#define CAN_FFA1R_FFA21_Msk (0x1U << CAN_FFA1R_FFA21_Pos) /*!< 0x00200000 */
#define CAN_FFA1R_FFA21     CAN_FFA1R_FFA21_Msk           /*!<Filter FIFO Assignment bit 21 */
#define CAN_FFA1R_FFA22_Pos (22U)
#define CAN_FFA1R_FFA22_Msk (0x1U << CAN_FFA1R_FFA22_Pos) /*!< 0x00400000 */
#define CAN_FFA1R_FFA22     CAN_FFA1R_FFA22_Msk           /*!<Filter FIFO Assignment bit 22 */
#define CAN_FFA1R_FFA23_Pos (23U)
#define CAN_FFA1R_FFA23_Msk (0x1U << CAN_FFA1R_FFA23_Pos) /*!< 0x00800000 */
#define CAN_FFA1R_FFA23     CAN_FFA1R_FFA23_Msk           /*!<Filter FIFO Assignment bit 23 */
#define CAN_FFA1R_FFA24_Pos (24U)
#define CAN_FFA1R_FFA24_Msk (0x1U << CAN_FFA1R_FFA24_Pos) /*!< 0x01000000 */
#define CAN_FFA1R_FFA24     CAN_FFA1R_FFA24_Msk           /*!<Filter FIFO Assignment bit 24 */
#define CAN_FFA1R_FFA25_Pos (25U)
#define CAN_FFA1R_FFA25_Msk (0x1U << CAN_FFA1R_FFA25_Pos) /*!< 0x02000000 */
#define CAN_FFA1R_FFA25     CAN_FFA1R_FFA25_Msk           /*!<Filter FIFO Assignment bit 25 */
#define CAN_FFA1R_FFA26_Pos (26U)
#define CAN_FFA1R_FFA26_Msk (0x1U << CAN_FFA1R_FFA26_Pos) /*!< 0x04000000 */
#define CAN_FFA1R_FFA26     CAN_FFA1R_FFA26_Msk           /*!<Filter FIFO Assignment bit 26 */
#define CAN_FFA1R_FFA27_Pos (27U)
#define CAN_FFA1R_FFA27_Msk (0x1U << CAN_FFA1R_FFA27_Pos) /*!< 0x08000000 */
#define CAN_FFA1R_FFA27     CAN_FFA1R_FFA27_Msk           /*!<Filter FIFO Assignment bit 27 */

/*******************  Bit definition for CAN_FA1R register  *******************/
#define CAN_FA1R_FACT_Pos   (0U)
#define CAN_FA1R_FACT_Msk   (0xFFFFFFFU << CAN_FA1R_FACT_Pos) /*!< 0x0FFFFFFF */
#define CAN_FA1R_FACT       CAN_FA1R_FACT_Msk                 /*!<Filter Active */
#define CAN_FA1R_FACT0_Pos  (0U)
#define CAN_FA1R_FACT0_Msk  (0x1U << CAN_FA1R_FACT0_Pos) /*!< 0x00000001 */
#define CAN_FA1R_FACT0      CAN_FA1R_FACT0_Msk           /*!<Filter Active bit 0 */
#define CAN_FA1R_FACT1_Pos  (1U)
#define CAN_FA1R_FACT1_Msk  (0x1U << CAN_FA1R_FACT1_Pos) /*!< 0x00000002 */
#define CAN_FA1R_FACT1      CAN_FA1R_FACT1_Msk           /*!<Filter Active bit 1 */
#define CAN_FA1R_FACT2_Pos  (2U)
#define CAN_FA1R_FACT2_Msk  (0x1U << CAN_FA1R_FACT2_Pos) /*!< 0x00000004 */
#define CAN_FA1R_FACT2      CAN_FA1R_FACT2_Msk           /*!<Filter Active bit 2 */
#define CAN_FA1R_FACT3_Pos  (3U)
#define CAN_FA1R_FACT3_Msk  (0x1U << CAN_FA1R_FACT3_Pos) /*!< 0x00000008 */
#define CAN_FA1R_FACT3      CAN_FA1R_FACT3_Msk           /*!<Filter Active bit 3 */
#define CAN_FA1R_FACT4_Pos  (4U)
#define CAN_FA1R_FACT4_Msk  (0x1U << CAN_FA1R_FACT4_Pos) /*!< 0x00000010 */
#define CAN_FA1R_FACT4      CAN_FA1R_FACT4_Msk           /*!<Filter Active bit 4 */
#define CAN_FA1R_FACT5_Pos  (5U)
#define CAN_FA1R_FACT5_Msk  (0x1U << CAN_FA1R_FACT5_Pos) /*!< 0x00000020 */
#define CAN_FA1R_FACT5      CAN_FA1R_FACT5_Msk           /*!<Filter Active bit 5 */
#define CAN_FA1R_FACT6_Pos  (6U)
#define CAN_FA1R_FACT6_Msk  (0x1U << CAN_FA1R_FACT6_Pos) /*!< 0x00000040 */
#define CAN_FA1R_FACT6      CAN_FA1R_FACT6_Msk           /*!<Filter Active bit 6 */
#define CAN_FA1R_FACT7_Pos  (7U)
#define CAN_FA1R_FACT7_Msk  (0x1U << CAN_FA1R_FACT7_Pos) /*!< 0x00000080 */
#define CAN_FA1R_FACT7      CAN_FA1R_FACT7_Msk           /*!<Filter Active bit 7 */
#define CAN_FA1R_FACT8_Pos  (8U)
#define CAN_FA1R_FACT8_Msk  (0x1U << CAN_FA1R_FACT8_Pos) /*!< 0x00000100 */
#define CAN_FA1R_FACT8      CAN_FA1R_FACT8_Msk           /*!<Filter Active bit 8 */
#define CAN_FA1R_FACT9_Pos  (9U)
#define CAN_FA1R_FACT9_Msk  (0x1U << CAN_FA1R_FACT9_Pos) /*!< 0x00000200 */
#define CAN_FA1R_FACT9      CAN_FA1R_FACT9_Msk           /*!<Filter Active bit 9 */
#define CAN_FA1R_FACT10_Pos (10U)
#define CAN_FA1R_FACT10_Msk (0x1U << CAN_FA1R_FACT10_Pos) /*!< 0x00000400 */
#define CAN_FA1R_FACT10     CAN_FA1R_FACT10_Msk           /*!<Filter Active bit 10 */
#define CAN_FA1R_FACT11_Pos (11U)
#define CAN_FA1R_FACT11_Msk (0x1U << CAN_FA1R_FACT11_Pos) /*!< 0x00000800 */
#define CAN_FA1R_FACT11     CAN_FA1R_FACT11_Msk           /*!<Filter Active bit 11 */
#define CAN_FA1R_FACT12_Pos (12U)
#define CAN_FA1R_FACT12_Msk (0x1U << CAN_FA1R_FACT12_Pos) /*!< 0x00001000 */
#define CAN_FA1R_FACT12     CAN_FA1R_FACT12_Msk           /*!<Filter Active bit 12 */
#define CAN_FA1R_FACT13_Pos (13U)
#define CAN_FA1R_FACT13_Msk (0x1U << CAN_FA1R_FACT13_Pos) /*!< 0x00002000 */
#define CAN_FA1R_FACT13     CAN_FA1R_FACT13_Msk           /*!<Filter Active bit 13 */
#define CAN_FA1R_FACT14_Pos (14U)
#define CAN_FA1R_FACT14_Msk (0x1U << CAN_FA1R_FACT14_Pos) /*!< 0x00004000 */
#define CAN_FA1R_FACT14     CAN_FA1R_FACT14_Msk           /*!<Filter Active bit 14 */
#define CAN_FA1R_FACT15_Pos (15U)
#define CAN_FA1R_FACT15_Msk (0x1U << CAN_FA1R_FACT15_Pos) /*!< 0x00008000 */
#define CAN_FA1R_FACT15     CAN_FA1R_FACT15_Msk           /*!<Filter Active bit 15 */
#define CAN_FA1R_FACT16_Pos (16U)
#define CAN_FA1R_FACT16_Msk (0x1U << CAN_FA1R_FACT16_Pos) /*!< 0x00010000 */
#define CAN_FA1R_FACT16     CAN_FA1R_FACT16_Msk           /*!<Filter Active bit 16 */
#define CAN_FA1R_FACT17_Pos (17U)
#define CAN_FA1R_FACT17_Msk (0x1U << CAN_FA1R_FACT17_Pos) /*!< 0x00020000 */
#define CAN_FA1R_FACT17     CAN_FA1R_FACT17_Msk           /*!<Filter Active bit 17 */
#define CAN_FA1R_FACT18_Pos (18U)
#define CAN_FA1R_FACT18_Msk (0x1U << CAN_FA1R_FACT18_Pos) /*!< 0x00040000 */
#define CAN_FA1R_FACT18     CAN_FA1R_FACT18_Msk           /*!<Filter Active bit 18 */
#define CAN_FA1R_FACT19_Pos (19U)
#define CAN_FA1R_FACT19_Msk (0x1U << CAN_FA1R_FACT19_Pos) /*!< 0x00080000 */
#define CAN_FA1R_FACT19     CAN_FA1R_FACT19_Msk           /*!<Filter Active bit 19 */
#define CAN_FA1R_FACT20_Pos (20U)
#define CAN_FA1R_FACT20_Msk (0x1U << CAN_FA1R_FACT20_Pos) /*!< 0x00100000 */
#define CAN_FA1R_FACT20     CAN_FA1R_FACT20_Msk           /*!<Filter Active bit 20 */
#define CAN_FA1R_FACT21_Pos (21U)
#define CAN_FA1R_FACT21_Msk (0x1U << CAN_FA1R_FACT21_Pos) /*!< 0x00200000 */
#define CAN_FA1R_FACT21     CAN_FA1R_FACT21_Msk           /*!<Filter Active bit 21 */
#define CAN_FA1R_FACT22_Pos (22U)
#define CAN_FA1R_FACT22_Msk (0x1U << CAN_FA1R_FACT22_Pos) /*!< 0x00400000 */
#define CAN_FA1R_FACT22     CAN_FA1R_FACT22_Msk           /*!<Filter Active bit 22 */
#define CAN_FA1R_FACT23_Pos (23U)
#define CAN_FA1R_FACT23_Msk (0x1U << CAN_FA1R_FACT23_Pos) /*!< 0x00800000 */
#define CAN_FA1R_FACT23     CAN_FA1R_FACT23_Msk           /*!<Filter Active bit 23 */
#define CAN_FA1R_FACT24_Pos (24U)
#define CAN_FA1R_FACT24_Msk (0x1U << CAN_FA1R_FACT24_Pos) /*!< 0x01000000 */
#define CAN_FA1R_FACT24     CAN_FA1R_FACT24_Msk           /*!<Filter Active bit 24 */
#define CAN_FA1R_FACT25_Pos (25U)
#define CAN_FA1R_FACT25_Msk (0x1U << CAN_FA1R_FACT25_Pos) /*!< 0x02000000 */
#define CAN_FA1R_FACT25     CAN_FA1R_FACT25_Msk           /*!<Filter Active bit 25 */
#define CAN_FA1R_FACT26_Pos (26U)
#define CAN_FA1R_FACT26_Msk (0x1U << CAN_FA1R_FACT26_Pos) /*!< 0x04000000 */
#define CAN_FA1R_FACT26     CAN_FA1R_FACT26_Msk           /*!<Filter Active bit 26 */
#define CAN_FA1R_FACT27_Pos (27U)
#define CAN_FA1R_FACT27_Msk (0x1U << CAN_FA1R_FACT27_Pos) /*!< 0x08000000 */
#define CAN_FA1R_FACT27     CAN_FA1R_FACT27_Msk           /*!<Filter Active bit 27 */


/*******************  Bit definition for CAN_F0R1 register  *******************/
#define CAN_F0R1_FB0_Pos  (0U)
#define CAN_F0R1_FB0_Msk  (0x1U << CAN_F0R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F0R1_FB0      CAN_F0R1_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F0R1_FB1_Pos  (1U)
#define CAN_F0R1_FB1_Msk  (0x1U << CAN_F0R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F0R1_FB1      CAN_F0R1_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F0R1_FB2_Pos  (2U)
#define CAN_F0R1_FB2_Msk  (0x1U << CAN_F0R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F0R1_FB2      CAN_F0R1_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F0R1_FB3_Pos  (3U)
#define CAN_F0R1_FB3_Msk  (0x1U << CAN_F0R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F0R1_FB3      CAN_F0R1_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F0R1_FB4_Pos  (4U)
#define CAN_F0R1_FB4_Msk  (0x1U << CAN_F0R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F0R1_FB4      CAN_F0R1_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F0R1_FB5_Pos  (5U)
#define CAN_F0R1_FB5_Msk  (0x1U << CAN_F0R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F0R1_FB5      CAN_F0R1_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F0R1_FB6_Pos  (6U)
#define CAN_F0R1_FB6_Msk  (0x1U << CAN_F0R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F0R1_FB6      CAN_F0R1_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F0R1_FB7_Pos  (7U)
#define CAN_F0R1_FB7_Msk  (0x1U << CAN_F0R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F0R1_FB7      CAN_F0R1_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F0R1_FB8_Pos  (8U)
#define CAN_F0R1_FB8_Msk  (0x1U << CAN_F0R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F0R1_FB8      CAN_F0R1_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F0R1_FB9_Pos  (9U)
#define CAN_F0R1_FB9_Msk  (0x1U << CAN_F0R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F0R1_FB9      CAN_F0R1_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F0R1_FB10_Pos (10U)
#define CAN_F0R1_FB10_Msk (0x1U << CAN_F0R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F0R1_FB10     CAN_F0R1_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F0R1_FB11_Pos (11U)
#define CAN_F0R1_FB11_Msk (0x1U << CAN_F0R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F0R1_FB11     CAN_F0R1_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F0R1_FB12_Pos (12U)
#define CAN_F0R1_FB12_Msk (0x1U << CAN_F0R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F0R1_FB12     CAN_F0R1_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F0R1_FB13_Pos (13U)
#define CAN_F0R1_FB13_Msk (0x1U << CAN_F0R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F0R1_FB13     CAN_F0R1_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F0R1_FB14_Pos (14U)
#define CAN_F0R1_FB14_Msk (0x1U << CAN_F0R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F0R1_FB14     CAN_F0R1_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F0R1_FB15_Pos (15U)
#define CAN_F0R1_FB15_Msk (0x1U << CAN_F0R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F0R1_FB15     CAN_F0R1_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F0R1_FB16_Pos (16U)
#define CAN_F0R1_FB16_Msk (0x1U << CAN_F0R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F0R1_FB16     CAN_F0R1_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F0R1_FB17_Pos (17U)
#define CAN_F0R1_FB17_Msk (0x1U << CAN_F0R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F0R1_FB17     CAN_F0R1_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F0R1_FB18_Pos (18U)
#define CAN_F0R1_FB18_Msk (0x1U << CAN_F0R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F0R1_FB18     CAN_F0R1_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F0R1_FB19_Pos (19U)
#define CAN_F0R1_FB19_Msk (0x1U << CAN_F0R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F0R1_FB19     CAN_F0R1_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F0R1_FB20_Pos (20U)
#define CAN_F0R1_FB20_Msk (0x1U << CAN_F0R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F0R1_FB20     CAN_F0R1_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F0R1_FB21_Pos (21U)
#define CAN_F0R1_FB21_Msk (0x1U << CAN_F0R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F0R1_FB21     CAN_F0R1_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F0R1_FB22_Pos (22U)
#define CAN_F0R1_FB22_Msk (0x1U << CAN_F0R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F0R1_FB22     CAN_F0R1_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F0R1_FB23_Pos (23U)
#define CAN_F0R1_FB23_Msk (0x1U << CAN_F0R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F0R1_FB23     CAN_F0R1_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F0R1_FB24_Pos (24U)
#define CAN_F0R1_FB24_Msk (0x1U << CAN_F0R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F0R1_FB24     CAN_F0R1_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F0R1_FB25_Pos (25U)
#define CAN_F0R1_FB25_Msk (0x1U << CAN_F0R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F0R1_FB25     CAN_F0R1_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F0R1_FB26_Pos (26U)
#define CAN_F0R1_FB26_Msk (0x1U << CAN_F0R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F0R1_FB26     CAN_F0R1_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F0R1_FB27_Pos (27U)
#define CAN_F0R1_FB27_Msk (0x1U << CAN_F0R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F0R1_FB27     CAN_F0R1_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F0R1_FB28_Pos (28U)
#define CAN_F0R1_FB28_Msk (0x1U << CAN_F0R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F0R1_FB28     CAN_F0R1_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F0R1_FB29_Pos (29U)
#define CAN_F0R1_FB29_Msk (0x1U << CAN_F0R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F0R1_FB29     CAN_F0R1_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F0R1_FB30_Pos (30U)
#define CAN_F0R1_FB30_Msk (0x1U << CAN_F0R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F0R1_FB30     CAN_F0R1_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F0R1_FB31_Pos (31U)
#define CAN_F0R1_FB31_Msk (0x1U << CAN_F0R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F0R1_FB31     CAN_F0R1_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F1R1 register  *******************/
#define CAN_F1R1_FB0_Pos  (0U)
#define CAN_F1R1_FB0_Msk  (0x1U << CAN_F1R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F1R1_FB0      CAN_F1R1_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F1R1_FB1_Pos  (1U)
#define CAN_F1R1_FB1_Msk  (0x1U << CAN_F1R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F1R1_FB1      CAN_F1R1_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F1R1_FB2_Pos  (2U)
#define CAN_F1R1_FB2_Msk  (0x1U << CAN_F1R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F1R1_FB2      CAN_F1R1_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F1R1_FB3_Pos  (3U)
#define CAN_F1R1_FB3_Msk  (0x1U << CAN_F1R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F1R1_FB3      CAN_F1R1_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F1R1_FB4_Pos  (4U)
#define CAN_F1R1_FB4_Msk  (0x1U << CAN_F1R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F1R1_FB4      CAN_F1R1_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F1R1_FB5_Pos  (5U)
#define CAN_F1R1_FB5_Msk  (0x1U << CAN_F1R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F1R1_FB5      CAN_F1R1_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F1R1_FB6_Pos  (6U)
#define CAN_F1R1_FB6_Msk  (0x1U << CAN_F1R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F1R1_FB6      CAN_F1R1_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F1R1_FB7_Pos  (7U)
#define CAN_F1R1_FB7_Msk  (0x1U << CAN_F1R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F1R1_FB7      CAN_F1R1_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F1R1_FB8_Pos  (8U)
#define CAN_F1R1_FB8_Msk  (0x1U << CAN_F1R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F1R1_FB8      CAN_F1R1_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F1R1_FB9_Pos  (9U)
#define CAN_F1R1_FB9_Msk  (0x1U << CAN_F1R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F1R1_FB9      CAN_F1R1_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F1R1_FB10_Pos (10U)
#define CAN_F1R1_FB10_Msk (0x1U << CAN_F1R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F1R1_FB10     CAN_F1R1_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F1R1_FB11_Pos (11U)
#define CAN_F1R1_FB11_Msk (0x1U << CAN_F1R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F1R1_FB11     CAN_F1R1_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F1R1_FB12_Pos (12U)
#define CAN_F1R1_FB12_Msk (0x1U << CAN_F1R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F1R1_FB12     CAN_F1R1_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F1R1_FB13_Pos (13U)
#define CAN_F1R1_FB13_Msk (0x1U << CAN_F1R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F1R1_FB13     CAN_F1R1_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F1R1_FB14_Pos (14U)
#define CAN_F1R1_FB14_Msk (0x1U << CAN_F1R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F1R1_FB14     CAN_F1R1_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F1R1_FB15_Pos (15U)
#define CAN_F1R1_FB15_Msk (0x1U << CAN_F1R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F1R1_FB15     CAN_F1R1_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F1R1_FB16_Pos (16U)
#define CAN_F1R1_FB16_Msk (0x1U << CAN_F1R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F1R1_FB16     CAN_F1R1_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F1R1_FB17_Pos (17U)
#define CAN_F1R1_FB17_Msk (0x1U << CAN_F1R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F1R1_FB17     CAN_F1R1_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F1R1_FB18_Pos (18U)
#define CAN_F1R1_FB18_Msk (0x1U << CAN_F1R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F1R1_FB18     CAN_F1R1_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F1R1_FB19_Pos (19U)
#define CAN_F1R1_FB19_Msk (0x1U << CAN_F1R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F1R1_FB19     CAN_F1R1_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F1R1_FB20_Pos (20U)
#define CAN_F1R1_FB20_Msk (0x1U << CAN_F1R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F1R1_FB20     CAN_F1R1_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F1R1_FB21_Pos (21U)
#define CAN_F1R1_FB21_Msk (0x1U << CAN_F1R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F1R1_FB21     CAN_F1R1_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F1R1_FB22_Pos (22U)
#define CAN_F1R1_FB22_Msk (0x1U << CAN_F1R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F1R1_FB22     CAN_F1R1_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F1R1_FB23_Pos (23U)
#define CAN_F1R1_FB23_Msk (0x1U << CAN_F1R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F1R1_FB23     CAN_F1R1_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F1R1_FB24_Pos (24U)
#define CAN_F1R1_FB24_Msk (0x1U << CAN_F1R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F1R1_FB24     CAN_F1R1_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F1R1_FB25_Pos (25U)
#define CAN_F1R1_FB25_Msk (0x1U << CAN_F1R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F1R1_FB25     CAN_F1R1_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F1R1_FB26_Pos (26U)
#define CAN_F1R1_FB26_Msk (0x1U << CAN_F1R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F1R1_FB26     CAN_F1R1_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F1R1_FB27_Pos (27U)
#define CAN_F1R1_FB27_Msk (0x1U << CAN_F1R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F1R1_FB27     CAN_F1R1_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F1R1_FB28_Pos (28U)
#define CAN_F1R1_FB28_Msk (0x1U << CAN_F1R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F1R1_FB28     CAN_F1R1_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F1R1_FB29_Pos (29U)
#define CAN_F1R1_FB29_Msk (0x1U << CAN_F1R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F1R1_FB29     CAN_F1R1_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F1R1_FB30_Pos (30U)
#define CAN_F1R1_FB30_Msk (0x1U << CAN_F1R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F1R1_FB30     CAN_F1R1_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F1R1_FB31_Pos (31U)
#define CAN_F1R1_FB31_Msk (0x1U << CAN_F1R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F1R1_FB31     CAN_F1R1_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F2R1 register  *******************/
#define CAN_F2R1_FB0_Pos  (0U)
#define CAN_F2R1_FB0_Msk  (0x1U << CAN_F2R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F2R1_FB0      CAN_F2R1_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F2R1_FB1_Pos  (1U)
#define CAN_F2R1_FB1_Msk  (0x1U << CAN_F2R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F2R1_FB1      CAN_F2R1_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F2R1_FB2_Pos  (2U)
#define CAN_F2R1_FB2_Msk  (0x1U << CAN_F2R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F2R1_FB2      CAN_F2R1_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F2R1_FB3_Pos  (3U)
#define CAN_F2R1_FB3_Msk  (0x1U << CAN_F2R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F2R1_FB3      CAN_F2R1_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F2R1_FB4_Pos  (4U)
#define CAN_F2R1_FB4_Msk  (0x1U << CAN_F2R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F2R1_FB4      CAN_F2R1_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F2R1_FB5_Pos  (5U)
#define CAN_F2R1_FB5_Msk  (0x1U << CAN_F2R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F2R1_FB5      CAN_F2R1_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F2R1_FB6_Pos  (6U)
#define CAN_F2R1_FB6_Msk  (0x1U << CAN_F2R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F2R1_FB6      CAN_F2R1_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F2R1_FB7_Pos  (7U)
#define CAN_F2R1_FB7_Msk  (0x1U << CAN_F2R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F2R1_FB7      CAN_F2R1_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F2R1_FB8_Pos  (8U)
#define CAN_F2R1_FB8_Msk  (0x1U << CAN_F2R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F2R1_FB8      CAN_F2R1_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F2R1_FB9_Pos  (9U)
#define CAN_F2R1_FB9_Msk  (0x1U << CAN_F2R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F2R1_FB9      CAN_F2R1_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F2R1_FB10_Pos (10U)
#define CAN_F2R1_FB10_Msk (0x1U << CAN_F2R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F2R1_FB10     CAN_F2R1_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F2R1_FB11_Pos (11U)
#define CAN_F2R1_FB11_Msk (0x1U << CAN_F2R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F2R1_FB11     CAN_F2R1_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F2R1_FB12_Pos (12U)
#define CAN_F2R1_FB12_Msk (0x1U << CAN_F2R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F2R1_FB12     CAN_F2R1_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F2R1_FB13_Pos (13U)
#define CAN_F2R1_FB13_Msk (0x1U << CAN_F2R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F2R1_FB13     CAN_F2R1_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F2R1_FB14_Pos (14U)
#define CAN_F2R1_FB14_Msk (0x1U << CAN_F2R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F2R1_FB14     CAN_F2R1_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F2R1_FB15_Pos (15U)
#define CAN_F2R1_FB15_Msk (0x1U << CAN_F2R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F2R1_FB15     CAN_F2R1_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F2R1_FB16_Pos (16U)
#define CAN_F2R1_FB16_Msk (0x1U << CAN_F2R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F2R1_FB16     CAN_F2R1_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F2R1_FB17_Pos (17U)
#define CAN_F2R1_FB17_Msk (0x1U << CAN_F2R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F2R1_FB17     CAN_F2R1_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F2R1_FB18_Pos (18U)
#define CAN_F2R1_FB18_Msk (0x1U << CAN_F2R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F2R1_FB18     CAN_F2R1_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F2R1_FB19_Pos (19U)
#define CAN_F2R1_FB19_Msk (0x1U << CAN_F2R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F2R1_FB19     CAN_F2R1_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F2R1_FB20_Pos (20U)
#define CAN_F2R1_FB20_Msk (0x1U << CAN_F2R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F2R1_FB20     CAN_F2R1_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F2R1_FB21_Pos (21U)
#define CAN_F2R1_FB21_Msk (0x1U << CAN_F2R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F2R1_FB21     CAN_F2R1_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F2R1_FB22_Pos (22U)
#define CAN_F2R1_FB22_Msk (0x1U << CAN_F2R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F2R1_FB22     CAN_F2R1_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F2R1_FB23_Pos (23U)
#define CAN_F2R1_FB23_Msk (0x1U << CAN_F2R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F2R1_FB23     CAN_F2R1_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F2R1_FB24_Pos (24U)
#define CAN_F2R1_FB24_Msk (0x1U << CAN_F2R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F2R1_FB24     CAN_F2R1_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F2R1_FB25_Pos (25U)
#define CAN_F2R1_FB25_Msk (0x1U << CAN_F2R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F2R1_FB25     CAN_F2R1_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F2R1_FB26_Pos (26U)
#define CAN_F2R1_FB26_Msk (0x1U << CAN_F2R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F2R1_FB26     CAN_F2R1_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F2R1_FB27_Pos (27U)
#define CAN_F2R1_FB27_Msk (0x1U << CAN_F2R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F2R1_FB27     CAN_F2R1_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F2R1_FB28_Pos (28U)
#define CAN_F2R1_FB28_Msk (0x1U << CAN_F2R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F2R1_FB28     CAN_F2R1_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F2R1_FB29_Pos (29U)
#define CAN_F2R1_FB29_Msk (0x1U << CAN_F2R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F2R1_FB29     CAN_F2R1_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F2R1_FB30_Pos (30U)
#define CAN_F2R1_FB30_Msk (0x1U << CAN_F2R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F2R1_FB30     CAN_F2R1_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F2R1_FB31_Pos (31U)
#define CAN_F2R1_FB31_Msk (0x1U << CAN_F2R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F2R1_FB31     CAN_F2R1_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F3R1 register  *******************/
#define CAN_F3R1_FB0_Pos  (0U)
#define CAN_F3R1_FB0_Msk  (0x1U << CAN_F3R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F3R1_FB0      CAN_F3R1_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F3R1_FB1_Pos  (1U)
#define CAN_F3R1_FB1_Msk  (0x1U << CAN_F3R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F3R1_FB1      CAN_F3R1_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F3R1_FB2_Pos  (2U)
#define CAN_F3R1_FB2_Msk  (0x1U << CAN_F3R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F3R1_FB2      CAN_F3R1_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F3R1_FB3_Pos  (3U)
#define CAN_F3R1_FB3_Msk  (0x1U << CAN_F3R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F3R1_FB3      CAN_F3R1_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F3R1_FB4_Pos  (4U)
#define CAN_F3R1_FB4_Msk  (0x1U << CAN_F3R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F3R1_FB4      CAN_F3R1_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F3R1_FB5_Pos  (5U)
#define CAN_F3R1_FB5_Msk  (0x1U << CAN_F3R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F3R1_FB5      CAN_F3R1_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F3R1_FB6_Pos  (6U)
#define CAN_F3R1_FB6_Msk  (0x1U << CAN_F3R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F3R1_FB6      CAN_F3R1_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F3R1_FB7_Pos  (7U)
#define CAN_F3R1_FB7_Msk  (0x1U << CAN_F3R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F3R1_FB7      CAN_F3R1_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F3R1_FB8_Pos  (8U)
#define CAN_F3R1_FB8_Msk  (0x1U << CAN_F3R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F3R1_FB8      CAN_F3R1_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F3R1_FB9_Pos  (9U)
#define CAN_F3R1_FB9_Msk  (0x1U << CAN_F3R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F3R1_FB9      CAN_F3R1_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F3R1_FB10_Pos (10U)
#define CAN_F3R1_FB10_Msk (0x1U << CAN_F3R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F3R1_FB10     CAN_F3R1_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F3R1_FB11_Pos (11U)
#define CAN_F3R1_FB11_Msk (0x1U << CAN_F3R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F3R1_FB11     CAN_F3R1_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F3R1_FB12_Pos (12U)
#define CAN_F3R1_FB12_Msk (0x1U << CAN_F3R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F3R1_FB12     CAN_F3R1_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F3R1_FB13_Pos (13U)
#define CAN_F3R1_FB13_Msk (0x1U << CAN_F3R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F3R1_FB13     CAN_F3R1_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F3R1_FB14_Pos (14U)
#define CAN_F3R1_FB14_Msk (0x1U << CAN_F3R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F3R1_FB14     CAN_F3R1_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F3R1_FB15_Pos (15U)
#define CAN_F3R1_FB15_Msk (0x1U << CAN_F3R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F3R1_FB15     CAN_F3R1_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F3R1_FB16_Pos (16U)
#define CAN_F3R1_FB16_Msk (0x1U << CAN_F3R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F3R1_FB16     CAN_F3R1_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F3R1_FB17_Pos (17U)
#define CAN_F3R1_FB17_Msk (0x1U << CAN_F3R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F3R1_FB17     CAN_F3R1_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F3R1_FB18_Pos (18U)
#define CAN_F3R1_FB18_Msk (0x1U << CAN_F3R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F3R1_FB18     CAN_F3R1_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F3R1_FB19_Pos (19U)
#define CAN_F3R1_FB19_Msk (0x1U << CAN_F3R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F3R1_FB19     CAN_F3R1_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F3R1_FB20_Pos (20U)
#define CAN_F3R1_FB20_Msk (0x1U << CAN_F3R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F3R1_FB20     CAN_F3R1_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F3R1_FB21_Pos (21U)
#define CAN_F3R1_FB21_Msk (0x1U << CAN_F3R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F3R1_FB21     CAN_F3R1_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F3R1_FB22_Pos (22U)
#define CAN_F3R1_FB22_Msk (0x1U << CAN_F3R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F3R1_FB22     CAN_F3R1_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F3R1_FB23_Pos (23U)
#define CAN_F3R1_FB23_Msk (0x1U << CAN_F3R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F3R1_FB23     CAN_F3R1_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F3R1_FB24_Pos (24U)
#define CAN_F3R1_FB24_Msk (0x1U << CAN_F3R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F3R1_FB24     CAN_F3R1_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F3R1_FB25_Pos (25U)
#define CAN_F3R1_FB25_Msk (0x1U << CAN_F3R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F3R1_FB25     CAN_F3R1_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F3R1_FB26_Pos (26U)
#define CAN_F3R1_FB26_Msk (0x1U << CAN_F3R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F3R1_FB26     CAN_F3R1_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F3R1_FB27_Pos (27U)
#define CAN_F3R1_FB27_Msk (0x1U << CAN_F3R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F3R1_FB27     CAN_F3R1_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F3R1_FB28_Pos (28U)
#define CAN_F3R1_FB28_Msk (0x1U << CAN_F3R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F3R1_FB28     CAN_F3R1_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F3R1_FB29_Pos (29U)
#define CAN_F3R1_FB29_Msk (0x1U << CAN_F3R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F3R1_FB29     CAN_F3R1_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F3R1_FB30_Pos (30U)
#define CAN_F3R1_FB30_Msk (0x1U << CAN_F3R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F3R1_FB30     CAN_F3R1_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F3R1_FB31_Pos (31U)
#define CAN_F3R1_FB31_Msk (0x1U << CAN_F3R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F3R1_FB31     CAN_F3R1_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F4R1 register  *******************/
#define CAN_F4R1_FB0_Pos  (0U)
#define CAN_F4R1_FB0_Msk  (0x1U << CAN_F4R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F4R1_FB0      CAN_F4R1_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F4R1_FB1_Pos  (1U)
#define CAN_F4R1_FB1_Msk  (0x1U << CAN_F4R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F4R1_FB1      CAN_F4R1_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F4R1_FB2_Pos  (2U)
#define CAN_F4R1_FB2_Msk  (0x1U << CAN_F4R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F4R1_FB2      CAN_F4R1_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F4R1_FB3_Pos  (3U)
#define CAN_F4R1_FB3_Msk  (0x1U << CAN_F4R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F4R1_FB3      CAN_F4R1_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F4R1_FB4_Pos  (4U)
#define CAN_F4R1_FB4_Msk  (0x1U << CAN_F4R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F4R1_FB4      CAN_F4R1_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F4R1_FB5_Pos  (5U)
#define CAN_F4R1_FB5_Msk  (0x1U << CAN_F4R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F4R1_FB5      CAN_F4R1_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F4R1_FB6_Pos  (6U)
#define CAN_F4R1_FB6_Msk  (0x1U << CAN_F4R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F4R1_FB6      CAN_F4R1_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F4R1_FB7_Pos  (7U)
#define CAN_F4R1_FB7_Msk  (0x1U << CAN_F4R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F4R1_FB7      CAN_F4R1_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F4R1_FB8_Pos  (8U)
#define CAN_F4R1_FB8_Msk  (0x1U << CAN_F4R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F4R1_FB8      CAN_F4R1_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F4R1_FB9_Pos  (9U)
#define CAN_F4R1_FB9_Msk  (0x1U << CAN_F4R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F4R1_FB9      CAN_F4R1_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F4R1_FB10_Pos (10U)
#define CAN_F4R1_FB10_Msk (0x1U << CAN_F4R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F4R1_FB10     CAN_F4R1_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F4R1_FB11_Pos (11U)
#define CAN_F4R1_FB11_Msk (0x1U << CAN_F4R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F4R1_FB11     CAN_F4R1_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F4R1_FB12_Pos (12U)
#define CAN_F4R1_FB12_Msk (0x1U << CAN_F4R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F4R1_FB12     CAN_F4R1_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F4R1_FB13_Pos (13U)
#define CAN_F4R1_FB13_Msk (0x1U << CAN_F4R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F4R1_FB13     CAN_F4R1_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F4R1_FB14_Pos (14U)
#define CAN_F4R1_FB14_Msk (0x1U << CAN_F4R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F4R1_FB14     CAN_F4R1_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F4R1_FB15_Pos (15U)
#define CAN_F4R1_FB15_Msk (0x1U << CAN_F4R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F4R1_FB15     CAN_F4R1_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F4R1_FB16_Pos (16U)
#define CAN_F4R1_FB16_Msk (0x1U << CAN_F4R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F4R1_FB16     CAN_F4R1_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F4R1_FB17_Pos (17U)
#define CAN_F4R1_FB17_Msk (0x1U << CAN_F4R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F4R1_FB17     CAN_F4R1_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F4R1_FB18_Pos (18U)
#define CAN_F4R1_FB18_Msk (0x1U << CAN_F4R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F4R1_FB18     CAN_F4R1_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F4R1_FB19_Pos (19U)
#define CAN_F4R1_FB19_Msk (0x1U << CAN_F4R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F4R1_FB19     CAN_F4R1_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F4R1_FB20_Pos (20U)
#define CAN_F4R1_FB20_Msk (0x1U << CAN_F4R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F4R1_FB20     CAN_F4R1_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F4R1_FB21_Pos (21U)
#define CAN_F4R1_FB21_Msk (0x1U << CAN_F4R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F4R1_FB21     CAN_F4R1_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F4R1_FB22_Pos (22U)
#define CAN_F4R1_FB22_Msk (0x1U << CAN_F4R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F4R1_FB22     CAN_F4R1_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F4R1_FB23_Pos (23U)
#define CAN_F4R1_FB23_Msk (0x1U << CAN_F4R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F4R1_FB23     CAN_F4R1_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F4R1_FB24_Pos (24U)
#define CAN_F4R1_FB24_Msk (0x1U << CAN_F4R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F4R1_FB24     CAN_F4R1_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F4R1_FB25_Pos (25U)
#define CAN_F4R1_FB25_Msk (0x1U << CAN_F4R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F4R1_FB25     CAN_F4R1_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F4R1_FB26_Pos (26U)
#define CAN_F4R1_FB26_Msk (0x1U << CAN_F4R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F4R1_FB26     CAN_F4R1_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F4R1_FB27_Pos (27U)
#define CAN_F4R1_FB27_Msk (0x1U << CAN_F4R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F4R1_FB27     CAN_F4R1_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F4R1_FB28_Pos (28U)
#define CAN_F4R1_FB28_Msk (0x1U << CAN_F4R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F4R1_FB28     CAN_F4R1_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F4R1_FB29_Pos (29U)
#define CAN_F4R1_FB29_Msk (0x1U << CAN_F4R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F4R1_FB29     CAN_F4R1_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F4R1_FB30_Pos (30U)
#define CAN_F4R1_FB30_Msk (0x1U << CAN_F4R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F4R1_FB30     CAN_F4R1_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F4R1_FB31_Pos (31U)
#define CAN_F4R1_FB31_Msk (0x1U << CAN_F4R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F4R1_FB31     CAN_F4R1_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F5R1 register  *******************/
#define CAN_F5R1_FB0_Pos  (0U)
#define CAN_F5R1_FB0_Msk  (0x1U << CAN_F5R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F5R1_FB0      CAN_F5R1_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F5R1_FB1_Pos  (1U)
#define CAN_F5R1_FB1_Msk  (0x1U << CAN_F5R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F5R1_FB1      CAN_F5R1_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F5R1_FB2_Pos  (2U)
#define CAN_F5R1_FB2_Msk  (0x1U << CAN_F5R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F5R1_FB2      CAN_F5R1_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F5R1_FB3_Pos  (3U)
#define CAN_F5R1_FB3_Msk  (0x1U << CAN_F5R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F5R1_FB3      CAN_F5R1_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F5R1_FB4_Pos  (4U)
#define CAN_F5R1_FB4_Msk  (0x1U << CAN_F5R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F5R1_FB4      CAN_F5R1_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F5R1_FB5_Pos  (5U)
#define CAN_F5R1_FB5_Msk  (0x1U << CAN_F5R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F5R1_FB5      CAN_F5R1_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F5R1_FB6_Pos  (6U)
#define CAN_F5R1_FB6_Msk  (0x1U << CAN_F5R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F5R1_FB6      CAN_F5R1_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F5R1_FB7_Pos  (7U)
#define CAN_F5R1_FB7_Msk  (0x1U << CAN_F5R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F5R1_FB7      CAN_F5R1_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F5R1_FB8_Pos  (8U)
#define CAN_F5R1_FB8_Msk  (0x1U << CAN_F5R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F5R1_FB8      CAN_F5R1_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F5R1_FB9_Pos  (9U)
#define CAN_F5R1_FB9_Msk  (0x1U << CAN_F5R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F5R1_FB9      CAN_F5R1_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F5R1_FB10_Pos (10U)
#define CAN_F5R1_FB10_Msk (0x1U << CAN_F5R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F5R1_FB10     CAN_F5R1_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F5R1_FB11_Pos (11U)
#define CAN_F5R1_FB11_Msk (0x1U << CAN_F5R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F5R1_FB11     CAN_F5R1_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F5R1_FB12_Pos (12U)
#define CAN_F5R1_FB12_Msk (0x1U << CAN_F5R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F5R1_FB12     CAN_F5R1_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F5R1_FB13_Pos (13U)
#define CAN_F5R1_FB13_Msk (0x1U << CAN_F5R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F5R1_FB13     CAN_F5R1_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F5R1_FB14_Pos (14U)
#define CAN_F5R1_FB14_Msk (0x1U << CAN_F5R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F5R1_FB14     CAN_F5R1_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F5R1_FB15_Pos (15U)
#define CAN_F5R1_FB15_Msk (0x1U << CAN_F5R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F5R1_FB15     CAN_F5R1_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F5R1_FB16_Pos (16U)
#define CAN_F5R1_FB16_Msk (0x1U << CAN_F5R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F5R1_FB16     CAN_F5R1_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F5R1_FB17_Pos (17U)
#define CAN_F5R1_FB17_Msk (0x1U << CAN_F5R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F5R1_FB17     CAN_F5R1_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F5R1_FB18_Pos (18U)
#define CAN_F5R1_FB18_Msk (0x1U << CAN_F5R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F5R1_FB18     CAN_F5R1_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F5R1_FB19_Pos (19U)
#define CAN_F5R1_FB19_Msk (0x1U << CAN_F5R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F5R1_FB19     CAN_F5R1_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F5R1_FB20_Pos (20U)
#define CAN_F5R1_FB20_Msk (0x1U << CAN_F5R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F5R1_FB20     CAN_F5R1_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F5R1_FB21_Pos (21U)
#define CAN_F5R1_FB21_Msk (0x1U << CAN_F5R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F5R1_FB21     CAN_F5R1_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F5R1_FB22_Pos (22U)
#define CAN_F5R1_FB22_Msk (0x1U << CAN_F5R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F5R1_FB22     CAN_F5R1_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F5R1_FB23_Pos (23U)
#define CAN_F5R1_FB23_Msk (0x1U << CAN_F5R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F5R1_FB23     CAN_F5R1_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F5R1_FB24_Pos (24U)
#define CAN_F5R1_FB24_Msk (0x1U << CAN_F5R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F5R1_FB24     CAN_F5R1_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F5R1_FB25_Pos (25U)
#define CAN_F5R1_FB25_Msk (0x1U << CAN_F5R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F5R1_FB25     CAN_F5R1_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F5R1_FB26_Pos (26U)
#define CAN_F5R1_FB26_Msk (0x1U << CAN_F5R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F5R1_FB26     CAN_F5R1_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F5R1_FB27_Pos (27U)
#define CAN_F5R1_FB27_Msk (0x1U << CAN_F5R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F5R1_FB27     CAN_F5R1_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F5R1_FB28_Pos (28U)
#define CAN_F5R1_FB28_Msk (0x1U << CAN_F5R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F5R1_FB28     CAN_F5R1_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F5R1_FB29_Pos (29U)
#define CAN_F5R1_FB29_Msk (0x1U << CAN_F5R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F5R1_FB29     CAN_F5R1_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F5R1_FB30_Pos (30U)
#define CAN_F5R1_FB30_Msk (0x1U << CAN_F5R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F5R1_FB30     CAN_F5R1_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F5R1_FB31_Pos (31U)
#define CAN_F5R1_FB31_Msk (0x1U << CAN_F5R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F5R1_FB31     CAN_F5R1_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F6R1 register  *******************/
#define CAN_F6R1_FB0_Pos  (0U)
#define CAN_F6R1_FB0_Msk  (0x1U << CAN_F6R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F6R1_FB0      CAN_F6R1_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F6R1_FB1_Pos  (1U)
#define CAN_F6R1_FB1_Msk  (0x1U << CAN_F6R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F6R1_FB1      CAN_F6R1_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F6R1_FB2_Pos  (2U)
#define CAN_F6R1_FB2_Msk  (0x1U << CAN_F6R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F6R1_FB2      CAN_F6R1_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F6R1_FB3_Pos  (3U)
#define CAN_F6R1_FB3_Msk  (0x1U << CAN_F6R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F6R1_FB3      CAN_F6R1_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F6R1_FB4_Pos  (4U)
#define CAN_F6R1_FB4_Msk  (0x1U << CAN_F6R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F6R1_FB4      CAN_F6R1_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F6R1_FB5_Pos  (5U)
#define CAN_F6R1_FB5_Msk  (0x1U << CAN_F6R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F6R1_FB5      CAN_F6R1_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F6R1_FB6_Pos  (6U)
#define CAN_F6R1_FB6_Msk  (0x1U << CAN_F6R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F6R1_FB6      CAN_F6R1_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F6R1_FB7_Pos  (7U)
#define CAN_F6R1_FB7_Msk  (0x1U << CAN_F6R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F6R1_FB7      CAN_F6R1_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F6R1_FB8_Pos  (8U)
#define CAN_F6R1_FB8_Msk  (0x1U << CAN_F6R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F6R1_FB8      CAN_F6R1_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F6R1_FB9_Pos  (9U)
#define CAN_F6R1_FB9_Msk  (0x1U << CAN_F6R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F6R1_FB9      CAN_F6R1_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F6R1_FB10_Pos (10U)
#define CAN_F6R1_FB10_Msk (0x1U << CAN_F6R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F6R1_FB10     CAN_F6R1_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F6R1_FB11_Pos (11U)
#define CAN_F6R1_FB11_Msk (0x1U << CAN_F6R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F6R1_FB11     CAN_F6R1_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F6R1_FB12_Pos (12U)
#define CAN_F6R1_FB12_Msk (0x1U << CAN_F6R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F6R1_FB12     CAN_F6R1_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F6R1_FB13_Pos (13U)
#define CAN_F6R1_FB13_Msk (0x1U << CAN_F6R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F6R1_FB13     CAN_F6R1_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F6R1_FB14_Pos (14U)
#define CAN_F6R1_FB14_Msk (0x1U << CAN_F6R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F6R1_FB14     CAN_F6R1_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F6R1_FB15_Pos (15U)
#define CAN_F6R1_FB15_Msk (0x1U << CAN_F6R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F6R1_FB15     CAN_F6R1_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F6R1_FB16_Pos (16U)
#define CAN_F6R1_FB16_Msk (0x1U << CAN_F6R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F6R1_FB16     CAN_F6R1_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F6R1_FB17_Pos (17U)
#define CAN_F6R1_FB17_Msk (0x1U << CAN_F6R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F6R1_FB17     CAN_F6R1_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F6R1_FB18_Pos (18U)
#define CAN_F6R1_FB18_Msk (0x1U << CAN_F6R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F6R1_FB18     CAN_F6R1_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F6R1_FB19_Pos (19U)
#define CAN_F6R1_FB19_Msk (0x1U << CAN_F6R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F6R1_FB19     CAN_F6R1_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F6R1_FB20_Pos (20U)
#define CAN_F6R1_FB20_Msk (0x1U << CAN_F6R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F6R1_FB20     CAN_F6R1_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F6R1_FB21_Pos (21U)
#define CAN_F6R1_FB21_Msk (0x1U << CAN_F6R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F6R1_FB21     CAN_F6R1_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F6R1_FB22_Pos (22U)
#define CAN_F6R1_FB22_Msk (0x1U << CAN_F6R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F6R1_FB22     CAN_F6R1_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F6R1_FB23_Pos (23U)
#define CAN_F6R1_FB23_Msk (0x1U << CAN_F6R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F6R1_FB23     CAN_F6R1_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F6R1_FB24_Pos (24U)
#define CAN_F6R1_FB24_Msk (0x1U << CAN_F6R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F6R1_FB24     CAN_F6R1_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F6R1_FB25_Pos (25U)
#define CAN_F6R1_FB25_Msk (0x1U << CAN_F6R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F6R1_FB25     CAN_F6R1_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F6R1_FB26_Pos (26U)
#define CAN_F6R1_FB26_Msk (0x1U << CAN_F6R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F6R1_FB26     CAN_F6R1_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F6R1_FB27_Pos (27U)
#define CAN_F6R1_FB27_Msk (0x1U << CAN_F6R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F6R1_FB27     CAN_F6R1_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F6R1_FB28_Pos (28U)
#define CAN_F6R1_FB28_Msk (0x1U << CAN_F6R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F6R1_FB28     CAN_F6R1_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F6R1_FB29_Pos (29U)
#define CAN_F6R1_FB29_Msk (0x1U << CAN_F6R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F6R1_FB29     CAN_F6R1_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F6R1_FB30_Pos (30U)
#define CAN_F6R1_FB30_Msk (0x1U << CAN_F6R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F6R1_FB30     CAN_F6R1_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F6R1_FB31_Pos (31U)
#define CAN_F6R1_FB31_Msk (0x1U << CAN_F6R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F6R1_FB31     CAN_F6R1_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F7R1 register  *******************/
#define CAN_F7R1_FB0_Pos  (0U)
#define CAN_F7R1_FB0_Msk  (0x1U << CAN_F7R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F7R1_FB0      CAN_F7R1_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F7R1_FB1_Pos  (1U)
#define CAN_F7R1_FB1_Msk  (0x1U << CAN_F7R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F7R1_FB1      CAN_F7R1_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F7R1_FB2_Pos  (2U)
#define CAN_F7R1_FB2_Msk  (0x1U << CAN_F7R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F7R1_FB2      CAN_F7R1_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F7R1_FB3_Pos  (3U)
#define CAN_F7R1_FB3_Msk  (0x1U << CAN_F7R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F7R1_FB3      CAN_F7R1_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F7R1_FB4_Pos  (4U)
#define CAN_F7R1_FB4_Msk  (0x1U << CAN_F7R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F7R1_FB4      CAN_F7R1_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F7R1_FB5_Pos  (5U)
#define CAN_F7R1_FB5_Msk  (0x1U << CAN_F7R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F7R1_FB5      CAN_F7R1_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F7R1_FB6_Pos  (6U)
#define CAN_F7R1_FB6_Msk  (0x1U << CAN_F7R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F7R1_FB6      CAN_F7R1_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F7R1_FB7_Pos  (7U)
#define CAN_F7R1_FB7_Msk  (0x1U << CAN_F7R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F7R1_FB7      CAN_F7R1_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F7R1_FB8_Pos  (8U)
#define CAN_F7R1_FB8_Msk  (0x1U << CAN_F7R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F7R1_FB8      CAN_F7R1_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F7R1_FB9_Pos  (9U)
#define CAN_F7R1_FB9_Msk  (0x1U << CAN_F7R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F7R1_FB9      CAN_F7R1_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F7R1_FB10_Pos (10U)
#define CAN_F7R1_FB10_Msk (0x1U << CAN_F7R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F7R1_FB10     CAN_F7R1_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F7R1_FB11_Pos (11U)
#define CAN_F7R1_FB11_Msk (0x1U << CAN_F7R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F7R1_FB11     CAN_F7R1_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F7R1_FB12_Pos (12U)
#define CAN_F7R1_FB12_Msk (0x1U << CAN_F7R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F7R1_FB12     CAN_F7R1_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F7R1_FB13_Pos (13U)
#define CAN_F7R1_FB13_Msk (0x1U << CAN_F7R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F7R1_FB13     CAN_F7R1_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F7R1_FB14_Pos (14U)
#define CAN_F7R1_FB14_Msk (0x1U << CAN_F7R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F7R1_FB14     CAN_F7R1_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F7R1_FB15_Pos (15U)
#define CAN_F7R1_FB15_Msk (0x1U << CAN_F7R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F7R1_FB15     CAN_F7R1_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F7R1_FB16_Pos (16U)
#define CAN_F7R1_FB16_Msk (0x1U << CAN_F7R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F7R1_FB16     CAN_F7R1_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F7R1_FB17_Pos (17U)
#define CAN_F7R1_FB17_Msk (0x1U << CAN_F7R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F7R1_FB17     CAN_F7R1_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F7R1_FB18_Pos (18U)
#define CAN_F7R1_FB18_Msk (0x1U << CAN_F7R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F7R1_FB18     CAN_F7R1_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F7R1_FB19_Pos (19U)
#define CAN_F7R1_FB19_Msk (0x1U << CAN_F7R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F7R1_FB19     CAN_F7R1_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F7R1_FB20_Pos (20U)
#define CAN_F7R1_FB20_Msk (0x1U << CAN_F7R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F7R1_FB20     CAN_F7R1_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F7R1_FB21_Pos (21U)
#define CAN_F7R1_FB21_Msk (0x1U << CAN_F7R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F7R1_FB21     CAN_F7R1_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F7R1_FB22_Pos (22U)
#define CAN_F7R1_FB22_Msk (0x1U << CAN_F7R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F7R1_FB22     CAN_F7R1_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F7R1_FB23_Pos (23U)
#define CAN_F7R1_FB23_Msk (0x1U << CAN_F7R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F7R1_FB23     CAN_F7R1_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F7R1_FB24_Pos (24U)
#define CAN_F7R1_FB24_Msk (0x1U << CAN_F7R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F7R1_FB24     CAN_F7R1_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F7R1_FB25_Pos (25U)
#define CAN_F7R1_FB25_Msk (0x1U << CAN_F7R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F7R1_FB25     CAN_F7R1_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F7R1_FB26_Pos (26U)
#define CAN_F7R1_FB26_Msk (0x1U << CAN_F7R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F7R1_FB26     CAN_F7R1_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F7R1_FB27_Pos (27U)
#define CAN_F7R1_FB27_Msk (0x1U << CAN_F7R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F7R1_FB27     CAN_F7R1_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F7R1_FB28_Pos (28U)
#define CAN_F7R1_FB28_Msk (0x1U << CAN_F7R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F7R1_FB28     CAN_F7R1_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F7R1_FB29_Pos (29U)
#define CAN_F7R1_FB29_Msk (0x1U << CAN_F7R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F7R1_FB29     CAN_F7R1_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F7R1_FB30_Pos (30U)
#define CAN_F7R1_FB30_Msk (0x1U << CAN_F7R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F7R1_FB30     CAN_F7R1_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F7R1_FB31_Pos (31U)
#define CAN_F7R1_FB31_Msk (0x1U << CAN_F7R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F7R1_FB31     CAN_F7R1_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F8R1 register  *******************/
#define CAN_F8R1_FB0_Pos  (0U)
#define CAN_F8R1_FB0_Msk  (0x1U << CAN_F8R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F8R1_FB0      CAN_F8R1_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F8R1_FB1_Pos  (1U)
#define CAN_F8R1_FB1_Msk  (0x1U << CAN_F8R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F8R1_FB1      CAN_F8R1_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F8R1_FB2_Pos  (2U)
#define CAN_F8R1_FB2_Msk  (0x1U << CAN_F8R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F8R1_FB2      CAN_F8R1_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F8R1_FB3_Pos  (3U)
#define CAN_F8R1_FB3_Msk  (0x1U << CAN_F8R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F8R1_FB3      CAN_F8R1_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F8R1_FB4_Pos  (4U)
#define CAN_F8R1_FB4_Msk  (0x1U << CAN_F8R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F8R1_FB4      CAN_F8R1_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F8R1_FB5_Pos  (5U)
#define CAN_F8R1_FB5_Msk  (0x1U << CAN_F8R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F8R1_FB5      CAN_F8R1_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F8R1_FB6_Pos  (6U)
#define CAN_F8R1_FB6_Msk  (0x1U << CAN_F8R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F8R1_FB6      CAN_F8R1_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F8R1_FB7_Pos  (7U)
#define CAN_F8R1_FB7_Msk  (0x1U << CAN_F8R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F8R1_FB7      CAN_F8R1_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F8R1_FB8_Pos  (8U)
#define CAN_F8R1_FB8_Msk  (0x1U << CAN_F8R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F8R1_FB8      CAN_F8R1_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F8R1_FB9_Pos  (9U)
#define CAN_F8R1_FB9_Msk  (0x1U << CAN_F8R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F8R1_FB9      CAN_F8R1_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F8R1_FB10_Pos (10U)
#define CAN_F8R1_FB10_Msk (0x1U << CAN_F8R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F8R1_FB10     CAN_F8R1_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F8R1_FB11_Pos (11U)
#define CAN_F8R1_FB11_Msk (0x1U << CAN_F8R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F8R1_FB11     CAN_F8R1_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F8R1_FB12_Pos (12U)
#define CAN_F8R1_FB12_Msk (0x1U << CAN_F8R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F8R1_FB12     CAN_F8R1_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F8R1_FB13_Pos (13U)
#define CAN_F8R1_FB13_Msk (0x1U << CAN_F8R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F8R1_FB13     CAN_F8R1_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F8R1_FB14_Pos (14U)
#define CAN_F8R1_FB14_Msk (0x1U << CAN_F8R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F8R1_FB14     CAN_F8R1_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F8R1_FB15_Pos (15U)
#define CAN_F8R1_FB15_Msk (0x1U << CAN_F8R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F8R1_FB15     CAN_F8R1_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F8R1_FB16_Pos (16U)
#define CAN_F8R1_FB16_Msk (0x1U << CAN_F8R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F8R1_FB16     CAN_F8R1_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F8R1_FB17_Pos (17U)
#define CAN_F8R1_FB17_Msk (0x1U << CAN_F8R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F8R1_FB17     CAN_F8R1_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F8R1_FB18_Pos (18U)
#define CAN_F8R1_FB18_Msk (0x1U << CAN_F8R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F8R1_FB18     CAN_F8R1_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F8R1_FB19_Pos (19U)
#define CAN_F8R1_FB19_Msk (0x1U << CAN_F8R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F8R1_FB19     CAN_F8R1_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F8R1_FB20_Pos (20U)
#define CAN_F8R1_FB20_Msk (0x1U << CAN_F8R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F8R1_FB20     CAN_F8R1_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F8R1_FB21_Pos (21U)
#define CAN_F8R1_FB21_Msk (0x1U << CAN_F8R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F8R1_FB21     CAN_F8R1_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F8R1_FB22_Pos (22U)
#define CAN_F8R1_FB22_Msk (0x1U << CAN_F8R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F8R1_FB22     CAN_F8R1_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F8R1_FB23_Pos (23U)
#define CAN_F8R1_FB23_Msk (0x1U << CAN_F8R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F8R1_FB23     CAN_F8R1_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F8R1_FB24_Pos (24U)
#define CAN_F8R1_FB24_Msk (0x1U << CAN_F8R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F8R1_FB24     CAN_F8R1_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F8R1_FB25_Pos (25U)
#define CAN_F8R1_FB25_Msk (0x1U << CAN_F8R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F8R1_FB25     CAN_F8R1_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F8R1_FB26_Pos (26U)
#define CAN_F8R1_FB26_Msk (0x1U << CAN_F8R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F8R1_FB26     CAN_F8R1_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F8R1_FB27_Pos (27U)
#define CAN_F8R1_FB27_Msk (0x1U << CAN_F8R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F8R1_FB27     CAN_F8R1_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F8R1_FB28_Pos (28U)
#define CAN_F8R1_FB28_Msk (0x1U << CAN_F8R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F8R1_FB28     CAN_F8R1_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F8R1_FB29_Pos (29U)
#define CAN_F8R1_FB29_Msk (0x1U << CAN_F8R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F8R1_FB29     CAN_F8R1_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F8R1_FB30_Pos (30U)
#define CAN_F8R1_FB30_Msk (0x1U << CAN_F8R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F8R1_FB30     CAN_F8R1_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F8R1_FB31_Pos (31U)
#define CAN_F8R1_FB31_Msk (0x1U << CAN_F8R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F8R1_FB31     CAN_F8R1_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F9R1 register  *******************/
#define CAN_F9R1_FB0_Pos  (0U)
#define CAN_F9R1_FB0_Msk  (0x1U << CAN_F9R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F9R1_FB0      CAN_F9R1_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F9R1_FB1_Pos  (1U)
#define CAN_F9R1_FB1_Msk  (0x1U << CAN_F9R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F9R1_FB1      CAN_F9R1_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F9R1_FB2_Pos  (2U)
#define CAN_F9R1_FB2_Msk  (0x1U << CAN_F9R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F9R1_FB2      CAN_F9R1_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F9R1_FB3_Pos  (3U)
#define CAN_F9R1_FB3_Msk  (0x1U << CAN_F9R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F9R1_FB3      CAN_F9R1_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F9R1_FB4_Pos  (4U)
#define CAN_F9R1_FB4_Msk  (0x1U << CAN_F9R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F9R1_FB4      CAN_F9R1_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F9R1_FB5_Pos  (5U)
#define CAN_F9R1_FB5_Msk  (0x1U << CAN_F9R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F9R1_FB5      CAN_F9R1_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F9R1_FB6_Pos  (6U)
#define CAN_F9R1_FB6_Msk  (0x1U << CAN_F9R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F9R1_FB6      CAN_F9R1_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F9R1_FB7_Pos  (7U)
#define CAN_F9R1_FB7_Msk  (0x1U << CAN_F9R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F9R1_FB7      CAN_F9R1_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F9R1_FB8_Pos  (8U)
#define CAN_F9R1_FB8_Msk  (0x1U << CAN_F9R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F9R1_FB8      CAN_F9R1_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F9R1_FB9_Pos  (9U)
#define CAN_F9R1_FB9_Msk  (0x1U << CAN_F9R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F9R1_FB9      CAN_F9R1_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F9R1_FB10_Pos (10U)
#define CAN_F9R1_FB10_Msk (0x1U << CAN_F9R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F9R1_FB10     CAN_F9R1_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F9R1_FB11_Pos (11U)
#define CAN_F9R1_FB11_Msk (0x1U << CAN_F9R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F9R1_FB11     CAN_F9R1_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F9R1_FB12_Pos (12U)
#define CAN_F9R1_FB12_Msk (0x1U << CAN_F9R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F9R1_FB12     CAN_F9R1_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F9R1_FB13_Pos (13U)
#define CAN_F9R1_FB13_Msk (0x1U << CAN_F9R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F9R1_FB13     CAN_F9R1_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F9R1_FB14_Pos (14U)
#define CAN_F9R1_FB14_Msk (0x1U << CAN_F9R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F9R1_FB14     CAN_F9R1_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F9R1_FB15_Pos (15U)
#define CAN_F9R1_FB15_Msk (0x1U << CAN_F9R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F9R1_FB15     CAN_F9R1_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F9R1_FB16_Pos (16U)
#define CAN_F9R1_FB16_Msk (0x1U << CAN_F9R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F9R1_FB16     CAN_F9R1_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F9R1_FB17_Pos (17U)
#define CAN_F9R1_FB17_Msk (0x1U << CAN_F9R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F9R1_FB17     CAN_F9R1_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F9R1_FB18_Pos (18U)
#define CAN_F9R1_FB18_Msk (0x1U << CAN_F9R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F9R1_FB18     CAN_F9R1_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F9R1_FB19_Pos (19U)
#define CAN_F9R1_FB19_Msk (0x1U << CAN_F9R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F9R1_FB19     CAN_F9R1_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F9R1_FB20_Pos (20U)
#define CAN_F9R1_FB20_Msk (0x1U << CAN_F9R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F9R1_FB20     CAN_F9R1_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F9R1_FB21_Pos (21U)
#define CAN_F9R1_FB21_Msk (0x1U << CAN_F9R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F9R1_FB21     CAN_F9R1_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F9R1_FB22_Pos (22U)
#define CAN_F9R1_FB22_Msk (0x1U << CAN_F9R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F9R1_FB22     CAN_F9R1_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F9R1_FB23_Pos (23U)
#define CAN_F9R1_FB23_Msk (0x1U << CAN_F9R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F9R1_FB23     CAN_F9R1_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F9R1_FB24_Pos (24U)
#define CAN_F9R1_FB24_Msk (0x1U << CAN_F9R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F9R1_FB24     CAN_F9R1_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F9R1_FB25_Pos (25U)
#define CAN_F9R1_FB25_Msk (0x1U << CAN_F9R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F9R1_FB25     CAN_F9R1_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F9R1_FB26_Pos (26U)
#define CAN_F9R1_FB26_Msk (0x1U << CAN_F9R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F9R1_FB26     CAN_F9R1_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F9R1_FB27_Pos (27U)
#define CAN_F9R1_FB27_Msk (0x1U << CAN_F9R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F9R1_FB27     CAN_F9R1_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F9R1_FB28_Pos (28U)
#define CAN_F9R1_FB28_Msk (0x1U << CAN_F9R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F9R1_FB28     CAN_F9R1_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F9R1_FB29_Pos (29U)
#define CAN_F9R1_FB29_Msk (0x1U << CAN_F9R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F9R1_FB29     CAN_F9R1_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F9R1_FB30_Pos (30U)
#define CAN_F9R1_FB30_Msk (0x1U << CAN_F9R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F9R1_FB30     CAN_F9R1_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F9R1_FB31_Pos (31U)
#define CAN_F9R1_FB31_Msk (0x1U << CAN_F9R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F9R1_FB31     CAN_F9R1_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F10R1 register  ******************/
#define CAN_F10R1_FB0_Pos  (0U)
#define CAN_F10R1_FB0_Msk  (0x1U << CAN_F10R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F10R1_FB0      CAN_F10R1_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F10R1_FB1_Pos  (1U)
#define CAN_F10R1_FB1_Msk  (0x1U << CAN_F10R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F10R1_FB1      CAN_F10R1_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F10R1_FB2_Pos  (2U)
#define CAN_F10R1_FB2_Msk  (0x1U << CAN_F10R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F10R1_FB2      CAN_F10R1_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F10R1_FB3_Pos  (3U)
#define CAN_F10R1_FB3_Msk  (0x1U << CAN_F10R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F10R1_FB3      CAN_F10R1_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F10R1_FB4_Pos  (4U)
#define CAN_F10R1_FB4_Msk  (0x1U << CAN_F10R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F10R1_FB4      CAN_F10R1_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F10R1_FB5_Pos  (5U)
#define CAN_F10R1_FB5_Msk  (0x1U << CAN_F10R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F10R1_FB5      CAN_F10R1_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F10R1_FB6_Pos  (6U)
#define CAN_F10R1_FB6_Msk  (0x1U << CAN_F10R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F10R1_FB6      CAN_F10R1_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F10R1_FB7_Pos  (7U)
#define CAN_F10R1_FB7_Msk  (0x1U << CAN_F10R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F10R1_FB7      CAN_F10R1_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F10R1_FB8_Pos  (8U)
#define CAN_F10R1_FB8_Msk  (0x1U << CAN_F10R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F10R1_FB8      CAN_F10R1_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F10R1_FB9_Pos  (9U)
#define CAN_F10R1_FB9_Msk  (0x1U << CAN_F10R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F10R1_FB9      CAN_F10R1_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F10R1_FB10_Pos (10U)
#define CAN_F10R1_FB10_Msk (0x1U << CAN_F10R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F10R1_FB10     CAN_F10R1_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F10R1_FB11_Pos (11U)
#define CAN_F10R1_FB11_Msk (0x1U << CAN_F10R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F10R1_FB11     CAN_F10R1_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F10R1_FB12_Pos (12U)
#define CAN_F10R1_FB12_Msk (0x1U << CAN_F10R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F10R1_FB12     CAN_F10R1_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F10R1_FB13_Pos (13U)
#define CAN_F10R1_FB13_Msk (0x1U << CAN_F10R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F10R1_FB13     CAN_F10R1_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F10R1_FB14_Pos (14U)
#define CAN_F10R1_FB14_Msk (0x1U << CAN_F10R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F10R1_FB14     CAN_F10R1_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F10R1_FB15_Pos (15U)
#define CAN_F10R1_FB15_Msk (0x1U << CAN_F10R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F10R1_FB15     CAN_F10R1_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F10R1_FB16_Pos (16U)
#define CAN_F10R1_FB16_Msk (0x1U << CAN_F10R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F10R1_FB16     CAN_F10R1_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F10R1_FB17_Pos (17U)
#define CAN_F10R1_FB17_Msk (0x1U << CAN_F10R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F10R1_FB17     CAN_F10R1_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F10R1_FB18_Pos (18U)
#define CAN_F10R1_FB18_Msk (0x1U << CAN_F10R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F10R1_FB18     CAN_F10R1_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F10R1_FB19_Pos (19U)
#define CAN_F10R1_FB19_Msk (0x1U << CAN_F10R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F10R1_FB19     CAN_F10R1_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F10R1_FB20_Pos (20U)
#define CAN_F10R1_FB20_Msk (0x1U << CAN_F10R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F10R1_FB20     CAN_F10R1_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F10R1_FB21_Pos (21U)
#define CAN_F10R1_FB21_Msk (0x1U << CAN_F10R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F10R1_FB21     CAN_F10R1_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F10R1_FB22_Pos (22U)
#define CAN_F10R1_FB22_Msk (0x1U << CAN_F10R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F10R1_FB22     CAN_F10R1_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F10R1_FB23_Pos (23U)
#define CAN_F10R1_FB23_Msk (0x1U << CAN_F10R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F10R1_FB23     CAN_F10R1_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F10R1_FB24_Pos (24U)
#define CAN_F10R1_FB24_Msk (0x1U << CAN_F10R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F10R1_FB24     CAN_F10R1_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F10R1_FB25_Pos (25U)
#define CAN_F10R1_FB25_Msk (0x1U << CAN_F10R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F10R1_FB25     CAN_F10R1_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F10R1_FB26_Pos (26U)
#define CAN_F10R1_FB26_Msk (0x1U << CAN_F10R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F10R1_FB26     CAN_F10R1_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F10R1_FB27_Pos (27U)
#define CAN_F10R1_FB27_Msk (0x1U << CAN_F10R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F10R1_FB27     CAN_F10R1_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F10R1_FB28_Pos (28U)
#define CAN_F10R1_FB28_Msk (0x1U << CAN_F10R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F10R1_FB28     CAN_F10R1_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F10R1_FB29_Pos (29U)
#define CAN_F10R1_FB29_Msk (0x1U << CAN_F10R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F10R1_FB29     CAN_F10R1_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F10R1_FB30_Pos (30U)
#define CAN_F10R1_FB30_Msk (0x1U << CAN_F10R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F10R1_FB30     CAN_F10R1_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F10R1_FB31_Pos (31U)
#define CAN_F10R1_FB31_Msk (0x1U << CAN_F10R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F10R1_FB31     CAN_F10R1_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F11R1 register  ******************/
#define CAN_F11R1_FB0_Pos  (0U)
#define CAN_F11R1_FB0_Msk  (0x1U << CAN_F11R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F11R1_FB0      CAN_F11R1_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F11R1_FB1_Pos  (1U)
#define CAN_F11R1_FB1_Msk  (0x1U << CAN_F11R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F11R1_FB1      CAN_F11R1_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F11R1_FB2_Pos  (2U)
#define CAN_F11R1_FB2_Msk  (0x1U << CAN_F11R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F11R1_FB2      CAN_F11R1_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F11R1_FB3_Pos  (3U)
#define CAN_F11R1_FB3_Msk  (0x1U << CAN_F11R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F11R1_FB3      CAN_F11R1_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F11R1_FB4_Pos  (4U)
#define CAN_F11R1_FB4_Msk  (0x1U << CAN_F11R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F11R1_FB4      CAN_F11R1_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F11R1_FB5_Pos  (5U)
#define CAN_F11R1_FB5_Msk  (0x1U << CAN_F11R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F11R1_FB5      CAN_F11R1_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F11R1_FB6_Pos  (6U)
#define CAN_F11R1_FB6_Msk  (0x1U << CAN_F11R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F11R1_FB6      CAN_F11R1_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F11R1_FB7_Pos  (7U)
#define CAN_F11R1_FB7_Msk  (0x1U << CAN_F11R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F11R1_FB7      CAN_F11R1_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F11R1_FB8_Pos  (8U)
#define CAN_F11R1_FB8_Msk  (0x1U << CAN_F11R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F11R1_FB8      CAN_F11R1_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F11R1_FB9_Pos  (9U)
#define CAN_F11R1_FB9_Msk  (0x1U << CAN_F11R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F11R1_FB9      CAN_F11R1_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F11R1_FB10_Pos (10U)
#define CAN_F11R1_FB10_Msk (0x1U << CAN_F11R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F11R1_FB10     CAN_F11R1_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F11R1_FB11_Pos (11U)
#define CAN_F11R1_FB11_Msk (0x1U << CAN_F11R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F11R1_FB11     CAN_F11R1_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F11R1_FB12_Pos (12U)
#define CAN_F11R1_FB12_Msk (0x1U << CAN_F11R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F11R1_FB12     CAN_F11R1_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F11R1_FB13_Pos (13U)
#define CAN_F11R1_FB13_Msk (0x1U << CAN_F11R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F11R1_FB13     CAN_F11R1_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F11R1_FB14_Pos (14U)
#define CAN_F11R1_FB14_Msk (0x1U << CAN_F11R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F11R1_FB14     CAN_F11R1_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F11R1_FB15_Pos (15U)
#define CAN_F11R1_FB15_Msk (0x1U << CAN_F11R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F11R1_FB15     CAN_F11R1_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F11R1_FB16_Pos (16U)
#define CAN_F11R1_FB16_Msk (0x1U << CAN_F11R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F11R1_FB16     CAN_F11R1_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F11R1_FB17_Pos (17U)
#define CAN_F11R1_FB17_Msk (0x1U << CAN_F11R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F11R1_FB17     CAN_F11R1_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F11R1_FB18_Pos (18U)
#define CAN_F11R1_FB18_Msk (0x1U << CAN_F11R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F11R1_FB18     CAN_F11R1_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F11R1_FB19_Pos (19U)
#define CAN_F11R1_FB19_Msk (0x1U << CAN_F11R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F11R1_FB19     CAN_F11R1_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F11R1_FB20_Pos (20U)
#define CAN_F11R1_FB20_Msk (0x1U << CAN_F11R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F11R1_FB20     CAN_F11R1_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F11R1_FB21_Pos (21U)
#define CAN_F11R1_FB21_Msk (0x1U << CAN_F11R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F11R1_FB21     CAN_F11R1_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F11R1_FB22_Pos (22U)
#define CAN_F11R1_FB22_Msk (0x1U << CAN_F11R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F11R1_FB22     CAN_F11R1_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F11R1_FB23_Pos (23U)
#define CAN_F11R1_FB23_Msk (0x1U << CAN_F11R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F11R1_FB23     CAN_F11R1_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F11R1_FB24_Pos (24U)
#define CAN_F11R1_FB24_Msk (0x1U << CAN_F11R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F11R1_FB24     CAN_F11R1_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F11R1_FB25_Pos (25U)
#define CAN_F11R1_FB25_Msk (0x1U << CAN_F11R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F11R1_FB25     CAN_F11R1_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F11R1_FB26_Pos (26U)
#define CAN_F11R1_FB26_Msk (0x1U << CAN_F11R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F11R1_FB26     CAN_F11R1_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F11R1_FB27_Pos (27U)
#define CAN_F11R1_FB27_Msk (0x1U << CAN_F11R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F11R1_FB27     CAN_F11R1_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F11R1_FB28_Pos (28U)
#define CAN_F11R1_FB28_Msk (0x1U << CAN_F11R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F11R1_FB28     CAN_F11R1_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F11R1_FB29_Pos (29U)
#define CAN_F11R1_FB29_Msk (0x1U << CAN_F11R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F11R1_FB29     CAN_F11R1_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F11R1_FB30_Pos (30U)
#define CAN_F11R1_FB30_Msk (0x1U << CAN_F11R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F11R1_FB30     CAN_F11R1_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F11R1_FB31_Pos (31U)
#define CAN_F11R1_FB31_Msk (0x1U << CAN_F11R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F11R1_FB31     CAN_F11R1_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F12R1 register  ******************/
#define CAN_F12R1_FB0_Pos  (0U)
#define CAN_F12R1_FB0_Msk  (0x1U << CAN_F12R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F12R1_FB0      CAN_F12R1_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F12R1_FB1_Pos  (1U)
#define CAN_F12R1_FB1_Msk  (0x1U << CAN_F12R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F12R1_FB1      CAN_F12R1_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F12R1_FB2_Pos  (2U)
#define CAN_F12R1_FB2_Msk  (0x1U << CAN_F12R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F12R1_FB2      CAN_F12R1_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F12R1_FB3_Pos  (3U)
#define CAN_F12R1_FB3_Msk  (0x1U << CAN_F12R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F12R1_FB3      CAN_F12R1_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F12R1_FB4_Pos  (4U)
#define CAN_F12R1_FB4_Msk  (0x1U << CAN_F12R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F12R1_FB4      CAN_F12R1_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F12R1_FB5_Pos  (5U)
#define CAN_F12R1_FB5_Msk  (0x1U << CAN_F12R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F12R1_FB5      CAN_F12R1_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F12R1_FB6_Pos  (6U)
#define CAN_F12R1_FB6_Msk  (0x1U << CAN_F12R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F12R1_FB6      CAN_F12R1_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F12R1_FB7_Pos  (7U)
#define CAN_F12R1_FB7_Msk  (0x1U << CAN_F12R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F12R1_FB7      CAN_F12R1_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F12R1_FB8_Pos  (8U)
#define CAN_F12R1_FB8_Msk  (0x1U << CAN_F12R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F12R1_FB8      CAN_F12R1_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F12R1_FB9_Pos  (9U)
#define CAN_F12R1_FB9_Msk  (0x1U << CAN_F12R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F12R1_FB9      CAN_F12R1_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F12R1_FB10_Pos (10U)
#define CAN_F12R1_FB10_Msk (0x1U << CAN_F12R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F12R1_FB10     CAN_F12R1_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F12R1_FB11_Pos (11U)
#define CAN_F12R1_FB11_Msk (0x1U << CAN_F12R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F12R1_FB11     CAN_F12R1_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F12R1_FB12_Pos (12U)
#define CAN_F12R1_FB12_Msk (0x1U << CAN_F12R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F12R1_FB12     CAN_F12R1_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F12R1_FB13_Pos (13U)
#define CAN_F12R1_FB13_Msk (0x1U << CAN_F12R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F12R1_FB13     CAN_F12R1_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F12R1_FB14_Pos (14U)
#define CAN_F12R1_FB14_Msk (0x1U << CAN_F12R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F12R1_FB14     CAN_F12R1_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F12R1_FB15_Pos (15U)
#define CAN_F12R1_FB15_Msk (0x1U << CAN_F12R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F12R1_FB15     CAN_F12R1_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F12R1_FB16_Pos (16U)
#define CAN_F12R1_FB16_Msk (0x1U << CAN_F12R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F12R1_FB16     CAN_F12R1_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F12R1_FB17_Pos (17U)
#define CAN_F12R1_FB17_Msk (0x1U << CAN_F12R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F12R1_FB17     CAN_F12R1_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F12R1_FB18_Pos (18U)
#define CAN_F12R1_FB18_Msk (0x1U << CAN_F12R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F12R1_FB18     CAN_F12R1_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F12R1_FB19_Pos (19U)
#define CAN_F12R1_FB19_Msk (0x1U << CAN_F12R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F12R1_FB19     CAN_F12R1_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F12R1_FB20_Pos (20U)
#define CAN_F12R1_FB20_Msk (0x1U << CAN_F12R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F12R1_FB20     CAN_F12R1_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F12R1_FB21_Pos (21U)
#define CAN_F12R1_FB21_Msk (0x1U << CAN_F12R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F12R1_FB21     CAN_F12R1_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F12R1_FB22_Pos (22U)
#define CAN_F12R1_FB22_Msk (0x1U << CAN_F12R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F12R1_FB22     CAN_F12R1_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F12R1_FB23_Pos (23U)
#define CAN_F12R1_FB23_Msk (0x1U << CAN_F12R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F12R1_FB23     CAN_F12R1_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F12R1_FB24_Pos (24U)
#define CAN_F12R1_FB24_Msk (0x1U << CAN_F12R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F12R1_FB24     CAN_F12R1_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F12R1_FB25_Pos (25U)
#define CAN_F12R1_FB25_Msk (0x1U << CAN_F12R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F12R1_FB25     CAN_F12R1_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F12R1_FB26_Pos (26U)
#define CAN_F12R1_FB26_Msk (0x1U << CAN_F12R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F12R1_FB26     CAN_F12R1_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F12R1_FB27_Pos (27U)
#define CAN_F12R1_FB27_Msk (0x1U << CAN_F12R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F12R1_FB27     CAN_F12R1_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F12R1_FB28_Pos (28U)
#define CAN_F12R1_FB28_Msk (0x1U << CAN_F12R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F12R1_FB28     CAN_F12R1_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F12R1_FB29_Pos (29U)
#define CAN_F12R1_FB29_Msk (0x1U << CAN_F12R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F12R1_FB29     CAN_F12R1_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F12R1_FB30_Pos (30U)
#define CAN_F12R1_FB30_Msk (0x1U << CAN_F12R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F12R1_FB30     CAN_F12R1_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F12R1_FB31_Pos (31U)
#define CAN_F12R1_FB31_Msk (0x1U << CAN_F12R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F12R1_FB31     CAN_F12R1_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F13R1 register  ******************/
#define CAN_F13R1_FB0_Pos  (0U)
#define CAN_F13R1_FB0_Msk  (0x1U << CAN_F13R1_FB0_Pos) /*!< 0x00000001 */
#define CAN_F13R1_FB0      CAN_F13R1_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F13R1_FB1_Pos  (1U)
#define CAN_F13R1_FB1_Msk  (0x1U << CAN_F13R1_FB1_Pos) /*!< 0x00000002 */
#define CAN_F13R1_FB1      CAN_F13R1_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F13R1_FB2_Pos  (2U)
#define CAN_F13R1_FB2_Msk  (0x1U << CAN_F13R1_FB2_Pos) /*!< 0x00000004 */
#define CAN_F13R1_FB2      CAN_F13R1_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F13R1_FB3_Pos  (3U)
#define CAN_F13R1_FB3_Msk  (0x1U << CAN_F13R1_FB3_Pos) /*!< 0x00000008 */
#define CAN_F13R1_FB3      CAN_F13R1_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F13R1_FB4_Pos  (4U)
#define CAN_F13R1_FB4_Msk  (0x1U << CAN_F13R1_FB4_Pos) /*!< 0x00000010 */
#define CAN_F13R1_FB4      CAN_F13R1_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F13R1_FB5_Pos  (5U)
#define CAN_F13R1_FB5_Msk  (0x1U << CAN_F13R1_FB5_Pos) /*!< 0x00000020 */
#define CAN_F13R1_FB5      CAN_F13R1_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F13R1_FB6_Pos  (6U)
#define CAN_F13R1_FB6_Msk  (0x1U << CAN_F13R1_FB6_Pos) /*!< 0x00000040 */
#define CAN_F13R1_FB6      CAN_F13R1_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F13R1_FB7_Pos  (7U)
#define CAN_F13R1_FB7_Msk  (0x1U << CAN_F13R1_FB7_Pos) /*!< 0x00000080 */
#define CAN_F13R1_FB7      CAN_F13R1_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F13R1_FB8_Pos  (8U)
#define CAN_F13R1_FB8_Msk  (0x1U << CAN_F13R1_FB8_Pos) /*!< 0x00000100 */
#define CAN_F13R1_FB8      CAN_F13R1_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F13R1_FB9_Pos  (9U)
#define CAN_F13R1_FB9_Msk  (0x1U << CAN_F13R1_FB9_Pos) /*!< 0x00000200 */
#define CAN_F13R1_FB9      CAN_F13R1_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F13R1_FB10_Pos (10U)
#define CAN_F13R1_FB10_Msk (0x1U << CAN_F13R1_FB10_Pos) /*!< 0x00000400 */
#define CAN_F13R1_FB10     CAN_F13R1_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F13R1_FB11_Pos (11U)
#define CAN_F13R1_FB11_Msk (0x1U << CAN_F13R1_FB11_Pos) /*!< 0x00000800 */
#define CAN_F13R1_FB11     CAN_F13R1_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F13R1_FB12_Pos (12U)
#define CAN_F13R1_FB12_Msk (0x1U << CAN_F13R1_FB12_Pos) /*!< 0x00001000 */
#define CAN_F13R1_FB12     CAN_F13R1_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F13R1_FB13_Pos (13U)
#define CAN_F13R1_FB13_Msk (0x1U << CAN_F13R1_FB13_Pos) /*!< 0x00002000 */
#define CAN_F13R1_FB13     CAN_F13R1_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F13R1_FB14_Pos (14U)
#define CAN_F13R1_FB14_Msk (0x1U << CAN_F13R1_FB14_Pos) /*!< 0x00004000 */
#define CAN_F13R1_FB14     CAN_F13R1_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F13R1_FB15_Pos (15U)
#define CAN_F13R1_FB15_Msk (0x1U << CAN_F13R1_FB15_Pos) /*!< 0x00008000 */
#define CAN_F13R1_FB15     CAN_F13R1_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F13R1_FB16_Pos (16U)
#define CAN_F13R1_FB16_Msk (0x1U << CAN_F13R1_FB16_Pos) /*!< 0x00010000 */
#define CAN_F13R1_FB16     CAN_F13R1_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F13R1_FB17_Pos (17U)
#define CAN_F13R1_FB17_Msk (0x1U << CAN_F13R1_FB17_Pos) /*!< 0x00020000 */
#define CAN_F13R1_FB17     CAN_F13R1_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F13R1_FB18_Pos (18U)
#define CAN_F13R1_FB18_Msk (0x1U << CAN_F13R1_FB18_Pos) /*!< 0x00040000 */
#define CAN_F13R1_FB18     CAN_F13R1_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F13R1_FB19_Pos (19U)
#define CAN_F13R1_FB19_Msk (0x1U << CAN_F13R1_FB19_Pos) /*!< 0x00080000 */
#define CAN_F13R1_FB19     CAN_F13R1_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F13R1_FB20_Pos (20U)
#define CAN_F13R1_FB20_Msk (0x1U << CAN_F13R1_FB20_Pos) /*!< 0x00100000 */
#define CAN_F13R1_FB20     CAN_F13R1_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F13R1_FB21_Pos (21U)
#define CAN_F13R1_FB21_Msk (0x1U << CAN_F13R1_FB21_Pos) /*!< 0x00200000 */
#define CAN_F13R1_FB21     CAN_F13R1_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F13R1_FB22_Pos (22U)
#define CAN_F13R1_FB22_Msk (0x1U << CAN_F13R1_FB22_Pos) /*!< 0x00400000 */
#define CAN_F13R1_FB22     CAN_F13R1_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F13R1_FB23_Pos (23U)
#define CAN_F13R1_FB23_Msk (0x1U << CAN_F13R1_FB23_Pos) /*!< 0x00800000 */
#define CAN_F13R1_FB23     CAN_F13R1_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F13R1_FB24_Pos (24U)
#define CAN_F13R1_FB24_Msk (0x1U << CAN_F13R1_FB24_Pos) /*!< 0x01000000 */
#define CAN_F13R1_FB24     CAN_F13R1_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F13R1_FB25_Pos (25U)
#define CAN_F13R1_FB25_Msk (0x1U << CAN_F13R1_FB25_Pos) /*!< 0x02000000 */
#define CAN_F13R1_FB25     CAN_F13R1_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F13R1_FB26_Pos (26U)
#define CAN_F13R1_FB26_Msk (0x1U << CAN_F13R1_FB26_Pos) /*!< 0x04000000 */
#define CAN_F13R1_FB26     CAN_F13R1_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F13R1_FB27_Pos (27U)
#define CAN_F13R1_FB27_Msk (0x1U << CAN_F13R1_FB27_Pos) /*!< 0x08000000 */
#define CAN_F13R1_FB27     CAN_F13R1_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F13R1_FB28_Pos (28U)
#define CAN_F13R1_FB28_Msk (0x1U << CAN_F13R1_FB28_Pos) /*!< 0x10000000 */
#define CAN_F13R1_FB28     CAN_F13R1_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F13R1_FB29_Pos (29U)
#define CAN_F13R1_FB29_Msk (0x1U << CAN_F13R1_FB29_Pos) /*!< 0x20000000 */
#define CAN_F13R1_FB29     CAN_F13R1_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F13R1_FB30_Pos (30U)
#define CAN_F13R1_FB30_Msk (0x1U << CAN_F13R1_FB30_Pos) /*!< 0x40000000 */
#define CAN_F13R1_FB30     CAN_F13R1_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F13R1_FB31_Pos (31U)
#define CAN_F13R1_FB31_Msk (0x1U << CAN_F13R1_FB31_Pos) /*!< 0x80000000 */
#define CAN_F13R1_FB31     CAN_F13R1_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F0R2 register  *******************/
#define CAN_F0R2_FB0_Pos  (0U)
#define CAN_F0R2_FB0_Msk  (0x1U << CAN_F0R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F0R2_FB0      CAN_F0R2_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F0R2_FB1_Pos  (1U)
#define CAN_F0R2_FB1_Msk  (0x1U << CAN_F0R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F0R2_FB1      CAN_F0R2_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F0R2_FB2_Pos  (2U)
#define CAN_F0R2_FB2_Msk  (0x1U << CAN_F0R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F0R2_FB2      CAN_F0R2_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F0R2_FB3_Pos  (3U)
#define CAN_F0R2_FB3_Msk  (0x1U << CAN_F0R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F0R2_FB3      CAN_F0R2_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F0R2_FB4_Pos  (4U)
#define CAN_F0R2_FB4_Msk  (0x1U << CAN_F0R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F0R2_FB4      CAN_F0R2_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F0R2_FB5_Pos  (5U)
#define CAN_F0R2_FB5_Msk  (0x1U << CAN_F0R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F0R2_FB5      CAN_F0R2_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F0R2_FB6_Pos  (6U)
#define CAN_F0R2_FB6_Msk  (0x1U << CAN_F0R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F0R2_FB6      CAN_F0R2_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F0R2_FB7_Pos  (7U)
#define CAN_F0R2_FB7_Msk  (0x1U << CAN_F0R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F0R2_FB7      CAN_F0R2_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F0R2_FB8_Pos  (8U)
#define CAN_F0R2_FB8_Msk  (0x1U << CAN_F0R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F0R2_FB8      CAN_F0R2_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F0R2_FB9_Pos  (9U)
#define CAN_F0R2_FB9_Msk  (0x1U << CAN_F0R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F0R2_FB9      CAN_F0R2_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F0R2_FB10_Pos (10U)
#define CAN_F0R2_FB10_Msk (0x1U << CAN_F0R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F0R2_FB10     CAN_F0R2_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F0R2_FB11_Pos (11U)
#define CAN_F0R2_FB11_Msk (0x1U << CAN_F0R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F0R2_FB11     CAN_F0R2_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F0R2_FB12_Pos (12U)
#define CAN_F0R2_FB12_Msk (0x1U << CAN_F0R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F0R2_FB12     CAN_F0R2_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F0R2_FB13_Pos (13U)
#define CAN_F0R2_FB13_Msk (0x1U << CAN_F0R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F0R2_FB13     CAN_F0R2_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F0R2_FB14_Pos (14U)
#define CAN_F0R2_FB14_Msk (0x1U << CAN_F0R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F0R2_FB14     CAN_F0R2_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F0R2_FB15_Pos (15U)
#define CAN_F0R2_FB15_Msk (0x1U << CAN_F0R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F0R2_FB15     CAN_F0R2_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F0R2_FB16_Pos (16U)
#define CAN_F0R2_FB16_Msk (0x1U << CAN_F0R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F0R2_FB16     CAN_F0R2_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F0R2_FB17_Pos (17U)
#define CAN_F0R2_FB17_Msk (0x1U << CAN_F0R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F0R2_FB17     CAN_F0R2_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F0R2_FB18_Pos (18U)
#define CAN_F0R2_FB18_Msk (0x1U << CAN_F0R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F0R2_FB18     CAN_F0R2_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F0R2_FB19_Pos (19U)
#define CAN_F0R2_FB19_Msk (0x1U << CAN_F0R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F0R2_FB19     CAN_F0R2_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F0R2_FB20_Pos (20U)
#define CAN_F0R2_FB20_Msk (0x1U << CAN_F0R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F0R2_FB20     CAN_F0R2_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F0R2_FB21_Pos (21U)
#define CAN_F0R2_FB21_Msk (0x1U << CAN_F0R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F0R2_FB21     CAN_F0R2_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F0R2_FB22_Pos (22U)
#define CAN_F0R2_FB22_Msk (0x1U << CAN_F0R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F0R2_FB22     CAN_F0R2_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F0R2_FB23_Pos (23U)
#define CAN_F0R2_FB23_Msk (0x1U << CAN_F0R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F0R2_FB23     CAN_F0R2_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F0R2_FB24_Pos (24U)
#define CAN_F0R2_FB24_Msk (0x1U << CAN_F0R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F0R2_FB24     CAN_F0R2_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F0R2_FB25_Pos (25U)
#define CAN_F0R2_FB25_Msk (0x1U << CAN_F0R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F0R2_FB25     CAN_F0R2_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F0R2_FB26_Pos (26U)
#define CAN_F0R2_FB26_Msk (0x1U << CAN_F0R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F0R2_FB26     CAN_F0R2_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F0R2_FB27_Pos (27U)
#define CAN_F0R2_FB27_Msk (0x1U << CAN_F0R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F0R2_FB27     CAN_F0R2_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F0R2_FB28_Pos (28U)
#define CAN_F0R2_FB28_Msk (0x1U << CAN_F0R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F0R2_FB28     CAN_F0R2_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F0R2_FB29_Pos (29U)
#define CAN_F0R2_FB29_Msk (0x1U << CAN_F0R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F0R2_FB29     CAN_F0R2_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F0R2_FB30_Pos (30U)
#define CAN_F0R2_FB30_Msk (0x1U << CAN_F0R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F0R2_FB30     CAN_F0R2_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F0R2_FB31_Pos (31U)
#define CAN_F0R2_FB31_Msk (0x1U << CAN_F0R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F0R2_FB31     CAN_F0R2_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F1R2 register  *******************/
#define CAN_F1R2_FB0_Pos  (0U)
#define CAN_F1R2_FB0_Msk  (0x1U << CAN_F1R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F1R2_FB0      CAN_F1R2_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F1R2_FB1_Pos  (1U)
#define CAN_F1R2_FB1_Msk  (0x1U << CAN_F1R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F1R2_FB1      CAN_F1R2_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F1R2_FB2_Pos  (2U)
#define CAN_F1R2_FB2_Msk  (0x1U << CAN_F1R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F1R2_FB2      CAN_F1R2_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F1R2_FB3_Pos  (3U)
#define CAN_F1R2_FB3_Msk  (0x1U << CAN_F1R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F1R2_FB3      CAN_F1R2_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F1R2_FB4_Pos  (4U)
#define CAN_F1R2_FB4_Msk  (0x1U << CAN_F1R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F1R2_FB4      CAN_F1R2_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F1R2_FB5_Pos  (5U)
#define CAN_F1R2_FB5_Msk  (0x1U << CAN_F1R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F1R2_FB5      CAN_F1R2_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F1R2_FB6_Pos  (6U)
#define CAN_F1R2_FB6_Msk  (0x1U << CAN_F1R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F1R2_FB6      CAN_F1R2_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F1R2_FB7_Pos  (7U)
#define CAN_F1R2_FB7_Msk  (0x1U << CAN_F1R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F1R2_FB7      CAN_F1R2_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F1R2_FB8_Pos  (8U)
#define CAN_F1R2_FB8_Msk  (0x1U << CAN_F1R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F1R2_FB8      CAN_F1R2_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F1R2_FB9_Pos  (9U)
#define CAN_F1R2_FB9_Msk  (0x1U << CAN_F1R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F1R2_FB9      CAN_F1R2_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F1R2_FB10_Pos (10U)
#define CAN_F1R2_FB10_Msk (0x1U << CAN_F1R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F1R2_FB10     CAN_F1R2_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F1R2_FB11_Pos (11U)
#define CAN_F1R2_FB11_Msk (0x1U << CAN_F1R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F1R2_FB11     CAN_F1R2_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F1R2_FB12_Pos (12U)
#define CAN_F1R2_FB12_Msk (0x1U << CAN_F1R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F1R2_FB12     CAN_F1R2_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F1R2_FB13_Pos (13U)
#define CAN_F1R2_FB13_Msk (0x1U << CAN_F1R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F1R2_FB13     CAN_F1R2_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F1R2_FB14_Pos (14U)
#define CAN_F1R2_FB14_Msk (0x1U << CAN_F1R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F1R2_FB14     CAN_F1R2_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F1R2_FB15_Pos (15U)
#define CAN_F1R2_FB15_Msk (0x1U << CAN_F1R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F1R2_FB15     CAN_F1R2_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F1R2_FB16_Pos (16U)
#define CAN_F1R2_FB16_Msk (0x1U << CAN_F1R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F1R2_FB16     CAN_F1R2_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F1R2_FB17_Pos (17U)
#define CAN_F1R2_FB17_Msk (0x1U << CAN_F1R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F1R2_FB17     CAN_F1R2_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F1R2_FB18_Pos (18U)
#define CAN_F1R2_FB18_Msk (0x1U << CAN_F1R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F1R2_FB18     CAN_F1R2_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F1R2_FB19_Pos (19U)
#define CAN_F1R2_FB19_Msk (0x1U << CAN_F1R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F1R2_FB19     CAN_F1R2_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F1R2_FB20_Pos (20U)
#define CAN_F1R2_FB20_Msk (0x1U << CAN_F1R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F1R2_FB20     CAN_F1R2_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F1R2_FB21_Pos (21U)
#define CAN_F1R2_FB21_Msk (0x1U << CAN_F1R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F1R2_FB21     CAN_F1R2_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F1R2_FB22_Pos (22U)
#define CAN_F1R2_FB22_Msk (0x1U << CAN_F1R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F1R2_FB22     CAN_F1R2_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F1R2_FB23_Pos (23U)
#define CAN_F1R2_FB23_Msk (0x1U << CAN_F1R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F1R2_FB23     CAN_F1R2_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F1R2_FB24_Pos (24U)
#define CAN_F1R2_FB24_Msk (0x1U << CAN_F1R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F1R2_FB24     CAN_F1R2_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F1R2_FB25_Pos (25U)
#define CAN_F1R2_FB25_Msk (0x1U << CAN_F1R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F1R2_FB25     CAN_F1R2_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F1R2_FB26_Pos (26U)
#define CAN_F1R2_FB26_Msk (0x1U << CAN_F1R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F1R2_FB26     CAN_F1R2_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F1R2_FB27_Pos (27U)
#define CAN_F1R2_FB27_Msk (0x1U << CAN_F1R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F1R2_FB27     CAN_F1R2_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F1R2_FB28_Pos (28U)
#define CAN_F1R2_FB28_Msk (0x1U << CAN_F1R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F1R2_FB28     CAN_F1R2_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F1R2_FB29_Pos (29U)
#define CAN_F1R2_FB29_Msk (0x1U << CAN_F1R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F1R2_FB29     CAN_F1R2_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F1R2_FB30_Pos (30U)
#define CAN_F1R2_FB30_Msk (0x1U << CAN_F1R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F1R2_FB30     CAN_F1R2_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F1R2_FB31_Pos (31U)
#define CAN_F1R2_FB31_Msk (0x1U << CAN_F1R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F1R2_FB31     CAN_F1R2_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F2R2 register  *******************/
#define CAN_F2R2_FB0_Pos  (0U)
#define CAN_F2R2_FB0_Msk  (0x1U << CAN_F2R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F2R2_FB0      CAN_F2R2_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F2R2_FB1_Pos  (1U)
#define CAN_F2R2_FB1_Msk  (0x1U << CAN_F2R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F2R2_FB1      CAN_F2R2_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F2R2_FB2_Pos  (2U)
#define CAN_F2R2_FB2_Msk  (0x1U << CAN_F2R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F2R2_FB2      CAN_F2R2_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F2R2_FB3_Pos  (3U)
#define CAN_F2R2_FB3_Msk  (0x1U << CAN_F2R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F2R2_FB3      CAN_F2R2_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F2R2_FB4_Pos  (4U)
#define CAN_F2R2_FB4_Msk  (0x1U << CAN_F2R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F2R2_FB4      CAN_F2R2_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F2R2_FB5_Pos  (5U)
#define CAN_F2R2_FB5_Msk  (0x1U << CAN_F2R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F2R2_FB5      CAN_F2R2_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F2R2_FB6_Pos  (6U)
#define CAN_F2R2_FB6_Msk  (0x1U << CAN_F2R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F2R2_FB6      CAN_F2R2_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F2R2_FB7_Pos  (7U)
#define CAN_F2R2_FB7_Msk  (0x1U << CAN_F2R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F2R2_FB7      CAN_F2R2_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F2R2_FB8_Pos  (8U)
#define CAN_F2R2_FB8_Msk  (0x1U << CAN_F2R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F2R2_FB8      CAN_F2R2_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F2R2_FB9_Pos  (9U)
#define CAN_F2R2_FB9_Msk  (0x1U << CAN_F2R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F2R2_FB9      CAN_F2R2_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F2R2_FB10_Pos (10U)
#define CAN_F2R2_FB10_Msk (0x1U << CAN_F2R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F2R2_FB10     CAN_F2R2_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F2R2_FB11_Pos (11U)
#define CAN_F2R2_FB11_Msk (0x1U << CAN_F2R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F2R2_FB11     CAN_F2R2_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F2R2_FB12_Pos (12U)
#define CAN_F2R2_FB12_Msk (0x1U << CAN_F2R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F2R2_FB12     CAN_F2R2_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F2R2_FB13_Pos (13U)
#define CAN_F2R2_FB13_Msk (0x1U << CAN_F2R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F2R2_FB13     CAN_F2R2_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F2R2_FB14_Pos (14U)
#define CAN_F2R2_FB14_Msk (0x1U << CAN_F2R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F2R2_FB14     CAN_F2R2_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F2R2_FB15_Pos (15U)
#define CAN_F2R2_FB15_Msk (0x1U << CAN_F2R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F2R2_FB15     CAN_F2R2_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F2R2_FB16_Pos (16U)
#define CAN_F2R2_FB16_Msk (0x1U << CAN_F2R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F2R2_FB16     CAN_F2R2_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F2R2_FB17_Pos (17U)
#define CAN_F2R2_FB17_Msk (0x1U << CAN_F2R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F2R2_FB17     CAN_F2R2_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F2R2_FB18_Pos (18U)
#define CAN_F2R2_FB18_Msk (0x1U << CAN_F2R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F2R2_FB18     CAN_F2R2_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F2R2_FB19_Pos (19U)
#define CAN_F2R2_FB19_Msk (0x1U << CAN_F2R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F2R2_FB19     CAN_F2R2_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F2R2_FB20_Pos (20U)
#define CAN_F2R2_FB20_Msk (0x1U << CAN_F2R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F2R2_FB20     CAN_F2R2_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F2R2_FB21_Pos (21U)
#define CAN_F2R2_FB21_Msk (0x1U << CAN_F2R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F2R2_FB21     CAN_F2R2_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F2R2_FB22_Pos (22U)
#define CAN_F2R2_FB22_Msk (0x1U << CAN_F2R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F2R2_FB22     CAN_F2R2_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F2R2_FB23_Pos (23U)
#define CAN_F2R2_FB23_Msk (0x1U << CAN_F2R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F2R2_FB23     CAN_F2R2_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F2R2_FB24_Pos (24U)
#define CAN_F2R2_FB24_Msk (0x1U << CAN_F2R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F2R2_FB24     CAN_F2R2_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F2R2_FB25_Pos (25U)
#define CAN_F2R2_FB25_Msk (0x1U << CAN_F2R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F2R2_FB25     CAN_F2R2_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F2R2_FB26_Pos (26U)
#define CAN_F2R2_FB26_Msk (0x1U << CAN_F2R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F2R2_FB26     CAN_F2R2_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F2R2_FB27_Pos (27U)
#define CAN_F2R2_FB27_Msk (0x1U << CAN_F2R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F2R2_FB27     CAN_F2R2_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F2R2_FB28_Pos (28U)
#define CAN_F2R2_FB28_Msk (0x1U << CAN_F2R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F2R2_FB28     CAN_F2R2_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F2R2_FB29_Pos (29U)
#define CAN_F2R2_FB29_Msk (0x1U << CAN_F2R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F2R2_FB29     CAN_F2R2_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F2R2_FB30_Pos (30U)
#define CAN_F2R2_FB30_Msk (0x1U << CAN_F2R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F2R2_FB30     CAN_F2R2_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F2R2_FB31_Pos (31U)
#define CAN_F2R2_FB31_Msk (0x1U << CAN_F2R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F2R2_FB31     CAN_F2R2_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F3R2 register  *******************/
#define CAN_F3R2_FB0_Pos  (0U)
#define CAN_F3R2_FB0_Msk  (0x1U << CAN_F3R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F3R2_FB0      CAN_F3R2_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F3R2_FB1_Pos  (1U)
#define CAN_F3R2_FB1_Msk  (0x1U << CAN_F3R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F3R2_FB1      CAN_F3R2_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F3R2_FB2_Pos  (2U)
#define CAN_F3R2_FB2_Msk  (0x1U << CAN_F3R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F3R2_FB2      CAN_F3R2_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F3R2_FB3_Pos  (3U)
#define CAN_F3R2_FB3_Msk  (0x1U << CAN_F3R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F3R2_FB3      CAN_F3R2_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F3R2_FB4_Pos  (4U)
#define CAN_F3R2_FB4_Msk  (0x1U << CAN_F3R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F3R2_FB4      CAN_F3R2_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F3R2_FB5_Pos  (5U)
#define CAN_F3R2_FB5_Msk  (0x1U << CAN_F3R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F3R2_FB5      CAN_F3R2_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F3R2_FB6_Pos  (6U)
#define CAN_F3R2_FB6_Msk  (0x1U << CAN_F3R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F3R2_FB6      CAN_F3R2_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F3R2_FB7_Pos  (7U)
#define CAN_F3R2_FB7_Msk  (0x1U << CAN_F3R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F3R2_FB7      CAN_F3R2_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F3R2_FB8_Pos  (8U)
#define CAN_F3R2_FB8_Msk  (0x1U << CAN_F3R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F3R2_FB8      CAN_F3R2_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F3R2_FB9_Pos  (9U)
#define CAN_F3R2_FB9_Msk  (0x1U << CAN_F3R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F3R2_FB9      CAN_F3R2_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F3R2_FB10_Pos (10U)
#define CAN_F3R2_FB10_Msk (0x1U << CAN_F3R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F3R2_FB10     CAN_F3R2_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F3R2_FB11_Pos (11U)
#define CAN_F3R2_FB11_Msk (0x1U << CAN_F3R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F3R2_FB11     CAN_F3R2_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F3R2_FB12_Pos (12U)
#define CAN_F3R2_FB12_Msk (0x1U << CAN_F3R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F3R2_FB12     CAN_F3R2_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F3R2_FB13_Pos (13U)
#define CAN_F3R2_FB13_Msk (0x1U << CAN_F3R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F3R2_FB13     CAN_F3R2_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F3R2_FB14_Pos (14U)
#define CAN_F3R2_FB14_Msk (0x1U << CAN_F3R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F3R2_FB14     CAN_F3R2_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F3R2_FB15_Pos (15U)
#define CAN_F3R2_FB15_Msk (0x1U << CAN_F3R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F3R2_FB15     CAN_F3R2_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F3R2_FB16_Pos (16U)
#define CAN_F3R2_FB16_Msk (0x1U << CAN_F3R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F3R2_FB16     CAN_F3R2_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F3R2_FB17_Pos (17U)
#define CAN_F3R2_FB17_Msk (0x1U << CAN_F3R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F3R2_FB17     CAN_F3R2_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F3R2_FB18_Pos (18U)
#define CAN_F3R2_FB18_Msk (0x1U << CAN_F3R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F3R2_FB18     CAN_F3R2_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F3R2_FB19_Pos (19U)
#define CAN_F3R2_FB19_Msk (0x1U << CAN_F3R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F3R2_FB19     CAN_F3R2_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F3R2_FB20_Pos (20U)
#define CAN_F3R2_FB20_Msk (0x1U << CAN_F3R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F3R2_FB20     CAN_F3R2_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F3R2_FB21_Pos (21U)
#define CAN_F3R2_FB21_Msk (0x1U << CAN_F3R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F3R2_FB21     CAN_F3R2_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F3R2_FB22_Pos (22U)
#define CAN_F3R2_FB22_Msk (0x1U << CAN_F3R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F3R2_FB22     CAN_F3R2_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F3R2_FB23_Pos (23U)
#define CAN_F3R2_FB23_Msk (0x1U << CAN_F3R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F3R2_FB23     CAN_F3R2_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F3R2_FB24_Pos (24U)
#define CAN_F3R2_FB24_Msk (0x1U << CAN_F3R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F3R2_FB24     CAN_F3R2_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F3R2_FB25_Pos (25U)
#define CAN_F3R2_FB25_Msk (0x1U << CAN_F3R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F3R2_FB25     CAN_F3R2_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F3R2_FB26_Pos (26U)
#define CAN_F3R2_FB26_Msk (0x1U << CAN_F3R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F3R2_FB26     CAN_F3R2_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F3R2_FB27_Pos (27U)
#define CAN_F3R2_FB27_Msk (0x1U << CAN_F3R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F3R2_FB27     CAN_F3R2_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F3R2_FB28_Pos (28U)
#define CAN_F3R2_FB28_Msk (0x1U << CAN_F3R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F3R2_FB28     CAN_F3R2_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F3R2_FB29_Pos (29U)
#define CAN_F3R2_FB29_Msk (0x1U << CAN_F3R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F3R2_FB29     CAN_F3R2_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F3R2_FB30_Pos (30U)
#define CAN_F3R2_FB30_Msk (0x1U << CAN_F3R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F3R2_FB30     CAN_F3R2_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F3R2_FB31_Pos (31U)
#define CAN_F3R2_FB31_Msk (0x1U << CAN_F3R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F3R2_FB31     CAN_F3R2_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F4R2 register  *******************/
#define CAN_F4R2_FB0_Pos  (0U)
#define CAN_F4R2_FB0_Msk  (0x1U << CAN_F4R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F4R2_FB0      CAN_F4R2_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F4R2_FB1_Pos  (1U)
#define CAN_F4R2_FB1_Msk  (0x1U << CAN_F4R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F4R2_FB1      CAN_F4R2_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F4R2_FB2_Pos  (2U)
#define CAN_F4R2_FB2_Msk  (0x1U << CAN_F4R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F4R2_FB2      CAN_F4R2_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F4R2_FB3_Pos  (3U)
#define CAN_F4R2_FB3_Msk  (0x1U << CAN_F4R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F4R2_FB3      CAN_F4R2_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F4R2_FB4_Pos  (4U)
#define CAN_F4R2_FB4_Msk  (0x1U << CAN_F4R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F4R2_FB4      CAN_F4R2_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F4R2_FB5_Pos  (5U)
#define CAN_F4R2_FB5_Msk  (0x1U << CAN_F4R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F4R2_FB5      CAN_F4R2_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F4R2_FB6_Pos  (6U)
#define CAN_F4R2_FB6_Msk  (0x1U << CAN_F4R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F4R2_FB6      CAN_F4R2_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F4R2_FB7_Pos  (7U)
#define CAN_F4R2_FB7_Msk  (0x1U << CAN_F4R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F4R2_FB7      CAN_F4R2_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F4R2_FB8_Pos  (8U)
#define CAN_F4R2_FB8_Msk  (0x1U << CAN_F4R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F4R2_FB8      CAN_F4R2_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F4R2_FB9_Pos  (9U)
#define CAN_F4R2_FB9_Msk  (0x1U << CAN_F4R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F4R2_FB9      CAN_F4R2_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F4R2_FB10_Pos (10U)
#define CAN_F4R2_FB10_Msk (0x1U << CAN_F4R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F4R2_FB10     CAN_F4R2_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F4R2_FB11_Pos (11U)
#define CAN_F4R2_FB11_Msk (0x1U << CAN_F4R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F4R2_FB11     CAN_F4R2_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F4R2_FB12_Pos (12U)
#define CAN_F4R2_FB12_Msk (0x1U << CAN_F4R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F4R2_FB12     CAN_F4R2_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F4R2_FB13_Pos (13U)
#define CAN_F4R2_FB13_Msk (0x1U << CAN_F4R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F4R2_FB13     CAN_F4R2_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F4R2_FB14_Pos (14U)
#define CAN_F4R2_FB14_Msk (0x1U << CAN_F4R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F4R2_FB14     CAN_F4R2_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F4R2_FB15_Pos (15U)
#define CAN_F4R2_FB15_Msk (0x1U << CAN_F4R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F4R2_FB15     CAN_F4R2_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F4R2_FB16_Pos (16U)
#define CAN_F4R2_FB16_Msk (0x1U << CAN_F4R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F4R2_FB16     CAN_F4R2_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F4R2_FB17_Pos (17U)
#define CAN_F4R2_FB17_Msk (0x1U << CAN_F4R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F4R2_FB17     CAN_F4R2_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F4R2_FB18_Pos (18U)
#define CAN_F4R2_FB18_Msk (0x1U << CAN_F4R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F4R2_FB18     CAN_F4R2_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F4R2_FB19_Pos (19U)
#define CAN_F4R2_FB19_Msk (0x1U << CAN_F4R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F4R2_FB19     CAN_F4R2_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F4R2_FB20_Pos (20U)
#define CAN_F4R2_FB20_Msk (0x1U << CAN_F4R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F4R2_FB20     CAN_F4R2_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F4R2_FB21_Pos (21U)
#define CAN_F4R2_FB21_Msk (0x1U << CAN_F4R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F4R2_FB21     CAN_F4R2_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F4R2_FB22_Pos (22U)
#define CAN_F4R2_FB22_Msk (0x1U << CAN_F4R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F4R2_FB22     CAN_F4R2_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F4R2_FB23_Pos (23U)
#define CAN_F4R2_FB23_Msk (0x1U << CAN_F4R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F4R2_FB23     CAN_F4R2_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F4R2_FB24_Pos (24U)
#define CAN_F4R2_FB24_Msk (0x1U << CAN_F4R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F4R2_FB24     CAN_F4R2_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F4R2_FB25_Pos (25U)
#define CAN_F4R2_FB25_Msk (0x1U << CAN_F4R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F4R2_FB25     CAN_F4R2_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F4R2_FB26_Pos (26U)
#define CAN_F4R2_FB26_Msk (0x1U << CAN_F4R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F4R2_FB26     CAN_F4R2_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F4R2_FB27_Pos (27U)
#define CAN_F4R2_FB27_Msk (0x1U << CAN_F4R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F4R2_FB27     CAN_F4R2_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F4R2_FB28_Pos (28U)
#define CAN_F4R2_FB28_Msk (0x1U << CAN_F4R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F4R2_FB28     CAN_F4R2_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F4R2_FB29_Pos (29U)
#define CAN_F4R2_FB29_Msk (0x1U << CAN_F4R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F4R2_FB29     CAN_F4R2_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F4R2_FB30_Pos (30U)
#define CAN_F4R2_FB30_Msk (0x1U << CAN_F4R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F4R2_FB30     CAN_F4R2_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F4R2_FB31_Pos (31U)
#define CAN_F4R2_FB31_Msk (0x1U << CAN_F4R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F4R2_FB31     CAN_F4R2_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F5R2 register  *******************/
#define CAN_F5R2_FB0_Pos  (0U)
#define CAN_F5R2_FB0_Msk  (0x1U << CAN_F5R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F5R2_FB0      CAN_F5R2_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F5R2_FB1_Pos  (1U)
#define CAN_F5R2_FB1_Msk  (0x1U << CAN_F5R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F5R2_FB1      CAN_F5R2_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F5R2_FB2_Pos  (2U)
#define CAN_F5R2_FB2_Msk  (0x1U << CAN_F5R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F5R2_FB2      CAN_F5R2_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F5R2_FB3_Pos  (3U)
#define CAN_F5R2_FB3_Msk  (0x1U << CAN_F5R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F5R2_FB3      CAN_F5R2_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F5R2_FB4_Pos  (4U)
#define CAN_F5R2_FB4_Msk  (0x1U << CAN_F5R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F5R2_FB4      CAN_F5R2_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F5R2_FB5_Pos  (5U)
#define CAN_F5R2_FB5_Msk  (0x1U << CAN_F5R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F5R2_FB5      CAN_F5R2_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F5R2_FB6_Pos  (6U)
#define CAN_F5R2_FB6_Msk  (0x1U << CAN_F5R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F5R2_FB6      CAN_F5R2_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F5R2_FB7_Pos  (7U)
#define CAN_F5R2_FB7_Msk  (0x1U << CAN_F5R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F5R2_FB7      CAN_F5R2_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F5R2_FB8_Pos  (8U)
#define CAN_F5R2_FB8_Msk  (0x1U << CAN_F5R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F5R2_FB8      CAN_F5R2_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F5R2_FB9_Pos  (9U)
#define CAN_F5R2_FB9_Msk  (0x1U << CAN_F5R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F5R2_FB9      CAN_F5R2_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F5R2_FB10_Pos (10U)
#define CAN_F5R2_FB10_Msk (0x1U << CAN_F5R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F5R2_FB10     CAN_F5R2_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F5R2_FB11_Pos (11U)
#define CAN_F5R2_FB11_Msk (0x1U << CAN_F5R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F5R2_FB11     CAN_F5R2_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F5R2_FB12_Pos (12U)
#define CAN_F5R2_FB12_Msk (0x1U << CAN_F5R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F5R2_FB12     CAN_F5R2_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F5R2_FB13_Pos (13U)
#define CAN_F5R2_FB13_Msk (0x1U << CAN_F5R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F5R2_FB13     CAN_F5R2_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F5R2_FB14_Pos (14U)
#define CAN_F5R2_FB14_Msk (0x1U << CAN_F5R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F5R2_FB14     CAN_F5R2_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F5R2_FB15_Pos (15U)
#define CAN_F5R2_FB15_Msk (0x1U << CAN_F5R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F5R2_FB15     CAN_F5R2_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F5R2_FB16_Pos (16U)
#define CAN_F5R2_FB16_Msk (0x1U << CAN_F5R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F5R2_FB16     CAN_F5R2_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F5R2_FB17_Pos (17U)
#define CAN_F5R2_FB17_Msk (0x1U << CAN_F5R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F5R2_FB17     CAN_F5R2_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F5R2_FB18_Pos (18U)
#define CAN_F5R2_FB18_Msk (0x1U << CAN_F5R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F5R2_FB18     CAN_F5R2_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F5R2_FB19_Pos (19U)
#define CAN_F5R2_FB19_Msk (0x1U << CAN_F5R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F5R2_FB19     CAN_F5R2_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F5R2_FB20_Pos (20U)
#define CAN_F5R2_FB20_Msk (0x1U << CAN_F5R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F5R2_FB20     CAN_F5R2_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F5R2_FB21_Pos (21U)
#define CAN_F5R2_FB21_Msk (0x1U << CAN_F5R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F5R2_FB21     CAN_F5R2_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F5R2_FB22_Pos (22U)
#define CAN_F5R2_FB22_Msk (0x1U << CAN_F5R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F5R2_FB22     CAN_F5R2_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F5R2_FB23_Pos (23U)
#define CAN_F5R2_FB23_Msk (0x1U << CAN_F5R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F5R2_FB23     CAN_F5R2_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F5R2_FB24_Pos (24U)
#define CAN_F5R2_FB24_Msk (0x1U << CAN_F5R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F5R2_FB24     CAN_F5R2_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F5R2_FB25_Pos (25U)
#define CAN_F5R2_FB25_Msk (0x1U << CAN_F5R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F5R2_FB25     CAN_F5R2_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F5R2_FB26_Pos (26U)
#define CAN_F5R2_FB26_Msk (0x1U << CAN_F5R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F5R2_FB26     CAN_F5R2_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F5R2_FB27_Pos (27U)
#define CAN_F5R2_FB27_Msk (0x1U << CAN_F5R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F5R2_FB27     CAN_F5R2_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F5R2_FB28_Pos (28U)
#define CAN_F5R2_FB28_Msk (0x1U << CAN_F5R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F5R2_FB28     CAN_F5R2_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F5R2_FB29_Pos (29U)
#define CAN_F5R2_FB29_Msk (0x1U << CAN_F5R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F5R2_FB29     CAN_F5R2_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F5R2_FB30_Pos (30U)
#define CAN_F5R2_FB30_Msk (0x1U << CAN_F5R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F5R2_FB30     CAN_F5R2_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F5R2_FB31_Pos (31U)
#define CAN_F5R2_FB31_Msk (0x1U << CAN_F5R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F5R2_FB31     CAN_F5R2_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F6R2 register  *******************/
#define CAN_F6R2_FB0_Pos  (0U)
#define CAN_F6R2_FB0_Msk  (0x1U << CAN_F6R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F6R2_FB0      CAN_F6R2_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F6R2_FB1_Pos  (1U)
#define CAN_F6R2_FB1_Msk  (0x1U << CAN_F6R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F6R2_FB1      CAN_F6R2_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F6R2_FB2_Pos  (2U)
#define CAN_F6R2_FB2_Msk  (0x1U << CAN_F6R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F6R2_FB2      CAN_F6R2_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F6R2_FB3_Pos  (3U)
#define CAN_F6R2_FB3_Msk  (0x1U << CAN_F6R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F6R2_FB3      CAN_F6R2_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F6R2_FB4_Pos  (4U)
#define CAN_F6R2_FB4_Msk  (0x1U << CAN_F6R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F6R2_FB4      CAN_F6R2_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F6R2_FB5_Pos  (5U)
#define CAN_F6R2_FB5_Msk  (0x1U << CAN_F6R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F6R2_FB5      CAN_F6R2_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F6R2_FB6_Pos  (6U)
#define CAN_F6R2_FB6_Msk  (0x1U << CAN_F6R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F6R2_FB6      CAN_F6R2_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F6R2_FB7_Pos  (7U)
#define CAN_F6R2_FB7_Msk  (0x1U << CAN_F6R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F6R2_FB7      CAN_F6R2_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F6R2_FB8_Pos  (8U)
#define CAN_F6R2_FB8_Msk  (0x1U << CAN_F6R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F6R2_FB8      CAN_F6R2_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F6R2_FB9_Pos  (9U)
#define CAN_F6R2_FB9_Msk  (0x1U << CAN_F6R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F6R2_FB9      CAN_F6R2_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F6R2_FB10_Pos (10U)
#define CAN_F6R2_FB10_Msk (0x1U << CAN_F6R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F6R2_FB10     CAN_F6R2_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F6R2_FB11_Pos (11U)
#define CAN_F6R2_FB11_Msk (0x1U << CAN_F6R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F6R2_FB11     CAN_F6R2_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F6R2_FB12_Pos (12U)
#define CAN_F6R2_FB12_Msk (0x1U << CAN_F6R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F6R2_FB12     CAN_F6R2_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F6R2_FB13_Pos (13U)
#define CAN_F6R2_FB13_Msk (0x1U << CAN_F6R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F6R2_FB13     CAN_F6R2_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F6R2_FB14_Pos (14U)
#define CAN_F6R2_FB14_Msk (0x1U << CAN_F6R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F6R2_FB14     CAN_F6R2_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F6R2_FB15_Pos (15U)
#define CAN_F6R2_FB15_Msk (0x1U << CAN_F6R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F6R2_FB15     CAN_F6R2_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F6R2_FB16_Pos (16U)
#define CAN_F6R2_FB16_Msk (0x1U << CAN_F6R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F6R2_FB16     CAN_F6R2_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F6R2_FB17_Pos (17U)
#define CAN_F6R2_FB17_Msk (0x1U << CAN_F6R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F6R2_FB17     CAN_F6R2_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F6R2_FB18_Pos (18U)
#define CAN_F6R2_FB18_Msk (0x1U << CAN_F6R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F6R2_FB18     CAN_F6R2_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F6R2_FB19_Pos (19U)
#define CAN_F6R2_FB19_Msk (0x1U << CAN_F6R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F6R2_FB19     CAN_F6R2_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F6R2_FB20_Pos (20U)
#define CAN_F6R2_FB20_Msk (0x1U << CAN_F6R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F6R2_FB20     CAN_F6R2_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F6R2_FB21_Pos (21U)
#define CAN_F6R2_FB21_Msk (0x1U << CAN_F6R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F6R2_FB21     CAN_F6R2_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F6R2_FB22_Pos (22U)
#define CAN_F6R2_FB22_Msk (0x1U << CAN_F6R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F6R2_FB22     CAN_F6R2_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F6R2_FB23_Pos (23U)
#define CAN_F6R2_FB23_Msk (0x1U << CAN_F6R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F6R2_FB23     CAN_F6R2_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F6R2_FB24_Pos (24U)
#define CAN_F6R2_FB24_Msk (0x1U << CAN_F6R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F6R2_FB24     CAN_F6R2_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F6R2_FB25_Pos (25U)
#define CAN_F6R2_FB25_Msk (0x1U << CAN_F6R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F6R2_FB25     CAN_F6R2_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F6R2_FB26_Pos (26U)
#define CAN_F6R2_FB26_Msk (0x1U << CAN_F6R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F6R2_FB26     CAN_F6R2_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F6R2_FB27_Pos (27U)
#define CAN_F6R2_FB27_Msk (0x1U << CAN_F6R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F6R2_FB27     CAN_F6R2_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F6R2_FB28_Pos (28U)
#define CAN_F6R2_FB28_Msk (0x1U << CAN_F6R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F6R2_FB28     CAN_F6R2_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F6R2_FB29_Pos (29U)
#define CAN_F6R2_FB29_Msk (0x1U << CAN_F6R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F6R2_FB29     CAN_F6R2_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F6R2_FB30_Pos (30U)
#define CAN_F6R2_FB30_Msk (0x1U << CAN_F6R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F6R2_FB30     CAN_F6R2_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F6R2_FB31_Pos (31U)
#define CAN_F6R2_FB31_Msk (0x1U << CAN_F6R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F6R2_FB31     CAN_F6R2_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F7R2 register  *******************/
#define CAN_F7R2_FB0_Pos  (0U)
#define CAN_F7R2_FB0_Msk  (0x1U << CAN_F7R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F7R2_FB0      CAN_F7R2_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F7R2_FB1_Pos  (1U)
#define CAN_F7R2_FB1_Msk  (0x1U << CAN_F7R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F7R2_FB1      CAN_F7R2_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F7R2_FB2_Pos  (2U)
#define CAN_F7R2_FB2_Msk  (0x1U << CAN_F7R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F7R2_FB2      CAN_F7R2_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F7R2_FB3_Pos  (3U)
#define CAN_F7R2_FB3_Msk  (0x1U << CAN_F7R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F7R2_FB3      CAN_F7R2_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F7R2_FB4_Pos  (4U)
#define CAN_F7R2_FB4_Msk  (0x1U << CAN_F7R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F7R2_FB4      CAN_F7R2_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F7R2_FB5_Pos  (5U)
#define CAN_F7R2_FB5_Msk  (0x1U << CAN_F7R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F7R2_FB5      CAN_F7R2_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F7R2_FB6_Pos  (6U)
#define CAN_F7R2_FB6_Msk  (0x1U << CAN_F7R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F7R2_FB6      CAN_F7R2_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F7R2_FB7_Pos  (7U)
#define CAN_F7R2_FB7_Msk  (0x1U << CAN_F7R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F7R2_FB7      CAN_F7R2_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F7R2_FB8_Pos  (8U)
#define CAN_F7R2_FB8_Msk  (0x1U << CAN_F7R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F7R2_FB8      CAN_F7R2_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F7R2_FB9_Pos  (9U)
#define CAN_F7R2_FB9_Msk  (0x1U << CAN_F7R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F7R2_FB9      CAN_F7R2_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F7R2_FB10_Pos (10U)
#define CAN_F7R2_FB10_Msk (0x1U << CAN_F7R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F7R2_FB10     CAN_F7R2_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F7R2_FB11_Pos (11U)
#define CAN_F7R2_FB11_Msk (0x1U << CAN_F7R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F7R2_FB11     CAN_F7R2_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F7R2_FB12_Pos (12U)
#define CAN_F7R2_FB12_Msk (0x1U << CAN_F7R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F7R2_FB12     CAN_F7R2_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F7R2_FB13_Pos (13U)
#define CAN_F7R2_FB13_Msk (0x1U << CAN_F7R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F7R2_FB13     CAN_F7R2_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F7R2_FB14_Pos (14U)
#define CAN_F7R2_FB14_Msk (0x1U << CAN_F7R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F7R2_FB14     CAN_F7R2_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F7R2_FB15_Pos (15U)
#define CAN_F7R2_FB15_Msk (0x1U << CAN_F7R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F7R2_FB15     CAN_F7R2_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F7R2_FB16_Pos (16U)
#define CAN_F7R2_FB16_Msk (0x1U << CAN_F7R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F7R2_FB16     CAN_F7R2_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F7R2_FB17_Pos (17U)
#define CAN_F7R2_FB17_Msk (0x1U << CAN_F7R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F7R2_FB17     CAN_F7R2_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F7R2_FB18_Pos (18U)
#define CAN_F7R2_FB18_Msk (0x1U << CAN_F7R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F7R2_FB18     CAN_F7R2_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F7R2_FB19_Pos (19U)
#define CAN_F7R2_FB19_Msk (0x1U << CAN_F7R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F7R2_FB19     CAN_F7R2_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F7R2_FB20_Pos (20U)
#define CAN_F7R2_FB20_Msk (0x1U << CAN_F7R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F7R2_FB20     CAN_F7R2_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F7R2_FB21_Pos (21U)
#define CAN_F7R2_FB21_Msk (0x1U << CAN_F7R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F7R2_FB21     CAN_F7R2_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F7R2_FB22_Pos (22U)
#define CAN_F7R2_FB22_Msk (0x1U << CAN_F7R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F7R2_FB22     CAN_F7R2_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F7R2_FB23_Pos (23U)
#define CAN_F7R2_FB23_Msk (0x1U << CAN_F7R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F7R2_FB23     CAN_F7R2_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F7R2_FB24_Pos (24U)
#define CAN_F7R2_FB24_Msk (0x1U << CAN_F7R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F7R2_FB24     CAN_F7R2_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F7R2_FB25_Pos (25U)
#define CAN_F7R2_FB25_Msk (0x1U << CAN_F7R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F7R2_FB25     CAN_F7R2_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F7R2_FB26_Pos (26U)
#define CAN_F7R2_FB26_Msk (0x1U << CAN_F7R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F7R2_FB26     CAN_F7R2_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F7R2_FB27_Pos (27U)
#define CAN_F7R2_FB27_Msk (0x1U << CAN_F7R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F7R2_FB27     CAN_F7R2_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F7R2_FB28_Pos (28U)
#define CAN_F7R2_FB28_Msk (0x1U << CAN_F7R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F7R2_FB28     CAN_F7R2_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F7R2_FB29_Pos (29U)
#define CAN_F7R2_FB29_Msk (0x1U << CAN_F7R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F7R2_FB29     CAN_F7R2_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F7R2_FB30_Pos (30U)
#define CAN_F7R2_FB30_Msk (0x1U << CAN_F7R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F7R2_FB30     CAN_F7R2_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F7R2_FB31_Pos (31U)
#define CAN_F7R2_FB31_Msk (0x1U << CAN_F7R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F7R2_FB31     CAN_F7R2_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F8R2 register  *******************/
#define CAN_F8R2_FB0_Pos  (0U)
#define CAN_F8R2_FB0_Msk  (0x1U << CAN_F8R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F8R2_FB0      CAN_F8R2_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F8R2_FB1_Pos  (1U)
#define CAN_F8R2_FB1_Msk  (0x1U << CAN_F8R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F8R2_FB1      CAN_F8R2_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F8R2_FB2_Pos  (2U)
#define CAN_F8R2_FB2_Msk  (0x1U << CAN_F8R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F8R2_FB2      CAN_F8R2_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F8R2_FB3_Pos  (3U)
#define CAN_F8R2_FB3_Msk  (0x1U << CAN_F8R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F8R2_FB3      CAN_F8R2_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F8R2_FB4_Pos  (4U)
#define CAN_F8R2_FB4_Msk  (0x1U << CAN_F8R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F8R2_FB4      CAN_F8R2_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F8R2_FB5_Pos  (5U)
#define CAN_F8R2_FB5_Msk  (0x1U << CAN_F8R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F8R2_FB5      CAN_F8R2_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F8R2_FB6_Pos  (6U)
#define CAN_F8R2_FB6_Msk  (0x1U << CAN_F8R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F8R2_FB6      CAN_F8R2_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F8R2_FB7_Pos  (7U)
#define CAN_F8R2_FB7_Msk  (0x1U << CAN_F8R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F8R2_FB7      CAN_F8R2_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F8R2_FB8_Pos  (8U)
#define CAN_F8R2_FB8_Msk  (0x1U << CAN_F8R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F8R2_FB8      CAN_F8R2_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F8R2_FB9_Pos  (9U)
#define CAN_F8R2_FB9_Msk  (0x1U << CAN_F8R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F8R2_FB9      CAN_F8R2_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F8R2_FB10_Pos (10U)
#define CAN_F8R2_FB10_Msk (0x1U << CAN_F8R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F8R2_FB10     CAN_F8R2_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F8R2_FB11_Pos (11U)
#define CAN_F8R2_FB11_Msk (0x1U << CAN_F8R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F8R2_FB11     CAN_F8R2_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F8R2_FB12_Pos (12U)
#define CAN_F8R2_FB12_Msk (0x1U << CAN_F8R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F8R2_FB12     CAN_F8R2_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F8R2_FB13_Pos (13U)
#define CAN_F8R2_FB13_Msk (0x1U << CAN_F8R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F8R2_FB13     CAN_F8R2_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F8R2_FB14_Pos (14U)
#define CAN_F8R2_FB14_Msk (0x1U << CAN_F8R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F8R2_FB14     CAN_F8R2_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F8R2_FB15_Pos (15U)
#define CAN_F8R2_FB15_Msk (0x1U << CAN_F8R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F8R2_FB15     CAN_F8R2_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F8R2_FB16_Pos (16U)
#define CAN_F8R2_FB16_Msk (0x1U << CAN_F8R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F8R2_FB16     CAN_F8R2_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F8R2_FB17_Pos (17U)
#define CAN_F8R2_FB17_Msk (0x1U << CAN_F8R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F8R2_FB17     CAN_F8R2_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F8R2_FB18_Pos (18U)
#define CAN_F8R2_FB18_Msk (0x1U << CAN_F8R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F8R2_FB18     CAN_F8R2_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F8R2_FB19_Pos (19U)
#define CAN_F8R2_FB19_Msk (0x1U << CAN_F8R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F8R2_FB19     CAN_F8R2_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F8R2_FB20_Pos (20U)
#define CAN_F8R2_FB20_Msk (0x1U << CAN_F8R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F8R2_FB20     CAN_F8R2_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F8R2_FB21_Pos (21U)
#define CAN_F8R2_FB21_Msk (0x1U << CAN_F8R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F8R2_FB21     CAN_F8R2_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F8R2_FB22_Pos (22U)
#define CAN_F8R2_FB22_Msk (0x1U << CAN_F8R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F8R2_FB22     CAN_F8R2_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F8R2_FB23_Pos (23U)
#define CAN_F8R2_FB23_Msk (0x1U << CAN_F8R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F8R2_FB23     CAN_F8R2_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F8R2_FB24_Pos (24U)
#define CAN_F8R2_FB24_Msk (0x1U << CAN_F8R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F8R2_FB24     CAN_F8R2_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F8R2_FB25_Pos (25U)
#define CAN_F8R2_FB25_Msk (0x1U << CAN_F8R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F8R2_FB25     CAN_F8R2_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F8R2_FB26_Pos (26U)
#define CAN_F8R2_FB26_Msk (0x1U << CAN_F8R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F8R2_FB26     CAN_F8R2_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F8R2_FB27_Pos (27U)
#define CAN_F8R2_FB27_Msk (0x1U << CAN_F8R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F8R2_FB27     CAN_F8R2_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F8R2_FB28_Pos (28U)
#define CAN_F8R2_FB28_Msk (0x1U << CAN_F8R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F8R2_FB28     CAN_F8R2_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F8R2_FB29_Pos (29U)
#define CAN_F8R2_FB29_Msk (0x1U << CAN_F8R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F8R2_FB29     CAN_F8R2_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F8R2_FB30_Pos (30U)
#define CAN_F8R2_FB30_Msk (0x1U << CAN_F8R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F8R2_FB30     CAN_F8R2_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F8R2_FB31_Pos (31U)
#define CAN_F8R2_FB31_Msk (0x1U << CAN_F8R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F8R2_FB31     CAN_F8R2_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F9R2 register  *******************/
#define CAN_F9R2_FB0_Pos  (0U)
#define CAN_F9R2_FB0_Msk  (0x1U << CAN_F9R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F9R2_FB0      CAN_F9R2_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F9R2_FB1_Pos  (1U)
#define CAN_F9R2_FB1_Msk  (0x1U << CAN_F9R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F9R2_FB1      CAN_F9R2_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F9R2_FB2_Pos  (2U)
#define CAN_F9R2_FB2_Msk  (0x1U << CAN_F9R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F9R2_FB2      CAN_F9R2_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F9R2_FB3_Pos  (3U)
#define CAN_F9R2_FB3_Msk  (0x1U << CAN_F9R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F9R2_FB3      CAN_F9R2_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F9R2_FB4_Pos  (4U)
#define CAN_F9R2_FB4_Msk  (0x1U << CAN_F9R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F9R2_FB4      CAN_F9R2_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F9R2_FB5_Pos  (5U)
#define CAN_F9R2_FB5_Msk  (0x1U << CAN_F9R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F9R2_FB5      CAN_F9R2_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F9R2_FB6_Pos  (6U)
#define CAN_F9R2_FB6_Msk  (0x1U << CAN_F9R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F9R2_FB6      CAN_F9R2_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F9R2_FB7_Pos  (7U)
#define CAN_F9R2_FB7_Msk  (0x1U << CAN_F9R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F9R2_FB7      CAN_F9R2_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F9R2_FB8_Pos  (8U)
#define CAN_F9R2_FB8_Msk  (0x1U << CAN_F9R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F9R2_FB8      CAN_F9R2_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F9R2_FB9_Pos  (9U)
#define CAN_F9R2_FB9_Msk  (0x1U << CAN_F9R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F9R2_FB9      CAN_F9R2_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F9R2_FB10_Pos (10U)
#define CAN_F9R2_FB10_Msk (0x1U << CAN_F9R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F9R2_FB10     CAN_F9R2_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F9R2_FB11_Pos (11U)
#define CAN_F9R2_FB11_Msk (0x1U << CAN_F9R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F9R2_FB11     CAN_F9R2_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F9R2_FB12_Pos (12U)
#define CAN_F9R2_FB12_Msk (0x1U << CAN_F9R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F9R2_FB12     CAN_F9R2_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F9R2_FB13_Pos (13U)
#define CAN_F9R2_FB13_Msk (0x1U << CAN_F9R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F9R2_FB13     CAN_F9R2_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F9R2_FB14_Pos (14U)
#define CAN_F9R2_FB14_Msk (0x1U << CAN_F9R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F9R2_FB14     CAN_F9R2_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F9R2_FB15_Pos (15U)
#define CAN_F9R2_FB15_Msk (0x1U << CAN_F9R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F9R2_FB15     CAN_F9R2_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F9R2_FB16_Pos (16U)
#define CAN_F9R2_FB16_Msk (0x1U << CAN_F9R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F9R2_FB16     CAN_F9R2_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F9R2_FB17_Pos (17U)
#define CAN_F9R2_FB17_Msk (0x1U << CAN_F9R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F9R2_FB17     CAN_F9R2_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F9R2_FB18_Pos (18U)
#define CAN_F9R2_FB18_Msk (0x1U << CAN_F9R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F9R2_FB18     CAN_F9R2_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F9R2_FB19_Pos (19U)
#define CAN_F9R2_FB19_Msk (0x1U << CAN_F9R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F9R2_FB19     CAN_F9R2_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F9R2_FB20_Pos (20U)
#define CAN_F9R2_FB20_Msk (0x1U << CAN_F9R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F9R2_FB20     CAN_F9R2_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F9R2_FB21_Pos (21U)
#define CAN_F9R2_FB21_Msk (0x1U << CAN_F9R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F9R2_FB21     CAN_F9R2_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F9R2_FB22_Pos (22U)
#define CAN_F9R2_FB22_Msk (0x1U << CAN_F9R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F9R2_FB22     CAN_F9R2_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F9R2_FB23_Pos (23U)
#define CAN_F9R2_FB23_Msk (0x1U << CAN_F9R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F9R2_FB23     CAN_F9R2_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F9R2_FB24_Pos (24U)
#define CAN_F9R2_FB24_Msk (0x1U << CAN_F9R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F9R2_FB24     CAN_F9R2_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F9R2_FB25_Pos (25U)
#define CAN_F9R2_FB25_Msk (0x1U << CAN_F9R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F9R2_FB25     CAN_F9R2_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F9R2_FB26_Pos (26U)
#define CAN_F9R2_FB26_Msk (0x1U << CAN_F9R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F9R2_FB26     CAN_F9R2_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F9R2_FB27_Pos (27U)
#define CAN_F9R2_FB27_Msk (0x1U << CAN_F9R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F9R2_FB27     CAN_F9R2_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F9R2_FB28_Pos (28U)
#define CAN_F9R2_FB28_Msk (0x1U << CAN_F9R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F9R2_FB28     CAN_F9R2_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F9R2_FB29_Pos (29U)
#define CAN_F9R2_FB29_Msk (0x1U << CAN_F9R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F9R2_FB29     CAN_F9R2_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F9R2_FB30_Pos (30U)
#define CAN_F9R2_FB30_Msk (0x1U << CAN_F9R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F9R2_FB30     CAN_F9R2_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F9R2_FB31_Pos (31U)
#define CAN_F9R2_FB31_Msk (0x1U << CAN_F9R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F9R2_FB31     CAN_F9R2_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F10R2 register  ******************/
#define CAN_F10R2_FB0_Pos  (0U)
#define CAN_F10R2_FB0_Msk  (0x1U << CAN_F10R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F10R2_FB0      CAN_F10R2_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F10R2_FB1_Pos  (1U)
#define CAN_F10R2_FB1_Msk  (0x1U << CAN_F10R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F10R2_FB1      CAN_F10R2_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F10R2_FB2_Pos  (2U)
#define CAN_F10R2_FB2_Msk  (0x1U << CAN_F10R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F10R2_FB2      CAN_F10R2_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F10R2_FB3_Pos  (3U)
#define CAN_F10R2_FB3_Msk  (0x1U << CAN_F10R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F10R2_FB3      CAN_F10R2_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F10R2_FB4_Pos  (4U)
#define CAN_F10R2_FB4_Msk  (0x1U << CAN_F10R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F10R2_FB4      CAN_F10R2_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F10R2_FB5_Pos  (5U)
#define CAN_F10R2_FB5_Msk  (0x1U << CAN_F10R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F10R2_FB5      CAN_F10R2_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F10R2_FB6_Pos  (6U)
#define CAN_F10R2_FB6_Msk  (0x1U << CAN_F10R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F10R2_FB6      CAN_F10R2_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F10R2_FB7_Pos  (7U)
#define CAN_F10R2_FB7_Msk  (0x1U << CAN_F10R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F10R2_FB7      CAN_F10R2_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F10R2_FB8_Pos  (8U)
#define CAN_F10R2_FB8_Msk  (0x1U << CAN_F10R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F10R2_FB8      CAN_F10R2_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F10R2_FB9_Pos  (9U)
#define CAN_F10R2_FB9_Msk  (0x1U << CAN_F10R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F10R2_FB9      CAN_F10R2_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F10R2_FB10_Pos (10U)
#define CAN_F10R2_FB10_Msk (0x1U << CAN_F10R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F10R2_FB10     CAN_F10R2_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F10R2_FB11_Pos (11U)
#define CAN_F10R2_FB11_Msk (0x1U << CAN_F10R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F10R2_FB11     CAN_F10R2_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F10R2_FB12_Pos (12U)
#define CAN_F10R2_FB12_Msk (0x1U << CAN_F10R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F10R2_FB12     CAN_F10R2_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F10R2_FB13_Pos (13U)
#define CAN_F10R2_FB13_Msk (0x1U << CAN_F10R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F10R2_FB13     CAN_F10R2_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F10R2_FB14_Pos (14U)
#define CAN_F10R2_FB14_Msk (0x1U << CAN_F10R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F10R2_FB14     CAN_F10R2_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F10R2_FB15_Pos (15U)
#define CAN_F10R2_FB15_Msk (0x1U << CAN_F10R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F10R2_FB15     CAN_F10R2_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F10R2_FB16_Pos (16U)
#define CAN_F10R2_FB16_Msk (0x1U << CAN_F10R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F10R2_FB16     CAN_F10R2_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F10R2_FB17_Pos (17U)
#define CAN_F10R2_FB17_Msk (0x1U << CAN_F10R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F10R2_FB17     CAN_F10R2_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F10R2_FB18_Pos (18U)
#define CAN_F10R2_FB18_Msk (0x1U << CAN_F10R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F10R2_FB18     CAN_F10R2_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F10R2_FB19_Pos (19U)
#define CAN_F10R2_FB19_Msk (0x1U << CAN_F10R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F10R2_FB19     CAN_F10R2_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F10R2_FB20_Pos (20U)
#define CAN_F10R2_FB20_Msk (0x1U << CAN_F10R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F10R2_FB20     CAN_F10R2_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F10R2_FB21_Pos (21U)
#define CAN_F10R2_FB21_Msk (0x1U << CAN_F10R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F10R2_FB21     CAN_F10R2_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F10R2_FB22_Pos (22U)
#define CAN_F10R2_FB22_Msk (0x1U << CAN_F10R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F10R2_FB22     CAN_F10R2_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F10R2_FB23_Pos (23U)
#define CAN_F10R2_FB23_Msk (0x1U << CAN_F10R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F10R2_FB23     CAN_F10R2_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F10R2_FB24_Pos (24U)
#define CAN_F10R2_FB24_Msk (0x1U << CAN_F10R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F10R2_FB24     CAN_F10R2_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F10R2_FB25_Pos (25U)
#define CAN_F10R2_FB25_Msk (0x1U << CAN_F10R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F10R2_FB25     CAN_F10R2_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F10R2_FB26_Pos (26U)
#define CAN_F10R2_FB26_Msk (0x1U << CAN_F10R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F10R2_FB26     CAN_F10R2_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F10R2_FB27_Pos (27U)
#define CAN_F10R2_FB27_Msk (0x1U << CAN_F10R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F10R2_FB27     CAN_F10R2_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F10R2_FB28_Pos (28U)
#define CAN_F10R2_FB28_Msk (0x1U << CAN_F10R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F10R2_FB28     CAN_F10R2_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F10R2_FB29_Pos (29U)
#define CAN_F10R2_FB29_Msk (0x1U << CAN_F10R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F10R2_FB29     CAN_F10R2_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F10R2_FB30_Pos (30U)
#define CAN_F10R2_FB30_Msk (0x1U << CAN_F10R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F10R2_FB30     CAN_F10R2_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F10R2_FB31_Pos (31U)
#define CAN_F10R2_FB31_Msk (0x1U << CAN_F10R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F10R2_FB31     CAN_F10R2_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F11R2 register  ******************/
#define CAN_F11R2_FB0_Pos  (0U)
#define CAN_F11R2_FB0_Msk  (0x1U << CAN_F11R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F11R2_FB0      CAN_F11R2_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F11R2_FB1_Pos  (1U)
#define CAN_F11R2_FB1_Msk  (0x1U << CAN_F11R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F11R2_FB1      CAN_F11R2_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F11R2_FB2_Pos  (2U)
#define CAN_F11R2_FB2_Msk  (0x1U << CAN_F11R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F11R2_FB2      CAN_F11R2_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F11R2_FB3_Pos  (3U)
#define CAN_F11R2_FB3_Msk  (0x1U << CAN_F11R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F11R2_FB3      CAN_F11R2_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F11R2_FB4_Pos  (4U)
#define CAN_F11R2_FB4_Msk  (0x1U << CAN_F11R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F11R2_FB4      CAN_F11R2_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F11R2_FB5_Pos  (5U)
#define CAN_F11R2_FB5_Msk  (0x1U << CAN_F11R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F11R2_FB5      CAN_F11R2_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F11R2_FB6_Pos  (6U)
#define CAN_F11R2_FB6_Msk  (0x1U << CAN_F11R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F11R2_FB6      CAN_F11R2_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F11R2_FB7_Pos  (7U)
#define CAN_F11R2_FB7_Msk  (0x1U << CAN_F11R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F11R2_FB7      CAN_F11R2_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F11R2_FB8_Pos  (8U)
#define CAN_F11R2_FB8_Msk  (0x1U << CAN_F11R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F11R2_FB8      CAN_F11R2_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F11R2_FB9_Pos  (9U)
#define CAN_F11R2_FB9_Msk  (0x1U << CAN_F11R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F11R2_FB9      CAN_F11R2_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F11R2_FB10_Pos (10U)
#define CAN_F11R2_FB10_Msk (0x1U << CAN_F11R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F11R2_FB10     CAN_F11R2_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F11R2_FB11_Pos (11U)
#define CAN_F11R2_FB11_Msk (0x1U << CAN_F11R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F11R2_FB11     CAN_F11R2_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F11R2_FB12_Pos (12U)
#define CAN_F11R2_FB12_Msk (0x1U << CAN_F11R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F11R2_FB12     CAN_F11R2_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F11R2_FB13_Pos (13U)
#define CAN_F11R2_FB13_Msk (0x1U << CAN_F11R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F11R2_FB13     CAN_F11R2_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F11R2_FB14_Pos (14U)
#define CAN_F11R2_FB14_Msk (0x1U << CAN_F11R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F11R2_FB14     CAN_F11R2_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F11R2_FB15_Pos (15U)
#define CAN_F11R2_FB15_Msk (0x1U << CAN_F11R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F11R2_FB15     CAN_F11R2_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F11R2_FB16_Pos (16U)
#define CAN_F11R2_FB16_Msk (0x1U << CAN_F11R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F11R2_FB16     CAN_F11R2_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F11R2_FB17_Pos (17U)
#define CAN_F11R2_FB17_Msk (0x1U << CAN_F11R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F11R2_FB17     CAN_F11R2_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F11R2_FB18_Pos (18U)
#define CAN_F11R2_FB18_Msk (0x1U << CAN_F11R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F11R2_FB18     CAN_F11R2_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F11R2_FB19_Pos (19U)
#define CAN_F11R2_FB19_Msk (0x1U << CAN_F11R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F11R2_FB19     CAN_F11R2_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F11R2_FB20_Pos (20U)
#define CAN_F11R2_FB20_Msk (0x1U << CAN_F11R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F11R2_FB20     CAN_F11R2_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F11R2_FB21_Pos (21U)
#define CAN_F11R2_FB21_Msk (0x1U << CAN_F11R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F11R2_FB21     CAN_F11R2_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F11R2_FB22_Pos (22U)
#define CAN_F11R2_FB22_Msk (0x1U << CAN_F11R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F11R2_FB22     CAN_F11R2_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F11R2_FB23_Pos (23U)
#define CAN_F11R2_FB23_Msk (0x1U << CAN_F11R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F11R2_FB23     CAN_F11R2_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F11R2_FB24_Pos (24U)
#define CAN_F11R2_FB24_Msk (0x1U << CAN_F11R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F11R2_FB24     CAN_F11R2_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F11R2_FB25_Pos (25U)
#define CAN_F11R2_FB25_Msk (0x1U << CAN_F11R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F11R2_FB25     CAN_F11R2_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F11R2_FB26_Pos (26U)
#define CAN_F11R2_FB26_Msk (0x1U << CAN_F11R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F11R2_FB26     CAN_F11R2_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F11R2_FB27_Pos (27U)
#define CAN_F11R2_FB27_Msk (0x1U << CAN_F11R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F11R2_FB27     CAN_F11R2_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F11R2_FB28_Pos (28U)
#define CAN_F11R2_FB28_Msk (0x1U << CAN_F11R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F11R2_FB28     CAN_F11R2_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F11R2_FB29_Pos (29U)
#define CAN_F11R2_FB29_Msk (0x1U << CAN_F11R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F11R2_FB29     CAN_F11R2_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F11R2_FB30_Pos (30U)
#define CAN_F11R2_FB30_Msk (0x1U << CAN_F11R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F11R2_FB30     CAN_F11R2_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F11R2_FB31_Pos (31U)
#define CAN_F11R2_FB31_Msk (0x1U << CAN_F11R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F11R2_FB31     CAN_F11R2_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F12R2 register  ******************/
#define CAN_F12R2_FB0_Pos  (0U)
#define CAN_F12R2_FB0_Msk  (0x1U << CAN_F12R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F12R2_FB0      CAN_F12R2_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F12R2_FB1_Pos  (1U)
#define CAN_F12R2_FB1_Msk  (0x1U << CAN_F12R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F12R2_FB1      CAN_F12R2_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F12R2_FB2_Pos  (2U)
#define CAN_F12R2_FB2_Msk  (0x1U << CAN_F12R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F12R2_FB2      CAN_F12R2_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F12R2_FB3_Pos  (3U)
#define CAN_F12R2_FB3_Msk  (0x1U << CAN_F12R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F12R2_FB3      CAN_F12R2_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F12R2_FB4_Pos  (4U)
#define CAN_F12R2_FB4_Msk  (0x1U << CAN_F12R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F12R2_FB4      CAN_F12R2_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F12R2_FB5_Pos  (5U)
#define CAN_F12R2_FB5_Msk  (0x1U << CAN_F12R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F12R2_FB5      CAN_F12R2_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F12R2_FB6_Pos  (6U)
#define CAN_F12R2_FB6_Msk  (0x1U << CAN_F12R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F12R2_FB6      CAN_F12R2_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F12R2_FB7_Pos  (7U)
#define CAN_F12R2_FB7_Msk  (0x1U << CAN_F12R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F12R2_FB7      CAN_F12R2_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F12R2_FB8_Pos  (8U)
#define CAN_F12R2_FB8_Msk  (0x1U << CAN_F12R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F12R2_FB8      CAN_F12R2_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F12R2_FB9_Pos  (9U)
#define CAN_F12R2_FB9_Msk  (0x1U << CAN_F12R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F12R2_FB9      CAN_F12R2_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F12R2_FB10_Pos (10U)
#define CAN_F12R2_FB10_Msk (0x1U << CAN_F12R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F12R2_FB10     CAN_F12R2_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F12R2_FB11_Pos (11U)
#define CAN_F12R2_FB11_Msk (0x1U << CAN_F12R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F12R2_FB11     CAN_F12R2_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F12R2_FB12_Pos (12U)
#define CAN_F12R2_FB12_Msk (0x1U << CAN_F12R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F12R2_FB12     CAN_F12R2_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F12R2_FB13_Pos (13U)
#define CAN_F12R2_FB13_Msk (0x1U << CAN_F12R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F12R2_FB13     CAN_F12R2_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F12R2_FB14_Pos (14U)
#define CAN_F12R2_FB14_Msk (0x1U << CAN_F12R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F12R2_FB14     CAN_F12R2_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F12R2_FB15_Pos (15U)
#define CAN_F12R2_FB15_Msk (0x1U << CAN_F12R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F12R2_FB15     CAN_F12R2_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F12R2_FB16_Pos (16U)
#define CAN_F12R2_FB16_Msk (0x1U << CAN_F12R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F12R2_FB16     CAN_F12R2_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F12R2_FB17_Pos (17U)
#define CAN_F12R2_FB17_Msk (0x1U << CAN_F12R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F12R2_FB17     CAN_F12R2_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F12R2_FB18_Pos (18U)
#define CAN_F12R2_FB18_Msk (0x1U << CAN_F12R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F12R2_FB18     CAN_F12R2_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F12R2_FB19_Pos (19U)
#define CAN_F12R2_FB19_Msk (0x1U << CAN_F12R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F12R2_FB19     CAN_F12R2_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F12R2_FB20_Pos (20U)
#define CAN_F12R2_FB20_Msk (0x1U << CAN_F12R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F12R2_FB20     CAN_F12R2_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F12R2_FB21_Pos (21U)
#define CAN_F12R2_FB21_Msk (0x1U << CAN_F12R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F12R2_FB21     CAN_F12R2_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F12R2_FB22_Pos (22U)
#define CAN_F12R2_FB22_Msk (0x1U << CAN_F12R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F12R2_FB22     CAN_F12R2_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F12R2_FB23_Pos (23U)
#define CAN_F12R2_FB23_Msk (0x1U << CAN_F12R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F12R2_FB23     CAN_F12R2_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F12R2_FB24_Pos (24U)
#define CAN_F12R2_FB24_Msk (0x1U << CAN_F12R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F12R2_FB24     CAN_F12R2_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F12R2_FB25_Pos (25U)
#define CAN_F12R2_FB25_Msk (0x1U << CAN_F12R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F12R2_FB25     CAN_F12R2_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F12R2_FB26_Pos (26U)
#define CAN_F12R2_FB26_Msk (0x1U << CAN_F12R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F12R2_FB26     CAN_F12R2_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F12R2_FB27_Pos (27U)
#define CAN_F12R2_FB27_Msk (0x1U << CAN_F12R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F12R2_FB27     CAN_F12R2_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F12R2_FB28_Pos (28U)
#define CAN_F12R2_FB28_Msk (0x1U << CAN_F12R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F12R2_FB28     CAN_F12R2_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F12R2_FB29_Pos (29U)
#define CAN_F12R2_FB29_Msk (0x1U << CAN_F12R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F12R2_FB29     CAN_F12R2_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F12R2_FB30_Pos (30U)
#define CAN_F12R2_FB30_Msk (0x1U << CAN_F12R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F12R2_FB30     CAN_F12R2_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F12R2_FB31_Pos (31U)
#define CAN_F12R2_FB31_Msk (0x1U << CAN_F12R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F12R2_FB31     CAN_F12R2_FB31_Msk           /*!<Filter bit 31 */

/*******************  Bit definition for CAN_F13R2 register  ******************/
#define CAN_F13R2_FB0_Pos  (0U)
#define CAN_F13R2_FB0_Msk  (0x1U << CAN_F13R2_FB0_Pos) /*!< 0x00000001 */
#define CAN_F13R2_FB0      CAN_F13R2_FB0_Msk           /*!<Filter bit 0 */
#define CAN_F13R2_FB1_Pos  (1U)
#define CAN_F13R2_FB1_Msk  (0x1U << CAN_F13R2_FB1_Pos) /*!< 0x00000002 */
#define CAN_F13R2_FB1      CAN_F13R2_FB1_Msk           /*!<Filter bit 1 */
#define CAN_F13R2_FB2_Pos  (2U)
#define CAN_F13R2_FB2_Msk  (0x1U << CAN_F13R2_FB2_Pos) /*!< 0x00000004 */
#define CAN_F13R2_FB2      CAN_F13R2_FB2_Msk           /*!<Filter bit 2 */
#define CAN_F13R2_FB3_Pos  (3U)
#define CAN_F13R2_FB3_Msk  (0x1U << CAN_F13R2_FB3_Pos) /*!< 0x00000008 */
#define CAN_F13R2_FB3      CAN_F13R2_FB3_Msk           /*!<Filter bit 3 */
#define CAN_F13R2_FB4_Pos  (4U)
#define CAN_F13R2_FB4_Msk  (0x1U << CAN_F13R2_FB4_Pos) /*!< 0x00000010 */
#define CAN_F13R2_FB4      CAN_F13R2_FB4_Msk           /*!<Filter bit 4 */
#define CAN_F13R2_FB5_Pos  (5U)
#define CAN_F13R2_FB5_Msk  (0x1U << CAN_F13R2_FB5_Pos) /*!< 0x00000020 */
#define CAN_F13R2_FB5      CAN_F13R2_FB5_Msk           /*!<Filter bit 5 */
#define CAN_F13R2_FB6_Pos  (6U)
#define CAN_F13R2_FB6_Msk  (0x1U << CAN_F13R2_FB6_Pos) /*!< 0x00000040 */
#define CAN_F13R2_FB6      CAN_F13R2_FB6_Msk           /*!<Filter bit 6 */
#define CAN_F13R2_FB7_Pos  (7U)
#define CAN_F13R2_FB7_Msk  (0x1U << CAN_F13R2_FB7_Pos) /*!< 0x00000080 */
#define CAN_F13R2_FB7      CAN_F13R2_FB7_Msk           /*!<Filter bit 7 */
#define CAN_F13R2_FB8_Pos  (8U)
#define CAN_F13R2_FB8_Msk  (0x1U << CAN_F13R2_FB8_Pos) /*!< 0x00000100 */
#define CAN_F13R2_FB8      CAN_F13R2_FB8_Msk           /*!<Filter bit 8 */
#define CAN_F13R2_FB9_Pos  (9U)
#define CAN_F13R2_FB9_Msk  (0x1U << CAN_F13R2_FB9_Pos) /*!< 0x00000200 */
#define CAN_F13R2_FB9      CAN_F13R2_FB9_Msk           /*!<Filter bit 9 */
#define CAN_F13R2_FB10_Pos (10U)
#define CAN_F13R2_FB10_Msk (0x1U << CAN_F13R2_FB10_Pos) /*!< 0x00000400 */
#define CAN_F13R2_FB10     CAN_F13R2_FB10_Msk           /*!<Filter bit 10 */
#define CAN_F13R2_FB11_Pos (11U)
#define CAN_F13R2_FB11_Msk (0x1U << CAN_F13R2_FB11_Pos) /*!< 0x00000800 */
#define CAN_F13R2_FB11     CAN_F13R2_FB11_Msk           /*!<Filter bit 11 */
#define CAN_F13R2_FB12_Pos (12U)
#define CAN_F13R2_FB12_Msk (0x1U << CAN_F13R2_FB12_Pos) /*!< 0x00001000 */
#define CAN_F13R2_FB12     CAN_F13R2_FB12_Msk           /*!<Filter bit 12 */
#define CAN_F13R2_FB13_Pos (13U)
#define CAN_F13R2_FB13_Msk (0x1U << CAN_F13R2_FB13_Pos) /*!< 0x00002000 */
#define CAN_F13R2_FB13     CAN_F13R2_FB13_Msk           /*!<Filter bit 13 */
#define CAN_F13R2_FB14_Pos (14U)
#define CAN_F13R2_FB14_Msk (0x1U << CAN_F13R2_FB14_Pos) /*!< 0x00004000 */
#define CAN_F13R2_FB14     CAN_F13R2_FB14_Msk           /*!<Filter bit 14 */
#define CAN_F13R2_FB15_Pos (15U)
#define CAN_F13R2_FB15_Msk (0x1U << CAN_F13R2_FB15_Pos) /*!< 0x00008000 */
#define CAN_F13R2_FB15     CAN_F13R2_FB15_Msk           /*!<Filter bit 15 */
#define CAN_F13R2_FB16_Pos (16U)
#define CAN_F13R2_FB16_Msk (0x1U << CAN_F13R2_FB16_Pos) /*!< 0x00010000 */
#define CAN_F13R2_FB16     CAN_F13R2_FB16_Msk           /*!<Filter bit 16 */
#define CAN_F13R2_FB17_Pos (17U)
#define CAN_F13R2_FB17_Msk (0x1U << CAN_F13R2_FB17_Pos) /*!< 0x00020000 */
#define CAN_F13R2_FB17     CAN_F13R2_FB17_Msk           /*!<Filter bit 17 */
#define CAN_F13R2_FB18_Pos (18U)
#define CAN_F13R2_FB18_Msk (0x1U << CAN_F13R2_FB18_Pos) /*!< 0x00040000 */
#define CAN_F13R2_FB18     CAN_F13R2_FB18_Msk           /*!<Filter bit 18 */
#define CAN_F13R2_FB19_Pos (19U)
#define CAN_F13R2_FB19_Msk (0x1U << CAN_F13R2_FB19_Pos) /*!< 0x00080000 */
#define CAN_F13R2_FB19     CAN_F13R2_FB19_Msk           /*!<Filter bit 19 */
#define CAN_F13R2_FB20_Pos (20U)
#define CAN_F13R2_FB20_Msk (0x1U << CAN_F13R2_FB20_Pos) /*!< 0x00100000 */
#define CAN_F13R2_FB20     CAN_F13R2_FB20_Msk           /*!<Filter bit 20 */
#define CAN_F13R2_FB21_Pos (21U)
#define CAN_F13R2_FB21_Msk (0x1U << CAN_F13R2_FB21_Pos) /*!< 0x00200000 */
#define CAN_F13R2_FB21     CAN_F13R2_FB21_Msk           /*!<Filter bit 21 */
#define CAN_F13R2_FB22_Pos (22U)
#define CAN_F13R2_FB22_Msk (0x1U << CAN_F13R2_FB22_Pos) /*!< 0x00400000 */
#define CAN_F13R2_FB22     CAN_F13R2_FB22_Msk           /*!<Filter bit 22 */
#define CAN_F13R2_FB23_Pos (23U)
#define CAN_F13R2_FB23_Msk (0x1U << CAN_F13R2_FB23_Pos) /*!< 0x00800000 */
#define CAN_F13R2_FB23     CAN_F13R2_FB23_Msk           /*!<Filter bit 23 */
#define CAN_F13R2_FB24_Pos (24U)
#define CAN_F13R2_FB24_Msk (0x1U << CAN_F13R2_FB24_Pos) /*!< 0x01000000 */
#define CAN_F13R2_FB24     CAN_F13R2_FB24_Msk           /*!<Filter bit 24 */
#define CAN_F13R2_FB25_Pos (25U)
#define CAN_F13R2_FB25_Msk (0x1U << CAN_F13R2_FB25_Pos) /*!< 0x02000000 */
#define CAN_F13R2_FB25     CAN_F13R2_FB25_Msk           /*!<Filter bit 25 */
#define CAN_F13R2_FB26_Pos (26U)
#define CAN_F13R2_FB26_Msk (0x1U << CAN_F13R2_FB26_Pos) /*!< 0x04000000 */
#define CAN_F13R2_FB26     CAN_F13R2_FB26_Msk           /*!<Filter bit 26 */
#define CAN_F13R2_FB27_Pos (27U)
#define CAN_F13R2_FB27_Msk (0x1U << CAN_F13R2_FB27_Pos) /*!< 0x08000000 */
#define CAN_F13R2_FB27     CAN_F13R2_FB27_Msk           /*!<Filter bit 27 */
#define CAN_F13R2_FB28_Pos (28U)
#define CAN_F13R2_FB28_Msk (0x1U << CAN_F13R2_FB28_Pos) /*!< 0x10000000 */
#define CAN_F13R2_FB28     CAN_F13R2_FB28_Msk           /*!<Filter bit 28 */
#define CAN_F13R2_FB29_Pos (29U)
#define CAN_F13R2_FB29_Msk (0x1U << CAN_F13R2_FB29_Pos) /*!< 0x20000000 */
#define CAN_F13R2_FB29     CAN_F13R2_FB29_Msk           /*!<Filter bit 29 */
#define CAN_F13R2_FB30_Pos (30U)
#define CAN_F13R2_FB30_Msk (0x1U << CAN_F13R2_FB30_Pos) /*!< 0x40000000 */
#define CAN_F13R2_FB30     CAN_F13R2_FB30_Msk           /*!<Filter bit 30 */
#define CAN_F13R2_FB31_Pos (31U)
#define CAN_F13R2_FB31_Msk (0x1U << CAN_F13R2_FB31_Pos) /*!< 0x80000000 */
#define CAN_F13R2_FB31     CAN_F13R2_FB31_Msk           /*!<Filter bit 31 */

/******************************************************************************/
/*                                                                            */
/*                          CRC calculation unit                              */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for CRC_DR register  *********************/
#define CRC_DR_DR_Pos (0U)
#define CRC_DR_DR_Msk (0xFFFFFFFFU << CRC_DR_DR_Pos) /*!< 0xFFFFFFFF */
#define CRC_DR_DR     CRC_DR_DR_Msk                  /*!< Data register bits */


/*******************  Bit definition for CRC_IDR register  ********************/
#define CRC_IDR_IDR_Pos (0U)
#define CRC_IDR_IDR_Msk (0xFFU << CRC_IDR_IDR_Pos) /*!< 0x000000FF */
#define CRC_IDR_IDR     CRC_IDR_IDR_Msk            /*!< General-purpose 8-bit data register bits */


/********************  Bit definition for CRC_CR register  ********************/
#define CRC_CR_RESET_Pos (0U)
#define CRC_CR_RESET_Msk (0x1U << CRC_CR_RESET_Pos) /*!< 0x00000001 */
#define CRC_CR_RESET     CRC_CR_RESET_Msk           /*!< RESET bit */

/******************************************************************************/
/*                                                                            */
/*                            Crypto Processor                                */
/*                                                                            */
/******************************************************************************/
/******************* Bits definition for CRYP_CR register  ********************/
#define CRYP_CR_ALGODIR_Pos           (2U)
#define CRYP_CR_ALGODIR_Msk           (0x1U << CRYP_CR_ALGODIR_Pos) /*!< 0x00000004 */
#define CRYP_CR_ALGODIR               CRYP_CR_ALGODIR_Msk

#define CRYP_CR_ALGOMODE_Pos          (3U)
#define CRYP_CR_ALGOMODE_Msk          (0x10007U << CRYP_CR_ALGOMODE_Pos) /*!< 0x00080038 */
#define CRYP_CR_ALGOMODE              CRYP_CR_ALGOMODE_Msk
#define CRYP_CR_ALGOMODE_0            (0x00001U << CRYP_CR_ALGOMODE_Pos) /*!< 0x00000008 */
#define CRYP_CR_ALGOMODE_1            (0x00002U << CRYP_CR_ALGOMODE_Pos) /*!< 0x00000010 */
#define CRYP_CR_ALGOMODE_2            (0x00004U << CRYP_CR_ALGOMODE_Pos) /*!< 0x00000020 */
#define CRYP_CR_ALGOMODE_TDES_ECB     0x00000000U
#define CRYP_CR_ALGOMODE_TDES_CBC_Pos (3U)
#define CRYP_CR_ALGOMODE_TDES_CBC_Msk (0x1U << CRYP_CR_ALGOMODE_TDES_CBC_Pos) /*!< 0x00000008 */
#define CRYP_CR_ALGOMODE_TDES_CBC     CRYP_CR_ALGOMODE_TDES_CBC_Msk
#define CRYP_CR_ALGOMODE_DES_ECB_Pos  (4U)
#define CRYP_CR_ALGOMODE_DES_ECB_Msk  (0x1U << CRYP_CR_ALGOMODE_DES_ECB_Pos) /*!< 0x00000010 */
#define CRYP_CR_ALGOMODE_DES_ECB      CRYP_CR_ALGOMODE_DES_ECB_Msk
#define CRYP_CR_ALGOMODE_DES_CBC_Pos  (3U)
#define CRYP_CR_ALGOMODE_DES_CBC_Msk  (0x3U << CRYP_CR_ALGOMODE_DES_CBC_Pos) /*!< 0x00000018 */
#define CRYP_CR_ALGOMODE_DES_CBC      CRYP_CR_ALGOMODE_DES_CBC_Msk
#define CRYP_CR_ALGOMODE_AES_ECB_Pos  (5U)
#define CRYP_CR_ALGOMODE_AES_ECB_Msk  (0x1U << CRYP_CR_ALGOMODE_AES_ECB_Pos) /*!< 0x00000020 */
#define CRYP_CR_ALGOMODE_AES_ECB      CRYP_CR_ALGOMODE_AES_ECB_Msk
#define CRYP_CR_ALGOMODE_AES_CBC_Pos  (3U)
#define CRYP_CR_ALGOMODE_AES_CBC_Msk  (0x5U << CRYP_CR_ALGOMODE_AES_CBC_Pos) /*!< 0x00000028 */
#define CRYP_CR_ALGOMODE_AES_CBC      CRYP_CR_ALGOMODE_AES_CBC_Msk
#define CRYP_CR_ALGOMODE_AES_CTR_Pos  (4U)
#define CRYP_CR_ALGOMODE_AES_CTR_Msk  (0x3U << CRYP_CR_ALGOMODE_AES_CTR_Pos) /*!< 0x00000030 */
#define CRYP_CR_ALGOMODE_AES_CTR      CRYP_CR_ALGOMODE_AES_CTR_Msk
#define CRYP_CR_ALGOMODE_AES_KEY_Pos  (3U)
#define CRYP_CR_ALGOMODE_AES_KEY_Msk  (0x7U << CRYP_CR_ALGOMODE_AES_KEY_Pos) /*!< 0x00000038 */
#define CRYP_CR_ALGOMODE_AES_KEY      CRYP_CR_ALGOMODE_AES_KEY_Msk

#define CRYP_CR_DATATYPE_Pos          (6U)
#define CRYP_CR_DATATYPE_Msk          (0x3U << CRYP_CR_DATATYPE_Pos) /*!< 0x000000C0 */
#define CRYP_CR_DATATYPE              CRYP_CR_DATATYPE_Msk
#define CRYP_CR_DATATYPE_0            (0x1U << CRYP_CR_DATATYPE_Pos) /*!< 0x00000040 */
#define CRYP_CR_DATATYPE_1            (0x2U << CRYP_CR_DATATYPE_Pos) /*!< 0x00000080 */
#define CRYP_CR_KEYSIZE_Pos           (8U)
#define CRYP_CR_KEYSIZE_Msk           (0x3U << CRYP_CR_KEYSIZE_Pos) /*!< 0x00000300 */
#define CRYP_CR_KEYSIZE               CRYP_CR_KEYSIZE_Msk
#define CRYP_CR_KEYSIZE_0             (0x1U << CRYP_CR_KEYSIZE_Pos) /*!< 0x00000100 */
#define CRYP_CR_KEYSIZE_1             (0x2U << CRYP_CR_KEYSIZE_Pos) /*!< 0x00000200 */
#define CRYP_CR_FFLUSH_Pos            (14U)
#define CRYP_CR_FFLUSH_Msk            (0x1U << CRYP_CR_FFLUSH_Pos) /*!< 0x00004000 */
#define CRYP_CR_FFLUSH                CRYP_CR_FFLUSH_Msk
#define CRYP_CR_CRYPEN_Pos            (15U)
#define CRYP_CR_CRYPEN_Msk            (0x1U << CRYP_CR_CRYPEN_Pos) /*!< 0x00008000 */
#define CRYP_CR_CRYPEN                CRYP_CR_CRYPEN_Msk

#define CRYP_CR_GCM_CCMPH_Pos         (16U)
#define CRYP_CR_GCM_CCMPH_Msk         (0x3U << CRYP_CR_GCM_CCMPH_Pos) /*!< 0x00030000 */
#define CRYP_CR_GCM_CCMPH             CRYP_CR_GCM_CCMPH_Msk
#define CRYP_CR_GCM_CCMPH_0           (0x1U << CRYP_CR_GCM_CCMPH_Pos) /*!< 0x00010000 */
#define CRYP_CR_GCM_CCMPH_1           (0x2U << CRYP_CR_GCM_CCMPH_Pos) /*!< 0x00020000 */
#define CRYP_CR_ALGOMODE_3            0x00080000U

/****************** Bits definition for CRYP_SR register  *********************/
#define CRYP_SR_IFEM_Pos     (0U)
#define CRYP_SR_IFEM_Msk     (0x1U << CRYP_SR_IFEM_Pos) /*!< 0x00000001 */
#define CRYP_SR_IFEM         CRYP_SR_IFEM_Msk
#define CRYP_SR_IFNF_Pos     (1U)
#define CRYP_SR_IFNF_Msk     (0x1U << CRYP_SR_IFNF_Pos) /*!< 0x00000002 */
#define CRYP_SR_IFNF         CRYP_SR_IFNF_Msk
#define CRYP_SR_OFNE_Pos     (2U)
#define CRYP_SR_OFNE_Msk     (0x1U << CRYP_SR_OFNE_Pos) /*!< 0x00000004 */
#define CRYP_SR_OFNE         CRYP_SR_OFNE_Msk
#define CRYP_SR_OFFU_Pos     (3U)
#define CRYP_SR_OFFU_Msk     (0x1U << CRYP_SR_OFFU_Pos) /*!< 0x00000008 */
#define CRYP_SR_OFFU         CRYP_SR_OFFU_Msk
#define CRYP_SR_BUSY_Pos     (4U)
#define CRYP_SR_BUSY_Msk     (0x1U << CRYP_SR_BUSY_Pos) /*!< 0x00000010 */
#define CRYP_SR_BUSY         CRYP_SR_BUSY_Msk
/****************** Bits definition for CRYP_DMACR register  ******************/
#define CRYP_DMACR_DIEN_Pos  (0U)
#define CRYP_DMACR_DIEN_Msk  (0x1U << CRYP_DMACR_DIEN_Pos) /*!< 0x00000001 */
#define CRYP_DMACR_DIEN      CRYP_DMACR_DIEN_Msk
#define CRYP_DMACR_DOEN_Pos  (1U)
#define CRYP_DMACR_DOEN_Msk  (0x1U << CRYP_DMACR_DOEN_Pos) /*!< 0x00000002 */
#define CRYP_DMACR_DOEN      CRYP_DMACR_DOEN_Msk
/*****************  Bits definition for CRYP_IMSCR register  ******************/
#define CRYP_IMSCR_INIM_Pos  (0U)
#define CRYP_IMSCR_INIM_Msk  (0x1U << CRYP_IMSCR_INIM_Pos) /*!< 0x00000001 */
#define CRYP_IMSCR_INIM      CRYP_IMSCR_INIM_Msk
#define CRYP_IMSCR_OUTIM_Pos (1U)
#define CRYP_IMSCR_OUTIM_Msk (0x1U << CRYP_IMSCR_OUTIM_Pos) /*!< 0x00000002 */
#define CRYP_IMSCR_OUTIM     CRYP_IMSCR_OUTIM_Msk
/****************** Bits definition for CRYP_RISR register  *******************/
#define CRYP_RISR_OUTRIS_Pos (0U)
#define CRYP_RISR_OUTRIS_Msk (0x1U << CRYP_RISR_OUTRIS_Pos) /*!< 0x00000001 */
#define CRYP_RISR_OUTRIS     CRYP_RISR_OUTRIS_Msk
#define CRYP_RISR_INRIS_Pos  (1U)
#define CRYP_RISR_INRIS_Msk  (0x1U << CRYP_RISR_INRIS_Pos) /*!< 0x00000002 */
#define CRYP_RISR_INRIS      CRYP_RISR_INRIS_Msk
/****************** Bits definition for CRYP_MISR register  *******************/
#define CRYP_MISR_INMIS_Pos  (0U)
#define CRYP_MISR_INMIS_Msk  (0x1U << CRYP_MISR_INMIS_Pos) /*!< 0x00000001 */
#define CRYP_MISR_INMIS      CRYP_MISR_INMIS_Msk
#define CRYP_MISR_OUTMIS_Pos (1U)
#define CRYP_MISR_OUTMIS_Msk (0x1U << CRYP_MISR_OUTMIS_Pos) /*!< 0x00000002 */
#define CRYP_MISR_OUTMIS     CRYP_MISR_OUTMIS_Msk

/******************************************************************************/
/*                                                                            */
/*                      Digital to Analog Converter                           */
/*                                                                            */
/******************************************************************************/

/*
 * @brief Specific device feature definitions (not present on all devices in the STM32F4 serie)
 */
#define DAC_CHANNEL2_SUPPORT /*!< DAC feature available only on specific devices: availability of DAC channel 2 */
/********************  Bit definition for DAC_CR register  ********************/
#define DAC_CR_EN1_Pos       (0U)
#define DAC_CR_EN1_Msk       (0x1U << DAC_CR_EN1_Pos) /*!< 0x00000001 */
#define DAC_CR_EN1           DAC_CR_EN1_Msk           /*!<DAC channel1 enable */
#define DAC_CR_BOFF1_Pos     (1U)
#define DAC_CR_BOFF1_Msk     (0x1U << DAC_CR_BOFF1_Pos) /*!< 0x00000002 */
#define DAC_CR_BOFF1         DAC_CR_BOFF1_Msk           /*!<DAC channel1 output buffer disable */
#define DAC_CR_TEN1_Pos      (2U)
#define DAC_CR_TEN1_Msk      (0x1U << DAC_CR_TEN1_Pos) /*!< 0x00000004 */
#define DAC_CR_TEN1          DAC_CR_TEN1_Msk           /*!<DAC channel1 Trigger enable */

#define DAC_CR_TSEL1_Pos     (3U)
#define DAC_CR_TSEL1_Msk     (0x7U << DAC_CR_TSEL1_Pos) /*!< 0x00000038 */
#define DAC_CR_TSEL1         DAC_CR_TSEL1_Msk           /*!<TSEL1[2:0] (DAC channel1 Trigger selection) */
#define DAC_CR_TSEL1_0       (0x1U << DAC_CR_TSEL1_Pos) /*!< 0x00000008 */
#define DAC_CR_TSEL1_1       (0x2U << DAC_CR_TSEL1_Pos) /*!< 0x00000010 */
#define DAC_CR_TSEL1_2       (0x4U << DAC_CR_TSEL1_Pos) /*!< 0x00000020 */

#define DAC_CR_WAVE1_Pos     (6U)
#define DAC_CR_WAVE1_Msk     (0x3U << DAC_CR_WAVE1_Pos) /*!< 0x000000C0 */
#define DAC_CR_WAVE1         DAC_CR_WAVE1_Msk           /*!<WAVE1[1:0] (DAC channel1 noise/triangle wave generation enable) */
#define DAC_CR_WAVE1_0       (0x1U << DAC_CR_WAVE1_Pos) /*!< 0x00000040 */
#define DAC_CR_WAVE1_1       (0x2U << DAC_CR_WAVE1_Pos) /*!< 0x00000080 */

#define DAC_CR_MAMP1_Pos     (8U)
#define DAC_CR_MAMP1_Msk     (0xFU << DAC_CR_MAMP1_Pos) /*!< 0x00000F00 */
#define DAC_CR_MAMP1         DAC_CR_MAMP1_Msk           /*!<MAMP1[3:0] (DAC channel1 Mask/Amplitude selector) */
#define DAC_CR_MAMP1_0       (0x1U << DAC_CR_MAMP1_Pos) /*!< 0x00000100 */
#define DAC_CR_MAMP1_1       (0x2U << DAC_CR_MAMP1_Pos) /*!< 0x00000200 */
#define DAC_CR_MAMP1_2       (0x4U << DAC_CR_MAMP1_Pos) /*!< 0x00000400 */
#define DAC_CR_MAMP1_3       (0x8U << DAC_CR_MAMP1_Pos) /*!< 0x00000800 */

#define DAC_CR_DMAEN1_Pos    (12U)
#define DAC_CR_DMAEN1_Msk    (0x1U << DAC_CR_DMAEN1_Pos) /*!< 0x00001000 */
#define DAC_CR_DMAEN1        DAC_CR_DMAEN1_Msk           /*!<DAC channel1 DMA enable */
#define DAC_CR_DMAUDRIE1_Pos (13U)
#define DAC_CR_DMAUDRIE1_Msk (0x1U << DAC_CR_DMAUDRIE1_Pos) /*!< 0x00002000 */
#define DAC_CR_DMAUDRIE1     DAC_CR_DMAUDRIE1_Msk           /*!<DAC channel1 DMA underrun interrupt enable*/
#define DAC_CR_EN2_Pos       (16U)
#define DAC_CR_EN2_Msk       (0x1U << DAC_CR_EN2_Pos) /*!< 0x00010000 */
#define DAC_CR_EN2           DAC_CR_EN2_Msk           /*!<DAC channel2 enable */
#define DAC_CR_BOFF2_Pos     (17U)
#define DAC_CR_BOFF2_Msk     (0x1U << DAC_CR_BOFF2_Pos) /*!< 0x00020000 */
#define DAC_CR_BOFF2         DAC_CR_BOFF2_Msk           /*!<DAC channel2 output buffer disable */
#define DAC_CR_TEN2_Pos      (18U)
#define DAC_CR_TEN2_Msk      (0x1U << DAC_CR_TEN2_Pos) /*!< 0x00040000 */
#define DAC_CR_TEN2          DAC_CR_TEN2_Msk           /*!<DAC channel2 Trigger enable */

#define DAC_CR_TSEL2_Pos     (19U)
#define DAC_CR_TSEL2_Msk     (0x7U << DAC_CR_TSEL2_Pos) /*!< 0x00380000 */
#define DAC_CR_TSEL2         DAC_CR_TSEL2_Msk           /*!<TSEL2[2:0] (DAC channel2 Trigger selection) */
#define DAC_CR_TSEL2_0       (0x1U << DAC_CR_TSEL2_Pos) /*!< 0x00080000 */
#define DAC_CR_TSEL2_1       (0x2U << DAC_CR_TSEL2_Pos) /*!< 0x00100000 */
#define DAC_CR_TSEL2_2       (0x4U << DAC_CR_TSEL2_Pos) /*!< 0x00200000 */

#define DAC_CR_WAVE2_Pos     (22U)
#define DAC_CR_WAVE2_Msk     (0x3U << DAC_CR_WAVE2_Pos) /*!< 0x00C00000 */
#define DAC_CR_WAVE2         DAC_CR_WAVE2_Msk           /*!<WAVE2[1:0] (DAC channel2 noise/triangle wave generation enable) */
#define DAC_CR_WAVE2_0       (0x1U << DAC_CR_WAVE2_Pos) /*!< 0x00400000 */
#define DAC_CR_WAVE2_1       (0x2U << DAC_CR_WAVE2_Pos) /*!< 0x00800000 */

#define DAC_CR_MAMP2_Pos     (24U)
#define DAC_CR_MAMP2_Msk     (0xFU << DAC_CR_MAMP2_Pos) /*!< 0x0F000000 */
#define DAC_CR_MAMP2         DAC_CR_MAMP2_Msk           /*!<MAMP2[3:0] (DAC channel2 Mask/Amplitude selector) */
#define DAC_CR_MAMP2_0       (0x1U << DAC_CR_MAMP2_Pos) /*!< 0x01000000 */
#define DAC_CR_MAMP2_1       (0x2U << DAC_CR_MAMP2_Pos) /*!< 0x02000000 */
#define DAC_CR_MAMP2_2       (0x4U << DAC_CR_MAMP2_Pos) /*!< 0x04000000 */
#define DAC_CR_MAMP2_3       (0x8U << DAC_CR_MAMP2_Pos) /*!< 0x08000000 */

#define DAC_CR_DMAEN2_Pos    (28U)
#define DAC_CR_DMAEN2_Msk    (0x1U << DAC_CR_DMAEN2_Pos) /*!< 0x10000000 */
#define DAC_CR_DMAEN2        DAC_CR_DMAEN2_Msk           /*!<DAC channel2 DMA enabled */
#define DAC_CR_DMAUDRIE2_Pos (29U)
#define DAC_CR_DMAUDRIE2_Msk (0x1U << DAC_CR_DMAUDRIE2_Pos) /*!< 0x20000000 */
#define DAC_CR_DMAUDRIE2     DAC_CR_DMAUDRIE2_Msk           /*!<DAC channel2 DMA underrun interrupt enable*/

/*****************  Bit definition for DAC_SWTRIGR register  ******************/
#define DAC_SWTRIGR_SWTRIG1_Pos (0U)
#define DAC_SWTRIGR_SWTRIG1_Msk (0x1U << DAC_SWTRIGR_SWTRIG1_Pos) /*!< 0x00000001 */
#define DAC_SWTRIGR_SWTRIG1     DAC_SWTRIGR_SWTRIG1_Msk           /*!<DAC channel1 software trigger */
#define DAC_SWTRIGR_SWTRIG2_Pos (1U)
#define DAC_SWTRIGR_SWTRIG2_Msk (0x1U << DAC_SWTRIGR_SWTRIG2_Pos) /*!< 0x00000002 */
#define DAC_SWTRIGR_SWTRIG2     DAC_SWTRIGR_SWTRIG2_Msk           /*!<DAC channel2 software trigger */

/*****************  Bit definition for DAC_DHR12R1 register  ******************/
#define DAC_DHR12R1_DACC1DHR_Pos (0U)
#define DAC_DHR12R1_DACC1DHR_Msk (0xFFFU << DAC_DHR12R1_DACC1DHR_Pos) /*!< 0x00000FFF */
#define DAC_DHR12R1_DACC1DHR     DAC_DHR12R1_DACC1DHR_Msk             /*!<DAC channel1 12-bit Right aligned data */

/*****************  Bit definition for DAC_DHR12L1 register  ******************/
#define DAC_DHR12L1_DACC1DHR_Pos (4U)
#define DAC_DHR12L1_DACC1DHR_Msk (0xFFFU << DAC_DHR12L1_DACC1DHR_Pos) /*!< 0x0000FFF0 */
#define DAC_DHR12L1_DACC1DHR     DAC_DHR12L1_DACC1DHR_Msk             /*!<DAC channel1 12-bit Left aligned data */

/******************  Bit definition for DAC_DHR8R1 register  ******************/
#define DAC_DHR8R1_DACC1DHR_Pos (0U)
#define DAC_DHR8R1_DACC1DHR_Msk (0xFFU << DAC_DHR8R1_DACC1DHR_Pos) /*!< 0x000000FF */
#define DAC_DHR8R1_DACC1DHR     DAC_DHR8R1_DACC1DHR_Msk            /*!<DAC channel1 8-bit Right aligned data */

/*****************  Bit definition for DAC_DHR12R2 register  ******************/
#define DAC_DHR12R2_DACC2DHR_Pos (0U)
#define DAC_DHR12R2_DACC2DHR_Msk (0xFFFU << DAC_DHR12R2_DACC2DHR_Pos) /*!< 0x00000FFF */
#define DAC_DHR12R2_DACC2DHR     DAC_DHR12R2_DACC2DHR_Msk             /*!<DAC channel2 12-bit Right aligned data */

/*****************  Bit definition for DAC_DHR12L2 register  ******************/
#define DAC_DHR12L2_DACC2DHR_Pos (4U)
#define DAC_DHR12L2_DACC2DHR_Msk (0xFFFU << DAC_DHR12L2_DACC2DHR_Pos) /*!< 0x0000FFF0 */
#define DAC_DHR12L2_DACC2DHR     DAC_DHR12L2_DACC2DHR_Msk             /*!<DAC channel2 12-bit Left aligned data */

/******************  Bit definition for DAC_DHR8R2 register  ******************/
#define DAC_DHR8R2_DACC2DHR_Pos (0U)
#define DAC_DHR8R2_DACC2DHR_Msk (0xFFU << DAC_DHR8R2_DACC2DHR_Pos) /*!< 0x000000FF */
#define DAC_DHR8R2_DACC2DHR     DAC_DHR8R2_DACC2DHR_Msk            /*!<DAC channel2 8-bit Right aligned data */

/*****************  Bit definition for DAC_DHR12RD register  ******************/
#define DAC_DHR12RD_DACC1DHR_Pos (0U)
#define DAC_DHR12RD_DACC1DHR_Msk (0xFFFU << DAC_DHR12RD_DACC1DHR_Pos) /*!< 0x00000FFF */
#define DAC_DHR12RD_DACC1DHR     DAC_DHR12RD_DACC1DHR_Msk             /*!<DAC channel1 12-bit Right aligned data */
#define DAC_DHR12RD_DACC2DHR_Pos (16U)
#define DAC_DHR12RD_DACC2DHR_Msk (0xFFFU << DAC_DHR12RD_DACC2DHR_Pos) /*!< 0x0FFF0000 */
#define DAC_DHR12RD_DACC2DHR     DAC_DHR12RD_DACC2DHR_Msk             /*!<DAC channel2 12-bit Right aligned data */

/*****************  Bit definition for DAC_DHR12LD register  ******************/
#define DAC_DHR12LD_DACC1DHR_Pos (4U)
#define DAC_DHR12LD_DACC1DHR_Msk (0xFFFU << DAC_DHR12LD_DACC1DHR_Pos) /*!< 0x0000FFF0 */
#define DAC_DHR12LD_DACC1DHR     DAC_DHR12LD_DACC1DHR_Msk             /*!<DAC channel1 12-bit Left aligned data */
#define DAC_DHR12LD_DACC2DHR_Pos (20U)
#define DAC_DHR12LD_DACC2DHR_Msk (0xFFFU << DAC_DHR12LD_DACC2DHR_Pos) /*!< 0xFFF00000 */
#define DAC_DHR12LD_DACC2DHR     DAC_DHR12LD_DACC2DHR_Msk             /*!<DAC channel2 12-bit Left aligned data */

/******************  Bit definition for DAC_DHR8RD register  ******************/
#define DAC_DHR8RD_DACC1DHR_Pos (0U)
#define DAC_DHR8RD_DACC1DHR_Msk (0xFFU << DAC_DHR8RD_DACC1DHR_Pos) /*!< 0x000000FF */
#define DAC_DHR8RD_DACC1DHR     DAC_DHR8RD_DACC1DHR_Msk            /*!<DAC channel1 8-bit Right aligned data */
#define DAC_DHR8RD_DACC2DHR_Pos (8U)
#define DAC_DHR8RD_DACC2DHR_Msk (0xFFU << DAC_DHR8RD_DACC2DHR_Pos) /*!< 0x0000FF00 */
#define DAC_DHR8RD_DACC2DHR     DAC_DHR8RD_DACC2DHR_Msk            /*!<DAC channel2 8-bit Right aligned data */

/*******************  Bit definition for DAC_DOR1 register  *******************/
#define DAC_DOR1_DACC1DOR_Pos (0U)
#define DAC_DOR1_DACC1DOR_Msk (0xFFFU << DAC_DOR1_DACC1DOR_Pos) /*!< 0x00000FFF */
#define DAC_DOR1_DACC1DOR     DAC_DOR1_DACC1DOR_Msk             /*!<DAC channel1 data output */

/*******************  Bit definition for DAC_DOR2 register  *******************/
#define DAC_DOR2_DACC2DOR_Pos (0U)
#define DAC_DOR2_DACC2DOR_Msk (0xFFFU << DAC_DOR2_DACC2DOR_Pos) /*!< 0x00000FFF */
#define DAC_DOR2_DACC2DOR     DAC_DOR2_DACC2DOR_Msk             /*!<DAC channel2 data output */

/********************  Bit definition for DAC_SR register  ********************/
#define DAC_SR_DMAUDR1_Pos (13U)
#define DAC_SR_DMAUDR1_Msk (0x1U << DAC_SR_DMAUDR1_Pos) /*!< 0x00002000 */
#define DAC_SR_DMAUDR1     DAC_SR_DMAUDR1_Msk           /*!<DAC channel1 DMA underrun flag */
#define DAC_SR_DMAUDR2_Pos (29U)
#define DAC_SR_DMAUDR2_Msk (0x1U << DAC_SR_DMAUDR2_Pos) /*!< 0x20000000 */
#define DAC_SR_DMAUDR2     DAC_SR_DMAUDR2_Msk           /*!<DAC channel2 DMA underrun flag */


/******************************************************************************/
/*                                                                            */
/*                             DMA Controller                                 */
/*                                                                            */
/******************************************************************************/
/********************  Bits definition for DMA_SxCR register  *****************/
#define DMA_SxCR_CHSEL_Pos  (25U)
#define DMA_SxCR_CHSEL_Msk  (0x7U << DMA_SxCR_CHSEL_Pos) /*!< 0x0E000000 */
#define DMA_SxCR_CHSEL      DMA_SxCR_CHSEL_Msk
#define DMA_SxCR_CHSEL_0    0x02000000U
#define DMA_SxCR_CHSEL_1    0x04000000U
#define DMA_SxCR_CHSEL_2    0x08000000U
#define DMA_SxCR_MBURST_Pos (23U)
#define DMA_SxCR_MBURST_Msk (0x3U << DMA_SxCR_MBURST_Pos) /*!< 0x01800000 */
#define DMA_SxCR_MBURST     DMA_SxCR_MBURST_Msk
#define DMA_SxCR_MBURST_0   (0x1U << DMA_SxCR_MBURST_Pos) /*!< 0x00800000 */
#define DMA_SxCR_MBURST_1   (0x2U << DMA_SxCR_MBURST_Pos) /*!< 0x01000000 */
#define DMA_SxCR_PBURST_Pos (21U)
#define DMA_SxCR_PBURST_Msk (0x3U << DMA_SxCR_PBURST_Pos) /*!< 0x00600000 */
#define DMA_SxCR_PBURST     DMA_SxCR_PBURST_Msk
#define DMA_SxCR_PBURST_0   (0x1U << DMA_SxCR_PBURST_Pos) /*!< 0x00200000 */
#define DMA_SxCR_PBURST_1   (0x2U << DMA_SxCR_PBURST_Pos) /*!< 0x00400000 */
#define DMA_SxCR_CT_Pos     (19U)
#define DMA_SxCR_CT_Msk     (0x1U << DMA_SxCR_CT_Pos) /*!< 0x00080000 */
#define DMA_SxCR_CT         DMA_SxCR_CT_Msk
#define DMA_SxCR_DBM_Pos    (18U)
#define DMA_SxCR_DBM_Msk    (0x1U << DMA_SxCR_DBM_Pos) /*!< 0x00040000 */
#define DMA_SxCR_DBM        DMA_SxCR_DBM_Msk
#define DMA_SxCR_PL_Pos     (16U)
#define DMA_SxCR_PL_Msk     (0x3U << DMA_SxCR_PL_Pos) /*!< 0x00030000 */
#define DMA_SxCR_PL         DMA_SxCR_PL_Msk
#define DMA_SxCR_PL_0       (0x1U << DMA_SxCR_PL_Pos) /*!< 0x00010000 */
#define DMA_SxCR_PL_1       (0x2U << DMA_SxCR_PL_Pos) /*!< 0x00020000 */
#define DMA_SxCR_PINCOS_Pos (15U)
#define DMA_SxCR_PINCOS_Msk (0x1U << DMA_SxCR_PINCOS_Pos) /*!< 0x00008000 */
#define DMA_SxCR_PINCOS     DMA_SxCR_PINCOS_Msk
#define DMA_SxCR_MSIZE_Pos  (13U)
#define DMA_SxCR_MSIZE_Msk  (0x3U << DMA_SxCR_MSIZE_Pos) /*!< 0x00006000 */
#define DMA_SxCR_MSIZE      DMA_SxCR_MSIZE_Msk
#define DMA_SxCR_MSIZE_0    (0x1U << DMA_SxCR_MSIZE_Pos) /*!< 0x00002000 */
#define DMA_SxCR_MSIZE_1    (0x2U << DMA_SxCR_MSIZE_Pos) /*!< 0x00004000 */
#define DMA_SxCR_PSIZE_Pos  (11U)
#define DMA_SxCR_PSIZE_Msk  (0x3U << DMA_SxCR_PSIZE_Pos) /*!< 0x00001800 */
#define DMA_SxCR_PSIZE      DMA_SxCR_PSIZE_Msk
#define DMA_SxCR_PSIZE_0    (0x1U << DMA_SxCR_PSIZE_Pos) /*!< 0x00000800 */
#define DMA_SxCR_PSIZE_1    (0x2U << DMA_SxCR_PSIZE_Pos) /*!< 0x00001000 */
#define DMA_SxCR_MINC_Pos   (10U)
#define DMA_SxCR_MINC_Msk   (0x1U << DMA_SxCR_MINC_Pos) /*!< 0x00000400 */
#define DMA_SxCR_MINC       DMA_SxCR_MINC_Msk
#define DMA_SxCR_PINC_Pos   (9U)
#define DMA_SxCR_PINC_Msk   (0x1U << DMA_SxCR_PINC_Pos) /*!< 0x00000200 */
#define DMA_SxCR_PINC       DMA_SxCR_PINC_Msk
#define DMA_SxCR_CIRC_Pos   (8U)
#define DMA_SxCR_CIRC_Msk   (0x1U << DMA_SxCR_CIRC_Pos) /*!< 0x00000100 */
#define DMA_SxCR_CIRC       DMA_SxCR_CIRC_Msk
#define DMA_SxCR_DIR_Pos    (6U)
#define DMA_SxCR_DIR_Msk    (0x3U << DMA_SxCR_DIR_Pos) /*!< 0x000000C0 */
#define DMA_SxCR_DIR        DMA_SxCR_DIR_Msk
#define DMA_SxCR_DIR_0      (0x1U << DMA_SxCR_DIR_Pos) /*!< 0x00000040 */
#define DMA_SxCR_DIR_1      (0x2U << DMA_SxCR_DIR_Pos) /*!< 0x00000080 */
#define DMA_SxCR_PFCTRL_Pos (5U)
#define DMA_SxCR_PFCTRL_Msk (0x1U << DMA_SxCR_PFCTRL_Pos) /*!< 0x00000020 */
#define DMA_SxCR_PFCTRL     DMA_SxCR_PFCTRL_Msk
#define DMA_SxCR_TCIE_Pos   (4U)
#define DMA_SxCR_TCIE_Msk   (0x1U << DMA_SxCR_TCIE_Pos) /*!< 0x00000010 */
#define DMA_SxCR_TCIE       DMA_SxCR_TCIE_Msk
#define DMA_SxCR_HTIE_Pos   (3U)
#define DMA_SxCR_HTIE_Msk   (0x1U << DMA_SxCR_HTIE_Pos) /*!< 0x00000008 */
#define DMA_SxCR_HTIE       DMA_SxCR_HTIE_Msk
#define DMA_SxCR_TEIE_Pos   (2U)
#define DMA_SxCR_TEIE_Msk   (0x1U << DMA_SxCR_TEIE_Pos) /*!< 0x00000004 */
#define DMA_SxCR_TEIE       DMA_SxCR_TEIE_Msk
#define DMA_SxCR_DMEIE_Pos  (1U)
#define DMA_SxCR_DMEIE_Msk  (0x1U << DMA_SxCR_DMEIE_Pos) /*!< 0x00000002 */
#define DMA_SxCR_DMEIE      DMA_SxCR_DMEIE_Msk
#define DMA_SxCR_EN_Pos     (0U)
#define DMA_SxCR_EN_Msk     (0x1U << DMA_SxCR_EN_Pos) /*!< 0x00000001 */
#define DMA_SxCR_EN         DMA_SxCR_EN_Msk

/* Legacy defines */
#define DMA_SxCR_ACK_Pos (20U)
#define DMA_SxCR_ACK_Msk (0x1U << DMA_SxCR_ACK_Pos) /*!< 0x00100000 */
#define DMA_SxCR_ACK     DMA_SxCR_ACK_Msk

/********************  Bits definition for DMA_SxCNDTR register  **************/
#define DMA_SxNDT_Pos (0U)
#define DMA_SxNDT_Msk (0xFFFFU << DMA_SxNDT_Pos) /*!< 0x0000FFFF */
#define DMA_SxNDT     DMA_SxNDT_Msk
#define DMA_SxNDT_0   (0x0001U << DMA_SxNDT_Pos) /*!< 0x00000001 */
#define DMA_SxNDT_1   (0x0002U << DMA_SxNDT_Pos) /*!< 0x00000002 */
#define DMA_SxNDT_2   (0x0004U << DMA_SxNDT_Pos) /*!< 0x00000004 */
#define DMA_SxNDT_3   (0x0008U << DMA_SxNDT_Pos) /*!< 0x00000008 */
#define DMA_SxNDT_4   (0x0010U << DMA_SxNDT_Pos) /*!< 0x00000010 */
#define DMA_SxNDT_5   (0x0020U << DMA_SxNDT_Pos) /*!< 0x00000020 */
#define DMA_SxNDT_6   (0x0040U << DMA_SxNDT_Pos) /*!< 0x00000040 */
#define DMA_SxNDT_7   (0x0080U << DMA_SxNDT_Pos) /*!< 0x00000080 */
#define DMA_SxNDT_8   (0x0100U << DMA_SxNDT_Pos) /*!< 0x00000100 */
#define DMA_SxNDT_9   (0x0200U << DMA_SxNDT_Pos) /*!< 0x00000200 */
#define DMA_SxNDT_10  (0x0400U << DMA_SxNDT_Pos) /*!< 0x00000400 */
#define DMA_SxNDT_11  (0x0800U << DMA_SxNDT_Pos) /*!< 0x00000800 */
#define DMA_SxNDT_12  (0x1000U << DMA_SxNDT_Pos) /*!< 0x00001000 */
#define DMA_SxNDT_13  (0x2000U << DMA_SxNDT_Pos) /*!< 0x00002000 */
#define DMA_SxNDT_14  (0x4000U << DMA_SxNDT_Pos) /*!< 0x00004000 */
#define DMA_SxNDT_15  (0x8000U << DMA_SxNDT_Pos) /*!< 0x00008000 */

/********************  Bits definition for DMA_SxFCR register  ****************/
#define DMA_SxFCR_FEIE_Pos  (7U)
#define DMA_SxFCR_FEIE_Msk  (0x1U << DMA_SxFCR_FEIE_Pos) /*!< 0x00000080 */
#define DMA_SxFCR_FEIE      DMA_SxFCR_FEIE_Msk
#define DMA_SxFCR_FS_Pos    (3U)
#define DMA_SxFCR_FS_Msk    (0x7U << DMA_SxFCR_FS_Pos) /*!< 0x00000038 */
#define DMA_SxFCR_FS        DMA_SxFCR_FS_Msk
#define DMA_SxFCR_FS_0      (0x1U << DMA_SxFCR_FS_Pos) /*!< 0x00000008 */
#define DMA_SxFCR_FS_1      (0x2U << DMA_SxFCR_FS_Pos) /*!< 0x00000010 */
#define DMA_SxFCR_FS_2      (0x4U << DMA_SxFCR_FS_Pos) /*!< 0x00000020 */
#define DMA_SxFCR_DMDIS_Pos (2U)
#define DMA_SxFCR_DMDIS_Msk (0x1U << DMA_SxFCR_DMDIS_Pos) /*!< 0x00000004 */
#define DMA_SxFCR_DMDIS     DMA_SxFCR_DMDIS_Msk
#define DMA_SxFCR_FTH_Pos   (0U)
#define DMA_SxFCR_FTH_Msk   (0x3U << DMA_SxFCR_FTH_Pos) /*!< 0x00000003 */
#define DMA_SxFCR_FTH       DMA_SxFCR_FTH_Msk
#define DMA_SxFCR_FTH_0     (0x1U << DMA_SxFCR_FTH_Pos) /*!< 0x00000001 */
#define DMA_SxFCR_FTH_1     (0x2U << DMA_SxFCR_FTH_Pos) /*!< 0x00000002 */

/********************  Bits definition for DMA_LISR register  *****************/
#define DMA_LISR_TCIF3_Pos  (27U)
#define DMA_LISR_TCIF3_Msk  (0x1U << DMA_LISR_TCIF3_Pos) /*!< 0x08000000 */
#define DMA_LISR_TCIF3      DMA_LISR_TCIF3_Msk
#define DMA_LISR_HTIF3_Pos  (26U)
#define DMA_LISR_HTIF3_Msk  (0x1U << DMA_LISR_HTIF3_Pos) /*!< 0x04000000 */
#define DMA_LISR_HTIF3      DMA_LISR_HTIF3_Msk
#define DMA_LISR_TEIF3_Pos  (25U)
#define DMA_LISR_TEIF3_Msk  (0x1U << DMA_LISR_TEIF3_Pos) /*!< 0x02000000 */
#define DMA_LISR_TEIF3      DMA_LISR_TEIF3_Msk
#define DMA_LISR_DMEIF3_Pos (24U)
#define DMA_LISR_DMEIF3_Msk (0x1U << DMA_LISR_DMEIF3_Pos) /*!< 0x01000000 */
#define DMA_LISR_DMEIF3     DMA_LISR_DMEIF3_Msk
#define DMA_LISR_FEIF3_Pos  (22U)
#define DMA_LISR_FEIF3_Msk  (0x1U << DMA_LISR_FEIF3_Pos) /*!< 0x00400000 */
#define DMA_LISR_FEIF3      DMA_LISR_FEIF3_Msk
#define DMA_LISR_TCIF2_Pos  (21U)
#define DMA_LISR_TCIF2_Msk  (0x1U << DMA_LISR_TCIF2_Pos) /*!< 0x00200000 */
#define DMA_LISR_TCIF2      DMA_LISR_TCIF2_Msk
#define DMA_LISR_HTIF2_Pos  (20U)
#define DMA_LISR_HTIF2_Msk  (0x1U << DMA_LISR_HTIF2_Pos) /*!< 0x00100000 */
#define DMA_LISR_HTIF2      DMA_LISR_HTIF2_Msk
#define DMA_LISR_TEIF2_Pos  (19U)
#define DMA_LISR_TEIF2_Msk  (0x1U << DMA_LISR_TEIF2_Pos) /*!< 0x00080000 */
#define DMA_LISR_TEIF2      DMA_LISR_TEIF2_Msk
#define DMA_LISR_DMEIF2_Pos (18U)
#define DMA_LISR_DMEIF2_Msk (0x1U << DMA_LISR_DMEIF2_Pos) /*!< 0x00040000 */
#define DMA_LISR_DMEIF2     DMA_LISR_DMEIF2_Msk
#define DMA_LISR_FEIF2_Pos  (16U)
#define DMA_LISR_FEIF2_Msk  (0x1U << DMA_LISR_FEIF2_Pos) /*!< 0x00010000 */
#define DMA_LISR_FEIF2      DMA_LISR_FEIF2_Msk
#define DMA_LISR_TCIF1_Pos  (11U)
#define DMA_LISR_TCIF1_Msk  (0x1U << DMA_LISR_TCIF1_Pos) /*!< 0x00000800 */
#define DMA_LISR_TCIF1      DMA_LISR_TCIF1_Msk
#define DMA_LISR_HTIF1_Pos  (10U)
#define DMA_LISR_HTIF1_Msk  (0x1U << DMA_LISR_HTIF1_Pos) /*!< 0x00000400 */
#define DMA_LISR_HTIF1      DMA_LISR_HTIF1_Msk
#define DMA_LISR_TEIF1_Pos  (9U)
#define DMA_LISR_TEIF1_Msk  (0x1U << DMA_LISR_TEIF1_Pos) /*!< 0x00000200 */
#define DMA_LISR_TEIF1      DMA_LISR_TEIF1_Msk
#define DMA_LISR_DMEIF1_Pos (8U)
#define DMA_LISR_DMEIF1_Msk (0x1U << DMA_LISR_DMEIF1_Pos) /*!< 0x00000100 */
#define DMA_LISR_DMEIF1     DMA_LISR_DMEIF1_Msk
#define DMA_LISR_FEIF1_Pos  (6U)
#define DMA_LISR_FEIF1_Msk  (0x1U << DMA_LISR_FEIF1_Pos) /*!< 0x00000040 */
#define DMA_LISR_FEIF1      DMA_LISR_FEIF1_Msk
#define DMA_LISR_TCIF0_Pos  (5U)
#define DMA_LISR_TCIF0_Msk  (0x1U << DMA_LISR_TCIF0_Pos) /*!< 0x00000020 */
#define DMA_LISR_TCIF0      DMA_LISR_TCIF0_Msk
#define DMA_LISR_HTIF0_Pos  (4U)
#define DMA_LISR_HTIF0_Msk  (0x1U << DMA_LISR_HTIF0_Pos) /*!< 0x00000010 */
#define DMA_LISR_HTIF0      DMA_LISR_HTIF0_Msk
#define DMA_LISR_TEIF0_Pos  (3U)
#define DMA_LISR_TEIF0_Msk  (0x1U << DMA_LISR_TEIF0_Pos) /*!< 0x00000008 */
#define DMA_LISR_TEIF0      DMA_LISR_TEIF0_Msk
#define DMA_LISR_DMEIF0_Pos (2U)
#define DMA_LISR_DMEIF0_Msk (0x1U << DMA_LISR_DMEIF0_Pos) /*!< 0x00000004 */
#define DMA_LISR_DMEIF0     DMA_LISR_DMEIF0_Msk
#define DMA_LISR_FEIF0_Pos  (0U)
#define DMA_LISR_FEIF0_Msk  (0x1U << DMA_LISR_FEIF0_Pos) /*!< 0x00000001 */
#define DMA_LISR_FEIF0      DMA_LISR_FEIF0_Msk

/********************  Bits definition for DMA_HISR register  *****************/
#define DMA_HISR_TCIF7_Pos  (27U)
#define DMA_HISR_TCIF7_Msk  (0x1U << DMA_HISR_TCIF7_Pos) /*!< 0x08000000 */
#define DMA_HISR_TCIF7      DMA_HISR_TCIF7_Msk
#define DMA_HISR_HTIF7_Pos  (26U)
#define DMA_HISR_HTIF7_Msk  (0x1U << DMA_HISR_HTIF7_Pos) /*!< 0x04000000 */
#define DMA_HISR_HTIF7      DMA_HISR_HTIF7_Msk
#define DMA_HISR_TEIF7_Pos  (25U)
#define DMA_HISR_TEIF7_Msk  (0x1U << DMA_HISR_TEIF7_Pos) /*!< 0x02000000 */
#define DMA_HISR_TEIF7      DMA_HISR_TEIF7_Msk
#define DMA_HISR_DMEIF7_Pos (24U)
#define DMA_HISR_DMEIF7_Msk (0x1U << DMA_HISR_DMEIF7_Pos) /*!< 0x01000000 */
#define DMA_HISR_DMEIF7     DMA_HISR_DMEIF7_Msk
#define DMA_HISR_FEIF7_Pos  (22U)
#define DMA_HISR_FEIF7_Msk  (0x1U << DMA_HISR_FEIF7_Pos) /*!< 0x00400000 */
#define DMA_HISR_FEIF7      DMA_HISR_FEIF7_Msk
#define DMA_HISR_TCIF6_Pos  (21U)
#define DMA_HISR_TCIF6_Msk  (0x1U << DMA_HISR_TCIF6_Pos) /*!< 0x00200000 */
#define DMA_HISR_TCIF6      DMA_HISR_TCIF6_Msk
#define DMA_HISR_HTIF6_Pos  (20U)
#define DMA_HISR_HTIF6_Msk  (0x1U << DMA_HISR_HTIF6_Pos) /*!< 0x00100000 */
#define DMA_HISR_HTIF6      DMA_HISR_HTIF6_Msk
#define DMA_HISR_TEIF6_Pos  (19U)
#define DMA_HISR_TEIF6_Msk  (0x1U << DMA_HISR_TEIF6_Pos) /*!< 0x00080000 */
#define DMA_HISR_TEIF6      DMA_HISR_TEIF6_Msk
#define DMA_HISR_DMEIF6_Pos (18U)
#define DMA_HISR_DMEIF6_Msk (0x1U << DMA_HISR_DMEIF6_Pos) /*!< 0x00040000 */
#define DMA_HISR_DMEIF6     DMA_HISR_DMEIF6_Msk
#define DMA_HISR_FEIF6_Pos  (16U)
#define DMA_HISR_FEIF6_Msk  (0x1U << DMA_HISR_FEIF6_Pos) /*!< 0x00010000 */
#define DMA_HISR_FEIF6      DMA_HISR_FEIF6_Msk
#define DMA_HISR_TCIF5_Pos  (11U)
#define DMA_HISR_TCIF5_Msk  (0x1U << DMA_HISR_TCIF5_Pos) /*!< 0x00000800 */
#define DMA_HISR_TCIF5      DMA_HISR_TCIF5_Msk
#define DMA_HISR_HTIF5_Pos  (10U)
#define DMA_HISR_HTIF5_Msk  (0x1U << DMA_HISR_HTIF5_Pos) /*!< 0x00000400 */
#define DMA_HISR_HTIF5      DMA_HISR_HTIF5_Msk
#define DMA_HISR_TEIF5_Pos  (9U)
#define DMA_HISR_TEIF5_Msk  (0x1U << DMA_HISR_TEIF5_Pos) /*!< 0x00000200 */
#define DMA_HISR_TEIF5      DMA_HISR_TEIF5_Msk
#define DMA_HISR_DMEIF5_Pos (8U)
#define DMA_HISR_DMEIF5_Msk (0x1U << DMA_HISR_DMEIF5_Pos) /*!< 0x00000100 */
#define DMA_HISR_DMEIF5     DMA_HISR_DMEIF5_Msk
#define DMA_HISR_FEIF5_Pos  (6U)
#define DMA_HISR_FEIF5_Msk  (0x1U << DMA_HISR_FEIF5_Pos) /*!< 0x00000040 */
#define DMA_HISR_FEIF5      DMA_HISR_FEIF5_Msk
#define DMA_HISR_TCIF4_Pos  (5U)
#define DMA_HISR_TCIF4_Msk  (0x1U << DMA_HISR_TCIF4_Pos) /*!< 0x00000020 */
#define DMA_HISR_TCIF4      DMA_HISR_TCIF4_Msk
#define DMA_HISR_HTIF4_Pos  (4U)
#define DMA_HISR_HTIF4_Msk  (0x1U << DMA_HISR_HTIF4_Pos) /*!< 0x00000010 */
#define DMA_HISR_HTIF4      DMA_HISR_HTIF4_Msk
#define DMA_HISR_TEIF4_Pos  (3U)
#define DMA_HISR_TEIF4_Msk  (0x1U << DMA_HISR_TEIF4_Pos) /*!< 0x00000008 */
#define DMA_HISR_TEIF4      DMA_HISR_TEIF4_Msk
#define DMA_HISR_DMEIF4_Pos (2U)
#define DMA_HISR_DMEIF4_Msk (0x1U << DMA_HISR_DMEIF4_Pos) /*!< 0x00000004 */
#define DMA_HISR_DMEIF4     DMA_HISR_DMEIF4_Msk
#define DMA_HISR_FEIF4_Pos  (0U)
#define DMA_HISR_FEIF4_Msk  (0x1U << DMA_HISR_FEIF4_Pos) /*!< 0x00000001 */
#define DMA_HISR_FEIF4      DMA_HISR_FEIF4_Msk

/********************  Bits definition for DMA_LIFCR register  ****************/
#define DMA_LIFCR_CTCIF3_Pos  (27U)
#define DMA_LIFCR_CTCIF3_Msk  (0x1U << DMA_LIFCR_CTCIF3_Pos) /*!< 0x08000000 */
#define DMA_LIFCR_CTCIF3      DMA_LIFCR_CTCIF3_Msk
#define DMA_LIFCR_CHTIF3_Pos  (26U)
#define DMA_LIFCR_CHTIF3_Msk  (0x1U << DMA_LIFCR_CHTIF3_Pos) /*!< 0x04000000 */
#define DMA_LIFCR_CHTIF3      DMA_LIFCR_CHTIF3_Msk
#define DMA_LIFCR_CTEIF3_Pos  (25U)
#define DMA_LIFCR_CTEIF3_Msk  (0x1U << DMA_LIFCR_CTEIF3_Pos) /*!< 0x02000000 */
#define DMA_LIFCR_CTEIF3      DMA_LIFCR_CTEIF3_Msk
#define DMA_LIFCR_CDMEIF3_Pos (24U)
#define DMA_LIFCR_CDMEIF3_Msk (0x1U << DMA_LIFCR_CDMEIF3_Pos) /*!< 0x01000000 */
#define DMA_LIFCR_CDMEIF3     DMA_LIFCR_CDMEIF3_Msk
#define DMA_LIFCR_CFEIF3_Pos  (22U)
#define DMA_LIFCR_CFEIF3_Msk  (0x1U << DMA_LIFCR_CFEIF3_Pos) /*!< 0x00400000 */
#define DMA_LIFCR_CFEIF3      DMA_LIFCR_CFEIF3_Msk
#define DMA_LIFCR_CTCIF2_Pos  (21U)
#define DMA_LIFCR_CTCIF2_Msk  (0x1U << DMA_LIFCR_CTCIF2_Pos) /*!< 0x00200000 */
#define DMA_LIFCR_CTCIF2      DMA_LIFCR_CTCIF2_Msk
#define DMA_LIFCR_CHTIF2_Pos  (20U)
#define DMA_LIFCR_CHTIF2_Msk  (0x1U << DMA_LIFCR_CHTIF2_Pos) /*!< 0x00100000 */
#define DMA_LIFCR_CHTIF2      DMA_LIFCR_CHTIF2_Msk
#define DMA_LIFCR_CTEIF2_Pos  (19U)
#define DMA_LIFCR_CTEIF2_Msk  (0x1U << DMA_LIFCR_CTEIF2_Pos) /*!< 0x00080000 */
#define DMA_LIFCR_CTEIF2      DMA_LIFCR_CTEIF2_Msk
#define DMA_LIFCR_CDMEIF2_Pos (18U)
#define DMA_LIFCR_CDMEIF2_Msk (0x1U << DMA_LIFCR_CDMEIF2_Pos) /*!< 0x00040000 */
#define DMA_LIFCR_CDMEIF2     DMA_LIFCR_CDMEIF2_Msk
#define DMA_LIFCR_CFEIF2_Pos  (16U)
#define DMA_LIFCR_CFEIF2_Msk  (0x1U << DMA_LIFCR_CFEIF2_Pos) /*!< 0x00010000 */
#define DMA_LIFCR_CFEIF2      DMA_LIFCR_CFEIF2_Msk
#define DMA_LIFCR_CTCIF1_Pos  (11U)
#define DMA_LIFCR_CTCIF1_Msk  (0x1U << DMA_LIFCR_CTCIF1_Pos) /*!< 0x00000800 */
#define DMA_LIFCR_CTCIF1      DMA_LIFCR_CTCIF1_Msk
#define DMA_LIFCR_CHTIF1_Pos  (10U)
#define DMA_LIFCR_CHTIF1_Msk  (0x1U << DMA_LIFCR_CHTIF1_Pos) /*!< 0x00000400 */
#define DMA_LIFCR_CHTIF1      DMA_LIFCR_CHTIF1_Msk
#define DMA_LIFCR_CTEIF1_Pos  (9U)
#define DMA_LIFCR_CTEIF1_Msk  (0x1U << DMA_LIFCR_CTEIF1_Pos) /*!< 0x00000200 */
#define DMA_LIFCR_CTEIF1      DMA_LIFCR_CTEIF1_Msk
#define DMA_LIFCR_CDMEIF1_Pos (8U)
#define DMA_LIFCR_CDMEIF1_Msk (0x1U << DMA_LIFCR_CDMEIF1_Pos) /*!< 0x00000100 */
#define DMA_LIFCR_CDMEIF1     DMA_LIFCR_CDMEIF1_Msk
#define DMA_LIFCR_CFEIF1_Pos  (6U)
#define DMA_LIFCR_CFEIF1_Msk  (0x1U << DMA_LIFCR_CFEIF1_Pos) /*!< 0x00000040 */
#define DMA_LIFCR_CFEIF1      DMA_LIFCR_CFEIF1_Msk
#define DMA_LIFCR_CTCIF0_Pos  (5U)
#define DMA_LIFCR_CTCIF0_Msk  (0x1U << DMA_LIFCR_CTCIF0_Pos) /*!< 0x00000020 */
#define DMA_LIFCR_CTCIF0      DMA_LIFCR_CTCIF0_Msk
#define DMA_LIFCR_CHTIF0_Pos  (4U)
#define DMA_LIFCR_CHTIF0_Msk  (0x1U << DMA_LIFCR_CHTIF0_Pos) /*!< 0x00000010 */
#define DMA_LIFCR_CHTIF0      DMA_LIFCR_CHTIF0_Msk
#define DMA_LIFCR_CTEIF0_Pos  (3U)
#define DMA_LIFCR_CTEIF0_Msk  (0x1U << DMA_LIFCR_CTEIF0_Pos) /*!< 0x00000008 */
#define DMA_LIFCR_CTEIF0      DMA_LIFCR_CTEIF0_Msk
#define DMA_LIFCR_CDMEIF0_Pos (2U)
#define DMA_LIFCR_CDMEIF0_Msk (0x1U << DMA_LIFCR_CDMEIF0_Pos) /*!< 0x00000004 */
#define DMA_LIFCR_CDMEIF0     DMA_LIFCR_CDMEIF0_Msk
#define DMA_LIFCR_CFEIF0_Pos  (0U)
#define DMA_LIFCR_CFEIF0_Msk  (0x1U << DMA_LIFCR_CFEIF0_Pos) /*!< 0x00000001 */
#define DMA_LIFCR_CFEIF0      DMA_LIFCR_CFEIF0_Msk

/********************  Bits definition for DMA_HIFCR  register  ****************/
#define DMA_HIFCR_CTCIF7_Pos  (27U)
#define DMA_HIFCR_CTCIF7_Msk  (0x1U << DMA_HIFCR_CTCIF7_Pos) /*!< 0x08000000 */
#define DMA_HIFCR_CTCIF7      DMA_HIFCR_CTCIF7_Msk
#define DMA_HIFCR_CHTIF7_Pos  (26U)
#define DMA_HIFCR_CHTIF7_Msk  (0x1U << DMA_HIFCR_CHTIF7_Pos) /*!< 0x04000000 */
#define DMA_HIFCR_CHTIF7      DMA_HIFCR_CHTIF7_Msk
#define DMA_HIFCR_CTEIF7_Pos  (25U)
#define DMA_HIFCR_CTEIF7_Msk  (0x1U << DMA_HIFCR_CTEIF7_Pos) /*!< 0x02000000 */
#define DMA_HIFCR_CTEIF7      DMA_HIFCR_CTEIF7_Msk
#define DMA_HIFCR_CDMEIF7_Pos (24U)
#define DMA_HIFCR_CDMEIF7_Msk (0x1U << DMA_HIFCR_CDMEIF7_Pos) /*!< 0x01000000 */
#define DMA_HIFCR_CDMEIF7     DMA_HIFCR_CDMEIF7_Msk
#define DMA_HIFCR_CFEIF7_Pos  (22U)
#define DMA_HIFCR_CFEIF7_Msk  (0x1U << DMA_HIFCR_CFEIF7_Pos) /*!< 0x00400000 */
#define DMA_HIFCR_CFEIF7      DMA_HIFCR_CFEIF7_Msk
#define DMA_HIFCR_CTCIF6_Pos  (21U)
#define DMA_HIFCR_CTCIF6_Msk  (0x1U << DMA_HIFCR_CTCIF6_Pos) /*!< 0x00200000 */
#define DMA_HIFCR_CTCIF6      DMA_HIFCR_CTCIF6_Msk
#define DMA_HIFCR_CHTIF6_Pos  (20U)
#define DMA_HIFCR_CHTIF6_Msk  (0x1U << DMA_HIFCR_CHTIF6_Pos) /*!< 0x00100000 */
#define DMA_HIFCR_CHTIF6      DMA_HIFCR_CHTIF6_Msk
#define DMA_HIFCR_CTEIF6_Pos  (19U)
#define DMA_HIFCR_CTEIF6_Msk  (0x1U << DMA_HIFCR_CTEIF6_Pos) /*!< 0x00080000 */
#define DMA_HIFCR_CTEIF6      DMA_HIFCR_CTEIF6_Msk
#define DMA_HIFCR_CDMEIF6_Pos (18U)
#define DMA_HIFCR_CDMEIF6_Msk (0x1U << DMA_HIFCR_CDMEIF6_Pos) /*!< 0x00040000 */
#define DMA_HIFCR_CDMEIF6     DMA_HIFCR_CDMEIF6_Msk
#define DMA_HIFCR_CFEIF6_Pos  (16U)
#define DMA_HIFCR_CFEIF6_Msk  (0x1U << DMA_HIFCR_CFEIF6_Pos) /*!< 0x00010000 */
#define DMA_HIFCR_CFEIF6      DMA_HIFCR_CFEIF6_Msk
#define DMA_HIFCR_CTCIF5_Pos  (11U)
#define DMA_HIFCR_CTCIF5_Msk  (0x1U << DMA_HIFCR_CTCIF5_Pos) /*!< 0x00000800 */
#define DMA_HIFCR_CTCIF5      DMA_HIFCR_CTCIF5_Msk
#define DMA_HIFCR_CHTIF5_Pos  (10U)
#define DMA_HIFCR_CHTIF5_Msk  (0x1U << DMA_HIFCR_CHTIF5_Pos) /*!< 0x00000400 */
#define DMA_HIFCR_CHTIF5      DMA_HIFCR_CHTIF5_Msk
#define DMA_HIFCR_CTEIF5_Pos  (9U)
#define DMA_HIFCR_CTEIF5_Msk  (0x1U << DMA_HIFCR_CTEIF5_Pos) /*!< 0x00000200 */
#define DMA_HIFCR_CTEIF5      DMA_HIFCR_CTEIF5_Msk
#define DMA_HIFCR_CDMEIF5_Pos (8U)
#define DMA_HIFCR_CDMEIF5_Msk (0x1U << DMA_HIFCR_CDMEIF5_Pos) /*!< 0x00000100 */
#define DMA_HIFCR_CDMEIF5     DMA_HIFCR_CDMEIF5_Msk
#define DMA_HIFCR_CFEIF5_Pos  (6U)
#define DMA_HIFCR_CFEIF5_Msk  (0x1U << DMA_HIFCR_CFEIF5_Pos) /*!< 0x00000040 */
#define DMA_HIFCR_CFEIF5      DMA_HIFCR_CFEIF5_Msk
#define DMA_HIFCR_CTCIF4_Pos  (5U)
#define DMA_HIFCR_CTCIF4_Msk  (0x1U << DMA_HIFCR_CTCIF4_Pos) /*!< 0x00000020 */
#define DMA_HIFCR_CTCIF4      DMA_HIFCR_CTCIF4_Msk
#define DMA_HIFCR_CHTIF4_Pos  (4U)
#define DMA_HIFCR_CHTIF4_Msk  (0x1U << DMA_HIFCR_CHTIF4_Pos) /*!< 0x00000010 */
#define DMA_HIFCR_CHTIF4      DMA_HIFCR_CHTIF4_Msk
#define DMA_HIFCR_CTEIF4_Pos  (3U)
#define DMA_HIFCR_CTEIF4_Msk  (0x1U << DMA_HIFCR_CTEIF4_Pos) /*!< 0x00000008 */
#define DMA_HIFCR_CTEIF4      DMA_HIFCR_CTEIF4_Msk
#define DMA_HIFCR_CDMEIF4_Pos (2U)
#define DMA_HIFCR_CDMEIF4_Msk (0x1U << DMA_HIFCR_CDMEIF4_Pos) /*!< 0x00000004 */
#define DMA_HIFCR_CDMEIF4     DMA_HIFCR_CDMEIF4_Msk
#define DMA_HIFCR_CFEIF4_Pos  (0U)
#define DMA_HIFCR_CFEIF4_Msk  (0x1U << DMA_HIFCR_CFEIF4_Pos) /*!< 0x00000001 */
#define DMA_HIFCR_CFEIF4      DMA_HIFCR_CFEIF4_Msk

/******************  Bit definition for DMA_SxPAR register  ********************/
#define DMA_SxPAR_PA_Pos (0U)
#define DMA_SxPAR_PA_Msk (0xFFFFFFFFU << DMA_SxPAR_PA_Pos) /*!< 0xFFFFFFFF */
#define DMA_SxPAR_PA     DMA_SxPAR_PA_Msk                  /*!< Peripheral Address */

/******************  Bit definition for DMA_SxM0AR register  ********************/
#define DMA_SxM0AR_M0A_Pos (0U)
#define DMA_SxM0AR_M0A_Msk (0xFFFFFFFFU << DMA_SxM0AR_M0A_Pos) /*!< 0xFFFFFFFF */
#define DMA_SxM0AR_M0A     DMA_SxM0AR_M0A_Msk                  /*!< Memory Address */

/******************  Bit definition for DMA_SxM1AR register  ********************/
#define DMA_SxM1AR_M1A_Pos (0U)
#define DMA_SxM1AR_M1A_Msk (0xFFFFFFFFU << DMA_SxM1AR_M1A_Pos) /*!< 0xFFFFFFFF */
#define DMA_SxM1AR_M1A     DMA_SxM1AR_M1A_Msk                  /*!< Memory Address */


/******************************************************************************/
/*                                                                            */
/*                    External Interrupt/Event Controller                     */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for EXTI_IMR register  *******************/
#define EXTI_IMR_MR0_Pos  (0U)
#define EXTI_IMR_MR0_Msk  (0x1U << EXTI_IMR_MR0_Pos) /*!< 0x00000001 */
#define EXTI_IMR_MR0      EXTI_IMR_MR0_Msk           /*!< Interrupt Mask on line 0 */
#define EXTI_IMR_MR1_Pos  (1U)
#define EXTI_IMR_MR1_Msk  (0x1U << EXTI_IMR_MR1_Pos) /*!< 0x00000002 */
#define EXTI_IMR_MR1      EXTI_IMR_MR1_Msk           /*!< Interrupt Mask on line 1 */
#define EXTI_IMR_MR2_Pos  (2U)
#define EXTI_IMR_MR2_Msk  (0x1U << EXTI_IMR_MR2_Pos) /*!< 0x00000004 */
#define EXTI_IMR_MR2      EXTI_IMR_MR2_Msk           /*!< Interrupt Mask on line 2 */
#define EXTI_IMR_MR3_Pos  (3U)
#define EXTI_IMR_MR3_Msk  (0x1U << EXTI_IMR_MR3_Pos) /*!< 0x00000008 */
#define EXTI_IMR_MR3      EXTI_IMR_MR3_Msk           /*!< Interrupt Mask on line 3 */
#define EXTI_IMR_MR4_Pos  (4U)
#define EXTI_IMR_MR4_Msk  (0x1U << EXTI_IMR_MR4_Pos) /*!< 0x00000010 */
#define EXTI_IMR_MR4      EXTI_IMR_MR4_Msk           /*!< Interrupt Mask on line 4 */
#define EXTI_IMR_MR5_Pos  (5U)
#define EXTI_IMR_MR5_Msk  (0x1U << EXTI_IMR_MR5_Pos) /*!< 0x00000020 */
#define EXTI_IMR_MR5      EXTI_IMR_MR5_Msk           /*!< Interrupt Mask on line 5 */
#define EXTI_IMR_MR6_Pos  (6U)
#define EXTI_IMR_MR6_Msk  (0x1U << EXTI_IMR_MR6_Pos) /*!< 0x00000040 */
#define EXTI_IMR_MR6      EXTI_IMR_MR6_Msk           /*!< Interrupt Mask on line 6 */
#define EXTI_IMR_MR7_Pos  (7U)
#define EXTI_IMR_MR7_Msk  (0x1U << EXTI_IMR_MR7_Pos) /*!< 0x00000080 */
#define EXTI_IMR_MR7      EXTI_IMR_MR7_Msk           /*!< Interrupt Mask on line 7 */
#define EXTI_IMR_MR8_Pos  (8U)
#define EXTI_IMR_MR8_Msk  (0x1U << EXTI_IMR_MR8_Pos) /*!< 0x00000100 */
#define EXTI_IMR_MR8      EXTI_IMR_MR8_Msk           /*!< Interrupt Mask on line 8 */
#define EXTI_IMR_MR9_Pos  (9U)
#define EXTI_IMR_MR9_Msk  (0x1U << EXTI_IMR_MR9_Pos) /*!< 0x00000200 */
#define EXTI_IMR_MR9      EXTI_IMR_MR9_Msk           /*!< Interrupt Mask on line 9 */
#define EXTI_IMR_MR10_Pos (10U)
#define EXTI_IMR_MR10_Msk (0x1U << EXTI_IMR_MR10_Pos) /*!< 0x00000400 */
#define EXTI_IMR_MR10     EXTI_IMR_MR10_Msk           /*!< Interrupt Mask on line 10 */
#define EXTI_IMR_MR11_Pos (11U)
#define EXTI_IMR_MR11_Msk (0x1U << EXTI_IMR_MR11_Pos) /*!< 0x00000800 */
#define EXTI_IMR_MR11     EXTI_IMR_MR11_Msk           /*!< Interrupt Mask on line 11 */
#define EXTI_IMR_MR12_Pos (12U)
#define EXTI_IMR_MR12_Msk (0x1U << EXTI_IMR_MR12_Pos) /*!< 0x00001000 */
#define EXTI_IMR_MR12     EXTI_IMR_MR12_Msk           /*!< Interrupt Mask on line 12 */
#define EXTI_IMR_MR13_Pos (13U)
#define EXTI_IMR_MR13_Msk (0x1U << EXTI_IMR_MR13_Pos) /*!< 0x00002000 */
#define EXTI_IMR_MR13     EXTI_IMR_MR13_Msk           /*!< Interrupt Mask on line 13 */
#define EXTI_IMR_MR14_Pos (14U)
#define EXTI_IMR_MR14_Msk (0x1U << EXTI_IMR_MR14_Pos) /*!< 0x00004000 */
#define EXTI_IMR_MR14     EXTI_IMR_MR14_Msk           /*!< Interrupt Mask on line 14 */
#define EXTI_IMR_MR15_Pos (15U)
#define EXTI_IMR_MR15_Msk (0x1U << EXTI_IMR_MR15_Pos) /*!< 0x00008000 */
#define EXTI_IMR_MR15     EXTI_IMR_MR15_Msk           /*!< Interrupt Mask on line 15 */
#define EXTI_IMR_MR16_Pos (16U)
#define EXTI_IMR_MR16_Msk (0x1U << EXTI_IMR_MR16_Pos) /*!< 0x00010000 */
#define EXTI_IMR_MR16     EXTI_IMR_MR16_Msk           /*!< Interrupt Mask on line 16 */
#define EXTI_IMR_MR17_Pos (17U)
#define EXTI_IMR_MR17_Msk (0x1U << EXTI_IMR_MR17_Pos) /*!< 0x00020000 */
#define EXTI_IMR_MR17     EXTI_IMR_MR17_Msk           /*!< Interrupt Mask on line 17 */
#define EXTI_IMR_MR18_Pos (18U)
#define EXTI_IMR_MR18_Msk (0x1U << EXTI_IMR_MR18_Pos) /*!< 0x00040000 */
#define EXTI_IMR_MR18     EXTI_IMR_MR18_Msk           /*!< Interrupt Mask on line 18 */
#define EXTI_IMR_MR19_Pos (19U)
#define EXTI_IMR_MR19_Msk (0x1U << EXTI_IMR_MR19_Pos) /*!< 0x00080000 */
#define EXTI_IMR_MR19     EXTI_IMR_MR19_Msk           /*!< Interrupt Mask on line 19 */
#define EXTI_IMR_MR20_Pos (20U)
#define EXTI_IMR_MR20_Msk (0x1U << EXTI_IMR_MR20_Pos) /*!< 0x00100000 */
#define EXTI_IMR_MR20     EXTI_IMR_MR20_Msk           /*!< Interrupt Mask on line 20 */
#define EXTI_IMR_MR21_Pos (21U)
#define EXTI_IMR_MR21_Msk (0x1U << EXTI_IMR_MR21_Pos) /*!< 0x00200000 */
#define EXTI_IMR_MR21     EXTI_IMR_MR21_Msk           /*!< Interrupt Mask on line 21 */
#define EXTI_IMR_MR22_Pos (22U)
#define EXTI_IMR_MR22_Msk (0x1U << EXTI_IMR_MR22_Pos) /*!< 0x00400000 */
#define EXTI_IMR_MR22     EXTI_IMR_MR22_Msk           /*!< Interrupt Mask on line 22 */

/* Reference Defines */
#define  EXTI_IMR_IM0   EXTI_IMR_MR0
#define  EXTI_IMR_IM1   EXTI_IMR_MR1
#define  EXTI_IMR_IM2   EXTI_IMR_MR2
#define  EXTI_IMR_IM3   EXTI_IMR_MR3
#define  EXTI_IMR_IM4   EXTI_IMR_MR4
#define  EXTI_IMR_IM5   EXTI_IMR_MR5
#define  EXTI_IMR_IM6   EXTI_IMR_MR6
#define  EXTI_IMR_IM7   EXTI_IMR_MR7
#define  EXTI_IMR_IM8   EXTI_IMR_MR8
#define  EXTI_IMR_IM9   EXTI_IMR_MR9
#define  EXTI_IMR_IM10  EXTI_IMR_MR10
#define  EXTI_IMR_IM11  EXTI_IMR_MR11
#define  EXTI_IMR_IM12  EXTI_IMR_MR12
#define  EXTI_IMR_IM13  EXTI_IMR_MR13
#define  EXTI_IMR_IM14  EXTI_IMR_MR14
#define  EXTI_IMR_IM15  EXTI_IMR_MR15
#define  EXTI_IMR_IM16  EXTI_IMR_MR16
#define  EXTI_IMR_IM17  EXTI_IMR_MR17
#define  EXTI_IMR_IM18  EXTI_IMR_MR18
#define  EXTI_IMR_IM19  EXTI_IMR_MR19
#define  EXTI_IMR_IM20  EXTI_IMR_MR20
#define  EXTI_IMR_IM21  EXTI_IMR_MR21
#define  EXTI_IMR_IM22  EXTI_IMR_MR22
#define EXTI_IMR_IM_Pos (0U)
#define EXTI_IMR_IM_Msk (0x7FFFFFU << EXTI_IMR_IM_Pos) /*!< 0x007FFFFF */
#define EXTI_IMR_IM     EXTI_IMR_IM_Msk                /*!< Interrupt Mask All */

/*******************  Bit definition for EXTI_EMR register  *******************/
#define EXTI_EMR_MR0_Pos  (0U)
#define EXTI_EMR_MR0_Msk  (0x1U << EXTI_EMR_MR0_Pos) /*!< 0x00000001 */
#define EXTI_EMR_MR0      EXTI_EMR_MR0_Msk           /*!< Event Mask on line 0 */
#define EXTI_EMR_MR1_Pos  (1U)
#define EXTI_EMR_MR1_Msk  (0x1U << EXTI_EMR_MR1_Pos) /*!< 0x00000002 */
#define EXTI_EMR_MR1      EXTI_EMR_MR1_Msk           /*!< Event Mask on line 1 */
#define EXTI_EMR_MR2_Pos  (2U)
#define EXTI_EMR_MR2_Msk  (0x1U << EXTI_EMR_MR2_Pos) /*!< 0x00000004 */
#define EXTI_EMR_MR2      EXTI_EMR_MR2_Msk           /*!< Event Mask on line 2 */
#define EXTI_EMR_MR3_Pos  (3U)
#define EXTI_EMR_MR3_Msk  (0x1U << EXTI_EMR_MR3_Pos) /*!< 0x00000008 */
#define EXTI_EMR_MR3      EXTI_EMR_MR3_Msk           /*!< Event Mask on line 3 */
#define EXTI_EMR_MR4_Pos  (4U)
#define EXTI_EMR_MR4_Msk  (0x1U << EXTI_EMR_MR4_Pos) /*!< 0x00000010 */
#define EXTI_EMR_MR4      EXTI_EMR_MR4_Msk           /*!< Event Mask on line 4 */
#define EXTI_EMR_MR5_Pos  (5U)
#define EXTI_EMR_MR5_Msk  (0x1U << EXTI_EMR_MR5_Pos) /*!< 0x00000020 */
#define EXTI_EMR_MR5      EXTI_EMR_MR5_Msk           /*!< Event Mask on line 5 */
#define EXTI_EMR_MR6_Pos  (6U)
#define EXTI_EMR_MR6_Msk  (0x1U << EXTI_EMR_MR6_Pos) /*!< 0x00000040 */
#define EXTI_EMR_MR6      EXTI_EMR_MR6_Msk           /*!< Event Mask on line 6 */
#define EXTI_EMR_MR7_Pos  (7U)
#define EXTI_EMR_MR7_Msk  (0x1U << EXTI_EMR_MR7_Pos) /*!< 0x00000080 */
#define EXTI_EMR_MR7      EXTI_EMR_MR7_Msk           /*!< Event Mask on line 7 */
#define EXTI_EMR_MR8_Pos  (8U)
#define EXTI_EMR_MR8_Msk  (0x1U << EXTI_EMR_MR8_Pos) /*!< 0x00000100 */
#define EXTI_EMR_MR8      EXTI_EMR_MR8_Msk           /*!< Event Mask on line 8 */
#define EXTI_EMR_MR9_Pos  (9U)
#define EXTI_EMR_MR9_Msk  (0x1U << EXTI_EMR_MR9_Pos) /*!< 0x00000200 */
#define EXTI_EMR_MR9      EXTI_EMR_MR9_Msk           /*!< Event Mask on line 9 */
#define EXTI_EMR_MR10_Pos (10U)
#define EXTI_EMR_MR10_Msk (0x1U << EXTI_EMR_MR10_Pos) /*!< 0x00000400 */
#define EXTI_EMR_MR10     EXTI_EMR_MR10_Msk           /*!< Event Mask on line 10 */
#define EXTI_EMR_MR11_Pos (11U)
#define EXTI_EMR_MR11_Msk (0x1U << EXTI_EMR_MR11_Pos) /*!< 0x00000800 */
#define EXTI_EMR_MR11     EXTI_EMR_MR11_Msk           /*!< Event Mask on line 11 */
#define EXTI_EMR_MR12_Pos (12U)
#define EXTI_EMR_MR12_Msk (0x1U << EXTI_EMR_MR12_Pos) /*!< 0x00001000 */
#define EXTI_EMR_MR12     EXTI_EMR_MR12_Msk           /*!< Event Mask on line 12 */
#define EXTI_EMR_MR13_Pos (13U)
#define EXTI_EMR_MR13_Msk (0x1U << EXTI_EMR_MR13_Pos) /*!< 0x00002000 */
#define EXTI_EMR_MR13     EXTI_EMR_MR13_Msk           /*!< Event Mask on line 13 */
#define EXTI_EMR_MR14_Pos (14U)
#define EXTI_EMR_MR14_Msk (0x1U << EXTI_EMR_MR14_Pos) /*!< 0x00004000 */
#define EXTI_EMR_MR14     EXTI_EMR_MR14_Msk           /*!< Event Mask on line 14 */
#define EXTI_EMR_MR15_Pos (15U)
#define EXTI_EMR_MR15_Msk (0x1U << EXTI_EMR_MR15_Pos) /*!< 0x00008000 */
#define EXTI_EMR_MR15     EXTI_EMR_MR15_Msk           /*!< Event Mask on line 15 */
#define EXTI_EMR_MR16_Pos (16U)
#define EXTI_EMR_MR16_Msk (0x1U << EXTI_EMR_MR16_Pos) /*!< 0x00010000 */
#define EXTI_EMR_MR16     EXTI_EMR_MR16_Msk           /*!< Event Mask on line 16 */
#define EXTI_EMR_MR17_Pos (17U)
#define EXTI_EMR_MR17_Msk (0x1U << EXTI_EMR_MR17_Pos) /*!< 0x00020000 */
#define EXTI_EMR_MR17     EXTI_EMR_MR17_Msk           /*!< Event Mask on line 17 */
#define EXTI_EMR_MR18_Pos (18U)
#define EXTI_EMR_MR18_Msk (0x1U << EXTI_EMR_MR18_Pos) /*!< 0x00040000 */
#define EXTI_EMR_MR18     EXTI_EMR_MR18_Msk           /*!< Event Mask on line 18 */
#define EXTI_EMR_MR19_Pos (19U)
#define EXTI_EMR_MR19_Msk (0x1U << EXTI_EMR_MR19_Pos) /*!< 0x00080000 */
#define EXTI_EMR_MR19     EXTI_EMR_MR19_Msk           /*!< Event Mask on line 19 */
#define EXTI_EMR_MR20_Pos (20U)
#define EXTI_EMR_MR20_Msk (0x1U << EXTI_EMR_MR20_Pos) /*!< 0x00100000 */
#define EXTI_EMR_MR20     EXTI_EMR_MR20_Msk           /*!< Event Mask on line 20 */
#define EXTI_EMR_MR21_Pos (21U)
#define EXTI_EMR_MR21_Msk (0x1U << EXTI_EMR_MR21_Pos) /*!< 0x00200000 */
#define EXTI_EMR_MR21     EXTI_EMR_MR21_Msk           /*!< Event Mask on line 21 */
#define EXTI_EMR_MR22_Pos (22U)
#define EXTI_EMR_MR22_Msk (0x1U << EXTI_EMR_MR22_Pos) /*!< 0x00400000 */
#define EXTI_EMR_MR22     EXTI_EMR_MR22_Msk           /*!< Event Mask on line 22 */

/* Reference Defines */
#define  EXTI_EMR_EM0  EXTI_EMR_MR0
#define  EXTI_EMR_EM1  EXTI_EMR_MR1
#define  EXTI_EMR_EM2  EXTI_EMR_MR2
#define  EXTI_EMR_EM3  EXTI_EMR_MR3
#define  EXTI_EMR_EM4  EXTI_EMR_MR4
#define  EXTI_EMR_EM5  EXTI_EMR_MR5
#define  EXTI_EMR_EM6  EXTI_EMR_MR6
#define  EXTI_EMR_EM7  EXTI_EMR_MR7
#define  EXTI_EMR_EM8  EXTI_EMR_MR8
#define  EXTI_EMR_EM9  EXTI_EMR_MR9
#define  EXTI_EMR_EM10 EXTI_EMR_MR10
#define  EXTI_EMR_EM11 EXTI_EMR_MR11
#define  EXTI_EMR_EM12 EXTI_EMR_MR12
#define  EXTI_EMR_EM13 EXTI_EMR_MR13
#define  EXTI_EMR_EM14 EXTI_EMR_MR14
#define  EXTI_EMR_EM15 EXTI_EMR_MR15
#define  EXTI_EMR_EM16 EXTI_EMR_MR16
#define  EXTI_EMR_EM17 EXTI_EMR_MR17
#define  EXTI_EMR_EM18 EXTI_EMR_MR18
#define  EXTI_EMR_EM19 EXTI_EMR_MR19
#define  EXTI_EMR_EM20 EXTI_EMR_MR20
#define  EXTI_EMR_EM21 EXTI_EMR_MR21
#define  EXTI_EMR_EM22 EXTI_EMR_MR22

/******************  Bit definition for EXTI_RTSR register  *******************/
#define EXTI_RTSR_TR0_Pos  (0U)
#define EXTI_RTSR_TR0_Msk  (0x1U << EXTI_RTSR_TR0_Pos) /*!< 0x00000001 */
#define EXTI_RTSR_TR0      EXTI_RTSR_TR0_Msk           /*!< Rising trigger event configuration bit of line 0 */
#define EXTI_RTSR_TR1_Pos  (1U)
#define EXTI_RTSR_TR1_Msk  (0x1U << EXTI_RTSR_TR1_Pos) /*!< 0x00000002 */
#define EXTI_RTSR_TR1      EXTI_RTSR_TR1_Msk           /*!< Rising trigger event configuration bit of line 1 */
#define EXTI_RTSR_TR2_Pos  (2U)
#define EXTI_RTSR_TR2_Msk  (0x1U << EXTI_RTSR_TR2_Pos) /*!< 0x00000004 */
#define EXTI_RTSR_TR2      EXTI_RTSR_TR2_Msk           /*!< Rising trigger event configuration bit of line 2 */
#define EXTI_RTSR_TR3_Pos  (3U)
#define EXTI_RTSR_TR3_Msk  (0x1U << EXTI_RTSR_TR3_Pos) /*!< 0x00000008 */
#define EXTI_RTSR_TR3      EXTI_RTSR_TR3_Msk           /*!< Rising trigger event configuration bit of line 3 */
#define EXTI_RTSR_TR4_Pos  (4U)
#define EXTI_RTSR_TR4_Msk  (0x1U << EXTI_RTSR_TR4_Pos) /*!< 0x00000010 */
#define EXTI_RTSR_TR4      EXTI_RTSR_TR4_Msk           /*!< Rising trigger event configuration bit of line 4 */
#define EXTI_RTSR_TR5_Pos  (5U)
#define EXTI_RTSR_TR5_Msk  (0x1U << EXTI_RTSR_TR5_Pos) /*!< 0x00000020 */
#define EXTI_RTSR_TR5      EXTI_RTSR_TR5_Msk           /*!< Rising trigger event configuration bit of line 5 */
#define EXTI_RTSR_TR6_Pos  (6U)
#define EXTI_RTSR_TR6_Msk  (0x1U << EXTI_RTSR_TR6_Pos) /*!< 0x00000040 */
#define EXTI_RTSR_TR6      EXTI_RTSR_TR6_Msk           /*!< Rising trigger event configuration bit of line 6 */
#define EXTI_RTSR_TR7_Pos  (7U)
#define EXTI_RTSR_TR7_Msk  (0x1U << EXTI_RTSR_TR7_Pos) /*!< 0x00000080 */
#define EXTI_RTSR_TR7      EXTI_RTSR_TR7_Msk           /*!< Rising trigger event configuration bit of line 7 */
#define EXTI_RTSR_TR8_Pos  (8U)
#define EXTI_RTSR_TR8_Msk  (0x1U << EXTI_RTSR_TR8_Pos) /*!< 0x00000100 */
#define EXTI_RTSR_TR8      EXTI_RTSR_TR8_Msk           /*!< Rising trigger event configuration bit of line 8 */
#define EXTI_RTSR_TR9_Pos  (9U)
#define EXTI_RTSR_TR9_Msk  (0x1U << EXTI_RTSR_TR9_Pos) /*!< 0x00000200 */
#define EXTI_RTSR_TR9      EXTI_RTSR_TR9_Msk           /*!< Rising trigger event configuration bit of line 9 */
#define EXTI_RTSR_TR10_Pos (10U)
#define EXTI_RTSR_TR10_Msk (0x1U << EXTI_RTSR_TR10_Pos) /*!< 0x00000400 */
#define EXTI_RTSR_TR10     EXTI_RTSR_TR10_Msk           /*!< Rising trigger event configuration bit of line 10 */
#define EXTI_RTSR_TR11_Pos (11U)
#define EXTI_RTSR_TR11_Msk (0x1U << EXTI_RTSR_TR11_Pos) /*!< 0x00000800 */
#define EXTI_RTSR_TR11     EXTI_RTSR_TR11_Msk           /*!< Rising trigger event configuration bit of line 11 */
#define EXTI_RTSR_TR12_Pos (12U)
#define EXTI_RTSR_TR12_Msk (0x1U << EXTI_RTSR_TR12_Pos) /*!< 0x00001000 */
#define EXTI_RTSR_TR12     EXTI_RTSR_TR12_Msk           /*!< Rising trigger event configuration bit of line 12 */
#define EXTI_RTSR_TR13_Pos (13U)
#define EXTI_RTSR_TR13_Msk (0x1U << EXTI_RTSR_TR13_Pos) /*!< 0x00002000 */
#define EXTI_RTSR_TR13     EXTI_RTSR_TR13_Msk           /*!< Rising trigger event configuration bit of line 13 */
#define EXTI_RTSR_TR14_Pos (14U)
#define EXTI_RTSR_TR14_Msk (0x1U << EXTI_RTSR_TR14_Pos) /*!< 0x00004000 */
#define EXTI_RTSR_TR14     EXTI_RTSR_TR14_Msk           /*!< Rising trigger event configuration bit of line 14 */
#define EXTI_RTSR_TR15_Pos (15U)
#define EXTI_RTSR_TR15_Msk (0x1U << EXTI_RTSR_TR15_Pos) /*!< 0x00008000 */
#define EXTI_RTSR_TR15     EXTI_RTSR_TR15_Msk           /*!< Rising trigger event configuration bit of line 15 */
#define EXTI_RTSR_TR16_Pos (16U)
#define EXTI_RTSR_TR16_Msk (0x1U << EXTI_RTSR_TR16_Pos) /*!< 0x00010000 */
#define EXTI_RTSR_TR16     EXTI_RTSR_TR16_Msk           /*!< Rising trigger event configuration bit of line 16 */
#define EXTI_RTSR_TR17_Pos (17U)
#define EXTI_RTSR_TR17_Msk (0x1U << EXTI_RTSR_TR17_Pos) /*!< 0x00020000 */
#define EXTI_RTSR_TR17     EXTI_RTSR_TR17_Msk           /*!< Rising trigger event configuration bit of line 17 */
#define EXTI_RTSR_TR18_Pos (18U)
#define EXTI_RTSR_TR18_Msk (0x1U << EXTI_RTSR_TR18_Pos) /*!< 0x00040000 */
#define EXTI_RTSR_TR18     EXTI_RTSR_TR18_Msk           /*!< Rising trigger event configuration bit of line 18 */
#define EXTI_RTSR_TR19_Pos (19U)
#define EXTI_RTSR_TR19_Msk (0x1U << EXTI_RTSR_TR19_Pos) /*!< 0x00080000 */
#define EXTI_RTSR_TR19     EXTI_RTSR_TR19_Msk           /*!< Rising trigger event configuration bit of line 19 */
#define EXTI_RTSR_TR20_Pos (20U)
#define EXTI_RTSR_TR20_Msk (0x1U << EXTI_RTSR_TR20_Pos) /*!< 0x00100000 */
#define EXTI_RTSR_TR20     EXTI_RTSR_TR20_Msk           /*!< Rising trigger event configuration bit of line 20 */
#define EXTI_RTSR_TR21_Pos (21U)
#define EXTI_RTSR_TR21_Msk (0x1U << EXTI_RTSR_TR21_Pos) /*!< 0x00200000 */
#define EXTI_RTSR_TR21     EXTI_RTSR_TR21_Msk           /*!< Rising trigger event configuration bit of line 21 */
#define EXTI_RTSR_TR22_Pos (22U)
#define EXTI_RTSR_TR22_Msk (0x1U << EXTI_RTSR_TR22_Pos) /*!< 0x00400000 */
#define EXTI_RTSR_TR22     EXTI_RTSR_TR22_Msk           /*!< Rising trigger event configuration bit of line 22 */

/******************  Bit definition for EXTI_FTSR register  *******************/
#define EXTI_FTSR_TR0_Pos  (0U)
#define EXTI_FTSR_TR0_Msk  (0x1U << EXTI_FTSR_TR0_Pos) /*!< 0x00000001 */
#define EXTI_FTSR_TR0      EXTI_FTSR_TR0_Msk           /*!< Falling trigger event configuration bit of line 0 */
#define EXTI_FTSR_TR1_Pos  (1U)
#define EXTI_FTSR_TR1_Msk  (0x1U << EXTI_FTSR_TR1_Pos) /*!< 0x00000002 */
#define EXTI_FTSR_TR1      EXTI_FTSR_TR1_Msk           /*!< Falling trigger event configuration bit of line 1 */
#define EXTI_FTSR_TR2_Pos  (2U)
#define EXTI_FTSR_TR2_Msk  (0x1U << EXTI_FTSR_TR2_Pos) /*!< 0x00000004 */
#define EXTI_FTSR_TR2      EXTI_FTSR_TR2_Msk           /*!< Falling trigger event configuration bit of line 2 */
#define EXTI_FTSR_TR3_Pos  (3U)
#define EXTI_FTSR_TR3_Msk  (0x1U << EXTI_FTSR_TR3_Pos) /*!< 0x00000008 */
#define EXTI_FTSR_TR3      EXTI_FTSR_TR3_Msk           /*!< Falling trigger event configuration bit of line 3 */
#define EXTI_FTSR_TR4_Pos  (4U)
#define EXTI_FTSR_TR4_Msk  (0x1U << EXTI_FTSR_TR4_Pos) /*!< 0x00000010 */
#define EXTI_FTSR_TR4      EXTI_FTSR_TR4_Msk           /*!< Falling trigger event configuration bit of line 4 */
#define EXTI_FTSR_TR5_Pos  (5U)
#define EXTI_FTSR_TR5_Msk  (0x1U << EXTI_FTSR_TR5_Pos) /*!< 0x00000020 */
#define EXTI_FTSR_TR5      EXTI_FTSR_TR5_Msk           /*!< Falling trigger event configuration bit of line 5 */
#define EXTI_FTSR_TR6_Pos  (6U)
#define EXTI_FTSR_TR6_Msk  (0x1U << EXTI_FTSR_TR6_Pos) /*!< 0x00000040 */
#define EXTI_FTSR_TR6      EXTI_FTSR_TR6_Msk           /*!< Falling trigger event configuration bit of line 6 */
#define EXTI_FTSR_TR7_Pos  (7U)
#define EXTI_FTSR_TR7_Msk  (0x1U << EXTI_FTSR_TR7_Pos) /*!< 0x00000080 */
#define EXTI_FTSR_TR7      EXTI_FTSR_TR7_Msk           /*!< Falling trigger event configuration bit of line 7 */
#define EXTI_FTSR_TR8_Pos  (8U)
#define EXTI_FTSR_TR8_Msk  (0x1U << EXTI_FTSR_TR8_Pos) /*!< 0x00000100 */
#define EXTI_FTSR_TR8      EXTI_FTSR_TR8_Msk           /*!< Falling trigger event configuration bit of line 8 */
#define EXTI_FTSR_TR9_Pos  (9U)
#define EXTI_FTSR_TR9_Msk  (0x1U << EXTI_FTSR_TR9_Pos) /*!< 0x00000200 */
#define EXTI_FTSR_TR9      EXTI_FTSR_TR9_Msk           /*!< Falling trigger event configuration bit of line 9 */
#define EXTI_FTSR_TR10_Pos (10U)
#define EXTI_FTSR_TR10_Msk (0x1U << EXTI_FTSR_TR10_Pos) /*!< 0x00000400 */
#define EXTI_FTSR_TR10     EXTI_FTSR_TR10_Msk           /*!< Falling trigger event configuration bit of line 10 */
#define EXTI_FTSR_TR11_Pos (11U)
#define EXTI_FTSR_TR11_Msk (0x1U << EXTI_FTSR_TR11_Pos) /*!< 0x00000800 */
#define EXTI_FTSR_TR11     EXTI_FTSR_TR11_Msk           /*!< Falling trigger event configuration bit of line 11 */
#define EXTI_FTSR_TR12_Pos (12U)
#define EXTI_FTSR_TR12_Msk (0x1U << EXTI_FTSR_TR12_Pos) /*!< 0x00001000 */
#define EXTI_FTSR_TR12     EXTI_FTSR_TR12_Msk           /*!< Falling trigger event configuration bit of line 12 */
#define EXTI_FTSR_TR13_Pos (13U)
#define EXTI_FTSR_TR13_Msk (0x1U << EXTI_FTSR_TR13_Pos) /*!< 0x00002000 */
#define EXTI_FTSR_TR13     EXTI_FTSR_TR13_Msk           /*!< Falling trigger event configuration bit of line 13 */
#define EXTI_FTSR_TR14_Pos (14U)
#define EXTI_FTSR_TR14_Msk (0x1U << EXTI_FTSR_TR14_Pos) /*!< 0x00004000 */
#define EXTI_FTSR_TR14     EXTI_FTSR_TR14_Msk           /*!< Falling trigger event configuration bit of line 14 */
#define EXTI_FTSR_TR15_Pos (15U)
#define EXTI_FTSR_TR15_Msk (0x1U << EXTI_FTSR_TR15_Pos) /*!< 0x00008000 */
#define EXTI_FTSR_TR15     EXTI_FTSR_TR15_Msk           /*!< Falling trigger event configuration bit of line 15 */
#define EXTI_FTSR_TR16_Pos (16U)
#define EXTI_FTSR_TR16_Msk (0x1U << EXTI_FTSR_TR16_Pos) /*!< 0x00010000 */
#define EXTI_FTSR_TR16     EXTI_FTSR_TR16_Msk           /*!< Falling trigger event configuration bit of line 16 */
#define EXTI_FTSR_TR17_Pos (17U)
#define EXTI_FTSR_TR17_Msk (0x1U << EXTI_FTSR_TR17_Pos) /*!< 0x00020000 */
#define EXTI_FTSR_TR17     EXTI_FTSR_TR17_Msk           /*!< Falling trigger event configuration bit of line 17 */
#define EXTI_FTSR_TR18_Pos (18U)
#define EXTI_FTSR_TR18_Msk (0x1U << EXTI_FTSR_TR18_Pos) /*!< 0x00040000 */
#define EXTI_FTSR_TR18     EXTI_FTSR_TR18_Msk           /*!< Falling trigger event configuration bit of line 18 */
#define EXTI_FTSR_TR19_Pos (19U)
#define EXTI_FTSR_TR19_Msk (0x1U << EXTI_FTSR_TR19_Pos) /*!< 0x00080000 */
#define EXTI_FTSR_TR19     EXTI_FTSR_TR19_Msk           /*!< Falling trigger event configuration bit of line 19 */
#define EXTI_FTSR_TR20_Pos (20U)
#define EXTI_FTSR_TR20_Msk (0x1U << EXTI_FTSR_TR20_Pos) /*!< 0x00100000 */
#define EXTI_FTSR_TR20     EXTI_FTSR_TR20_Msk           /*!< Falling trigger event configuration bit of line 20 */
#define EXTI_FTSR_TR21_Pos (21U)
#define EXTI_FTSR_TR21_Msk (0x1U << EXTI_FTSR_TR21_Pos) /*!< 0x00200000 */
#define EXTI_FTSR_TR21     EXTI_FTSR_TR21_Msk           /*!< Falling trigger event configuration bit of line 21 */
#define EXTI_FTSR_TR22_Pos (22U)
#define EXTI_FTSR_TR22_Msk (0x1U << EXTI_FTSR_TR22_Pos) /*!< 0x00400000 */
#define EXTI_FTSR_TR22     EXTI_FTSR_TR22_Msk           /*!< Falling trigger event configuration bit of line 22 */

/******************  Bit definition for EXTI_SWIER register  ******************/
#define EXTI_SWIER_SWIER0_Pos  (0U)
#define EXTI_SWIER_SWIER0_Msk  (0x1U << EXTI_SWIER_SWIER0_Pos) /*!< 0x00000001 */
#define EXTI_SWIER_SWIER0      EXTI_SWIER_SWIER0_Msk           /*!< Software Interrupt on line 0 */
#define EXTI_SWIER_SWIER1_Pos  (1U)
#define EXTI_SWIER_SWIER1_Msk  (0x1U << EXTI_SWIER_SWIER1_Pos) /*!< 0x00000002 */
#define EXTI_SWIER_SWIER1      EXTI_SWIER_SWIER1_Msk           /*!< Software Interrupt on line 1 */
#define EXTI_SWIER_SWIER2_Pos  (2U)
#define EXTI_SWIER_SWIER2_Msk  (0x1U << EXTI_SWIER_SWIER2_Pos) /*!< 0x00000004 */
#define EXTI_SWIER_SWIER2      EXTI_SWIER_SWIER2_Msk           /*!< Software Interrupt on line 2 */
#define EXTI_SWIER_SWIER3_Pos  (3U)
#define EXTI_SWIER_SWIER3_Msk  (0x1U << EXTI_SWIER_SWIER3_Pos) /*!< 0x00000008 */
#define EXTI_SWIER_SWIER3      EXTI_SWIER_SWIER3_Msk           /*!< Software Interrupt on line 3 */
#define EXTI_SWIER_SWIER4_Pos  (4U)
#define EXTI_SWIER_SWIER4_Msk  (0x1U << EXTI_SWIER_SWIER4_Pos) /*!< 0x00000010 */
#define EXTI_SWIER_SWIER4      EXTI_SWIER_SWIER4_Msk           /*!< Software Interrupt on line 4 */
#define EXTI_SWIER_SWIER5_Pos  (5U)
#define EXTI_SWIER_SWIER5_Msk  (0x1U << EXTI_SWIER_SWIER5_Pos) /*!< 0x00000020 */
#define EXTI_SWIER_SWIER5      EXTI_SWIER_SWIER5_Msk           /*!< Software Interrupt on line 5 */
#define EXTI_SWIER_SWIER6_Pos  (6U)
#define EXTI_SWIER_SWIER6_Msk  (0x1U << EXTI_SWIER_SWIER6_Pos) /*!< 0x00000040 */
#define EXTI_SWIER_SWIER6      EXTI_SWIER_SWIER6_Msk           /*!< Software Interrupt on line 6 */
#define EXTI_SWIER_SWIER7_Pos  (7U)
#define EXTI_SWIER_SWIER7_Msk  (0x1U << EXTI_SWIER_SWIER7_Pos) /*!< 0x00000080 */
#define EXTI_SWIER_SWIER7      EXTI_SWIER_SWIER7_Msk           /*!< Software Interrupt on line 7 */
#define EXTI_SWIER_SWIER8_Pos  (8U)
#define EXTI_SWIER_SWIER8_Msk  (0x1U << EXTI_SWIER_SWIER8_Pos) /*!< 0x00000100 */
#define EXTI_SWIER_SWIER8      EXTI_SWIER_SWIER8_Msk           /*!< Software Interrupt on line 8 */
#define EXTI_SWIER_SWIER9_Pos  (9U)
#define EXTI_SWIER_SWIER9_Msk  (0x1U << EXTI_SWIER_SWIER9_Pos) /*!< 0x00000200 */
#define EXTI_SWIER_SWIER9      EXTI_SWIER_SWIER9_Msk           /*!< Software Interrupt on line 9 */
#define EXTI_SWIER_SWIER10_Pos (10U)
#define EXTI_SWIER_SWIER10_Msk (0x1U << EXTI_SWIER_SWIER10_Pos) /*!< 0x00000400 */
#define EXTI_SWIER_SWIER10     EXTI_SWIER_SWIER10_Msk           /*!< Software Interrupt on line 10 */
#define EXTI_SWIER_SWIER11_Pos (11U)
#define EXTI_SWIER_SWIER11_Msk (0x1U << EXTI_SWIER_SWIER11_Pos) /*!< 0x00000800 */
#define EXTI_SWIER_SWIER11     EXTI_SWIER_SWIER11_Msk           /*!< Software Interrupt on line 11 */
#define EXTI_SWIER_SWIER12_Pos (12U)
#define EXTI_SWIER_SWIER12_Msk (0x1U << EXTI_SWIER_SWIER12_Pos) /*!< 0x00001000 */
#define EXTI_SWIER_SWIER12     EXTI_SWIER_SWIER12_Msk           /*!< Software Interrupt on line 12 */
#define EXTI_SWIER_SWIER13_Pos (13U)
#define EXTI_SWIER_SWIER13_Msk (0x1U << EXTI_SWIER_SWIER13_Pos) /*!< 0x00002000 */
#define EXTI_SWIER_SWIER13     EXTI_SWIER_SWIER13_Msk           /*!< Software Interrupt on line 13 */
#define EXTI_SWIER_SWIER14_Pos (14U)
#define EXTI_SWIER_SWIER14_Msk (0x1U << EXTI_SWIER_SWIER14_Pos) /*!< 0x00004000 */
#define EXTI_SWIER_SWIER14     EXTI_SWIER_SWIER14_Msk           /*!< Software Interrupt on line 14 */
#define EXTI_SWIER_SWIER15_Pos (15U)
#define EXTI_SWIER_SWIER15_Msk (0x1U << EXTI_SWIER_SWIER15_Pos) /*!< 0x00008000 */
#define EXTI_SWIER_SWIER15     EXTI_SWIER_SWIER15_Msk           /*!< Software Interrupt on line 15 */
#define EXTI_SWIER_SWIER16_Pos (16U)
#define EXTI_SWIER_SWIER16_Msk (0x1U << EXTI_SWIER_SWIER16_Pos) /*!< 0x00010000 */
#define EXTI_SWIER_SWIER16     EXTI_SWIER_SWIER16_Msk           /*!< Software Interrupt on line 16 */
#define EXTI_SWIER_SWIER17_Pos (17U)
#define EXTI_SWIER_SWIER17_Msk (0x1U << EXTI_SWIER_SWIER17_Pos) /*!< 0x00020000 */
#define EXTI_SWIER_SWIER17     EXTI_SWIER_SWIER17_Msk           /*!< Software Interrupt on line 17 */
#define EXTI_SWIER_SWIER18_Pos (18U)
#define EXTI_SWIER_SWIER18_Msk (0x1U << EXTI_SWIER_SWIER18_Pos) /*!< 0x00040000 */
#define EXTI_SWIER_SWIER18     EXTI_SWIER_SWIER18_Msk           /*!< Software Interrupt on line 18 */
#define EXTI_SWIER_SWIER19_Pos (19U)
#define EXTI_SWIER_SWIER19_Msk (0x1U << EXTI_SWIER_SWIER19_Pos) /*!< 0x00080000 */
#define EXTI_SWIER_SWIER19     EXTI_SWIER_SWIER19_Msk           /*!< Software Interrupt on line 19 */
#define EXTI_SWIER_SWIER20_Pos (20U)
#define EXTI_SWIER_SWIER20_Msk (0x1U << EXTI_SWIER_SWIER20_Pos) /*!< 0x00100000 */
#define EXTI_SWIER_SWIER20     EXTI_SWIER_SWIER20_Msk           /*!< Software Interrupt on line 20 */
#define EXTI_SWIER_SWIER21_Pos (21U)
#define EXTI_SWIER_SWIER21_Msk (0x1U << EXTI_SWIER_SWIER21_Pos) /*!< 0x00200000 */
#define EXTI_SWIER_SWIER21     EXTI_SWIER_SWIER21_Msk           /*!< Software Interrupt on line 21 */
#define EXTI_SWIER_SWIER22_Pos (22U)
#define EXTI_SWIER_SWIER22_Msk (0x1U << EXTI_SWIER_SWIER22_Pos) /*!< 0x00400000 */
#define EXTI_SWIER_SWIER22     EXTI_SWIER_SWIER22_Msk           /*!< Software Interrupt on line 22 */

/*******************  Bit definition for EXTI_PR register  ********************/
#define EXTI_PR_PR0_Pos  (0U)
#define EXTI_PR_PR0_Msk  (0x1U << EXTI_PR_PR0_Pos) /*!< 0x00000001 */
#define EXTI_PR_PR0      EXTI_PR_PR0_Msk           /*!< Pending bit for line 0 */
#define EXTI_PR_PR1_Pos  (1U)
#define EXTI_PR_PR1_Msk  (0x1U << EXTI_PR_PR1_Pos) /*!< 0x00000002 */
#define EXTI_PR_PR1      EXTI_PR_PR1_Msk           /*!< Pending bit for line 1 */
#define EXTI_PR_PR2_Pos  (2U)
#define EXTI_PR_PR2_Msk  (0x1U << EXTI_PR_PR2_Pos) /*!< 0x00000004 */
#define EXTI_PR_PR2      EXTI_PR_PR2_Msk           /*!< Pending bit for line 2 */
#define EXTI_PR_PR3_Pos  (3U)
#define EXTI_PR_PR3_Msk  (0x1U << EXTI_PR_PR3_Pos) /*!< 0x00000008 */
#define EXTI_PR_PR3      EXTI_PR_PR3_Msk           /*!< Pending bit for line 3 */
#define EXTI_PR_PR4_Pos  (4U)
#define EXTI_PR_PR4_Msk  (0x1U << EXTI_PR_PR4_Pos) /*!< 0x00000010 */
#define EXTI_PR_PR4      EXTI_PR_PR4_Msk           /*!< Pending bit for line 4 */
#define EXTI_PR_PR5_Pos  (5U)
#define EXTI_PR_PR5_Msk  (0x1U << EXTI_PR_PR5_Pos) /*!< 0x00000020 */
#define EXTI_PR_PR5      EXTI_PR_PR5_Msk           /*!< Pending bit for line 5 */
#define EXTI_PR_PR6_Pos  (6U)
#define EXTI_PR_PR6_Msk  (0x1U << EXTI_PR_PR6_Pos) /*!< 0x00000040 */
#define EXTI_PR_PR6      EXTI_PR_PR6_Msk           /*!< Pending bit for line 6 */
#define EXTI_PR_PR7_Pos  (7U)
#define EXTI_PR_PR7_Msk  (0x1U << EXTI_PR_PR7_Pos) /*!< 0x00000080 */
#define EXTI_PR_PR7      EXTI_PR_PR7_Msk           /*!< Pending bit for line 7 */
#define EXTI_PR_PR8_Pos  (8U)
#define EXTI_PR_PR8_Msk  (0x1U << EXTI_PR_PR8_Pos) /*!< 0x00000100 */
#define EXTI_PR_PR8      EXTI_PR_PR8_Msk           /*!< Pending bit for line 8 */
#define EXTI_PR_PR9_Pos  (9U)
#define EXTI_PR_PR9_Msk  (0x1U << EXTI_PR_PR9_Pos) /*!< 0x00000200 */
#define EXTI_PR_PR9      EXTI_PR_PR9_Msk           /*!< Pending bit for line 9 */
#define EXTI_PR_PR10_Pos (10U)
#define EXTI_PR_PR10_Msk (0x1U << EXTI_PR_PR10_Pos) /*!< 0x00000400 */
#define EXTI_PR_PR10     EXTI_PR_PR10_Msk           /*!< Pending bit for line 10 */
#define EXTI_PR_PR11_Pos (11U)
#define EXTI_PR_PR11_Msk (0x1U << EXTI_PR_PR11_Pos) /*!< 0x00000800 */
#define EXTI_PR_PR11     EXTI_PR_PR11_Msk           /*!< Pending bit for line 11 */
#define EXTI_PR_PR12_Pos (12U)
#define EXTI_PR_PR12_Msk (0x1U << EXTI_PR_PR12_Pos) /*!< 0x00001000 */
#define EXTI_PR_PR12     EXTI_PR_PR12_Msk           /*!< Pending bit for line 12 */
#define EXTI_PR_PR13_Pos (13U)
#define EXTI_PR_PR13_Msk (0x1U << EXTI_PR_PR13_Pos) /*!< 0x00002000 */
#define EXTI_PR_PR13     EXTI_PR_PR13_Msk           /*!< Pending bit for line 13 */
#define EXTI_PR_PR14_Pos (14U)
#define EXTI_PR_PR14_Msk (0x1U << EXTI_PR_PR14_Pos) /*!< 0x00004000 */
#define EXTI_PR_PR14     EXTI_PR_PR14_Msk           /*!< Pending bit for line 14 */
#define EXTI_PR_PR15_Pos (15U)
#define EXTI_PR_PR15_Msk (0x1U << EXTI_PR_PR15_Pos) /*!< 0x00008000 */
#define EXTI_PR_PR15     EXTI_PR_PR15_Msk           /*!< Pending bit for line 15 */
#define EXTI_PR_PR16_Pos (16U)
#define EXTI_PR_PR16_Msk (0x1U << EXTI_PR_PR16_Pos) /*!< 0x00010000 */
#define EXTI_PR_PR16     EXTI_PR_PR16_Msk           /*!< Pending bit for line 16 */
#define EXTI_PR_PR17_Pos (17U)
#define EXTI_PR_PR17_Msk (0x1U << EXTI_PR_PR17_Pos) /*!< 0x00020000 */
#define EXTI_PR_PR17     EXTI_PR_PR17_Msk           /*!< Pending bit for line 17 */
#define EXTI_PR_PR18_Pos (18U)
#define EXTI_PR_PR18_Msk (0x1U << EXTI_PR_PR18_Pos) /*!< 0x00040000 */
#define EXTI_PR_PR18     EXTI_PR_PR18_Msk           /*!< Pending bit for line 18 */
#define EXTI_PR_PR19_Pos (19U)
#define EXTI_PR_PR19_Msk (0x1U << EXTI_PR_PR19_Pos) /*!< 0x00080000 */
#define EXTI_PR_PR19     EXTI_PR_PR19_Msk           /*!< Pending bit for line 19 */
#define EXTI_PR_PR20_Pos (20U)
#define EXTI_PR_PR20_Msk (0x1U << EXTI_PR_PR20_Pos) /*!< 0x00100000 */
#define EXTI_PR_PR20     EXTI_PR_PR20_Msk           /*!< Pending bit for line 20 */
#define EXTI_PR_PR21_Pos (21U)
#define EXTI_PR_PR21_Msk (0x1U << EXTI_PR_PR21_Pos) /*!< 0x00200000 */
#define EXTI_PR_PR21     EXTI_PR_PR21_Msk           /*!< Pending bit for line 21 */
#define EXTI_PR_PR22_Pos (22U)
#define EXTI_PR_PR22_Msk (0x1U << EXTI_PR_PR22_Pos) /*!< 0x00400000 */
#define EXTI_PR_PR22     EXTI_PR_PR22_Msk           /*!< Pending bit for line 22 */

/******************************************************************************/
/*                                                                            */
/*                                    FLASH                                   */
/*                                                                            */
/******************************************************************************/
/*******************  Bits definition for FLASH_ACR register  *****************/
#define FLASH_ACR_LATENCY_Pos       (0U)
#define FLASH_ACR_LATENCY_Msk       (0xFU << FLASH_ACR_LATENCY_Pos) /*!< 0x0000000F */
#define FLASH_ACR_LATENCY           FLASH_ACR_LATENCY_Msk
#define FLASH_ACR_LATENCY_0WS       0x00000000U
#define FLASH_ACR_LATENCY_1WS       0x00000001U
#define FLASH_ACR_LATENCY_2WS       0x00000002U
#define FLASH_ACR_LATENCY_3WS       0x00000003U
#define FLASH_ACR_LATENCY_4WS       0x00000004U
#define FLASH_ACR_LATENCY_5WS       0x00000005U
#define FLASH_ACR_LATENCY_6WS       0x00000006U
#define FLASH_ACR_LATENCY_7WS       0x00000007U

#define FLASH_ACR_PRFTEN_Pos        (8U)
#define FLASH_ACR_PRFTEN_Msk        (0x1U << FLASH_ACR_PRFTEN_Pos) /*!< 0x00000100 */
#define FLASH_ACR_PRFTEN            FLASH_ACR_PRFTEN_Msk
#define FLASH_ACR_ICEN_Pos          (9U)
#define FLASH_ACR_ICEN_Msk          (0x1U << FLASH_ACR_ICEN_Pos) /*!< 0x00000200 */
#define FLASH_ACR_ICEN              FLASH_ACR_ICEN_Msk
#define FLASH_ACR_DCEN_Pos          (10U)
#define FLASH_ACR_DCEN_Msk          (0x1U << FLASH_ACR_DCEN_Pos) /*!< 0x00000400 */
#define FLASH_ACR_DCEN              FLASH_ACR_DCEN_Msk
#define FLASH_ACR_ICRST_Pos         (11U)
#define FLASH_ACR_ICRST_Msk         (0x1U << FLASH_ACR_ICRST_Pos) /*!< 0x00000800 */
#define FLASH_ACR_ICRST             FLASH_ACR_ICRST_Msk
#define FLASH_ACR_DCRST_Pos         (12U)
#define FLASH_ACR_DCRST_Msk         (0x1U << FLASH_ACR_DCRST_Pos) /*!< 0x00001000 */
#define FLASH_ACR_DCRST             FLASH_ACR_DCRST_Msk
#define FLASH_ACR_BYTE0_ADDRESS_Pos (10U)
#define FLASH_ACR_BYTE0_ADDRESS_Msk (0x10008FU << FLASH_ACR_BYTE0_ADDRESS_Pos) /*!< 0x40023C00 */
#define FLASH_ACR_BYTE0_ADDRESS     FLASH_ACR_BYTE0_ADDRESS_Msk
#define FLASH_ACR_BYTE2_ADDRESS_Pos (0U)
#define FLASH_ACR_BYTE2_ADDRESS_Msk (0x40023C03U << FLASH_ACR_BYTE2_ADDRESS_Pos) /*!< 0x40023C03 */
#define FLASH_ACR_BYTE2_ADDRESS     FLASH_ACR_BYTE2_ADDRESS_Msk

/*******************  Bits definition for FLASH_SR register  ******************/
#define FLASH_SR_EOP_Pos    (0U)
#define FLASH_SR_EOP_Msk    (0x1U << FLASH_SR_EOP_Pos) /*!< 0x00000001 */
#define FLASH_SR_EOP        FLASH_SR_EOP_Msk
#define FLASH_SR_SOP_Pos    (1U)
#define FLASH_SR_SOP_Msk    (0x1U << FLASH_SR_SOP_Pos) /*!< 0x00000002 */
#define FLASH_SR_SOP        FLASH_SR_SOP_Msk
#define FLASH_SR_WRPERR_Pos (4U)
#define FLASH_SR_WRPERR_Msk (0x1U << FLASH_SR_WRPERR_Pos) /*!< 0x00000010 */
#define FLASH_SR_WRPERR     FLASH_SR_WRPERR_Msk
#define FLASH_SR_PGAERR_Pos (5U)
#define FLASH_SR_PGAERR_Msk (0x1U << FLASH_SR_PGAERR_Pos) /*!< 0x00000020 */
#define FLASH_SR_PGAERR     FLASH_SR_PGAERR_Msk
#define FLASH_SR_PGPERR_Pos (6U)
#define FLASH_SR_PGPERR_Msk (0x1U << FLASH_SR_PGPERR_Pos) /*!< 0x00000040 */
#define FLASH_SR_PGPERR     FLASH_SR_PGPERR_Msk
#define FLASH_SR_PGSERR_Pos (7U)
#define FLASH_SR_PGSERR_Msk (0x1U << FLASH_SR_PGSERR_Pos) /*!< 0x00000080 */
#define FLASH_SR_PGSERR     FLASH_SR_PGSERR_Msk
#define FLASH_SR_BSY_Pos    (16U)
#define FLASH_SR_BSY_Msk    (0x1U << FLASH_SR_BSY_Pos) /*!< 0x00010000 */
#define FLASH_SR_BSY        FLASH_SR_BSY_Msk

/*******************  Bits definition for FLASH_CR register  ******************/
#define FLASH_CR_PG_Pos    (0U)
#define FLASH_CR_PG_Msk    (0x1U << FLASH_CR_PG_Pos) /*!< 0x00000001 */
#define FLASH_CR_PG        FLASH_CR_PG_Msk
#define FLASH_CR_SER_Pos   (1U)
#define FLASH_CR_SER_Msk   (0x1U << FLASH_CR_SER_Pos) /*!< 0x00000002 */
#define FLASH_CR_SER       FLASH_CR_SER_Msk
#define FLASH_CR_MER_Pos   (2U)
#define FLASH_CR_MER_Msk   (0x1U << FLASH_CR_MER_Pos) /*!< 0x00000004 */
#define FLASH_CR_MER       FLASH_CR_MER_Msk
#define FLASH_CR_SNB_Pos   (3U)
#define FLASH_CR_SNB_Msk   (0x1FU << FLASH_CR_SNB_Pos) /*!< 0x000000F8 */
#define FLASH_CR_SNB       FLASH_CR_SNB_Msk
#define FLASH_CR_SNB_0     (0x01U << FLASH_CR_SNB_Pos) /*!< 0x00000008 */
#define FLASH_CR_SNB_1     (0x02U << FLASH_CR_SNB_Pos) /*!< 0x00000010 */
#define FLASH_CR_SNB_2     (0x04U << FLASH_CR_SNB_Pos) /*!< 0x00000020 */
#define FLASH_CR_SNB_3     (0x08U << FLASH_CR_SNB_Pos) /*!< 0x00000040 */
#define FLASH_CR_SNB_4     (0x10U << FLASH_CR_SNB_Pos) /*!< 0x00000080 */
#define FLASH_CR_PSIZE_Pos (8U)
#define FLASH_CR_PSIZE_Msk (0x3U << FLASH_CR_PSIZE_Pos) /*!< 0x00000300 */
#define FLASH_CR_PSIZE     FLASH_CR_PSIZE_Msk
#define FLASH_CR_PSIZE_0   (0x1U << FLASH_CR_PSIZE_Pos) /*!< 0x00000100 */
#define FLASH_CR_PSIZE_1   (0x2U << FLASH_CR_PSIZE_Pos) /*!< 0x00000200 */
#define FLASH_CR_STRT_Pos  (16U)
#define FLASH_CR_STRT_Msk  (0x1U << FLASH_CR_STRT_Pos) /*!< 0x00010000 */
#define FLASH_CR_STRT      FLASH_CR_STRT_Msk
#define FLASH_CR_EOPIE_Pos (24U)
#define FLASH_CR_EOPIE_Msk (0x1U << FLASH_CR_EOPIE_Pos) /*!< 0x01000000 */
#define FLASH_CR_EOPIE     FLASH_CR_EOPIE_Msk
#define FLASH_CR_LOCK_Pos  (31U)
#define FLASH_CR_LOCK_Msk  (0x1U << FLASH_CR_LOCK_Pos) /*!< 0x80000000 */
#define FLASH_CR_LOCK      FLASH_CR_LOCK_Msk

/*******************  Bits definition for FLASH_OPTCR register  ***************/
#define FLASH_OPTCR_OPTLOCK_Pos    (0U)
#define FLASH_OPTCR_OPTLOCK_Msk    (0x1U << FLASH_OPTCR_OPTLOCK_Pos) /*!< 0x00000001 */
#define FLASH_OPTCR_OPTLOCK        FLASH_OPTCR_OPTLOCK_Msk
#define FLASH_OPTCR_OPTSTRT_Pos    (1U)
#define FLASH_OPTCR_OPTSTRT_Msk    (0x1U << FLASH_OPTCR_OPTSTRT_Pos) /*!< 0x00000002 */
#define FLASH_OPTCR_OPTSTRT        FLASH_OPTCR_OPTSTRT_Msk

#define FLASH_OPTCR_BOR_LEV_0      0x00000004U
#define FLASH_OPTCR_BOR_LEV_1      0x00000008U
#define FLASH_OPTCR_BOR_LEV_Pos    (2U)
#define FLASH_OPTCR_BOR_LEV_Msk    (0x3U << FLASH_OPTCR_BOR_LEV_Pos) /*!< 0x0000000C */
#define FLASH_OPTCR_BOR_LEV        FLASH_OPTCR_BOR_LEV_Msk
#define FLASH_OPTCR_WDG_SW_Pos     (5U)
#define FLASH_OPTCR_WDG_SW_Msk     (0x1U << FLASH_OPTCR_WDG_SW_Pos) /*!< 0x00000020 */
#define FLASH_OPTCR_WDG_SW         FLASH_OPTCR_WDG_SW_Msk
#define FLASH_OPTCR_nRST_STOP_Pos  (6U)
#define FLASH_OPTCR_nRST_STOP_Msk  (0x1U << FLASH_OPTCR_nRST_STOP_Pos) /*!< 0x00000040 */
#define FLASH_OPTCR_nRST_STOP      FLASH_OPTCR_nRST_STOP_Msk
#define FLASH_OPTCR_nRST_STDBY_Pos (7U)
#define FLASH_OPTCR_nRST_STDBY_Msk (0x1U << FLASH_OPTCR_nRST_STDBY_Pos) /*!< 0x00000080 */
#define FLASH_OPTCR_nRST_STDBY     FLASH_OPTCR_nRST_STDBY_Msk
#define FLASH_OPTCR_RDP_Pos        (8U)
#define FLASH_OPTCR_RDP_Msk        (0xFFU << FLASH_OPTCR_RDP_Pos) /*!< 0x0000FF00 */
#define FLASH_OPTCR_RDP            FLASH_OPTCR_RDP_Msk
#define FLASH_OPTCR_RDP_0          (0x01U << FLASH_OPTCR_RDP_Pos) /*!< 0x00000100 */
#define FLASH_OPTCR_RDP_1          (0x02U << FLASH_OPTCR_RDP_Pos) /*!< 0x00000200 */
#define FLASH_OPTCR_RDP_2          (0x04U << FLASH_OPTCR_RDP_Pos) /*!< 0x00000400 */
#define FLASH_OPTCR_RDP_3          (0x08U << FLASH_OPTCR_RDP_Pos) /*!< 0x00000800 */
#define FLASH_OPTCR_RDP_4          (0x10U << FLASH_OPTCR_RDP_Pos) /*!< 0x00001000 */
#define FLASH_OPTCR_RDP_5          (0x20U << FLASH_OPTCR_RDP_Pos) /*!< 0x00002000 */
#define FLASH_OPTCR_RDP_6          (0x40U << FLASH_OPTCR_RDP_Pos) /*!< 0x00004000 */
#define FLASH_OPTCR_RDP_7          (0x80U << FLASH_OPTCR_RDP_Pos) /*!< 0x00008000 */
#define FLASH_OPTCR_nWRP_Pos       (16U)
#define FLASH_OPTCR_nWRP_Msk       (0xFFFU << FLASH_OPTCR_nWRP_Pos) /*!< 0x0FFF0000 */
#define FLASH_OPTCR_nWRP           FLASH_OPTCR_nWRP_Msk
#define FLASH_OPTCR_nWRP_0         0x00010000U
#define FLASH_OPTCR_nWRP_1         0x00020000U
#define FLASH_OPTCR_nWRP_2         0x00040000U
#define FLASH_OPTCR_nWRP_3         0x00080000U
#define FLASH_OPTCR_nWRP_4         0x00100000U
#define FLASH_OPTCR_nWRP_5         0x00200000U
#define FLASH_OPTCR_nWRP_6         0x00400000U
#define FLASH_OPTCR_nWRP_7         0x00800000U
#define FLASH_OPTCR_nWRP_8         0x01000000U
#define FLASH_OPTCR_nWRP_9         0x02000000U
#define FLASH_OPTCR_nWRP_10        0x04000000U
#define FLASH_OPTCR_nWRP_11        0x08000000U

/******************  Bits definition for FLASH_OPTCR1 register  ***************/
#define FLASH_OPTCR1_nWRP_Pos (16U)
#define FLASH_OPTCR1_nWRP_Msk (0xFFFU << FLASH_OPTCR1_nWRP_Pos) /*!< 0x0FFF0000 */
#define FLASH_OPTCR1_nWRP     FLASH_OPTCR1_nWRP_Msk
#define FLASH_OPTCR1_nWRP_0   (0x001U << FLASH_OPTCR1_nWRP_Pos) /*!< 0x00010000 */
#define FLASH_OPTCR1_nWRP_1   (0x002U << FLASH_OPTCR1_nWRP_Pos) /*!< 0x00020000 */
#define FLASH_OPTCR1_nWRP_2   (0x004U << FLASH_OPTCR1_nWRP_Pos) /*!< 0x00040000 */
#define FLASH_OPTCR1_nWRP_3   (0x008U << FLASH_OPTCR1_nWRP_Pos) /*!< 0x00080000 */
#define FLASH_OPTCR1_nWRP_4   (0x010U << FLASH_OPTCR1_nWRP_Pos) /*!< 0x00100000 */
#define FLASH_OPTCR1_nWRP_5   (0x020U << FLASH_OPTCR1_nWRP_Pos) /*!< 0x00200000 */
#define FLASH_OPTCR1_nWRP_6   (0x040U << FLASH_OPTCR1_nWRP_Pos) /*!< 0x00400000 */
#define FLASH_OPTCR1_nWRP_7   (0x080U << FLASH_OPTCR1_nWRP_Pos) /*!< 0x00800000 */
#define FLASH_OPTCR1_nWRP_8   (0x100U << FLASH_OPTCR1_nWRP_Pos) /*!< 0x01000000 */
#define FLASH_OPTCR1_nWRP_9   (0x200U << FLASH_OPTCR1_nWRP_Pos) /*!< 0x02000000 */
#define FLASH_OPTCR1_nWRP_10  (0x400U << FLASH_OPTCR1_nWRP_Pos) /*!< 0x04000000 */
#define FLASH_OPTCR1_nWRP_11  (0x800U << FLASH_OPTCR1_nWRP_Pos) /*!< 0x08000000 */

/******************************************************************************/
/*                                                                            */
/*                   Flexible Static Memory Controller                        */
/*                                                                            */
/******************************************************************************/
/******************  Bit definition for FSMC_BCR1 register  *******************/
#define FSMC_BCR1_MBKEN_Pos     (0U)
#define FSMC_BCR1_MBKEN_Msk     (0x1U << FSMC_BCR1_MBKEN_Pos) /*!< 0x00000001 */
#define FSMC_BCR1_MBKEN         FSMC_BCR1_MBKEN_Msk           /*!<Memory bank enable bit                 */
#define FSMC_BCR1_MUXEN_Pos     (1U)
#define FSMC_BCR1_MUXEN_Msk     (0x1U << FSMC_BCR1_MUXEN_Pos) /*!< 0x00000002 */
#define FSMC_BCR1_MUXEN         FSMC_BCR1_MUXEN_Msk           /*!<Address/data multiplexing enable bit   */

#define FSMC_BCR1_MTYP_Pos      (2U)
#define FSMC_BCR1_MTYP_Msk      (0x3U << FSMC_BCR1_MTYP_Pos) /*!< 0x0000000C */
#define FSMC_BCR1_MTYP          FSMC_BCR1_MTYP_Msk           /*!<MTYP[1:0] bits (Memory type)           */
#define FSMC_BCR1_MTYP_0        (0x1U << FSMC_BCR1_MTYP_Pos) /*!< 0x00000004 */
#define FSMC_BCR1_MTYP_1        (0x2U << FSMC_BCR1_MTYP_Pos) /*!< 0x00000008 */

#define FSMC_BCR1_MWID_Pos      (4U)
#define FSMC_BCR1_MWID_Msk      (0x3U << FSMC_BCR1_MWID_Pos) /*!< 0x00000030 */
#define FSMC_BCR1_MWID          FSMC_BCR1_MWID_Msk           /*!<MWID[1:0] bits (Memory data bus width) */
#define FSMC_BCR1_MWID_0        (0x1U << FSMC_BCR1_MWID_Pos) /*!< 0x00000010 */
#define FSMC_BCR1_MWID_1        (0x2U << FSMC_BCR1_MWID_Pos) /*!< 0x00000020 */

#define FSMC_BCR1_FACCEN_Pos    (6U)
#define FSMC_BCR1_FACCEN_Msk    (0x1U << FSMC_BCR1_FACCEN_Pos) /*!< 0x00000040 */
#define FSMC_BCR1_FACCEN        FSMC_BCR1_FACCEN_Msk           /*!<Flash access enable                    */
#define FSMC_BCR1_BURSTEN_Pos   (8U)
#define FSMC_BCR1_BURSTEN_Msk   (0x1U << FSMC_BCR1_BURSTEN_Pos) /*!< 0x00000100 */
#define FSMC_BCR1_BURSTEN       FSMC_BCR1_BURSTEN_Msk           /*!<Burst enable bit                       */
#define FSMC_BCR1_WAITPOL_Pos   (9U)
#define FSMC_BCR1_WAITPOL_Msk   (0x1U << FSMC_BCR1_WAITPOL_Pos) /*!< 0x00000200 */
#define FSMC_BCR1_WAITPOL       FSMC_BCR1_WAITPOL_Msk           /*!<Wait signal polarity bit               */
#define FSMC_BCR1_WRAPMOD_Pos   (10U)
#define FSMC_BCR1_WRAPMOD_Msk   (0x1U << FSMC_BCR1_WRAPMOD_Pos) /*!< 0x00000400 */
#define FSMC_BCR1_WRAPMOD       FSMC_BCR1_WRAPMOD_Msk           /*!<Wrapped burst mode support             */
#define FSMC_BCR1_WAITCFG_Pos   (11U)
#define FSMC_BCR1_WAITCFG_Msk   (0x1U << FSMC_BCR1_WAITCFG_Pos) /*!< 0x00000800 */
#define FSMC_BCR1_WAITCFG       FSMC_BCR1_WAITCFG_Msk           /*!<Wait timing configuration              */
#define FSMC_BCR1_WREN_Pos      (12U)
#define FSMC_BCR1_WREN_Msk      (0x1U << FSMC_BCR1_WREN_Pos) /*!< 0x00001000 */
#define FSMC_BCR1_WREN          FSMC_BCR1_WREN_Msk           /*!<Write enable bit                       */
#define FSMC_BCR1_WAITEN_Pos    (13U)
#define FSMC_BCR1_WAITEN_Msk    (0x1U << FSMC_BCR1_WAITEN_Pos) /*!< 0x00002000 */
#define FSMC_BCR1_WAITEN        FSMC_BCR1_WAITEN_Msk           /*!<Wait enable bit                        */
#define FSMC_BCR1_EXTMOD_Pos    (14U)
#define FSMC_BCR1_EXTMOD_Msk    (0x1U << FSMC_BCR1_EXTMOD_Pos) /*!< 0x00004000 */
#define FSMC_BCR1_EXTMOD        FSMC_BCR1_EXTMOD_Msk           /*!<Extended mode enable                   */
#define FSMC_BCR1_ASYNCWAIT_Pos (15U)
#define FSMC_BCR1_ASYNCWAIT_Msk (0x1U << FSMC_BCR1_ASYNCWAIT_Pos) /*!< 0x00008000 */
#define FSMC_BCR1_ASYNCWAIT     FSMC_BCR1_ASYNCWAIT_Msk           /*!<Asynchronous wait                      */
#define FSMC_BCR1_CPSIZE_Pos    (16U)
#define FSMC_BCR1_CPSIZE_Msk    (0x7U << FSMC_BCR1_CPSIZE_Pos) /*!< 0x00070000 */
#define FSMC_BCR1_CPSIZE        FSMC_BCR1_CPSIZE_Msk           /*!<CRAM page size */
#define FSMC_BCR1_CPSIZE_0      (0x1U << FSMC_BCR1_CPSIZE_Pos) /*!< 0x00010000 */
#define FSMC_BCR1_CPSIZE_1      (0x2U << FSMC_BCR1_CPSIZE_Pos) /*!< 0x00020000 */
#define FSMC_BCR1_CPSIZE_2      (0x4U << FSMC_BCR1_CPSIZE_Pos) /*!< 0x00040000 */
#define FSMC_BCR1_CBURSTRW_Pos  (19U)
#define FSMC_BCR1_CBURSTRW_Msk  (0x1U << FSMC_BCR1_CBURSTRW_Pos) /*!< 0x00080000 */
#define FSMC_BCR1_CBURSTRW      FSMC_BCR1_CBURSTRW_Msk           /*!<Write burst enable                     */

/******************  Bit definition for FSMC_BCR2 register  *******************/
#define FSMC_BCR2_MBKEN_Pos     (0U)
#define FSMC_BCR2_MBKEN_Msk     (0x1U << FSMC_BCR2_MBKEN_Pos) /*!< 0x00000001 */
#define FSMC_BCR2_MBKEN         FSMC_BCR2_MBKEN_Msk           /*!<Memory bank enable bit                */
#define FSMC_BCR2_MUXEN_Pos     (1U)
#define FSMC_BCR2_MUXEN_Msk     (0x1U << FSMC_BCR2_MUXEN_Pos) /*!< 0x00000002 */
#define FSMC_BCR2_MUXEN         FSMC_BCR2_MUXEN_Msk           /*!<Address/data multiplexing enable bit   */

#define FSMC_BCR2_MTYP_Pos      (2U)
#define FSMC_BCR2_MTYP_Msk      (0x3U << FSMC_BCR2_MTYP_Pos) /*!< 0x0000000C */
#define FSMC_BCR2_MTYP          FSMC_BCR2_MTYP_Msk           /*!<MTYP[1:0] bits (Memory type)           */
#define FSMC_BCR2_MTYP_0        (0x1U << FSMC_BCR2_MTYP_Pos) /*!< 0x00000004 */
#define FSMC_BCR2_MTYP_1        (0x2U << FSMC_BCR2_MTYP_Pos) /*!< 0x00000008 */

#define FSMC_BCR2_MWID_Pos      (4U)
#define FSMC_BCR2_MWID_Msk      (0x3U << FSMC_BCR2_MWID_Pos) /*!< 0x00000030 */
#define FSMC_BCR2_MWID          FSMC_BCR2_MWID_Msk           /*!<MWID[1:0] bits (Memory data bus width) */
#define FSMC_BCR2_MWID_0        (0x1U << FSMC_BCR2_MWID_Pos) /*!< 0x00000010 */
#define FSMC_BCR2_MWID_1        (0x2U << FSMC_BCR2_MWID_Pos) /*!< 0x00000020 */

#define FSMC_BCR2_FACCEN_Pos    (6U)
#define FSMC_BCR2_FACCEN_Msk    (0x1U << FSMC_BCR2_FACCEN_Pos) /*!< 0x00000040 */
#define FSMC_BCR2_FACCEN        FSMC_BCR2_FACCEN_Msk           /*!<Flash access enable                    */
#define FSMC_BCR2_BURSTEN_Pos   (8U)
#define FSMC_BCR2_BURSTEN_Msk   (0x1U << FSMC_BCR2_BURSTEN_Pos) /*!< 0x00000100 */
#define FSMC_BCR2_BURSTEN       FSMC_BCR2_BURSTEN_Msk           /*!<Burst enable bit                       */
#define FSMC_BCR2_WAITPOL_Pos   (9U)
#define FSMC_BCR2_WAITPOL_Msk   (0x1U << FSMC_BCR2_WAITPOL_Pos) /*!< 0x00000200 */
#define FSMC_BCR2_WAITPOL       FSMC_BCR2_WAITPOL_Msk           /*!<Wait signal polarity bit               */
#define FSMC_BCR2_WRAPMOD_Pos   (10U)
#define FSMC_BCR2_WRAPMOD_Msk   (0x1U << FSMC_BCR2_WRAPMOD_Pos) /*!< 0x00000400 */
#define FSMC_BCR2_WRAPMOD       FSMC_BCR2_WRAPMOD_Msk           /*!<Wrapped burst mode support             */
#define FSMC_BCR2_WAITCFG_Pos   (11U)
#define FSMC_BCR2_WAITCFG_Msk   (0x1U << FSMC_BCR2_WAITCFG_Pos) /*!< 0x00000800 */
#define FSMC_BCR2_WAITCFG       FSMC_BCR2_WAITCFG_Msk           /*!<Wait timing configuration              */
#define FSMC_BCR2_WREN_Pos      (12U)
#define FSMC_BCR2_WREN_Msk      (0x1U << FSMC_BCR2_WREN_Pos) /*!< 0x00001000 */
#define FSMC_BCR2_WREN          FSMC_BCR2_WREN_Msk           /*!<Write enable bit                       */
#define FSMC_BCR2_WAITEN_Pos    (13U)
#define FSMC_BCR2_WAITEN_Msk    (0x1U << FSMC_BCR2_WAITEN_Pos) /*!< 0x00002000 */
#define FSMC_BCR2_WAITEN        FSMC_BCR2_WAITEN_Msk           /*!<Wait enable bit                        */
#define FSMC_BCR2_EXTMOD_Pos    (14U)
#define FSMC_BCR2_EXTMOD_Msk    (0x1U << FSMC_BCR2_EXTMOD_Pos) /*!< 0x00004000 */
#define FSMC_BCR2_EXTMOD        FSMC_BCR2_EXTMOD_Msk           /*!<Extended mode enable                   */
#define FSMC_BCR2_ASYNCWAIT_Pos (15U)
#define FSMC_BCR2_ASYNCWAIT_Msk (0x1U << FSMC_BCR2_ASYNCWAIT_Pos) /*!< 0x00008000 */
#define FSMC_BCR2_ASYNCWAIT     FSMC_BCR2_ASYNCWAIT_Msk           /*!<Asynchronous wait                      */
#define FSMC_BCR2_CPSIZE_Pos    (16U)
#define FSMC_BCR2_CPSIZE_Msk    (0x7U << FSMC_BCR2_CPSIZE_Pos) /*!< 0x00070000 */
#define FSMC_BCR2_CPSIZE        FSMC_BCR2_CPSIZE_Msk           /*!<CRAM page size */
#define FSMC_BCR2_CPSIZE_0      (0x1U << FSMC_BCR2_CPSIZE_Pos) /*!< 0x00010000 */
#define FSMC_BCR2_CPSIZE_1      (0x2U << FSMC_BCR2_CPSIZE_Pos) /*!< 0x00020000 */
#define FSMC_BCR2_CPSIZE_2      (0x4U << FSMC_BCR2_CPSIZE_Pos) /*!< 0x00040000 */
#define FSMC_BCR2_CBURSTRW_Pos  (19U)
#define FSMC_BCR2_CBURSTRW_Msk  (0x1U << FSMC_BCR2_CBURSTRW_Pos) /*!< 0x00080000 */
#define FSMC_BCR2_CBURSTRW      FSMC_BCR2_CBURSTRW_Msk           /*!<Write burst enable                     */

/******************  Bit definition for FSMC_BCR3 register  *******************/
#define FSMC_BCR3_MBKEN_Pos     (0U)
#define FSMC_BCR3_MBKEN_Msk     (0x1U << FSMC_BCR3_MBKEN_Pos) /*!< 0x00000001 */
#define FSMC_BCR3_MBKEN         FSMC_BCR3_MBKEN_Msk           /*!<Memory bank enable bit                 */
#define FSMC_BCR3_MUXEN_Pos     (1U)
#define FSMC_BCR3_MUXEN_Msk     (0x1U << FSMC_BCR3_MUXEN_Pos) /*!< 0x00000002 */
#define FSMC_BCR3_MUXEN         FSMC_BCR3_MUXEN_Msk           /*!<Address/data multiplexing enable bit   */

#define FSMC_BCR3_MTYP_Pos      (2U)
#define FSMC_BCR3_MTYP_Msk      (0x3U << FSMC_BCR3_MTYP_Pos) /*!< 0x0000000C */
#define FSMC_BCR3_MTYP          FSMC_BCR3_MTYP_Msk           /*!<MTYP[1:0] bits (Memory type)           */
#define FSMC_BCR3_MTYP_0        (0x1U << FSMC_BCR3_MTYP_Pos) /*!< 0x00000004 */
#define FSMC_BCR3_MTYP_1        (0x2U << FSMC_BCR3_MTYP_Pos) /*!< 0x00000008 */

#define FSMC_BCR3_MWID_Pos      (4U)
#define FSMC_BCR3_MWID_Msk      (0x3U << FSMC_BCR3_MWID_Pos) /*!< 0x00000030 */
#define FSMC_BCR3_MWID          FSMC_BCR3_MWID_Msk           /*!<MWID[1:0] bits (Memory data bus width) */
#define FSMC_BCR3_MWID_0        (0x1U << FSMC_BCR3_MWID_Pos) /*!< 0x00000010 */
#define FSMC_BCR3_MWID_1        (0x2U << FSMC_BCR3_MWID_Pos) /*!< 0x00000020 */

#define FSMC_BCR3_FACCEN_Pos    (6U)
#define FSMC_BCR3_FACCEN_Msk    (0x1U << FSMC_BCR3_FACCEN_Pos) /*!< 0x00000040 */
#define FSMC_BCR3_FACCEN        FSMC_BCR3_FACCEN_Msk           /*!<Flash access enable                    */
#define FSMC_BCR3_BURSTEN_Pos   (8U)
#define FSMC_BCR3_BURSTEN_Msk   (0x1U << FSMC_BCR3_BURSTEN_Pos) /*!< 0x00000100 */
#define FSMC_BCR3_BURSTEN       FSMC_BCR3_BURSTEN_Msk           /*!<Burst enable bit                       */
#define FSMC_BCR3_WAITPOL_Pos   (9U)
#define FSMC_BCR3_WAITPOL_Msk   (0x1U << FSMC_BCR3_WAITPOL_Pos) /*!< 0x00000200 */
#define FSMC_BCR3_WAITPOL       FSMC_BCR3_WAITPOL_Msk           /*!<Wait signal polarity bit               */
#define FSMC_BCR3_WRAPMOD_Pos   (10U)
#define FSMC_BCR3_WRAPMOD_Msk   (0x1U << FSMC_BCR3_WRAPMOD_Pos) /*!< 0x00000400 */
#define FSMC_BCR3_WRAPMOD       FSMC_BCR3_WRAPMOD_Msk           /*!<Wrapped burst mode support             */
#define FSMC_BCR3_WAITCFG_Pos   (11U)
#define FSMC_BCR3_WAITCFG_Msk   (0x1U << FSMC_BCR3_WAITCFG_Pos) /*!< 0x00000800 */
#define FSMC_BCR3_WAITCFG       FSMC_BCR3_WAITCFG_Msk           /*!<Wait timing configuration              */
#define FSMC_BCR3_WREN_Pos      (12U)
#define FSMC_BCR3_WREN_Msk      (0x1U << FSMC_BCR3_WREN_Pos) /*!< 0x00001000 */
#define FSMC_BCR3_WREN          FSMC_BCR3_WREN_Msk           /*!<Write enable bit                       */
#define FSMC_BCR3_WAITEN_Pos    (13U)
#define FSMC_BCR3_WAITEN_Msk    (0x1U << FSMC_BCR3_WAITEN_Pos) /*!< 0x00002000 */
#define FSMC_BCR3_WAITEN        FSMC_BCR3_WAITEN_Msk           /*!<Wait enable bit                        */
#define FSMC_BCR3_EXTMOD_Pos    (14U)
#define FSMC_BCR3_EXTMOD_Msk    (0x1U << FSMC_BCR3_EXTMOD_Pos) /*!< 0x00004000 */
#define FSMC_BCR3_EXTMOD        FSMC_BCR3_EXTMOD_Msk           /*!<Extended mode enable                   */
#define FSMC_BCR3_ASYNCWAIT_Pos (15U)
#define FSMC_BCR3_ASYNCWAIT_Msk (0x1U << FSMC_BCR3_ASYNCWAIT_Pos) /*!< 0x00008000 */
#define FSMC_BCR3_ASYNCWAIT     FSMC_BCR3_ASYNCWAIT_Msk           /*!<Asynchronous wait                      */
#define FSMC_BCR3_CPSIZE_Pos    (16U)
#define FSMC_BCR3_CPSIZE_Msk    (0x7U << FSMC_BCR3_CPSIZE_Pos) /*!< 0x00070000 */
#define FSMC_BCR3_CPSIZE        FSMC_BCR3_CPSIZE_Msk           /*!<CRAM page size */
#define FSMC_BCR3_CPSIZE_0      (0x1U << FSMC_BCR3_CPSIZE_Pos) /*!< 0x00010000 */
#define FSMC_BCR3_CPSIZE_1      (0x2U << FSMC_BCR3_CPSIZE_Pos) /*!< 0x00020000 */
#define FSMC_BCR3_CPSIZE_2      (0x4U << FSMC_BCR3_CPSIZE_Pos) /*!< 0x00040000 */
#define FSMC_BCR3_CBURSTRW_Pos  (19U)
#define FSMC_BCR3_CBURSTRW_Msk  (0x1U << FSMC_BCR3_CBURSTRW_Pos) /*!< 0x00080000 */
#define FSMC_BCR3_CBURSTRW      FSMC_BCR3_CBURSTRW_Msk           /*!<Write burst enable                     */

/******************  Bit definition for FSMC_BCR4 register  *******************/
#define FSMC_BCR4_MBKEN_Pos     (0U)
#define FSMC_BCR4_MBKEN_Msk     (0x1U << FSMC_BCR4_MBKEN_Pos) /*!< 0x00000001 */
#define FSMC_BCR4_MBKEN         FSMC_BCR4_MBKEN_Msk           /*!<Memory bank enable bit */
#define FSMC_BCR4_MUXEN_Pos     (1U)
#define FSMC_BCR4_MUXEN_Msk     (0x1U << FSMC_BCR4_MUXEN_Pos) /*!< 0x00000002 */
#define FSMC_BCR4_MUXEN         FSMC_BCR4_MUXEN_Msk           /*!<Address/data multiplexing enable bit   */

#define FSMC_BCR4_MTYP_Pos      (2U)
#define FSMC_BCR4_MTYP_Msk      (0x3U << FSMC_BCR4_MTYP_Pos) /*!< 0x0000000C */
#define FSMC_BCR4_MTYP          FSMC_BCR4_MTYP_Msk           /*!<MTYP[1:0] bits (Memory type)           */
#define FSMC_BCR4_MTYP_0        (0x1U << FSMC_BCR4_MTYP_Pos) /*!< 0x00000004 */
#define FSMC_BCR4_MTYP_1        (0x2U << FSMC_BCR4_MTYP_Pos) /*!< 0x00000008 */

#define FSMC_BCR4_MWID_Pos      (4U)
#define FSMC_BCR4_MWID_Msk      (0x3U << FSMC_BCR4_MWID_Pos) /*!< 0x00000030 */
#define FSMC_BCR4_MWID          FSMC_BCR4_MWID_Msk           /*!<MWID[1:0] bits (Memory data bus width) */
#define FSMC_BCR4_MWID_0        (0x1U << FSMC_BCR4_MWID_Pos) /*!< 0x00000010 */
#define FSMC_BCR4_MWID_1        (0x2U << FSMC_BCR4_MWID_Pos) /*!< 0x00000020 */

#define FSMC_BCR4_FACCEN_Pos    (6U)
#define FSMC_BCR4_FACCEN_Msk    (0x1U << FSMC_BCR4_FACCEN_Pos) /*!< 0x00000040 */
#define FSMC_BCR4_FACCEN        FSMC_BCR4_FACCEN_Msk           /*!<Flash access enable                    */
#define FSMC_BCR4_BURSTEN_Pos   (8U)
#define FSMC_BCR4_BURSTEN_Msk   (0x1U << FSMC_BCR4_BURSTEN_Pos) /*!< 0x00000100 */
#define FSMC_BCR4_BURSTEN       FSMC_BCR4_BURSTEN_Msk           /*!<Burst enable bit                       */
#define FSMC_BCR4_WAITPOL_Pos   (9U)
#define FSMC_BCR4_WAITPOL_Msk   (0x1U << FSMC_BCR4_WAITPOL_Pos) /*!< 0x00000200 */
#define FSMC_BCR4_WAITPOL       FSMC_BCR4_WAITPOL_Msk           /*!<Wait signal polarity bit               */
#define FSMC_BCR4_WRAPMOD_Pos   (10U)
#define FSMC_BCR4_WRAPMOD_Msk   (0x1U << FSMC_BCR4_WRAPMOD_Pos) /*!< 0x00000400 */
#define FSMC_BCR4_WRAPMOD       FSMC_BCR4_WRAPMOD_Msk           /*!<Wrapped burst mode support             */
#define FSMC_BCR4_WAITCFG_Pos   (11U)
#define FSMC_BCR4_WAITCFG_Msk   (0x1U << FSMC_BCR4_WAITCFG_Pos) /*!< 0x00000800 */
#define FSMC_BCR4_WAITCFG       FSMC_BCR4_WAITCFG_Msk           /*!<Wait timing configuration              */
#define FSMC_BCR4_WREN_Pos      (12U)
#define FSMC_BCR4_WREN_Msk      (0x1U << FSMC_BCR4_WREN_Pos) /*!< 0x00001000 */
#define FSMC_BCR4_WREN          FSMC_BCR4_WREN_Msk           /*!<Write enable bit                       */
#define FSMC_BCR4_WAITEN_Pos    (13U)
#define FSMC_BCR4_WAITEN_Msk    (0x1U << FSMC_BCR4_WAITEN_Pos) /*!< 0x00002000 */
#define FSMC_BCR4_WAITEN        FSMC_BCR4_WAITEN_Msk           /*!<Wait enable bit                        */
#define FSMC_BCR4_EXTMOD_Pos    (14U)
#define FSMC_BCR4_EXTMOD_Msk    (0x1U << FSMC_BCR4_EXTMOD_Pos) /*!< 0x00004000 */
#define FSMC_BCR4_EXTMOD        FSMC_BCR4_EXTMOD_Msk           /*!<Extended mode enable                   */
#define FSMC_BCR4_ASYNCWAIT_Pos (15U)
#define FSMC_BCR4_ASYNCWAIT_Msk (0x1U << FSMC_BCR4_ASYNCWAIT_Pos) /*!< 0x00008000 */
#define FSMC_BCR4_ASYNCWAIT     FSMC_BCR4_ASYNCWAIT_Msk           /*!<Asynchronous wait                      */
#define FSMC_BCR4_CPSIZE_Pos    (16U)
#define FSMC_BCR4_CPSIZE_Msk    (0x7U << FSMC_BCR4_CPSIZE_Pos) /*!< 0x00070000 */
#define FSMC_BCR4_CPSIZE        FSMC_BCR4_CPSIZE_Msk           /*!<CRAM page size */
#define FSMC_BCR4_CPSIZE_0      (0x1U << FSMC_BCR4_CPSIZE_Pos) /*!< 0x00010000 */
#define FSMC_BCR4_CPSIZE_1      (0x2U << FSMC_BCR4_CPSIZE_Pos) /*!< 0x00020000 */
#define FSMC_BCR4_CPSIZE_2      (0x4U << FSMC_BCR4_CPSIZE_Pos) /*!< 0x00040000 */
#define FSMC_BCR4_CBURSTRW_Pos  (19U)
#define FSMC_BCR4_CBURSTRW_Msk  (0x1U << FSMC_BCR4_CBURSTRW_Pos) /*!< 0x00080000 */
#define FSMC_BCR4_CBURSTRW      FSMC_BCR4_CBURSTRW_Msk           /*!<Write burst enable                     */

/******************  Bit definition for FSMC_BTR1 register  ******************/
#define FSMC_BTR1_ADDSET_Pos  (0U)
#define FSMC_BTR1_ADDSET_Msk  (0xFU << FSMC_BTR1_ADDSET_Pos) /*!< 0x0000000F */
#define FSMC_BTR1_ADDSET      FSMC_BTR1_ADDSET_Msk           /*!<ADDSET[3:0] bits (Address setup phase duration) */
#define FSMC_BTR1_ADDSET_0    (0x1U << FSMC_BTR1_ADDSET_Pos) /*!< 0x00000001 */
#define FSMC_BTR1_ADDSET_1    (0x2U << FSMC_BTR1_ADDSET_Pos) /*!< 0x00000002 */
#define FSMC_BTR1_ADDSET_2    (0x4U << FSMC_BTR1_ADDSET_Pos) /*!< 0x00000004 */
#define FSMC_BTR1_ADDSET_3    (0x8U << FSMC_BTR1_ADDSET_Pos) /*!< 0x00000008 */

#define FSMC_BTR1_ADDHLD_Pos  (4U)
#define FSMC_BTR1_ADDHLD_Msk  (0xFU << FSMC_BTR1_ADDHLD_Pos) /*!< 0x000000F0 */
#define FSMC_BTR1_ADDHLD      FSMC_BTR1_ADDHLD_Msk           /*!<ADDHLD[3:0] bits (Address-hold phase duration) */
#define FSMC_BTR1_ADDHLD_0    (0x1U << FSMC_BTR1_ADDHLD_Pos) /*!< 0x00000010 */
#define FSMC_BTR1_ADDHLD_1    (0x2U << FSMC_BTR1_ADDHLD_Pos) /*!< 0x00000020 */
#define FSMC_BTR1_ADDHLD_2    (0x4U << FSMC_BTR1_ADDHLD_Pos) /*!< 0x00000040 */
#define FSMC_BTR1_ADDHLD_3    (0x8U << FSMC_BTR1_ADDHLD_Pos) /*!< 0x00000080 */

#define FSMC_BTR1_DATAST_Pos  (8U)
#define FSMC_BTR1_DATAST_Msk  (0xFFU << FSMC_BTR1_DATAST_Pos) /*!< 0x0000FF00 */
#define FSMC_BTR1_DATAST      FSMC_BTR1_DATAST_Msk            /*!<DATAST [7:0] bits (Data-phase duration) */
#define FSMC_BTR1_DATAST_0    (0x01U << FSMC_BTR1_DATAST_Pos) /*!< 0x00000100 */
#define FSMC_BTR1_DATAST_1    (0x02U << FSMC_BTR1_DATAST_Pos) /*!< 0x00000200 */
#define FSMC_BTR1_DATAST_2    (0x04U << FSMC_BTR1_DATAST_Pos) /*!< 0x00000400 */
#define FSMC_BTR1_DATAST_3    (0x08U << FSMC_BTR1_DATAST_Pos) /*!< 0x00000800 */
#define FSMC_BTR1_DATAST_4    (0x10U << FSMC_BTR1_DATAST_Pos) /*!< 0x00001000 */
#define FSMC_BTR1_DATAST_5    (0x20U << FSMC_BTR1_DATAST_Pos) /*!< 0x00002000 */
#define FSMC_BTR1_DATAST_6    (0x40U << FSMC_BTR1_DATAST_Pos) /*!< 0x00004000 */
#define FSMC_BTR1_DATAST_7    (0x80U << FSMC_BTR1_DATAST_Pos) /*!< 0x00008000 */

#define FSMC_BTR1_BUSTURN_Pos (16U)
#define FSMC_BTR1_BUSTURN_Msk (0xFU << FSMC_BTR1_BUSTURN_Pos) /*!< 0x000F0000 */
#define FSMC_BTR1_BUSTURN     FSMC_BTR1_BUSTURN_Msk           /*!<BUSTURN[3:0] bits (Bus turnaround phase duration) */
#define FSMC_BTR1_BUSTURN_0   (0x1U << FSMC_BTR1_BUSTURN_Pos) /*!< 0x00010000 */
#define FSMC_BTR1_BUSTURN_1   (0x2U << FSMC_BTR1_BUSTURN_Pos) /*!< 0x00020000 */
#define FSMC_BTR1_BUSTURN_2   (0x4U << FSMC_BTR1_BUSTURN_Pos) /*!< 0x00040000 */
#define FSMC_BTR1_BUSTURN_3   (0x8U << FSMC_BTR1_BUSTURN_Pos) /*!< 0x00080000 */

#define FSMC_BTR1_CLKDIV_Pos  (20U)
#define FSMC_BTR1_CLKDIV_Msk  (0xFU << FSMC_BTR1_CLKDIV_Pos) /*!< 0x00F00000 */
#define FSMC_BTR1_CLKDIV      FSMC_BTR1_CLKDIV_Msk           /*!<CLKDIV[3:0] bits (Clock divide ratio) */
#define FSMC_BTR1_CLKDIV_0    (0x1U << FSMC_BTR1_CLKDIV_Pos) /*!< 0x00100000 */
#define FSMC_BTR1_CLKDIV_1    (0x2U << FSMC_BTR1_CLKDIV_Pos) /*!< 0x00200000 */
#define FSMC_BTR1_CLKDIV_2    (0x4U << FSMC_BTR1_CLKDIV_Pos) /*!< 0x00400000 */
#define FSMC_BTR1_CLKDIV_3    (0x8U << FSMC_BTR1_CLKDIV_Pos) /*!< 0x00800000 */

#define FSMC_BTR1_DATLAT_Pos  (24U)
#define FSMC_BTR1_DATLAT_Msk  (0xFU << FSMC_BTR1_DATLAT_Pos) /*!< 0x0F000000 */
#define FSMC_BTR1_DATLAT      FSMC_BTR1_DATLAT_Msk           /*!<DATLA[3:0] bits (Data latency) */
#define FSMC_BTR1_DATLAT_0    (0x1U << FSMC_BTR1_DATLAT_Pos) /*!< 0x01000000 */
#define FSMC_BTR1_DATLAT_1    (0x2U << FSMC_BTR1_DATLAT_Pos) /*!< 0x02000000 */
#define FSMC_BTR1_DATLAT_2    (0x4U << FSMC_BTR1_DATLAT_Pos) /*!< 0x04000000 */
#define FSMC_BTR1_DATLAT_3    (0x8U << FSMC_BTR1_DATLAT_Pos) /*!< 0x08000000 */

#define FSMC_BTR1_ACCMOD_Pos  (28U)
#define FSMC_BTR1_ACCMOD_Msk  (0x3U << FSMC_BTR1_ACCMOD_Pos) /*!< 0x30000000 */
#define FSMC_BTR1_ACCMOD      FSMC_BTR1_ACCMOD_Msk           /*!<ACCMOD[1:0] bits (Access mode) */
#define FSMC_BTR1_ACCMOD_0    (0x1U << FSMC_BTR1_ACCMOD_Pos) /*!< 0x10000000 */
#define FSMC_BTR1_ACCMOD_1    (0x2U << FSMC_BTR1_ACCMOD_Pos) /*!< 0x20000000 */

/******************  Bit definition for FSMC_BTR2 register  *******************/
#define FSMC_BTR2_ADDSET_Pos  (0U)
#define FSMC_BTR2_ADDSET_Msk  (0xFU << FSMC_BTR2_ADDSET_Pos) /*!< 0x0000000F */
#define FSMC_BTR2_ADDSET      FSMC_BTR2_ADDSET_Msk           /*!<ADDSET[3:0] bits (Address setup phase duration) */
#define FSMC_BTR2_ADDSET_0    (0x1U << FSMC_BTR2_ADDSET_Pos) /*!< 0x00000001 */
#define FSMC_BTR2_ADDSET_1    (0x2U << FSMC_BTR2_ADDSET_Pos) /*!< 0x00000002 */
#define FSMC_BTR2_ADDSET_2    (0x4U << FSMC_BTR2_ADDSET_Pos) /*!< 0x00000004 */
#define FSMC_BTR2_ADDSET_3    (0x8U << FSMC_BTR2_ADDSET_Pos) /*!< 0x00000008 */

#define FSMC_BTR2_ADDHLD_Pos  (4U)
#define FSMC_BTR2_ADDHLD_Msk  (0xFU << FSMC_BTR2_ADDHLD_Pos) /*!< 0x000000F0 */
#define FSMC_BTR2_ADDHLD      FSMC_BTR2_ADDHLD_Msk           /*!<ADDHLD[3:0] bits (Address-hold phase duration) */
#define FSMC_BTR2_ADDHLD_0    (0x1U << FSMC_BTR2_ADDHLD_Pos) /*!< 0x00000010 */
#define FSMC_BTR2_ADDHLD_1    (0x2U << FSMC_BTR2_ADDHLD_Pos) /*!< 0x00000020 */
#define FSMC_BTR2_ADDHLD_2    (0x4U << FSMC_BTR2_ADDHLD_Pos) /*!< 0x00000040 */
#define FSMC_BTR2_ADDHLD_3    (0x8U << FSMC_BTR2_ADDHLD_Pos) /*!< 0x00000080 */

#define FSMC_BTR2_DATAST_Pos  (8U)
#define FSMC_BTR2_DATAST_Msk  (0xFFU << FSMC_BTR2_DATAST_Pos) /*!< 0x0000FF00 */
#define FSMC_BTR2_DATAST      FSMC_BTR2_DATAST_Msk            /*!<DATAST [7:0] bits (Data-phase duration) */
#define FSMC_BTR2_DATAST_0    (0x01U << FSMC_BTR2_DATAST_Pos) /*!< 0x00000100 */
#define FSMC_BTR2_DATAST_1    (0x02U << FSMC_BTR2_DATAST_Pos) /*!< 0x00000200 */
#define FSMC_BTR2_DATAST_2    (0x04U << FSMC_BTR2_DATAST_Pos) /*!< 0x00000400 */
#define FSMC_BTR2_DATAST_3    (0x08U << FSMC_BTR2_DATAST_Pos) /*!< 0x00000800 */
#define FSMC_BTR2_DATAST_4    (0x10U << FSMC_BTR2_DATAST_Pos) /*!< 0x00001000 */
#define FSMC_BTR2_DATAST_5    (0x20U << FSMC_BTR2_DATAST_Pos) /*!< 0x00002000 */
#define FSMC_BTR2_DATAST_6    (0x40U << FSMC_BTR2_DATAST_Pos) /*!< 0x00004000 */
#define FSMC_BTR2_DATAST_7    (0x80U << FSMC_BTR2_DATAST_Pos) /*!< 0x00008000 */

#define FSMC_BTR2_BUSTURN_Pos (16U)
#define FSMC_BTR2_BUSTURN_Msk (0xFU << FSMC_BTR2_BUSTURN_Pos) /*!< 0x000F0000 */
#define FSMC_BTR2_BUSTURN     FSMC_BTR2_BUSTURN_Msk           /*!<BUSTURN[3:0] bits (Bus turnaround phase duration) */
#define FSMC_BTR2_BUSTURN_0   (0x1U << FSMC_BTR2_BUSTURN_Pos) /*!< 0x00010000 */
#define FSMC_BTR2_BUSTURN_1   (0x2U << FSMC_BTR2_BUSTURN_Pos) /*!< 0x00020000 */
#define FSMC_BTR2_BUSTURN_2   (0x4U << FSMC_BTR2_BUSTURN_Pos) /*!< 0x00040000 */
#define FSMC_BTR2_BUSTURN_3   (0x8U << FSMC_BTR2_BUSTURN_Pos) /*!< 0x00080000 */

#define FSMC_BTR2_CLKDIV_Pos  (20U)
#define FSMC_BTR2_CLKDIV_Msk  (0xFU << FSMC_BTR2_CLKDIV_Pos) /*!< 0x00F00000 */
#define FSMC_BTR2_CLKDIV      FSMC_BTR2_CLKDIV_Msk           /*!<CLKDIV[3:0] bits (Clock divide ratio) */
#define FSMC_BTR2_CLKDIV_0    (0x1U << FSMC_BTR2_CLKDIV_Pos) /*!< 0x00100000 */
#define FSMC_BTR2_CLKDIV_1    (0x2U << FSMC_BTR2_CLKDIV_Pos) /*!< 0x00200000 */
#define FSMC_BTR2_CLKDIV_2    (0x4U << FSMC_BTR2_CLKDIV_Pos) /*!< 0x00400000 */
#define FSMC_BTR2_CLKDIV_3    (0x8U << FSMC_BTR2_CLKDIV_Pos) /*!< 0x00800000 */

#define FSMC_BTR2_DATLAT_Pos  (24U)
#define FSMC_BTR2_DATLAT_Msk  (0xFU << FSMC_BTR2_DATLAT_Pos) /*!< 0x0F000000 */
#define FSMC_BTR2_DATLAT      FSMC_BTR2_DATLAT_Msk           /*!<DATLA[3:0] bits (Data latency) */
#define FSMC_BTR2_DATLAT_0    (0x1U << FSMC_BTR2_DATLAT_Pos) /*!< 0x01000000 */
#define FSMC_BTR2_DATLAT_1    (0x2U << FSMC_BTR2_DATLAT_Pos) /*!< 0x02000000 */
#define FSMC_BTR2_DATLAT_2    (0x4U << FSMC_BTR2_DATLAT_Pos) /*!< 0x04000000 */
#define FSMC_BTR2_DATLAT_3    (0x8U << FSMC_BTR2_DATLAT_Pos) /*!< 0x08000000 */

#define FSMC_BTR2_ACCMOD_Pos  (28U)
#define FSMC_BTR2_ACCMOD_Msk  (0x3U << FSMC_BTR2_ACCMOD_Pos) /*!< 0x30000000 */
#define FSMC_BTR2_ACCMOD      FSMC_BTR2_ACCMOD_Msk           /*!<ACCMOD[1:0] bits (Access mode) */
#define FSMC_BTR2_ACCMOD_0    (0x1U << FSMC_BTR2_ACCMOD_Pos) /*!< 0x10000000 */
#define FSMC_BTR2_ACCMOD_1    (0x2U << FSMC_BTR2_ACCMOD_Pos) /*!< 0x20000000 */

/*******************  Bit definition for FSMC_BTR3 register  *******************/
#define FSMC_BTR3_ADDSET_Pos  (0U)
#define FSMC_BTR3_ADDSET_Msk  (0xFU << FSMC_BTR3_ADDSET_Pos) /*!< 0x0000000F */
#define FSMC_BTR3_ADDSET      FSMC_BTR3_ADDSET_Msk           /*!<ADDSET[3:0] bits (Address setup phase duration) */
#define FSMC_BTR3_ADDSET_0    (0x1U << FSMC_BTR3_ADDSET_Pos) /*!< 0x00000001 */
#define FSMC_BTR3_ADDSET_1    (0x2U << FSMC_BTR3_ADDSET_Pos) /*!< 0x00000002 */
#define FSMC_BTR3_ADDSET_2    (0x4U << FSMC_BTR3_ADDSET_Pos) /*!< 0x00000004 */
#define FSMC_BTR3_ADDSET_3    (0x8U << FSMC_BTR3_ADDSET_Pos) /*!< 0x00000008 */

#define FSMC_BTR3_ADDHLD_Pos  (4U)
#define FSMC_BTR3_ADDHLD_Msk  (0xFU << FSMC_BTR3_ADDHLD_Pos) /*!< 0x000000F0 */
#define FSMC_BTR3_ADDHLD      FSMC_BTR3_ADDHLD_Msk           /*!<ADDHLD[3:0] bits (Address-hold phase duration) */
#define FSMC_BTR3_ADDHLD_0    (0x1U << FSMC_BTR3_ADDHLD_Pos) /*!< 0x00000010 */
#define FSMC_BTR3_ADDHLD_1    (0x2U << FSMC_BTR3_ADDHLD_Pos) /*!< 0x00000020 */
#define FSMC_BTR3_ADDHLD_2    (0x4U << FSMC_BTR3_ADDHLD_Pos) /*!< 0x00000040 */
#define FSMC_BTR3_ADDHLD_3    (0x8U << FSMC_BTR3_ADDHLD_Pos) /*!< 0x00000080 */

#define FSMC_BTR3_DATAST_Pos  (8U)
#define FSMC_BTR3_DATAST_Msk  (0xFFU << FSMC_BTR3_DATAST_Pos) /*!< 0x0000FF00 */
#define FSMC_BTR3_DATAST      FSMC_BTR3_DATAST_Msk            /*!<DATAST [7:0] bits (Data-phase duration) */
#define FSMC_BTR3_DATAST_0    (0x01U << FSMC_BTR3_DATAST_Pos) /*!< 0x00000100 */
#define FSMC_BTR3_DATAST_1    (0x02U << FSMC_BTR3_DATAST_Pos) /*!< 0x00000200 */
#define FSMC_BTR3_DATAST_2    (0x04U << FSMC_BTR3_DATAST_Pos) /*!< 0x00000400 */
#define FSMC_BTR3_DATAST_3    (0x08U << FSMC_BTR3_DATAST_Pos) /*!< 0x00000800 */
#define FSMC_BTR3_DATAST_4    (0x10U << FSMC_BTR3_DATAST_Pos) /*!< 0x00001000 */
#define FSMC_BTR3_DATAST_5    (0x20U << FSMC_BTR3_DATAST_Pos) /*!< 0x00002000 */
#define FSMC_BTR3_DATAST_6    (0x40U << FSMC_BTR3_DATAST_Pos) /*!< 0x00004000 */
#define FSMC_BTR3_DATAST_7    (0x80U << FSMC_BTR3_DATAST_Pos) /*!< 0x00008000 */

#define FSMC_BTR3_BUSTURN_Pos (16U)
#define FSMC_BTR3_BUSTURN_Msk (0xFU << FSMC_BTR3_BUSTURN_Pos) /*!< 0x000F0000 */
#define FSMC_BTR3_BUSTURN     FSMC_BTR3_BUSTURN_Msk           /*!<BUSTURN[3:0] bits (Bus turnaround phase duration) */
#define FSMC_BTR3_BUSTURN_0   (0x1U << FSMC_BTR3_BUSTURN_Pos) /*!< 0x00010000 */
#define FSMC_BTR3_BUSTURN_1   (0x2U << FSMC_BTR3_BUSTURN_Pos) /*!< 0x00020000 */
#define FSMC_BTR3_BUSTURN_2   (0x4U << FSMC_BTR3_BUSTURN_Pos) /*!< 0x00040000 */
#define FSMC_BTR3_BUSTURN_3   (0x8U << FSMC_BTR3_BUSTURN_Pos) /*!< 0x00080000 */

#define FSMC_BTR3_CLKDIV_Pos  (20U)
#define FSMC_BTR3_CLKDIV_Msk  (0xFU << FSMC_BTR3_CLKDIV_Pos) /*!< 0x00F00000 */
#define FSMC_BTR3_CLKDIV      FSMC_BTR3_CLKDIV_Msk           /*!<CLKDIV[3:0] bits (Clock divide ratio) */
#define FSMC_BTR3_CLKDIV_0    (0x1U << FSMC_BTR3_CLKDIV_Pos) /*!< 0x00100000 */
#define FSMC_BTR3_CLKDIV_1    (0x2U << FSMC_BTR3_CLKDIV_Pos) /*!< 0x00200000 */
#define FSMC_BTR3_CLKDIV_2    (0x4U << FSMC_BTR3_CLKDIV_Pos) /*!< 0x00400000 */
#define FSMC_BTR3_CLKDIV_3    (0x8U << FSMC_BTR3_CLKDIV_Pos) /*!< 0x00800000 */

#define FSMC_BTR3_DATLAT_Pos  (24U)
#define FSMC_BTR3_DATLAT_Msk  (0xFU << FSMC_BTR3_DATLAT_Pos) /*!< 0x0F000000 */
#define FSMC_BTR3_DATLAT      FSMC_BTR3_DATLAT_Msk           /*!<DATLA[3:0] bits (Data latency) */
#define FSMC_BTR3_DATLAT_0    (0x1U << FSMC_BTR3_DATLAT_Pos) /*!< 0x01000000 */
#define FSMC_BTR3_DATLAT_1    (0x2U << FSMC_BTR3_DATLAT_Pos) /*!< 0x02000000 */
#define FSMC_BTR3_DATLAT_2    (0x4U << FSMC_BTR3_DATLAT_Pos) /*!< 0x04000000 */
#define FSMC_BTR3_DATLAT_3    (0x8U << FSMC_BTR3_DATLAT_Pos) /*!< 0x08000000 */

#define FSMC_BTR3_ACCMOD_Pos  (28U)
#define FSMC_BTR3_ACCMOD_Msk  (0x3U << FSMC_BTR3_ACCMOD_Pos) /*!< 0x30000000 */
#define FSMC_BTR3_ACCMOD      FSMC_BTR3_ACCMOD_Msk           /*!<ACCMOD[1:0] bits (Access mode) */
#define FSMC_BTR3_ACCMOD_0    (0x1U << FSMC_BTR3_ACCMOD_Pos) /*!< 0x10000000 */
#define FSMC_BTR3_ACCMOD_1    (0x2U << FSMC_BTR3_ACCMOD_Pos) /*!< 0x20000000 */

/******************  Bit definition for FSMC_BTR4 register  *******************/
#define FSMC_BTR4_ADDSET_Pos  (0U)
#define FSMC_BTR4_ADDSET_Msk  (0xFU << FSMC_BTR4_ADDSET_Pos) /*!< 0x0000000F */
#define FSMC_BTR4_ADDSET      FSMC_BTR4_ADDSET_Msk           /*!<ADDSET[3:0] bits (Address setup phase duration) */
#define FSMC_BTR4_ADDSET_0    (0x1U << FSMC_BTR4_ADDSET_Pos) /*!< 0x00000001 */
#define FSMC_BTR4_ADDSET_1    (0x2U << FSMC_BTR4_ADDSET_Pos) /*!< 0x00000002 */
#define FSMC_BTR4_ADDSET_2    (0x4U << FSMC_BTR4_ADDSET_Pos) /*!< 0x00000004 */
#define FSMC_BTR4_ADDSET_3    (0x8U << FSMC_BTR4_ADDSET_Pos) /*!< 0x00000008 */

#define FSMC_BTR4_ADDHLD_Pos  (4U)
#define FSMC_BTR4_ADDHLD_Msk  (0xFU << FSMC_BTR4_ADDHLD_Pos) /*!< 0x000000F0 */
#define FSMC_BTR4_ADDHLD      FSMC_BTR4_ADDHLD_Msk           /*!<ADDHLD[3:0] bits (Address-hold phase duration) */
#define FSMC_BTR4_ADDHLD_0    (0x1U << FSMC_BTR4_ADDHLD_Pos) /*!< 0x00000010 */
#define FSMC_BTR4_ADDHLD_1    (0x2U << FSMC_BTR4_ADDHLD_Pos) /*!< 0x00000020 */
#define FSMC_BTR4_ADDHLD_2    (0x4U << FSMC_BTR4_ADDHLD_Pos) /*!< 0x00000040 */
#define FSMC_BTR4_ADDHLD_3    (0x8U << FSMC_BTR4_ADDHLD_Pos) /*!< 0x00000080 */

#define FSMC_BTR4_DATAST_Pos  (8U)
#define FSMC_BTR4_DATAST_Msk  (0xFFU << FSMC_BTR4_DATAST_Pos) /*!< 0x0000FF00 */
#define FSMC_BTR4_DATAST      FSMC_BTR4_DATAST_Msk            /*!<DATAST [7:0] bits (Data-phase duration) */
#define FSMC_BTR4_DATAST_0    (0x01U << FSMC_BTR4_DATAST_Pos) /*!< 0x00000100 */
#define FSMC_BTR4_DATAST_1    (0x02U << FSMC_BTR4_DATAST_Pos) /*!< 0x00000200 */
#define FSMC_BTR4_DATAST_2    (0x04U << FSMC_BTR4_DATAST_Pos) /*!< 0x00000400 */
#define FSMC_BTR4_DATAST_3    (0x08U << FSMC_BTR4_DATAST_Pos) /*!< 0x00000800 */
#define FSMC_BTR4_DATAST_4    (0x10U << FSMC_BTR4_DATAST_Pos) /*!< 0x00001000 */
#define FSMC_BTR4_DATAST_5    (0x20U << FSMC_BTR4_DATAST_Pos) /*!< 0x00002000 */
#define FSMC_BTR4_DATAST_6    (0x40U << FSMC_BTR4_DATAST_Pos) /*!< 0x00004000 */
#define FSMC_BTR4_DATAST_7    (0x80U << FSMC_BTR4_DATAST_Pos) /*!< 0x00008000 */

#define FSMC_BTR4_BUSTURN_Pos (16U)
#define FSMC_BTR4_BUSTURN_Msk (0xFU << FSMC_BTR4_BUSTURN_Pos) /*!< 0x000F0000 */
#define FSMC_BTR4_BUSTURN     FSMC_BTR4_BUSTURN_Msk           /*!<BUSTURN[3:0] bits (Bus turnaround phase duration) */
#define FSMC_BTR4_BUSTURN_0   (0x1U << FSMC_BTR4_BUSTURN_Pos) /*!< 0x00010000 */
#define FSMC_BTR4_BUSTURN_1   (0x2U << FSMC_BTR4_BUSTURN_Pos) /*!< 0x00020000 */
#define FSMC_BTR4_BUSTURN_2   (0x4U << FSMC_BTR4_BUSTURN_Pos) /*!< 0x00040000 */
#define FSMC_BTR4_BUSTURN_3   (0x8U << FSMC_BTR4_BUSTURN_Pos) /*!< 0x00080000 */

#define FSMC_BTR4_CLKDIV_Pos  (20U)
#define FSMC_BTR4_CLKDIV_Msk  (0xFU << FSMC_BTR4_CLKDIV_Pos) /*!< 0x00F00000 */
#define FSMC_BTR4_CLKDIV      FSMC_BTR4_CLKDIV_Msk           /*!<CLKDIV[3:0] bits (Clock divide ratio) */
#define FSMC_BTR4_CLKDIV_0    (0x1U << FSMC_BTR4_CLKDIV_Pos) /*!< 0x00100000 */
#define FSMC_BTR4_CLKDIV_1    (0x2U << FSMC_BTR4_CLKDIV_Pos) /*!< 0x00200000 */
#define FSMC_BTR4_CLKDIV_2    (0x4U << FSMC_BTR4_CLKDIV_Pos) /*!< 0x00400000 */
#define FSMC_BTR4_CLKDIV_3    (0x8U << FSMC_BTR4_CLKDIV_Pos) /*!< 0x00800000 */

#define FSMC_BTR4_DATLAT_Pos  (24U)
#define FSMC_BTR4_DATLAT_Msk  (0xFU << FSMC_BTR4_DATLAT_Pos) /*!< 0x0F000000 */
#define FSMC_BTR4_DATLAT      FSMC_BTR4_DATLAT_Msk           /*!<DATLA[3:0] bits (Data latency) */
#define FSMC_BTR4_DATLAT_0    (0x1U << FSMC_BTR4_DATLAT_Pos) /*!< 0x01000000 */
#define FSMC_BTR4_DATLAT_1    (0x2U << FSMC_BTR4_DATLAT_Pos) /*!< 0x02000000 */
#define FSMC_BTR4_DATLAT_2    (0x4U << FSMC_BTR4_DATLAT_Pos) /*!< 0x04000000 */
#define FSMC_BTR4_DATLAT_3    (0x8U << FSMC_BTR4_DATLAT_Pos) /*!< 0x08000000 */

#define FSMC_BTR4_ACCMOD_Pos  (28U)
#define FSMC_BTR4_ACCMOD_Msk  (0x3U << FSMC_BTR4_ACCMOD_Pos) /*!< 0x30000000 */
#define FSMC_BTR4_ACCMOD      FSMC_BTR4_ACCMOD_Msk           /*!<ACCMOD[1:0] bits (Access mode) */
#define FSMC_BTR4_ACCMOD_0    (0x1U << FSMC_BTR4_ACCMOD_Pos) /*!< 0x10000000 */
#define FSMC_BTR4_ACCMOD_1    (0x2U << FSMC_BTR4_ACCMOD_Pos) /*!< 0x20000000 */

/******************  Bit definition for FSMC_BWTR1 register  ******************/
#define FSMC_BWTR1_ADDSET_Pos  (0U)
#define FSMC_BWTR1_ADDSET_Msk  (0xFU << FSMC_BWTR1_ADDSET_Pos) /*!< 0x0000000F */
#define FSMC_BWTR1_ADDSET      FSMC_BWTR1_ADDSET_Msk           /*!<ADDSET[3:0] bits (Address setup phase duration) */
#define FSMC_BWTR1_ADDSET_0    (0x1U << FSMC_BWTR1_ADDSET_Pos) /*!< 0x00000001 */
#define FSMC_BWTR1_ADDSET_1    (0x2U << FSMC_BWTR1_ADDSET_Pos) /*!< 0x00000002 */
#define FSMC_BWTR1_ADDSET_2    (0x4U << FSMC_BWTR1_ADDSET_Pos) /*!< 0x00000004 */
#define FSMC_BWTR1_ADDSET_3    (0x8U << FSMC_BWTR1_ADDSET_Pos) /*!< 0x00000008 */

#define FSMC_BWTR1_ADDHLD_Pos  (4U)
#define FSMC_BWTR1_ADDHLD_Msk  (0xFU << FSMC_BWTR1_ADDHLD_Pos) /*!< 0x000000F0 */
#define FSMC_BWTR1_ADDHLD      FSMC_BWTR1_ADDHLD_Msk           /*!<ADDHLD[3:0] bits (Address-hold phase duration) */
#define FSMC_BWTR1_ADDHLD_0    (0x1U << FSMC_BWTR1_ADDHLD_Pos) /*!< 0x00000010 */
#define FSMC_BWTR1_ADDHLD_1    (0x2U << FSMC_BWTR1_ADDHLD_Pos) /*!< 0x00000020 */
#define FSMC_BWTR1_ADDHLD_2    (0x4U << FSMC_BWTR1_ADDHLD_Pos) /*!< 0x00000040 */
#define FSMC_BWTR1_ADDHLD_3    (0x8U << FSMC_BWTR1_ADDHLD_Pos) /*!< 0x00000080 */

#define FSMC_BWTR1_DATAST_Pos  (8U)
#define FSMC_BWTR1_DATAST_Msk  (0xFFU << FSMC_BWTR1_DATAST_Pos) /*!< 0x0000FF00 */
#define FSMC_BWTR1_DATAST      FSMC_BWTR1_DATAST_Msk            /*!<DATAST [7:0] bits (Data-phase duration) */
#define FSMC_BWTR1_DATAST_0    (0x01U << FSMC_BWTR1_DATAST_Pos) /*!< 0x00000100 */
#define FSMC_BWTR1_DATAST_1    (0x02U << FSMC_BWTR1_DATAST_Pos) /*!< 0x00000200 */
#define FSMC_BWTR1_DATAST_2    (0x04U << FSMC_BWTR1_DATAST_Pos) /*!< 0x00000400 */
#define FSMC_BWTR1_DATAST_3    (0x08U << FSMC_BWTR1_DATAST_Pos) /*!< 0x00000800 */
#define FSMC_BWTR1_DATAST_4    (0x10U << FSMC_BWTR1_DATAST_Pos) /*!< 0x00001000 */
#define FSMC_BWTR1_DATAST_5    (0x20U << FSMC_BWTR1_DATAST_Pos) /*!< 0x00002000 */
#define FSMC_BWTR1_DATAST_6    (0x40U << FSMC_BWTR1_DATAST_Pos) /*!< 0x00004000 */
#define FSMC_BWTR1_DATAST_7    (0x80U << FSMC_BWTR1_DATAST_Pos) /*!< 0x00008000 */

#define FSMC_BWTR1_BUSTURN_Pos (16U)
#define FSMC_BWTR1_BUSTURN_Msk (0xFU << FSMC_BWTR1_BUSTURN_Pos) /*!< 0x000F0000 */
#define FSMC_BWTR1_BUSTURN     FSMC_BWTR1_BUSTURN_Msk           /*!<BUSTURN[3:0] bits (Bus turnaround duration) */
#define FSMC_BWTR1_BUSTURN_0   (0x1U << FSMC_BWTR1_BUSTURN_Pos) /*!< 0x00010000 */
#define FSMC_BWTR1_BUSTURN_1   (0x2U << FSMC_BWTR1_BUSTURN_Pos) /*!< 0x00020000 */
#define FSMC_BWTR1_BUSTURN_2   (0x4U << FSMC_BWTR1_BUSTURN_Pos) /*!< 0x00040000 */
#define FSMC_BWTR1_BUSTURN_3   (0x8U << FSMC_BWTR1_BUSTURN_Pos) /*!< 0x00080000 */

#define FSMC_BWTR1_ACCMOD_Pos  (28U)
#define FSMC_BWTR1_ACCMOD_Msk  (0x3U << FSMC_BWTR1_ACCMOD_Pos) /*!< 0x30000000 */
#define FSMC_BWTR1_ACCMOD      FSMC_BWTR1_ACCMOD_Msk           /*!<ACCMOD[1:0] bits (Access mode) */
#define FSMC_BWTR1_ACCMOD_0    (0x1U << FSMC_BWTR1_ACCMOD_Pos) /*!< 0x10000000 */
#define FSMC_BWTR1_ACCMOD_1    (0x2U << FSMC_BWTR1_ACCMOD_Pos) /*!< 0x20000000 */

/******************  Bit definition for FSMC_BWTR2 register  ******************/
#define FSMC_BWTR2_ADDSET_Pos  (0U)
#define FSMC_BWTR2_ADDSET_Msk  (0xFU << FSMC_BWTR2_ADDSET_Pos) /*!< 0x0000000F */
#define FSMC_BWTR2_ADDSET      FSMC_BWTR2_ADDSET_Msk           /*!<ADDSET[3:0] bits (Address setup phase duration) */
#define FSMC_BWTR2_ADDSET_0    (0x1U << FSMC_BWTR2_ADDSET_Pos) /*!< 0x00000001 */
#define FSMC_BWTR2_ADDSET_1    (0x2U << FSMC_BWTR2_ADDSET_Pos) /*!< 0x00000002 */
#define FSMC_BWTR2_ADDSET_2    (0x4U << FSMC_BWTR2_ADDSET_Pos) /*!< 0x00000004 */
#define FSMC_BWTR2_ADDSET_3    (0x8U << FSMC_BWTR2_ADDSET_Pos) /*!< 0x00000008 */

#define FSMC_BWTR2_ADDHLD_Pos  (4U)
#define FSMC_BWTR2_ADDHLD_Msk  (0xFU << FSMC_BWTR2_ADDHLD_Pos) /*!< 0x000000F0 */
#define FSMC_BWTR2_ADDHLD      FSMC_BWTR2_ADDHLD_Msk           /*!<ADDHLD[3:0] bits (Address-hold phase duration) */
#define FSMC_BWTR2_ADDHLD_0    (0x1U << FSMC_BWTR2_ADDHLD_Pos) /*!< 0x00000010 */
#define FSMC_BWTR2_ADDHLD_1    (0x2U << FSMC_BWTR2_ADDHLD_Pos) /*!< 0x00000020 */
#define FSMC_BWTR2_ADDHLD_2    (0x4U << FSMC_BWTR2_ADDHLD_Pos) /*!< 0x00000040 */
#define FSMC_BWTR2_ADDHLD_3    (0x8U << FSMC_BWTR2_ADDHLD_Pos) /*!< 0x00000080 */

#define FSMC_BWTR2_DATAST_Pos  (8U)
#define FSMC_BWTR2_DATAST_Msk  (0xFFU << FSMC_BWTR2_DATAST_Pos) /*!< 0x0000FF00 */
#define FSMC_BWTR2_DATAST      FSMC_BWTR2_DATAST_Msk            /*!<DATAST [7:0] bits (Data-phase duration) */
#define FSMC_BWTR2_DATAST_0    (0x01U << FSMC_BWTR2_DATAST_Pos) /*!< 0x00000100 */
#define FSMC_BWTR2_DATAST_1    (0x02U << FSMC_BWTR2_DATAST_Pos) /*!< 0x00000200 */
#define FSMC_BWTR2_DATAST_2    (0x04U << FSMC_BWTR2_DATAST_Pos) /*!< 0x00000400 */
#define FSMC_BWTR2_DATAST_3    (0x08U << FSMC_BWTR2_DATAST_Pos) /*!< 0x00000800 */
#define FSMC_BWTR2_DATAST_4    (0x10U << FSMC_BWTR2_DATAST_Pos) /*!< 0x00001000 */
#define FSMC_BWTR2_DATAST_5    (0x20U << FSMC_BWTR2_DATAST_Pos) /*!< 0x00002000 */
#define FSMC_BWTR2_DATAST_6    (0x40U << FSMC_BWTR2_DATAST_Pos) /*!< 0x00004000 */
#define FSMC_BWTR2_DATAST_7    (0x80U << FSMC_BWTR2_DATAST_Pos) /*!< 0x00008000 */

#define FSMC_BWTR2_BUSTURN_Pos (16U)
#define FSMC_BWTR2_BUSTURN_Msk (0xFU << FSMC_BWTR2_BUSTURN_Pos) /*!< 0x000F0000 */
#define FSMC_BWTR2_BUSTURN     FSMC_BWTR2_BUSTURN_Msk           /*!<BUSTURN[3:0] bits (Bus turnaround duration) */
#define FSMC_BWTR2_BUSTURN_0   (0x1U << FSMC_BWTR2_BUSTURN_Pos) /*!< 0x00010000 */
#define FSMC_BWTR2_BUSTURN_1   (0x2U << FSMC_BWTR2_BUSTURN_Pos) /*!< 0x00020000 */
#define FSMC_BWTR2_BUSTURN_2   (0x4U << FSMC_BWTR2_BUSTURN_Pos) /*!< 0x00040000 */
#define FSMC_BWTR2_BUSTURN_3   (0x8U << FSMC_BWTR2_BUSTURN_Pos) /*!< 0x00080000 */

#define FSMC_BWTR2_ACCMOD_Pos  (28U)
#define FSMC_BWTR2_ACCMOD_Msk  (0x3U << FSMC_BWTR2_ACCMOD_Pos) /*!< 0x30000000 */
#define FSMC_BWTR2_ACCMOD      FSMC_BWTR2_ACCMOD_Msk           /*!<ACCMOD[1:0] bits (Access mode) */
#define FSMC_BWTR2_ACCMOD_0    (0x1U << FSMC_BWTR2_ACCMOD_Pos) /*!< 0x10000000 */
#define FSMC_BWTR2_ACCMOD_1    (0x2U << FSMC_BWTR2_ACCMOD_Pos) /*!< 0x20000000 */

/******************  Bit definition for FSMC_BWTR3 register  ******************/
#define FSMC_BWTR3_ADDSET_Pos  (0U)
#define FSMC_BWTR3_ADDSET_Msk  (0xFU << FSMC_BWTR3_ADDSET_Pos) /*!< 0x0000000F */
#define FSMC_BWTR3_ADDSET      FSMC_BWTR3_ADDSET_Msk           /*!<ADDSET[3:0] bits (Address setup phase duration) */
#define FSMC_BWTR3_ADDSET_0    (0x1U << FSMC_BWTR3_ADDSET_Pos) /*!< 0x00000001 */
#define FSMC_BWTR3_ADDSET_1    (0x2U << FSMC_BWTR3_ADDSET_Pos) /*!< 0x00000002 */
#define FSMC_BWTR3_ADDSET_2    (0x4U << FSMC_BWTR3_ADDSET_Pos) /*!< 0x00000004 */
#define FSMC_BWTR3_ADDSET_3    (0x8U << FSMC_BWTR3_ADDSET_Pos) /*!< 0x00000008 */

#define FSMC_BWTR3_ADDHLD_Pos  (4U)
#define FSMC_BWTR3_ADDHLD_Msk  (0xFU << FSMC_BWTR3_ADDHLD_Pos) /*!< 0x000000F0 */
#define FSMC_BWTR3_ADDHLD      FSMC_BWTR3_ADDHLD_Msk           /*!<ADDHLD[3:0] bits (Address-hold phase duration) */
#define FSMC_BWTR3_ADDHLD_0    (0x1U << FSMC_BWTR3_ADDHLD_Pos) /*!< 0x00000010 */
#define FSMC_BWTR3_ADDHLD_1    (0x2U << FSMC_BWTR3_ADDHLD_Pos) /*!< 0x00000020 */
#define FSMC_BWTR3_ADDHLD_2    (0x4U << FSMC_BWTR3_ADDHLD_Pos) /*!< 0x00000040 */
#define FSMC_BWTR3_ADDHLD_3    (0x8U << FSMC_BWTR3_ADDHLD_Pos) /*!< 0x00000080 */

#define FSMC_BWTR3_DATAST_Pos  (8U)
#define FSMC_BWTR3_DATAST_Msk  (0xFFU << FSMC_BWTR3_DATAST_Pos) /*!< 0x0000FF00 */
#define FSMC_BWTR3_DATAST      FSMC_BWTR3_DATAST_Msk            /*!<DATAST [7:0] bits (Data-phase duration) */
#define FSMC_BWTR3_DATAST_0    (0x01U << FSMC_BWTR3_DATAST_Pos) /*!< 0x00000100 */
#define FSMC_BWTR3_DATAST_1    (0x02U << FSMC_BWTR3_DATAST_Pos) /*!< 0x00000200 */
#define FSMC_BWTR3_DATAST_2    (0x04U << FSMC_BWTR3_DATAST_Pos) /*!< 0x00000400 */
#define FSMC_BWTR3_DATAST_3    (0x08U << FSMC_BWTR3_DATAST_Pos) /*!< 0x00000800 */
#define FSMC_BWTR3_DATAST_4    (0x10U << FSMC_BWTR3_DATAST_Pos) /*!< 0x00001000 */
#define FSMC_BWTR3_DATAST_5    (0x20U << FSMC_BWTR3_DATAST_Pos) /*!< 0x00002000 */
#define FSMC_BWTR3_DATAST_6    (0x40U << FSMC_BWTR3_DATAST_Pos) /*!< 0x00004000 */
#define FSMC_BWTR3_DATAST_7    (0x80U << FSMC_BWTR3_DATAST_Pos) /*!< 0x00008000 */

#define FSMC_BWTR3_BUSTURN_Pos (16U)
#define FSMC_BWTR3_BUSTURN_Msk (0xFU << FSMC_BWTR3_BUSTURN_Pos) /*!< 0x000F0000 */
#define FSMC_BWTR3_BUSTURN     FSMC_BWTR3_BUSTURN_Msk           /*!<BUSTURN[3:0] bits (Bus turnaround duration) */
#define FSMC_BWTR3_BUSTURN_0   (0x1U << FSMC_BWTR3_BUSTURN_Pos) /*!< 0x00010000 */
#define FSMC_BWTR3_BUSTURN_1   (0x2U << FSMC_BWTR3_BUSTURN_Pos) /*!< 0x00020000 */
#define FSMC_BWTR3_BUSTURN_2   (0x4U << FSMC_BWTR3_BUSTURN_Pos) /*!< 0x00040000 */
#define FSMC_BWTR3_BUSTURN_3   (0x8U << FSMC_BWTR3_BUSTURN_Pos) /*!< 0x00080000 */

#define FSMC_BWTR3_ACCMOD_Pos  (28U)
#define FSMC_BWTR3_ACCMOD_Msk  (0x3U << FSMC_BWTR3_ACCMOD_Pos) /*!< 0x30000000 */
#define FSMC_BWTR3_ACCMOD      FSMC_BWTR3_ACCMOD_Msk           /*!<ACCMOD[1:0] bits (Access mode) */
#define FSMC_BWTR3_ACCMOD_0    (0x1U << FSMC_BWTR3_ACCMOD_Pos) /*!< 0x10000000 */
#define FSMC_BWTR3_ACCMOD_1    (0x2U << FSMC_BWTR3_ACCMOD_Pos) /*!< 0x20000000 */

/******************  Bit definition for FSMC_BWTR4 register  ******************/
#define FSMC_BWTR4_ADDSET_Pos  (0U)
#define FSMC_BWTR4_ADDSET_Msk  (0xFU << FSMC_BWTR4_ADDSET_Pos) /*!< 0x0000000F */
#define FSMC_BWTR4_ADDSET      FSMC_BWTR4_ADDSET_Msk           /*!<ADDSET[3:0] bits (Address setup phase duration) */
#define FSMC_BWTR4_ADDSET_0    (0x1U << FSMC_BWTR4_ADDSET_Pos) /*!< 0x00000001 */
#define FSMC_BWTR4_ADDSET_1    (0x2U << FSMC_BWTR4_ADDSET_Pos) /*!< 0x00000002 */
#define FSMC_BWTR4_ADDSET_2    (0x4U << FSMC_BWTR4_ADDSET_Pos) /*!< 0x00000004 */
#define FSMC_BWTR4_ADDSET_3    (0x8U << FSMC_BWTR4_ADDSET_Pos) /*!< 0x00000008 */

#define FSMC_BWTR4_ADDHLD_Pos  (4U)
#define FSMC_BWTR4_ADDHLD_Msk  (0xFU << FSMC_BWTR4_ADDHLD_Pos) /*!< 0x000000F0 */
#define FSMC_BWTR4_ADDHLD      FSMC_BWTR4_ADDHLD_Msk           /*!<ADDHLD[3:0] bits (Address-hold phase duration) */
#define FSMC_BWTR4_ADDHLD_0    (0x1U << FSMC_BWTR4_ADDHLD_Pos) /*!< 0x00000010 */
#define FSMC_BWTR4_ADDHLD_1    (0x2U << FSMC_BWTR4_ADDHLD_Pos) /*!< 0x00000020 */
#define FSMC_BWTR4_ADDHLD_2    (0x4U << FSMC_BWTR4_ADDHLD_Pos) /*!< 0x00000040 */
#define FSMC_BWTR4_ADDHLD_3    (0x8U << FSMC_BWTR4_ADDHLD_Pos) /*!< 0x00000080 */

#define FSMC_BWTR4_DATAST_Pos  (8U)
#define FSMC_BWTR4_DATAST_Msk  (0xFFU << FSMC_BWTR4_DATAST_Pos) /*!< 0x0000FF00 */
#define FSMC_BWTR4_DATAST      FSMC_BWTR4_DATAST_Msk            /*!<DATAST [7:0] bits (Data-phase duration) */
#define FSMC_BWTR4_DATAST_0    0x00000100U                      /*!<Bit 0 */
#define FSMC_BWTR4_DATAST_1    0x00000200U                      /*!<Bit 1 */
#define FSMC_BWTR4_DATAST_2    0x00000400U                      /*!<Bit 2 */
#define FSMC_BWTR4_DATAST_3    0x00000800U                      /*!<Bit 3 */
#define FSMC_BWTR4_DATAST_4    0x00001000U                      /*!<Bit 4 */
#define FSMC_BWTR4_DATAST_5    0x00002000U                      /*!<Bit 5 */
#define FSMC_BWTR4_DATAST_6    0x00004000U                      /*!<Bit 6 */
#define FSMC_BWTR4_DATAST_7    0x00008000U                      /*!<Bit 7 */

#define FSMC_BWTR4_BUSTURN_Pos (16U)
#define FSMC_BWTR4_BUSTURN_Msk (0xFU << FSMC_BWTR4_BUSTURN_Pos) /*!< 0x000F0000 */
#define FSMC_BWTR4_BUSTURN     FSMC_BWTR4_BUSTURN_Msk           /*!<BUSTURN[3:0] bits (Bus turnaround duration) */
#define FSMC_BWTR4_BUSTURN_0   (0x1U << FSMC_BWTR4_BUSTURN_Pos) /*!< 0x00010000 */
#define FSMC_BWTR4_BUSTURN_1   (0x2U << FSMC_BWTR4_BUSTURN_Pos) /*!< 0x00020000 */
#define FSMC_BWTR4_BUSTURN_2   (0x4U << FSMC_BWTR4_BUSTURN_Pos) /*!< 0x00040000 */
#define FSMC_BWTR4_BUSTURN_3   (0x8U << FSMC_BWTR4_BUSTURN_Pos) /*!< 0x00080000 */

#define FSMC_BWTR4_ACCMOD_Pos  (28U)
#define FSMC_BWTR4_ACCMOD_Msk  (0x3U << FSMC_BWTR4_ACCMOD_Pos) /*!< 0x30000000 */
#define FSMC_BWTR4_ACCMOD      FSMC_BWTR4_ACCMOD_Msk           /*!<ACCMOD[1:0] bits (Access mode) */
#define FSMC_BWTR4_ACCMOD_0    (0x1U << FSMC_BWTR4_ACCMOD_Pos) /*!< 0x10000000 */
#define FSMC_BWTR4_ACCMOD_1    (0x2U << FSMC_BWTR4_ACCMOD_Pos) /*!< 0x20000000 */

/******************  Bit definition for FSMC_PCR2 register  *******************/
#define FSMC_PCR2_PWAITEN_Pos (1U)
#define FSMC_PCR2_PWAITEN_Msk (0x1U << FSMC_PCR2_PWAITEN_Pos) /*!< 0x00000002 */
#define FSMC_PCR2_PWAITEN     FSMC_PCR2_PWAITEN_Msk           /*!<Wait feature enable bit */
#define FSMC_PCR2_PBKEN_Pos   (2U)
#define FSMC_PCR2_PBKEN_Msk   (0x1U << FSMC_PCR2_PBKEN_Pos) /*!< 0x00000004 */
#define FSMC_PCR2_PBKEN       FSMC_PCR2_PBKEN_Msk           /*!<PC Card/NAND Flash memory bank enable bit */
#define FSMC_PCR2_PTYP_Pos    (3U)
#define FSMC_PCR2_PTYP_Msk    (0x1U << FSMC_PCR2_PTYP_Pos) /*!< 0x00000008 */
#define FSMC_PCR2_PTYP        FSMC_PCR2_PTYP_Msk           /*!<Memory type */

#define FSMC_PCR2_PWID_Pos    (4U)
#define FSMC_PCR2_PWID_Msk    (0x3U << FSMC_PCR2_PWID_Pos) /*!< 0x00000030 */
#define FSMC_PCR2_PWID        FSMC_PCR2_PWID_Msk           /*!<PWID[1:0] bits (NAND Flash databus width) */
#define FSMC_PCR2_PWID_0      (0x1U << FSMC_PCR2_PWID_Pos) /*!< 0x00000010 */
#define FSMC_PCR2_PWID_1      (0x2U << FSMC_PCR2_PWID_Pos) /*!< 0x00000020 */

#define FSMC_PCR2_ECCEN_Pos   (6U)
#define FSMC_PCR2_ECCEN_Msk   (0x1U << FSMC_PCR2_ECCEN_Pos) /*!< 0x00000040 */
#define FSMC_PCR2_ECCEN       FSMC_PCR2_ECCEN_Msk           /*!<ECC computation logic enable bit */

#define FSMC_PCR2_TCLR_Pos    (9U)
#define FSMC_PCR2_TCLR_Msk    (0xFU << FSMC_PCR2_TCLR_Pos) /*!< 0x00001E00 */
#define FSMC_PCR2_TCLR        FSMC_PCR2_TCLR_Msk           /*!<TCLR[3:0] bits (CLE to RE delay) */
#define FSMC_PCR2_TCLR_0      (0x1U << FSMC_PCR2_TCLR_Pos) /*!< 0x00000200 */
#define FSMC_PCR2_TCLR_1      (0x2U << FSMC_PCR2_TCLR_Pos) /*!< 0x00000400 */
#define FSMC_PCR2_TCLR_2      (0x4U << FSMC_PCR2_TCLR_Pos) /*!< 0x00000800 */
#define FSMC_PCR2_TCLR_3      (0x8U << FSMC_PCR2_TCLR_Pos) /*!< 0x00001000 */

#define FSMC_PCR2_TAR_Pos     (13U)
#define FSMC_PCR2_TAR_Msk     (0xFU << FSMC_PCR2_TAR_Pos) /*!< 0x0001E000 */
#define FSMC_PCR2_TAR         FSMC_PCR2_TAR_Msk           /*!<TAR[3:0] bits (ALE to RE delay) */
#define FSMC_PCR2_TAR_0       (0x1U << FSMC_PCR2_TAR_Pos) /*!< 0x00002000 */
#define FSMC_PCR2_TAR_1       (0x2U << FSMC_PCR2_TAR_Pos) /*!< 0x00004000 */
#define FSMC_PCR2_TAR_2       (0x4U << FSMC_PCR2_TAR_Pos) /*!< 0x00008000 */
#define FSMC_PCR2_TAR_3       (0x8U << FSMC_PCR2_TAR_Pos) /*!< 0x00010000 */

#define FSMC_PCR2_ECCPS_Pos   (17U)
#define FSMC_PCR2_ECCPS_Msk   (0x7U << FSMC_PCR2_ECCPS_Pos) /*!< 0x000E0000 */
#define FSMC_PCR2_ECCPS       FSMC_PCR2_ECCPS_Msk           /*!<ECCPS[1:0] bits (ECC page size) */
#define FSMC_PCR2_ECCPS_0     (0x1U << FSMC_PCR2_ECCPS_Pos) /*!< 0x00020000 */
#define FSMC_PCR2_ECCPS_1     (0x2U << FSMC_PCR2_ECCPS_Pos) /*!< 0x00040000 */
#define FSMC_PCR2_ECCPS_2     (0x4U << FSMC_PCR2_ECCPS_Pos) /*!< 0x00080000 */

/******************  Bit definition for FSMC_PCR3 register  *******************/
#define FSMC_PCR3_PWAITEN_Pos (1U)
#define FSMC_PCR3_PWAITEN_Msk (0x1U << FSMC_PCR3_PWAITEN_Pos) /*!< 0x00000002 */
#define FSMC_PCR3_PWAITEN     FSMC_PCR3_PWAITEN_Msk           /*!<Wait feature enable bit */
#define FSMC_PCR3_PBKEN_Pos   (2U)
#define FSMC_PCR3_PBKEN_Msk   (0x1U << FSMC_PCR3_PBKEN_Pos) /*!< 0x00000004 */
#define FSMC_PCR3_PBKEN       FSMC_PCR3_PBKEN_Msk           /*!<PC Card/NAND Flash memory bank enable bit */
#define FSMC_PCR3_PTYP_Pos    (3U)
#define FSMC_PCR3_PTYP_Msk    (0x1U << FSMC_PCR3_PTYP_Pos) /*!< 0x00000008 */
#define FSMC_PCR3_PTYP        FSMC_PCR3_PTYP_Msk           /*!<Memory type */

#define FSMC_PCR3_PWID_Pos    (4U)
#define FSMC_PCR3_PWID_Msk    (0x3U << FSMC_PCR3_PWID_Pos) /*!< 0x00000030 */
#define FSMC_PCR3_PWID        FSMC_PCR3_PWID_Msk           /*!<PWID[1:0] bits (NAND Flash databus width) */
#define FSMC_PCR3_PWID_0      (0x1U << FSMC_PCR3_PWID_Pos) /*!< 0x00000010 */
#define FSMC_PCR3_PWID_1      (0x2U << FSMC_PCR3_PWID_Pos) /*!< 0x00000020 */

#define FSMC_PCR3_ECCEN_Pos   (6U)
#define FSMC_PCR3_ECCEN_Msk   (0x1U << FSMC_PCR3_ECCEN_Pos) /*!< 0x00000040 */
#define FSMC_PCR3_ECCEN       FSMC_PCR3_ECCEN_Msk           /*!<ECC computation logic enable bit */

#define FSMC_PCR3_TCLR_Pos    (9U)
#define FSMC_PCR3_TCLR_Msk    (0xFU << FSMC_PCR3_TCLR_Pos) /*!< 0x00001E00 */
#define FSMC_PCR3_TCLR        FSMC_PCR3_TCLR_Msk           /*!<TCLR[3:0] bits (CLE to RE delay) */
#define FSMC_PCR3_TCLR_0      (0x1U << FSMC_PCR3_TCLR_Pos) /*!< 0x00000200 */
#define FSMC_PCR3_TCLR_1      (0x2U << FSMC_PCR3_TCLR_Pos) /*!< 0x00000400 */
#define FSMC_PCR3_TCLR_2      (0x4U << FSMC_PCR3_TCLR_Pos) /*!< 0x00000800 */
#define FSMC_PCR3_TCLR_3      (0x8U << FSMC_PCR3_TCLR_Pos) /*!< 0x00001000 */

#define FSMC_PCR3_TAR_Pos     (13U)
#define FSMC_PCR3_TAR_Msk     (0xFU << FSMC_PCR3_TAR_Pos) /*!< 0x0001E000 */
#define FSMC_PCR3_TAR         FSMC_PCR3_TAR_Msk           /*!<TAR[3:0] bits (ALE to RE delay) */
#define FSMC_PCR3_TAR_0       (0x1U << FSMC_PCR3_TAR_Pos) /*!< 0x00002000 */
#define FSMC_PCR3_TAR_1       (0x2U << FSMC_PCR3_TAR_Pos) /*!< 0x00004000 */
#define FSMC_PCR3_TAR_2       (0x4U << FSMC_PCR3_TAR_Pos) /*!< 0x00008000 */
#define FSMC_PCR3_TAR_3       (0x8U << FSMC_PCR3_TAR_Pos) /*!< 0x00010000 */

#define FSMC_PCR3_ECCPS_Pos   (17U)
#define FSMC_PCR3_ECCPS_Msk   (0x7U << FSMC_PCR3_ECCPS_Pos) /*!< 0x000E0000 */
#define FSMC_PCR3_ECCPS       FSMC_PCR3_ECCPS_Msk           /*!<ECCPS[2:0] bits (ECC page size) */
#define FSMC_PCR3_ECCPS_0     (0x1U << FSMC_PCR3_ECCPS_Pos) /*!< 0x00020000 */
#define FSMC_PCR3_ECCPS_1     (0x2U << FSMC_PCR3_ECCPS_Pos) /*!< 0x00040000 */
#define FSMC_PCR3_ECCPS_2     (0x4U << FSMC_PCR3_ECCPS_Pos) /*!< 0x00080000 */

/******************  Bit definition for FSMC_PCR4 register  *******************/
#define FSMC_PCR4_PWAITEN_Pos (1U)
#define FSMC_PCR4_PWAITEN_Msk (0x1U << FSMC_PCR4_PWAITEN_Pos) /*!< 0x00000002 */
#define FSMC_PCR4_PWAITEN     FSMC_PCR4_PWAITEN_Msk           /*!<Wait feature enable bit */
#define FSMC_PCR4_PBKEN_Pos   (2U)
#define FSMC_PCR4_PBKEN_Msk   (0x1U << FSMC_PCR4_PBKEN_Pos) /*!< 0x00000004 */
#define FSMC_PCR4_PBKEN       FSMC_PCR4_PBKEN_Msk           /*!<PC Card/NAND Flash memory bank enable bit */
#define FSMC_PCR4_PTYP_Pos    (3U)
#define FSMC_PCR4_PTYP_Msk    (0x1U << FSMC_PCR4_PTYP_Pos) /*!< 0x00000008 */
#define FSMC_PCR4_PTYP        FSMC_PCR4_PTYP_Msk           /*!<Memory type */

#define FSMC_PCR4_PWID_Pos    (4U)
#define FSMC_PCR4_PWID_Msk    (0x3U << FSMC_PCR4_PWID_Pos) /*!< 0x00000030 */
#define FSMC_PCR4_PWID        FSMC_PCR4_PWID_Msk           /*!<PWID[1:0] bits (NAND Flash databus width) */
#define FSMC_PCR4_PWID_0      (0x1U << FSMC_PCR4_PWID_Pos) /*!< 0x00000010 */
#define FSMC_PCR4_PWID_1      (0x2U << FSMC_PCR4_PWID_Pos) /*!< 0x00000020 */

#define FSMC_PCR4_ECCEN_Pos   (6U)
#define FSMC_PCR4_ECCEN_Msk   (0x1U << FSMC_PCR4_ECCEN_Pos) /*!< 0x00000040 */
#define FSMC_PCR4_ECCEN       FSMC_PCR4_ECCEN_Msk           /*!<ECC computation logic enable bit */

#define FSMC_PCR4_TCLR_Pos    (9U)
#define FSMC_PCR4_TCLR_Msk    (0xFU << FSMC_PCR4_TCLR_Pos) /*!< 0x00001E00 */
#define FSMC_PCR4_TCLR        FSMC_PCR4_TCLR_Msk           /*!<TCLR[3:0] bits (CLE to RE delay) */
#define FSMC_PCR4_TCLR_0      (0x1U << FSMC_PCR4_TCLR_Pos) /*!< 0x00000200 */
#define FSMC_PCR4_TCLR_1      (0x2U << FSMC_PCR4_TCLR_Pos) /*!< 0x00000400 */
#define FSMC_PCR4_TCLR_2      (0x4U << FSMC_PCR4_TCLR_Pos) /*!< 0x00000800 */
#define FSMC_PCR4_TCLR_3      (0x8U << FSMC_PCR4_TCLR_Pos) /*!< 0x00001000 */

#define FSMC_PCR4_TAR_Pos     (13U)
#define FSMC_PCR4_TAR_Msk     (0xFU << FSMC_PCR4_TAR_Pos) /*!< 0x0001E000 */
#define FSMC_PCR4_TAR         FSMC_PCR4_TAR_Msk           /*!<TAR[3:0] bits (ALE to RE delay) */
#define FSMC_PCR4_TAR_0       (0x1U << FSMC_PCR4_TAR_Pos) /*!< 0x00002000 */
#define FSMC_PCR4_TAR_1       (0x2U << FSMC_PCR4_TAR_Pos) /*!< 0x00004000 */
#define FSMC_PCR4_TAR_2       (0x4U << FSMC_PCR4_TAR_Pos) /*!< 0x00008000 */
#define FSMC_PCR4_TAR_3       (0x8U << FSMC_PCR4_TAR_Pos) /*!< 0x00010000 */

#define FSMC_PCR4_ECCPS_Pos   (17U)
#define FSMC_PCR4_ECCPS_Msk   (0x7U << FSMC_PCR4_ECCPS_Pos) /*!< 0x000E0000 */
#define FSMC_PCR4_ECCPS       FSMC_PCR4_ECCPS_Msk           /*!<ECCPS[2:0] bits (ECC page size) */
#define FSMC_PCR4_ECCPS_0     (0x1U << FSMC_PCR4_ECCPS_Pos) /*!< 0x00020000 */
#define FSMC_PCR4_ECCPS_1     (0x2U << FSMC_PCR4_ECCPS_Pos) /*!< 0x00040000 */
#define FSMC_PCR4_ECCPS_2     (0x4U << FSMC_PCR4_ECCPS_Pos) /*!< 0x00080000 */

/*******************  Bit definition for FSMC_SR2 register  *******************/
#define FSMC_SR2_IRS_Pos   (0U)
#define FSMC_SR2_IRS_Msk   (0x1U << FSMC_SR2_IRS_Pos) /*!< 0x00000001 */
#define FSMC_SR2_IRS       FSMC_SR2_IRS_Msk           /*!<Interrupt Rising Edge status                */
#define FSMC_SR2_ILS_Pos   (1U)
#define FSMC_SR2_ILS_Msk   (0x1U << FSMC_SR2_ILS_Pos) /*!< 0x00000002 */
#define FSMC_SR2_ILS       FSMC_SR2_ILS_Msk           /*!<Interrupt Level status                      */
#define FSMC_SR2_IFS_Pos   (2U)
#define FSMC_SR2_IFS_Msk   (0x1U << FSMC_SR2_IFS_Pos) /*!< 0x00000004 */
#define FSMC_SR2_IFS       FSMC_SR2_IFS_Msk           /*!<Interrupt Falling Edge status               */
#define FSMC_SR2_IREN_Pos  (3U)
#define FSMC_SR2_IREN_Msk  (0x1U << FSMC_SR2_IREN_Pos) /*!< 0x00000008 */
#define FSMC_SR2_IREN      FSMC_SR2_IREN_Msk           /*!<Interrupt Rising Edge detection Enable bit  */
#define FSMC_SR2_ILEN_Pos  (4U)
#define FSMC_SR2_ILEN_Msk  (0x1U << FSMC_SR2_ILEN_Pos) /*!< 0x00000010 */
#define FSMC_SR2_ILEN      FSMC_SR2_ILEN_Msk           /*!<Interrupt Level detection Enable bit        */
#define FSMC_SR2_IFEN_Pos  (5U)
#define FSMC_SR2_IFEN_Msk  (0x1U << FSMC_SR2_IFEN_Pos) /*!< 0x00000020 */
#define FSMC_SR2_IFEN      FSMC_SR2_IFEN_Msk           /*!<Interrupt Falling Edge detection Enable bit */
#define FSMC_SR2_FEMPT_Pos (6U)
#define FSMC_SR2_FEMPT_Msk (0x1U << FSMC_SR2_FEMPT_Pos) /*!< 0x00000040 */
#define FSMC_SR2_FEMPT     FSMC_SR2_FEMPT_Msk           /*!<FIFO empty */

/*******************  Bit definition for FSMC_SR3 register  *******************/
#define FSMC_SR3_IRS_Pos   (0U)
#define FSMC_SR3_IRS_Msk   (0x1U << FSMC_SR3_IRS_Pos) /*!< 0x00000001 */
#define FSMC_SR3_IRS       FSMC_SR3_IRS_Msk           /*!<Interrupt Rising Edge status                */
#define FSMC_SR3_ILS_Pos   (1U)
#define FSMC_SR3_ILS_Msk   (0x1U << FSMC_SR3_ILS_Pos) /*!< 0x00000002 */
#define FSMC_SR3_ILS       FSMC_SR3_ILS_Msk           /*!<Interrupt Level status                      */
#define FSMC_SR3_IFS_Pos   (2U)
#define FSMC_SR3_IFS_Msk   (0x1U << FSMC_SR3_IFS_Pos) /*!< 0x00000004 */
#define FSMC_SR3_IFS       FSMC_SR3_IFS_Msk           /*!<Interrupt Falling Edge status               */
#define FSMC_SR3_IREN_Pos  (3U)
#define FSMC_SR3_IREN_Msk  (0x1U << FSMC_SR3_IREN_Pos) /*!< 0x00000008 */
#define FSMC_SR3_IREN      FSMC_SR3_IREN_Msk           /*!<Interrupt Rising Edge detection Enable bit  */
#define FSMC_SR3_ILEN_Pos  (4U)
#define FSMC_SR3_ILEN_Msk  (0x1U << FSMC_SR3_ILEN_Pos) /*!< 0x00000010 */
#define FSMC_SR3_ILEN      FSMC_SR3_ILEN_Msk           /*!<Interrupt Level detection Enable bit        */
#define FSMC_SR3_IFEN_Pos  (5U)
#define FSMC_SR3_IFEN_Msk  (0x1U << FSMC_SR3_IFEN_Pos) /*!< 0x00000020 */
#define FSMC_SR3_IFEN      FSMC_SR3_IFEN_Msk           /*!<Interrupt Falling Edge detection Enable bit */
#define FSMC_SR3_FEMPT_Pos (6U)
#define FSMC_SR3_FEMPT_Msk (0x1U << FSMC_SR3_FEMPT_Pos) /*!< 0x00000040 */
#define FSMC_SR3_FEMPT     FSMC_SR3_FEMPT_Msk           /*!<FIFO empty */

/*******************  Bit definition for FSMC_SR4 register  *******************/
#define FSMC_SR4_IRS_Pos   (0U)
#define FSMC_SR4_IRS_Msk   (0x1U << FSMC_SR4_IRS_Pos) /*!< 0x00000001 */
#define FSMC_SR4_IRS       FSMC_SR4_IRS_Msk           /*!<Interrupt Rising Edge status                 */
#define FSMC_SR4_ILS_Pos   (1U)
#define FSMC_SR4_ILS_Msk   (0x1U << FSMC_SR4_ILS_Pos) /*!< 0x00000002 */
#define FSMC_SR4_ILS       FSMC_SR4_ILS_Msk           /*!<Interrupt Level status                       */
#define FSMC_SR4_IFS_Pos   (2U)
#define FSMC_SR4_IFS_Msk   (0x1U << FSMC_SR4_IFS_Pos) /*!< 0x00000004 */
#define FSMC_SR4_IFS       FSMC_SR4_IFS_Msk           /*!<Interrupt Falling Edge status                */
#define FSMC_SR4_IREN_Pos  (3U)
#define FSMC_SR4_IREN_Msk  (0x1U << FSMC_SR4_IREN_Pos) /*!< 0x00000008 */
#define FSMC_SR4_IREN      FSMC_SR4_IREN_Msk           /*!<Interrupt Rising Edge detection Enable bit   */
#define FSMC_SR4_ILEN_Pos  (4U)
#define FSMC_SR4_ILEN_Msk  (0x1U << FSMC_SR4_ILEN_Pos) /*!< 0x00000010 */
#define FSMC_SR4_ILEN      FSMC_SR4_ILEN_Msk           /*!<Interrupt Level detection Enable bit         */
#define FSMC_SR4_IFEN_Pos  (5U)
#define FSMC_SR4_IFEN_Msk  (0x1U << FSMC_SR4_IFEN_Pos) /*!< 0x00000020 */
#define FSMC_SR4_IFEN      FSMC_SR4_IFEN_Msk           /*!<Interrupt Falling Edge detection Enable bit  */
#define FSMC_SR4_FEMPT_Pos (6U)
#define FSMC_SR4_FEMPT_Msk (0x1U << FSMC_SR4_FEMPT_Pos) /*!< 0x00000040 */
#define FSMC_SR4_FEMPT     FSMC_SR4_FEMPT_Msk           /*!<FIFO empty */

/******************  Bit definition for FSMC_PMEM2 register  ******************/
#define FSMC_PMEM2_MEMSET2_Pos  (0U)
#define FSMC_PMEM2_MEMSET2_Msk  (0xFFU << FSMC_PMEM2_MEMSET2_Pos) /*!< 0x000000FF */
#define FSMC_PMEM2_MEMSET2      FSMC_PMEM2_MEMSET2_Msk            /*!<MEMSET2[7:0] bits (Common memory 2 setup time) */
#define FSMC_PMEM2_MEMSET2_0    (0x01U << FSMC_PMEM2_MEMSET2_Pos) /*!< 0x00000001 */
#define FSMC_PMEM2_MEMSET2_1    (0x02U << FSMC_PMEM2_MEMSET2_Pos) /*!< 0x00000002 */
#define FSMC_PMEM2_MEMSET2_2    (0x04U << FSMC_PMEM2_MEMSET2_Pos) /*!< 0x00000004 */
#define FSMC_PMEM2_MEMSET2_3    (0x08U << FSMC_PMEM2_MEMSET2_Pos) /*!< 0x00000008 */
#define FSMC_PMEM2_MEMSET2_4    (0x10U << FSMC_PMEM2_MEMSET2_Pos) /*!< 0x00000010 */
#define FSMC_PMEM2_MEMSET2_5    (0x20U << FSMC_PMEM2_MEMSET2_Pos) /*!< 0x00000020 */
#define FSMC_PMEM2_MEMSET2_6    (0x40U << FSMC_PMEM2_MEMSET2_Pos) /*!< 0x00000040 */
#define FSMC_PMEM2_MEMSET2_7    (0x80U << FSMC_PMEM2_MEMSET2_Pos) /*!< 0x00000080 */

#define FSMC_PMEM2_MEMWAIT2_Pos (8U)
#define FSMC_PMEM2_MEMWAIT2_Msk (0xFFU << FSMC_PMEM2_MEMWAIT2_Pos) /*!< 0x0000FF00 */
#define FSMC_PMEM2_MEMWAIT2     FSMC_PMEM2_MEMWAIT2_Msk            /*!<MEMWAIT2[7:0] bits (Common memory 2 wait time) */
#define FSMC_PMEM2_MEMWAIT2_0   (0x01U << FSMC_PMEM2_MEMWAIT2_Pos) /*!< 0x00000100 */
#define FSMC_PMEM2_MEMWAIT2_1   (0x02U << FSMC_PMEM2_MEMWAIT2_Pos) /*!< 0x00000200 */
#define FSMC_PMEM2_MEMWAIT2_2   (0x04U << FSMC_PMEM2_MEMWAIT2_Pos) /*!< 0x00000400 */
#define FSMC_PMEM2_MEMWAIT2_3   (0x08U << FSMC_PMEM2_MEMWAIT2_Pos) /*!< 0x00000800 */
#define FSMC_PMEM2_MEMWAIT2_4   (0x10U << FSMC_PMEM2_MEMWAIT2_Pos) /*!< 0x00001000 */
#define FSMC_PMEM2_MEMWAIT2_5   (0x20U << FSMC_PMEM2_MEMWAIT2_Pos) /*!< 0x00002000 */
#define FSMC_PMEM2_MEMWAIT2_6   (0x40U << FSMC_PMEM2_MEMWAIT2_Pos) /*!< 0x00004000 */
#define FSMC_PMEM2_MEMWAIT2_7   (0x80U << FSMC_PMEM2_MEMWAIT2_Pos) /*!< 0x00008000 */

#define FSMC_PMEM2_MEMHOLD2_Pos (16U)
#define FSMC_PMEM2_MEMHOLD2_Msk (0xFFU << FSMC_PMEM2_MEMHOLD2_Pos) /*!< 0x00FF0000 */
#define FSMC_PMEM2_MEMHOLD2     FSMC_PMEM2_MEMHOLD2_Msk            /*!<MEMHOLD2[7:0] bits (Common memory 2 hold time) */
#define FSMC_PMEM2_MEMHOLD2_0   (0x01U << FSMC_PMEM2_MEMHOLD2_Pos) /*!< 0x00010000 */
#define FSMC_PMEM2_MEMHOLD2_1   (0x02U << FSMC_PMEM2_MEMHOLD2_Pos) /*!< 0x00020000 */
#define FSMC_PMEM2_MEMHOLD2_2   (0x04U << FSMC_PMEM2_MEMHOLD2_Pos) /*!< 0x00040000 */
#define FSMC_PMEM2_MEMHOLD2_3   (0x08U << FSMC_PMEM2_MEMHOLD2_Pos) /*!< 0x00080000 */
#define FSMC_PMEM2_MEMHOLD2_4   (0x10U << FSMC_PMEM2_MEMHOLD2_Pos) /*!< 0x00100000 */
#define FSMC_PMEM2_MEMHOLD2_5   (0x20U << FSMC_PMEM2_MEMHOLD2_Pos) /*!< 0x00200000 */
#define FSMC_PMEM2_MEMHOLD2_6   (0x40U << FSMC_PMEM2_MEMHOLD2_Pos) /*!< 0x00400000 */
#define FSMC_PMEM2_MEMHOLD2_7   (0x80U << FSMC_PMEM2_MEMHOLD2_Pos) /*!< 0x00800000 */

#define FSMC_PMEM2_MEMHIZ2_Pos  (24U)
#define FSMC_PMEM2_MEMHIZ2_Msk  (0xFFU << FSMC_PMEM2_MEMHIZ2_Pos) /*!< 0xFF000000 */
#define FSMC_PMEM2_MEMHIZ2      FSMC_PMEM2_MEMHIZ2_Msk            /*!<MEMHIZ2[7:0] bits (Common memory 2 databus HiZ time) */
#define FSMC_PMEM2_MEMHIZ2_0    (0x01U << FSMC_PMEM2_MEMHIZ2_Pos) /*!< 0x01000000 */
#define FSMC_PMEM2_MEMHIZ2_1    (0x02U << FSMC_PMEM2_MEMHIZ2_Pos) /*!< 0x02000000 */
#define FSMC_PMEM2_MEMHIZ2_2    (0x04U << FSMC_PMEM2_MEMHIZ2_Pos) /*!< 0x04000000 */
#define FSMC_PMEM2_MEMHIZ2_3    (0x08U << FSMC_PMEM2_MEMHIZ2_Pos) /*!< 0x08000000 */
#define FSMC_PMEM2_MEMHIZ2_4    (0x10U << FSMC_PMEM2_MEMHIZ2_Pos) /*!< 0x10000000 */
#define FSMC_PMEM2_MEMHIZ2_5    (0x20U << FSMC_PMEM2_MEMHIZ2_Pos) /*!< 0x20000000 */
#define FSMC_PMEM2_MEMHIZ2_6    (0x40U << FSMC_PMEM2_MEMHIZ2_Pos) /*!< 0x40000000 */
#define FSMC_PMEM2_MEMHIZ2_7    (0x80U << FSMC_PMEM2_MEMHIZ2_Pos) /*!< 0x80000000 */

/******************  Bit definition for FSMC_PMEM3 register  ******************/
#define FSMC_PMEM3_MEMSET3_Pos  (0U)
#define FSMC_PMEM3_MEMSET3_Msk  (0xFFU << FSMC_PMEM3_MEMSET3_Pos) /*!< 0x000000FF */
#define FSMC_PMEM3_MEMSET3      FSMC_PMEM3_MEMSET3_Msk            /*!<MEMSET3[7:0] bits (Common memory 3 setup time) */
#define FSMC_PMEM3_MEMSET3_0    (0x01U << FSMC_PMEM3_MEMSET3_Pos) /*!< 0x00000001 */
#define FSMC_PMEM3_MEMSET3_1    (0x02U << FSMC_PMEM3_MEMSET3_Pos) /*!< 0x00000002 */
#define FSMC_PMEM3_MEMSET3_2    (0x04U << FSMC_PMEM3_MEMSET3_Pos) /*!< 0x00000004 */
#define FSMC_PMEM3_MEMSET3_3    (0x08U << FSMC_PMEM3_MEMSET3_Pos) /*!< 0x00000008 */
#define FSMC_PMEM3_MEMSET3_4    (0x10U << FSMC_PMEM3_MEMSET3_Pos) /*!< 0x00000010 */
#define FSMC_PMEM3_MEMSET3_5    (0x20U << FSMC_PMEM3_MEMSET3_Pos) /*!< 0x00000020 */
#define FSMC_PMEM3_MEMSET3_6    (0x40U << FSMC_PMEM3_MEMSET3_Pos) /*!< 0x00000040 */
#define FSMC_PMEM3_MEMSET3_7    (0x80U << FSMC_PMEM3_MEMSET3_Pos) /*!< 0x00000080 */

#define FSMC_PMEM3_MEMWAIT3_Pos (8U)
#define FSMC_PMEM3_MEMWAIT3_Msk (0xFFU << FSMC_PMEM3_MEMWAIT3_Pos) /*!< 0x0000FF00 */
#define FSMC_PMEM3_MEMWAIT3     FSMC_PMEM3_MEMWAIT3_Msk            /*!<MEMWAIT3[7:0] bits (Common memory 3 wait time) */
#define FSMC_PMEM3_MEMWAIT3_0   (0x01U << FSMC_PMEM3_MEMWAIT3_Pos) /*!< 0x00000100 */
#define FSMC_PMEM3_MEMWAIT3_1   (0x02U << FSMC_PMEM3_MEMWAIT3_Pos) /*!< 0x00000200 */
#define FSMC_PMEM3_MEMWAIT3_2   (0x04U << FSMC_PMEM3_MEMWAIT3_Pos) /*!< 0x00000400 */
#define FSMC_PMEM3_MEMWAIT3_3   (0x08U << FSMC_PMEM3_MEMWAIT3_Pos) /*!< 0x00000800 */
#define FSMC_PMEM3_MEMWAIT3_4   (0x10U << FSMC_PMEM3_MEMWAIT3_Pos) /*!< 0x00001000 */
#define FSMC_PMEM3_MEMWAIT3_5   (0x20U << FSMC_PMEM3_MEMWAIT3_Pos) /*!< 0x00002000 */
#define FSMC_PMEM3_MEMWAIT3_6   (0x40U << FSMC_PMEM3_MEMWAIT3_Pos) /*!< 0x00004000 */
#define FSMC_PMEM3_MEMWAIT3_7   (0x80U << FSMC_PMEM3_MEMWAIT3_Pos) /*!< 0x00008000 */

#define FSMC_PMEM3_MEMHOLD3_Pos (16U)
#define FSMC_PMEM3_MEMHOLD3_Msk (0xFFU << FSMC_PMEM3_MEMHOLD3_Pos) /*!< 0x00FF0000 */
#define FSMC_PMEM3_MEMHOLD3     FSMC_PMEM3_MEMHOLD3_Msk            /*!<MEMHOLD3[7:0] bits (Common memory 3 hold time) */
#define FSMC_PMEM3_MEMHOLD3_0   (0x01U << FSMC_PMEM3_MEMHOLD3_Pos) /*!< 0x00010000 */
#define FSMC_PMEM3_MEMHOLD3_1   (0x02U << FSMC_PMEM3_MEMHOLD3_Pos) /*!< 0x00020000 */
#define FSMC_PMEM3_MEMHOLD3_2   (0x04U << FSMC_PMEM3_MEMHOLD3_Pos) /*!< 0x00040000 */
#define FSMC_PMEM3_MEMHOLD3_3   (0x08U << FSMC_PMEM3_MEMHOLD3_Pos) /*!< 0x00080000 */
#define FSMC_PMEM3_MEMHOLD3_4   (0x10U << FSMC_PMEM3_MEMHOLD3_Pos) /*!< 0x00100000 */
#define FSMC_PMEM3_MEMHOLD3_5   (0x20U << FSMC_PMEM3_MEMHOLD3_Pos) /*!< 0x00200000 */
#define FSMC_PMEM3_MEMHOLD3_6   (0x40U << FSMC_PMEM3_MEMHOLD3_Pos) /*!< 0x00400000 */
#define FSMC_PMEM3_MEMHOLD3_7   (0x80U << FSMC_PMEM3_MEMHOLD3_Pos) /*!< 0x00800000 */

#define FSMC_PMEM3_MEMHIZ3_Pos  (24U)
#define FSMC_PMEM3_MEMHIZ3_Msk  (0xFFU << FSMC_PMEM3_MEMHIZ3_Pos) /*!< 0xFF000000 */
#define FSMC_PMEM3_MEMHIZ3      FSMC_PMEM3_MEMHIZ3_Msk            /*!<MEMHIZ3[7:0] bits (Common memory 3 databus HiZ time) */
#define FSMC_PMEM3_MEMHIZ3_0    (0x01U << FSMC_PMEM3_MEMHIZ3_Pos) /*!< 0x01000000 */
#define FSMC_PMEM3_MEMHIZ3_1    (0x02U << FSMC_PMEM3_MEMHIZ3_Pos) /*!< 0x02000000 */
#define FSMC_PMEM3_MEMHIZ3_2    (0x04U << FSMC_PMEM3_MEMHIZ3_Pos) /*!< 0x04000000 */
#define FSMC_PMEM3_MEMHIZ3_3    (0x08U << FSMC_PMEM3_MEMHIZ3_Pos) /*!< 0x08000000 */
#define FSMC_PMEM3_MEMHIZ3_4    (0x10U << FSMC_PMEM3_MEMHIZ3_Pos) /*!< 0x10000000 */
#define FSMC_PMEM3_MEMHIZ3_5    (0x20U << FSMC_PMEM3_MEMHIZ3_Pos) /*!< 0x20000000 */
#define FSMC_PMEM3_MEMHIZ3_6    (0x40U << FSMC_PMEM3_MEMHIZ3_Pos) /*!< 0x40000000 */
#define FSMC_PMEM3_MEMHIZ3_7    (0x80U << FSMC_PMEM3_MEMHIZ3_Pos) /*!< 0x80000000 */

/******************  Bit definition for FSMC_PMEM4 register  ******************/
#define FSMC_PMEM4_MEMSET4_Pos  (0U)
#define FSMC_PMEM4_MEMSET4_Msk  (0xFFU << FSMC_PMEM4_MEMSET4_Pos) /*!< 0x000000FF */
#define FSMC_PMEM4_MEMSET4      FSMC_PMEM4_MEMSET4_Msk            /*!<MEMSET4[7:0] bits (Common memory 4 setup time) */
#define FSMC_PMEM4_MEMSET4_0    (0x01U << FSMC_PMEM4_MEMSET4_Pos) /*!< 0x00000001 */
#define FSMC_PMEM4_MEMSET4_1    (0x02U << FSMC_PMEM4_MEMSET4_Pos) /*!< 0x00000002 */
#define FSMC_PMEM4_MEMSET4_2    (0x04U << FSMC_PMEM4_MEMSET4_Pos) /*!< 0x00000004 */
#define FSMC_PMEM4_MEMSET4_3    (0x08U << FSMC_PMEM4_MEMSET4_Pos) /*!< 0x00000008 */
#define FSMC_PMEM4_MEMSET4_4    (0x10U << FSMC_PMEM4_MEMSET4_Pos) /*!< 0x00000010 */
#define FSMC_PMEM4_MEMSET4_5    (0x20U << FSMC_PMEM4_MEMSET4_Pos) /*!< 0x00000020 */
#define FSMC_PMEM4_MEMSET4_6    (0x40U << FSMC_PMEM4_MEMSET4_Pos) /*!< 0x00000040 */
#define FSMC_PMEM4_MEMSET4_7    (0x80U << FSMC_PMEM4_MEMSET4_Pos) /*!< 0x00000080 */

#define FSMC_PMEM4_MEMWAIT4_Pos (8U)
#define FSMC_PMEM4_MEMWAIT4_Msk (0xFFU << FSMC_PMEM4_MEMWAIT4_Pos) /*!< 0x0000FF00 */
#define FSMC_PMEM4_MEMWAIT4     FSMC_PMEM4_MEMWAIT4_Msk            /*!<MEMWAIT4[7:0] bits (Common memory 4 wait time) */
#define FSMC_PMEM4_MEMWAIT4_0   (0x01U << FSMC_PMEM4_MEMWAIT4_Pos) /*!< 0x00000100 */
#define FSMC_PMEM4_MEMWAIT4_1   (0x02U << FSMC_PMEM4_MEMWAIT4_Pos) /*!< 0x00000200 */
#define FSMC_PMEM4_MEMWAIT4_2   (0x04U << FSMC_PMEM4_MEMWAIT4_Pos) /*!< 0x00000400 */
#define FSMC_PMEM4_MEMWAIT4_3   (0x08U << FSMC_PMEM4_MEMWAIT4_Pos) /*!< 0x00000800 */
#define FSMC_PMEM4_MEMWAIT4_4   (0x10U << FSMC_PMEM4_MEMWAIT4_Pos) /*!< 0x00001000 */
#define FSMC_PMEM4_MEMWAIT4_5   (0x20U << FSMC_PMEM4_MEMWAIT4_Pos) /*!< 0x00002000 */
#define FSMC_PMEM4_MEMWAIT4_6   (0x40U << FSMC_PMEM4_MEMWAIT4_Pos) /*!< 0x00004000 */
#define FSMC_PMEM4_MEMWAIT4_7   (0x80U << FSMC_PMEM4_MEMWAIT4_Pos) /*!< 0x00008000 */

#define FSMC_PMEM4_MEMHOLD4_Pos (16U)
#define FSMC_PMEM4_MEMHOLD4_Msk (0xFFU << FSMC_PMEM4_MEMHOLD4_Pos) /*!< 0x00FF0000 */
#define FSMC_PMEM4_MEMHOLD4     FSMC_PMEM4_MEMHOLD4_Msk            /*!<MEMHOLD4[7:0] bits (Common memory 4 hold time) */
#define FSMC_PMEM4_MEMHOLD4_0   (0x01U << FSMC_PMEM4_MEMHOLD4_Pos) /*!< 0x00010000 */
#define FSMC_PMEM4_MEMHOLD4_1   (0x02U << FSMC_PMEM4_MEMHOLD4_Pos) /*!< 0x00020000 */
#define FSMC_PMEM4_MEMHOLD4_2   (0x04U << FSMC_PMEM4_MEMHOLD4_Pos) /*!< 0x00040000 */
#define FSMC_PMEM4_MEMHOLD4_3   (0x08U << FSMC_PMEM4_MEMHOLD4_Pos) /*!< 0x00080000 */
#define FSMC_PMEM4_MEMHOLD4_4   (0x10U << FSMC_PMEM4_MEMHOLD4_Pos) /*!< 0x00100000 */
#define FSMC_PMEM4_MEMHOLD4_5   (0x20U << FSMC_PMEM4_MEMHOLD4_Pos) /*!< 0x00200000 */
#define FSMC_PMEM4_MEMHOLD4_6   (0x40U << FSMC_PMEM4_MEMHOLD4_Pos) /*!< 0x00400000 */
#define FSMC_PMEM4_MEMHOLD4_7   (0x80U << FSMC_PMEM4_MEMHOLD4_Pos) /*!< 0x00800000 */

#define FSMC_PMEM4_MEMHIZ4_Pos  (24U)
#define FSMC_PMEM4_MEMHIZ4_Msk  (0xFFU << FSMC_PMEM4_MEMHIZ4_Pos) /*!< 0xFF000000 */
#define FSMC_PMEM4_MEMHIZ4      FSMC_PMEM4_MEMHIZ4_Msk            /*!<MEMHIZ4[7:0] bits (Common memory 4 databus HiZ time) */
#define FSMC_PMEM4_MEMHIZ4_0    (0x01U << FSMC_PMEM4_MEMHIZ4_Pos) /*!< 0x01000000 */
#define FSMC_PMEM4_MEMHIZ4_1    (0x02U << FSMC_PMEM4_MEMHIZ4_Pos) /*!< 0x02000000 */
#define FSMC_PMEM4_MEMHIZ4_2    (0x04U << FSMC_PMEM4_MEMHIZ4_Pos) /*!< 0x04000000 */
#define FSMC_PMEM4_MEMHIZ4_3    (0x08U << FSMC_PMEM4_MEMHIZ4_Pos) /*!< 0x08000000 */
#define FSMC_PMEM4_MEMHIZ4_4    (0x10U << FSMC_PMEM4_MEMHIZ4_Pos) /*!< 0x10000000 */
#define FSMC_PMEM4_MEMHIZ4_5    (0x20U << FSMC_PMEM4_MEMHIZ4_Pos) /*!< 0x20000000 */
#define FSMC_PMEM4_MEMHIZ4_6    (0x40U << FSMC_PMEM4_MEMHIZ4_Pos) /*!< 0x40000000 */
#define FSMC_PMEM4_MEMHIZ4_7    (0x80U << FSMC_PMEM4_MEMHIZ4_Pos) /*!< 0x80000000 */

/******************  Bit definition for FSMC_PATT2 register  ******************/
#define FSMC_PATT2_ATTSET2_Pos  (0U)
#define FSMC_PATT2_ATTSET2_Msk  (0xFFU << FSMC_PATT2_ATTSET2_Pos) /*!< 0x000000FF */
#define FSMC_PATT2_ATTSET2      FSMC_PATT2_ATTSET2_Msk            /*!<ATTSET2[7:0] bits (Attribute memory 2 setup time) */
#define FSMC_PATT2_ATTSET2_0    (0x01U << FSMC_PATT2_ATTSET2_Pos) /*!< 0x00000001 */
#define FSMC_PATT2_ATTSET2_1    (0x02U << FSMC_PATT2_ATTSET2_Pos) /*!< 0x00000002 */
#define FSMC_PATT2_ATTSET2_2    (0x04U << FSMC_PATT2_ATTSET2_Pos) /*!< 0x00000004 */
#define FSMC_PATT2_ATTSET2_3    (0x08U << FSMC_PATT2_ATTSET2_Pos) /*!< 0x00000008 */
#define FSMC_PATT2_ATTSET2_4    (0x10U << FSMC_PATT2_ATTSET2_Pos) /*!< 0x00000010 */
#define FSMC_PATT2_ATTSET2_5    (0x20U << FSMC_PATT2_ATTSET2_Pos) /*!< 0x00000020 */
#define FSMC_PATT2_ATTSET2_6    (0x40U << FSMC_PATT2_ATTSET2_Pos) /*!< 0x00000040 */
#define FSMC_PATT2_ATTSET2_7    (0x80U << FSMC_PATT2_ATTSET2_Pos) /*!< 0x00000080 */

#define FSMC_PATT2_ATTWAIT2_Pos (8U)
#define FSMC_PATT2_ATTWAIT2_Msk (0xFFU << FSMC_PATT2_ATTWAIT2_Pos) /*!< 0x0000FF00 */
#define FSMC_PATT2_ATTWAIT2     FSMC_PATT2_ATTWAIT2_Msk            /*!<ATTWAIT2[7:0] bits (Attribute memory 2 wait time) */
#define FSMC_PATT2_ATTWAIT2_0   (0x01U << FSMC_PATT2_ATTWAIT2_Pos) /*!< 0x00000100 */
#define FSMC_PATT2_ATTWAIT2_1   (0x02U << FSMC_PATT2_ATTWAIT2_Pos) /*!< 0x00000200 */
#define FSMC_PATT2_ATTWAIT2_2   (0x04U << FSMC_PATT2_ATTWAIT2_Pos) /*!< 0x00000400 */
#define FSMC_PATT2_ATTWAIT2_3   (0x08U << FSMC_PATT2_ATTWAIT2_Pos) /*!< 0x00000800 */
#define FSMC_PATT2_ATTWAIT2_4   (0x10U << FSMC_PATT2_ATTWAIT2_Pos) /*!< 0x00001000 */
#define FSMC_PATT2_ATTWAIT2_5   (0x20U << FSMC_PATT2_ATTWAIT2_Pos) /*!< 0x00002000 */
#define FSMC_PATT2_ATTWAIT2_6   (0x40U << FSMC_PATT2_ATTWAIT2_Pos) /*!< 0x00004000 */
#define FSMC_PATT2_ATTWAIT2_7   (0x80U << FSMC_PATT2_ATTWAIT2_Pos) /*!< 0x00008000 */

#define FSMC_PATT2_ATTHOLD2_Pos (16U)
#define FSMC_PATT2_ATTHOLD2_Msk (0xFFU << FSMC_PATT2_ATTHOLD2_Pos) /*!< 0x00FF0000 */
#define FSMC_PATT2_ATTHOLD2     FSMC_PATT2_ATTHOLD2_Msk            /*!<ATTHOLD2[7:0] bits (Attribute memory 2 hold time) */
#define FSMC_PATT2_ATTHOLD2_0   (0x01U << FSMC_PATT2_ATTHOLD2_Pos) /*!< 0x00010000 */
#define FSMC_PATT2_ATTHOLD2_1   (0x02U << FSMC_PATT2_ATTHOLD2_Pos) /*!< 0x00020000 */
#define FSMC_PATT2_ATTHOLD2_2   (0x04U << FSMC_PATT2_ATTHOLD2_Pos) /*!< 0x00040000 */
#define FSMC_PATT2_ATTHOLD2_3   (0x08U << FSMC_PATT2_ATTHOLD2_Pos) /*!< 0x00080000 */
#define FSMC_PATT2_ATTHOLD2_4   (0x10U << FSMC_PATT2_ATTHOLD2_Pos) /*!< 0x00100000 */
#define FSMC_PATT2_ATTHOLD2_5   (0x20U << FSMC_PATT2_ATTHOLD2_Pos) /*!< 0x00200000 */
#define FSMC_PATT2_ATTHOLD2_6   (0x40U << FSMC_PATT2_ATTHOLD2_Pos) /*!< 0x00400000 */
#define FSMC_PATT2_ATTHOLD2_7   (0x80U << FSMC_PATT2_ATTHOLD2_Pos) /*!< 0x00800000 */

#define FSMC_PATT2_ATTHIZ2_Pos  (24U)
#define FSMC_PATT2_ATTHIZ2_Msk  (0xFFU << FSMC_PATT2_ATTHIZ2_Pos) /*!< 0xFF000000 */
#define FSMC_PATT2_ATTHIZ2      FSMC_PATT2_ATTHIZ2_Msk            /*!<ATTHIZ2[7:0] bits (Attribute memory 2 databus HiZ time) */
#define FSMC_PATT2_ATTHIZ2_0    (0x01U << FSMC_PATT2_ATTHIZ2_Pos) /*!< 0x01000000 */
#define FSMC_PATT2_ATTHIZ2_1    (0x02U << FSMC_PATT2_ATTHIZ2_Pos) /*!< 0x02000000 */
#define FSMC_PATT2_ATTHIZ2_2    (0x04U << FSMC_PATT2_ATTHIZ2_Pos) /*!< 0x04000000 */
#define FSMC_PATT2_ATTHIZ2_3    (0x08U << FSMC_PATT2_ATTHIZ2_Pos) /*!< 0x08000000 */
#define FSMC_PATT2_ATTHIZ2_4    (0x10U << FSMC_PATT2_ATTHIZ2_Pos) /*!< 0x10000000 */
#define FSMC_PATT2_ATTHIZ2_5    (0x20U << FSMC_PATT2_ATTHIZ2_Pos) /*!< 0x20000000 */
#define FSMC_PATT2_ATTHIZ2_6    (0x40U << FSMC_PATT2_ATTHIZ2_Pos) /*!< 0x40000000 */
#define FSMC_PATT2_ATTHIZ2_7    (0x80U << FSMC_PATT2_ATTHIZ2_Pos) /*!< 0x80000000 */

/******************  Bit definition for FSMC_PATT3 register  ******************/
#define FSMC_PATT3_ATTSET3_Pos  (0U)
#define FSMC_PATT3_ATTSET3_Msk  (0xFFU << FSMC_PATT3_ATTSET3_Pos) /*!< 0x000000FF */
#define FSMC_PATT3_ATTSET3      FSMC_PATT3_ATTSET3_Msk            /*!<ATTSET3[7:0] bits (Attribute memory 3 setup time) */
#define FSMC_PATT3_ATTSET3_0    (0x01U << FSMC_PATT3_ATTSET3_Pos) /*!< 0x00000001 */
#define FSMC_PATT3_ATTSET3_1    (0x02U << FSMC_PATT3_ATTSET3_Pos) /*!< 0x00000002 */
#define FSMC_PATT3_ATTSET3_2    (0x04U << FSMC_PATT3_ATTSET3_Pos) /*!< 0x00000004 */
#define FSMC_PATT3_ATTSET3_3    (0x08U << FSMC_PATT3_ATTSET3_Pos) /*!< 0x00000008 */
#define FSMC_PATT3_ATTSET3_4    (0x10U << FSMC_PATT3_ATTSET3_Pos) /*!< 0x00000010 */
#define FSMC_PATT3_ATTSET3_5    (0x20U << FSMC_PATT3_ATTSET3_Pos) /*!< 0x00000020 */
#define FSMC_PATT3_ATTSET3_6    (0x40U << FSMC_PATT3_ATTSET3_Pos) /*!< 0x00000040 */
#define FSMC_PATT3_ATTSET3_7    (0x80U << FSMC_PATT3_ATTSET3_Pos) /*!< 0x00000080 */

#define FSMC_PATT3_ATTWAIT3_Pos (8U)
#define FSMC_PATT3_ATTWAIT3_Msk (0xFFU << FSMC_PATT3_ATTWAIT3_Pos) /*!< 0x0000FF00 */
#define FSMC_PATT3_ATTWAIT3     FSMC_PATT3_ATTWAIT3_Msk            /*!<ATTWAIT3[7:0] bits (Attribute memory 3 wait time) */
#define FSMC_PATT3_ATTWAIT3_0   (0x01U << FSMC_PATT3_ATTWAIT3_Pos) /*!< 0x00000100 */
#define FSMC_PATT3_ATTWAIT3_1   (0x02U << FSMC_PATT3_ATTWAIT3_Pos) /*!< 0x00000200 */
#define FSMC_PATT3_ATTWAIT3_2   (0x04U << FSMC_PATT3_ATTWAIT3_Pos) /*!< 0x00000400 */
#define FSMC_PATT3_ATTWAIT3_3   (0x08U << FSMC_PATT3_ATTWAIT3_Pos) /*!< 0x00000800 */
#define FSMC_PATT3_ATTWAIT3_4   (0x10U << FSMC_PATT3_ATTWAIT3_Pos) /*!< 0x00001000 */
#define FSMC_PATT3_ATTWAIT3_5   (0x20U << FSMC_PATT3_ATTWAIT3_Pos) /*!< 0x00002000 */
#define FSMC_PATT3_ATTWAIT3_6   (0x40U << FSMC_PATT3_ATTWAIT3_Pos) /*!< 0x00004000 */
#define FSMC_PATT3_ATTWAIT3_7   (0x80U << FSMC_PATT3_ATTWAIT3_Pos) /*!< 0x00008000 */

#define FSMC_PATT3_ATTHOLD3_Pos (16U)
#define FSMC_PATT3_ATTHOLD3_Msk (0xFFU << FSMC_PATT3_ATTHOLD3_Pos) /*!< 0x00FF0000 */
#define FSMC_PATT3_ATTHOLD3     FSMC_PATT3_ATTHOLD3_Msk            /*!<ATTHOLD3[7:0] bits (Attribute memory 3 hold time) */
#define FSMC_PATT3_ATTHOLD3_0   (0x01U << FSMC_PATT3_ATTHOLD3_Pos) /*!< 0x00010000 */
#define FSMC_PATT3_ATTHOLD3_1   (0x02U << FSMC_PATT3_ATTHOLD3_Pos) /*!< 0x00020000 */
#define FSMC_PATT3_ATTHOLD3_2   (0x04U << FSMC_PATT3_ATTHOLD3_Pos) /*!< 0x00040000 */
#define FSMC_PATT3_ATTHOLD3_3   (0x08U << FSMC_PATT3_ATTHOLD3_Pos) /*!< 0x00080000 */
#define FSMC_PATT3_ATTHOLD3_4   (0x10U << FSMC_PATT3_ATTHOLD3_Pos) /*!< 0x00100000 */
#define FSMC_PATT3_ATTHOLD3_5   (0x20U << FSMC_PATT3_ATTHOLD3_Pos) /*!< 0x00200000 */
#define FSMC_PATT3_ATTHOLD3_6   (0x40U << FSMC_PATT3_ATTHOLD3_Pos) /*!< 0x00400000 */
#define FSMC_PATT3_ATTHOLD3_7   (0x80U << FSMC_PATT3_ATTHOLD3_Pos) /*!< 0x00800000 */

#define FSMC_PATT3_ATTHIZ3_Pos  (24U)
#define FSMC_PATT3_ATTHIZ3_Msk  (0xFFU << FSMC_PATT3_ATTHIZ3_Pos) /*!< 0xFF000000 */
#define FSMC_PATT3_ATTHIZ3      FSMC_PATT3_ATTHIZ3_Msk            /*!<ATTHIZ3[7:0] bits (Attribute memory 3 databus HiZ time) */
#define FSMC_PATT3_ATTHIZ3_0    (0x01U << FSMC_PATT3_ATTHIZ3_Pos) /*!< 0x01000000 */
#define FSMC_PATT3_ATTHIZ3_1    (0x02U << FSMC_PATT3_ATTHIZ3_Pos) /*!< 0x02000000 */
#define FSMC_PATT3_ATTHIZ3_2    (0x04U << FSMC_PATT3_ATTHIZ3_Pos) /*!< 0x04000000 */
#define FSMC_PATT3_ATTHIZ3_3    (0x08U << FSMC_PATT3_ATTHIZ3_Pos) /*!< 0x08000000 */
#define FSMC_PATT3_ATTHIZ3_4    (0x10U << FSMC_PATT3_ATTHIZ3_Pos) /*!< 0x10000000 */
#define FSMC_PATT3_ATTHIZ3_5    (0x20U << FSMC_PATT3_ATTHIZ3_Pos) /*!< 0x20000000 */
#define FSMC_PATT3_ATTHIZ3_6    (0x40U << FSMC_PATT3_ATTHIZ3_Pos) /*!< 0x40000000 */
#define FSMC_PATT3_ATTHIZ3_7    (0x80U << FSMC_PATT3_ATTHIZ3_Pos) /*!< 0x80000000 */

/******************  Bit definition for FSMC_PATT4 register  ******************/
#define FSMC_PATT4_ATTSET4_Pos  (0U)
#define FSMC_PATT4_ATTSET4_Msk  (0xFFU << FSMC_PATT4_ATTSET4_Pos) /*!< 0x000000FF */
#define FSMC_PATT4_ATTSET4      FSMC_PATT4_ATTSET4_Msk            /*!<ATTSET4[7:0] bits (Attribute memory 4 setup time) */
#define FSMC_PATT4_ATTSET4_0    (0x01U << FSMC_PATT4_ATTSET4_Pos) /*!< 0x00000001 */
#define FSMC_PATT4_ATTSET4_1    (0x02U << FSMC_PATT4_ATTSET4_Pos) /*!< 0x00000002 */
#define FSMC_PATT4_ATTSET4_2    (0x04U << FSMC_PATT4_ATTSET4_Pos) /*!< 0x00000004 */
#define FSMC_PATT4_ATTSET4_3    (0x08U << FSMC_PATT4_ATTSET4_Pos) /*!< 0x00000008 */
#define FSMC_PATT4_ATTSET4_4    (0x10U << FSMC_PATT4_ATTSET4_Pos) /*!< 0x00000010 */
#define FSMC_PATT4_ATTSET4_5    (0x20U << FSMC_PATT4_ATTSET4_Pos) /*!< 0x00000020 */
#define FSMC_PATT4_ATTSET4_6    (0x40U << FSMC_PATT4_ATTSET4_Pos) /*!< 0x00000040 */
#define FSMC_PATT4_ATTSET4_7    (0x80U << FSMC_PATT4_ATTSET4_Pos) /*!< 0x00000080 */

#define FSMC_PATT4_ATTWAIT4_Pos (8U)
#define FSMC_PATT4_ATTWAIT4_Msk (0xFFU << FSMC_PATT4_ATTWAIT4_Pos) /*!< 0x0000FF00 */
#define FSMC_PATT4_ATTWAIT4     FSMC_PATT4_ATTWAIT4_Msk            /*!<ATTWAIT4[7:0] bits (Attribute memory 4 wait time) */
#define FSMC_PATT4_ATTWAIT4_0   (0x01U << FSMC_PATT4_ATTWAIT4_Pos) /*!< 0x00000100 */
#define FSMC_PATT4_ATTWAIT4_1   (0x02U << FSMC_PATT4_ATTWAIT4_Pos) /*!< 0x00000200 */
#define FSMC_PATT4_ATTWAIT4_2   (0x04U << FSMC_PATT4_ATTWAIT4_Pos) /*!< 0x00000400 */
#define FSMC_PATT4_ATTWAIT4_3   (0x08U << FSMC_PATT4_ATTWAIT4_Pos) /*!< 0x00000800 */
#define FSMC_PATT4_ATTWAIT4_4   (0x10U << FSMC_PATT4_ATTWAIT4_Pos) /*!< 0x00001000 */
#define FSMC_PATT4_ATTWAIT4_5   (0x20U << FSMC_PATT4_ATTWAIT4_Pos) /*!< 0x00002000 */
#define FSMC_PATT4_ATTWAIT4_6   (0x40U << FSMC_PATT4_ATTWAIT4_Pos) /*!< 0x00004000 */
#define FSMC_PATT4_ATTWAIT4_7   (0x80U << FSMC_PATT4_ATTWAIT4_Pos) /*!< 0x00008000 */

#define FSMC_PATT4_ATTHOLD4_Pos (16U)
#define FSMC_PATT4_ATTHOLD4_Msk (0xFFU << FSMC_PATT4_ATTHOLD4_Pos) /*!< 0x00FF0000 */
#define FSMC_PATT4_ATTHOLD4     FSMC_PATT4_ATTHOLD4_Msk            /*!<ATTHOLD4[7:0] bits (Attribute memory 4 hold time) */
#define FSMC_PATT4_ATTHOLD4_0   (0x01U << FSMC_PATT4_ATTHOLD4_Pos) /*!< 0x00010000 */
#define FSMC_PATT4_ATTHOLD4_1   (0x02U << FSMC_PATT4_ATTHOLD4_Pos) /*!< 0x00020000 */
#define FSMC_PATT4_ATTHOLD4_2   (0x04U << FSMC_PATT4_ATTHOLD4_Pos) /*!< 0x00040000 */
#define FSMC_PATT4_ATTHOLD4_3   (0x08U << FSMC_PATT4_ATTHOLD4_Pos) /*!< 0x00080000 */
#define FSMC_PATT4_ATTHOLD4_4   (0x10U << FSMC_PATT4_ATTHOLD4_Pos) /*!< 0x00100000 */
#define FSMC_PATT4_ATTHOLD4_5   (0x20U << FSMC_PATT4_ATTHOLD4_Pos) /*!< 0x00200000 */
#define FSMC_PATT4_ATTHOLD4_6   (0x40U << FSMC_PATT4_ATTHOLD4_Pos) /*!< 0x00400000 */
#define FSMC_PATT4_ATTHOLD4_7   (0x80U << FSMC_PATT4_ATTHOLD4_Pos) /*!< 0x00800000 */

#define FSMC_PATT4_ATTHIZ4_Pos  (24U)
#define FSMC_PATT4_ATTHIZ4_Msk  (0xFFU << FSMC_PATT4_ATTHIZ4_Pos) /*!< 0xFF000000 */
#define FSMC_PATT4_ATTHIZ4      FSMC_PATT4_ATTHIZ4_Msk            /*!<ATTHIZ4[7:0] bits (Attribute memory 4 databus HiZ time) */
#define FSMC_PATT4_ATTHIZ4_0    (0x01U << FSMC_PATT4_ATTHIZ4_Pos) /*!< 0x01000000 */
#define FSMC_PATT4_ATTHIZ4_1    (0x02U << FSMC_PATT4_ATTHIZ4_Pos) /*!< 0x02000000 */
#define FSMC_PATT4_ATTHIZ4_2    (0x04U << FSMC_PATT4_ATTHIZ4_Pos) /*!< 0x04000000 */
#define FSMC_PATT4_ATTHIZ4_3    (0x08U << FSMC_PATT4_ATTHIZ4_Pos) /*!< 0x08000000 */
#define FSMC_PATT4_ATTHIZ4_4    (0x10U << FSMC_PATT4_ATTHIZ4_Pos) /*!< 0x10000000 */
#define FSMC_PATT4_ATTHIZ4_5    (0x20U << FSMC_PATT4_ATTHIZ4_Pos) /*!< 0x20000000 */
#define FSMC_PATT4_ATTHIZ4_6    (0x40U << FSMC_PATT4_ATTHIZ4_Pos) /*!< 0x40000000 */
#define FSMC_PATT4_ATTHIZ4_7    (0x80U << FSMC_PATT4_ATTHIZ4_Pos) /*!< 0x80000000 */

/******************  Bit definition for FSMC_PIO4 register  *******************/
#define FSMC_PIO4_IOSET4_Pos  (0U)
#define FSMC_PIO4_IOSET4_Msk  (0xFFU << FSMC_PIO4_IOSET4_Pos) /*!< 0x000000FF */
#define FSMC_PIO4_IOSET4      FSMC_PIO4_IOSET4_Msk            /*!<IOSET4[7:0] bits (I/O 4 setup time) */
#define FSMC_PIO4_IOSET4_0    (0x01U << FSMC_PIO4_IOSET4_Pos) /*!< 0x00000001 */
#define FSMC_PIO4_IOSET4_1    (0x02U << FSMC_PIO4_IOSET4_Pos) /*!< 0x00000002 */
#define FSMC_PIO4_IOSET4_2    (0x04U << FSMC_PIO4_IOSET4_Pos) /*!< 0x00000004 */
#define FSMC_PIO4_IOSET4_3    (0x08U << FSMC_PIO4_IOSET4_Pos) /*!< 0x00000008 */
#define FSMC_PIO4_IOSET4_4    (0x10U << FSMC_PIO4_IOSET4_Pos) /*!< 0x00000010 */
#define FSMC_PIO4_IOSET4_5    (0x20U << FSMC_PIO4_IOSET4_Pos) /*!< 0x00000020 */
#define FSMC_PIO4_IOSET4_6    (0x40U << FSMC_PIO4_IOSET4_Pos) /*!< 0x00000040 */
#define FSMC_PIO4_IOSET4_7    (0x80U << FSMC_PIO4_IOSET4_Pos) /*!< 0x00000080 */

#define FSMC_PIO4_IOWAIT4_Pos (8U)
#define FSMC_PIO4_IOWAIT4_Msk (0xFFU << FSMC_PIO4_IOWAIT4_Pos) /*!< 0x0000FF00 */
#define FSMC_PIO4_IOWAIT4     FSMC_PIO4_IOWAIT4_Msk            /*!<IOWAIT4[7:0] bits (I/O 4 wait time) */
#define FSMC_PIO4_IOWAIT4_0   (0x01U << FSMC_PIO4_IOWAIT4_Pos) /*!< 0x00000100 */
#define FSMC_PIO4_IOWAIT4_1   (0x02U << FSMC_PIO4_IOWAIT4_Pos) /*!< 0x00000200 */
#define FSMC_PIO4_IOWAIT4_2   (0x04U << FSMC_PIO4_IOWAIT4_Pos) /*!< 0x00000400 */
#define FSMC_PIO4_IOWAIT4_3   (0x08U << FSMC_PIO4_IOWAIT4_Pos) /*!< 0x00000800 */
#define FSMC_PIO4_IOWAIT4_4   (0x10U << FSMC_PIO4_IOWAIT4_Pos) /*!< 0x00001000 */
#define FSMC_PIO4_IOWAIT4_5   (0x20U << FSMC_PIO4_IOWAIT4_Pos) /*!< 0x00002000 */
#define FSMC_PIO4_IOWAIT4_6   (0x40U << FSMC_PIO4_IOWAIT4_Pos) /*!< 0x00004000 */
#define FSMC_PIO4_IOWAIT4_7   (0x80U << FSMC_PIO4_IOWAIT4_Pos) /*!< 0x00008000 */

#define FSMC_PIO4_IOHOLD4_Pos (16U)
#define FSMC_PIO4_IOHOLD4_Msk (0xFFU << FSMC_PIO4_IOHOLD4_Pos) /*!< 0x00FF0000 */
#define FSMC_PIO4_IOHOLD4     FSMC_PIO4_IOHOLD4_Msk            /*!<IOHOLD4[7:0] bits (I/O 4 hold time) */
#define FSMC_PIO4_IOHOLD4_0   (0x01U << FSMC_PIO4_IOHOLD4_Pos) /*!< 0x00010000 */
#define FSMC_PIO4_IOHOLD4_1   (0x02U << FSMC_PIO4_IOHOLD4_Pos) /*!< 0x00020000 */
#define FSMC_PIO4_IOHOLD4_2   (0x04U << FSMC_PIO4_IOHOLD4_Pos) /*!< 0x00040000 */
#define FSMC_PIO4_IOHOLD4_3   (0x08U << FSMC_PIO4_IOHOLD4_Pos) /*!< 0x00080000 */
#define FSMC_PIO4_IOHOLD4_4   (0x10U << FSMC_PIO4_IOHOLD4_Pos) /*!< 0x00100000 */
#define FSMC_PIO4_IOHOLD4_5   (0x20U << FSMC_PIO4_IOHOLD4_Pos) /*!< 0x00200000 */
#define FSMC_PIO4_IOHOLD4_6   (0x40U << FSMC_PIO4_IOHOLD4_Pos) /*!< 0x00400000 */
#define FSMC_PIO4_IOHOLD4_7   (0x80U << FSMC_PIO4_IOHOLD4_Pos) /*!< 0x00800000 */

#define FSMC_PIO4_IOHIZ4_Pos  (24U)
#define FSMC_PIO4_IOHIZ4_Msk  (0xFFU << FSMC_PIO4_IOHIZ4_Pos) /*!< 0xFF000000 */
#define FSMC_PIO4_IOHIZ4      FSMC_PIO4_IOHIZ4_Msk            /*!<IOHIZ4[7:0] bits (I/O 4 databus HiZ time) */
#define FSMC_PIO4_IOHIZ4_0    (0x01U << FSMC_PIO4_IOHIZ4_Pos) /*!< 0x01000000 */
#define FSMC_PIO4_IOHIZ4_1    (0x02U << FSMC_PIO4_IOHIZ4_Pos) /*!< 0x02000000 */
#define FSMC_PIO4_IOHIZ4_2    (0x04U << FSMC_PIO4_IOHIZ4_Pos) /*!< 0x04000000 */
#define FSMC_PIO4_IOHIZ4_3    (0x08U << FSMC_PIO4_IOHIZ4_Pos) /*!< 0x08000000 */
#define FSMC_PIO4_IOHIZ4_4    (0x10U << FSMC_PIO4_IOHIZ4_Pos) /*!< 0x10000000 */
#define FSMC_PIO4_IOHIZ4_5    (0x20U << FSMC_PIO4_IOHIZ4_Pos) /*!< 0x20000000 */
#define FSMC_PIO4_IOHIZ4_6    (0x40U << FSMC_PIO4_IOHIZ4_Pos) /*!< 0x40000000 */
#define FSMC_PIO4_IOHIZ4_7    (0x80U << FSMC_PIO4_IOHIZ4_Pos) /*!< 0x80000000 */

/******************  Bit definition for FSMC_ECCR2 register  ******************/
#define FSMC_ECCR2_ECC2_Pos (0U)
#define FSMC_ECCR2_ECC2_Msk (0xFFFFFFFFU << FSMC_ECCR2_ECC2_Pos) /*!< 0xFFFFFFFF */
#define FSMC_ECCR2_ECC2     FSMC_ECCR2_ECC2_Msk                  /*!<ECC result */

/******************  Bit definition for FSMC_ECCR3 register  ******************/
#define FSMC_ECCR3_ECC3_Pos (0U)
#define FSMC_ECCR3_ECC3_Msk (0xFFFFFFFFU << FSMC_ECCR3_ECC3_Pos) /*!< 0xFFFFFFFF */
#define FSMC_ECCR3_ECC3     FSMC_ECCR3_ECC3_Msk                  /*!<ECC result */

/******************************************************************************/
/*                                                                            */
/*                            General Purpose I/O                             */
/*                                                                            */
/******************************************************************************/
/******************  Bits definition for GPIO_MODER register  *****************/
#define GPIO_MODER_MODE0_Pos  (0U)
#define GPIO_MODER_MODE0_Msk  (0x3U << GPIO_MODER_MODE0_Pos) /*!< 0x00000003 */
#define GPIO_MODER_MODE0      GPIO_MODER_MODE0_Msk
#define GPIO_MODER_MODE0_0    (0x1U << GPIO_MODER_MODE0_Pos) /*!< 0x00000001 */
#define GPIO_MODER_MODE0_1    (0x2U << GPIO_MODER_MODE0_Pos) /*!< 0x00000002 */
#define GPIO_MODER_MODE1_Pos  (2U)
#define GPIO_MODER_MODE1_Msk  (0x3U << GPIO_MODER_MODE1_Pos) /*!< 0x0000000C */
#define GPIO_MODER_MODE1      GPIO_MODER_MODE1_Msk
#define GPIO_MODER_MODE1_0    (0x1U << GPIO_MODER_MODE1_Pos) /*!< 0x00000004 */
#define GPIO_MODER_MODE1_1    (0x2U << GPIO_MODER_MODE1_Pos) /*!< 0x00000008 */
#define GPIO_MODER_MODE2_Pos  (4U)
#define GPIO_MODER_MODE2_Msk  (0x3U << GPIO_MODER_MODE2_Pos) /*!< 0x00000030 */
#define GPIO_MODER_MODE2      GPIO_MODER_MODE2_Msk
#define GPIO_MODER_MODE2_0    (0x1U << GPIO_MODER_MODE2_Pos) /*!< 0x00000010 */
#define GPIO_MODER_MODE2_1    (0x2U << GPIO_MODER_MODE2_Pos) /*!< 0x00000020 */
#define GPIO_MODER_MODE3_Pos  (6U)
#define GPIO_MODER_MODE3_Msk  (0x3U << GPIO_MODER_MODE3_Pos) /*!< 0x000000C0 */
#define GPIO_MODER_MODE3      GPIO_MODER_MODE3_Msk
#define GPIO_MODER_MODE3_0    (0x1U << GPIO_MODER_MODE3_Pos) /*!< 0x00000040 */
#define GPIO_MODER_MODE3_1    (0x2U << GPIO_MODER_MODE3_Pos) /*!< 0x00000080 */
#define GPIO_MODER_MODE4_Pos  (8U)
#define GPIO_MODER_MODE4_Msk  (0x3U << GPIO_MODER_MODE4_Pos) /*!< 0x00000300 */
#define GPIO_MODER_MODE4      GPIO_MODER_MODE4_Msk
#define GPIO_MODER_MODE4_0    (0x1U << GPIO_MODER_MODE4_Pos) /*!< 0x00000100 */
#define GPIO_MODER_MODE4_1    (0x2U << GPIO_MODER_MODE4_Pos) /*!< 0x00000200 */
#define GPIO_MODER_MODE5_Pos  (10U)
#define GPIO_MODER_MODE5_Msk  (0x3U << GPIO_MODER_MODE5_Pos) /*!< 0x00000C00 */
#define GPIO_MODER_MODE5      GPIO_MODER_MODE5_Msk
#define GPIO_MODER_MODE5_0    (0x1U << GPIO_MODER_MODE5_Pos) /*!< 0x00000400 */
#define GPIO_MODER_MODE5_1    (0x2U << GPIO_MODER_MODE5_Pos) /*!< 0x00000800 */
#define GPIO_MODER_MODE6_Pos  (12U)
#define GPIO_MODER_MODE6_Msk  (0x3U << GPIO_MODER_MODE6_Pos) /*!< 0x00003000 */
#define GPIO_MODER_MODE6      GPIO_MODER_MODE6_Msk
#define GPIO_MODER_MODE6_0    (0x1U << GPIO_MODER_MODE6_Pos) /*!< 0x00001000 */
#define GPIO_MODER_MODE6_1    (0x2U << GPIO_MODER_MODE6_Pos) /*!< 0x00002000 */
#define GPIO_MODER_MODE7_Pos  (14U)
#define GPIO_MODER_MODE7_Msk  (0x3U << GPIO_MODER_MODE7_Pos) /*!< 0x0000C000 */
#define GPIO_MODER_MODE7      GPIO_MODER_MODE7_Msk
#define GPIO_MODER_MODE7_0    (0x1U << GPIO_MODER_MODE7_Pos) /*!< 0x00004000 */
#define GPIO_MODER_MODE7_1    (0x2U << GPIO_MODER_MODE7_Pos) /*!< 0x00008000 */
#define GPIO_MODER_MODE8_Pos  (16U)
#define GPIO_MODER_MODE8_Msk  (0x3U << GPIO_MODER_MODE8_Pos) /*!< 0x00030000 */
#define GPIO_MODER_MODE8      GPIO_MODER_MODE8_Msk
#define GPIO_MODER_MODE8_0    (0x1U << GPIO_MODER_MODE8_Pos) /*!< 0x00010000 */
#define GPIO_MODER_MODE8_1    (0x2U << GPIO_MODER_MODE8_Pos) /*!< 0x00020000 */
#define GPIO_MODER_MODE9_Pos  (18U)
#define GPIO_MODER_MODE9_Msk  (0x3U << GPIO_MODER_MODE9_Pos) /*!< 0x000C0000 */
#define GPIO_MODER_MODE9      GPIO_MODER_MODE9_Msk
#define GPIO_MODER_MODE9_0    (0x1U << GPIO_MODER_MODE9_Pos) /*!< 0x00040000 */
#define GPIO_MODER_MODE9_1    (0x2U << GPIO_MODER_MODE9_Pos) /*!< 0x00080000 */
#define GPIO_MODER_MODE10_Pos (20U)
#define GPIO_MODER_MODE10_Msk (0x3U << GPIO_MODER_MODE10_Pos) /*!< 0x00300000 */
#define GPIO_MODER_MODE10     GPIO_MODER_MODE10_Msk
#define GPIO_MODER_MODE10_0   (0x1U << GPIO_MODER_MODE10_Pos) /*!< 0x00100000 */
#define GPIO_MODER_MODE10_1   (0x2U << GPIO_MODER_MODE10_Pos) /*!< 0x00200000 */
#define GPIO_MODER_MODE11_Pos (22U)
#define GPIO_MODER_MODE11_Msk (0x3U << GPIO_MODER_MODE11_Pos) /*!< 0x00C00000 */
#define GPIO_MODER_MODE11     GPIO_MODER_MODE11_Msk
#define GPIO_MODER_MODE11_0   (0x1U << GPIO_MODER_MODE11_Pos) /*!< 0x00400000 */
#define GPIO_MODER_MODE11_1   (0x2U << GPIO_MODER_MODE11_Pos) /*!< 0x00800000 */
#define GPIO_MODER_MODE12_Pos (24U)
#define GPIO_MODER_MODE12_Msk (0x3U << GPIO_MODER_MODE12_Pos) /*!< 0x03000000 */
#define GPIO_MODER_MODE12     GPIO_MODER_MODE12_Msk
#define GPIO_MODER_MODE12_0   (0x1U << GPIO_MODER_MODE12_Pos) /*!< 0x01000000 */
#define GPIO_MODER_MODE12_1   (0x2U << GPIO_MODER_MODE12_Pos) /*!< 0x02000000 */
#define GPIO_MODER_MODE13_Pos (26U)
#define GPIO_MODER_MODE13_Msk (0x3U << GPIO_MODER_MODE13_Pos) /*!< 0x0C000000 */
#define GPIO_MODER_MODE13     GPIO_MODER_MODE13_Msk
#define GPIO_MODER_MODE13_0   (0x1U << GPIO_MODER_MODE13_Pos) /*!< 0x04000000 */
#define GPIO_MODER_MODE13_1   (0x2U << GPIO_MODER_MODE13_Pos) /*!< 0x08000000 */
#define GPIO_MODER_MODE14_Pos (28U)
#define GPIO_MODER_MODE14_Msk (0x3U << GPIO_MODER_MODE14_Pos) /*!< 0x30000000 */
#define GPIO_MODER_MODE14     GPIO_MODER_MODE14_Msk
#define GPIO_MODER_MODE14_0   (0x1U << GPIO_MODER_MODE14_Pos) /*!< 0x10000000 */
#define GPIO_MODER_MODE14_1   (0x2U << GPIO_MODER_MODE14_Pos) /*!< 0x20000000 */
#define GPIO_MODER_MODE15_Pos (30U)
#define GPIO_MODER_MODE15_Msk (0x3U << GPIO_MODER_MODE15_Pos) /*!< 0xC0000000 */
#define GPIO_MODER_MODE15     GPIO_MODER_MODE15_Msk
#define GPIO_MODER_MODE15_0   (0x1U << GPIO_MODER_MODE15_Pos) /*!< 0x40000000 */
#define GPIO_MODER_MODE15_1   (0x2U << GPIO_MODER_MODE15_Pos) /*!< 0x80000000 */

/* Legacy defines */
#define GPIO_MODER_MODER0_Pos  (0U)
#define GPIO_MODER_MODER0_Msk  (0x3U << GPIO_MODER_MODER0_Pos) /*!< 0x00000003 */
#define GPIO_MODER_MODER0      GPIO_MODER_MODER0_Msk
#define GPIO_MODER_MODER0_0    (0x1U << GPIO_MODER_MODER0_Pos) /*!< 0x00000001 */
#define GPIO_MODER_MODER0_1    (0x2U << GPIO_MODER_MODER0_Pos) /*!< 0x00000002 */
#define GPIO_MODER_MODER1_Pos  (2U)
#define GPIO_MODER_MODER1_Msk  (0x3U << GPIO_MODER_MODER1_Pos) /*!< 0x0000000C */
#define GPIO_MODER_MODER1      GPIO_MODER_MODER1_Msk
#define GPIO_MODER_MODER1_0    (0x1U << GPIO_MODER_MODER1_Pos) /*!< 0x00000004 */
#define GPIO_MODER_MODER1_1    (0x2U << GPIO_MODER_MODER1_Pos) /*!< 0x00000008 */
#define GPIO_MODER_MODER2_Pos  (4U)
#define GPIO_MODER_MODER2_Msk  (0x3U << GPIO_MODER_MODER2_Pos) /*!< 0x00000030 */
#define GPIO_MODER_MODER2      GPIO_MODER_MODER2_Msk
#define GPIO_MODER_MODER2_0    (0x1U << GPIO_MODER_MODER2_Pos) /*!< 0x00000010 */
#define GPIO_MODER_MODER2_1    (0x2U << GPIO_MODER_MODER2_Pos) /*!< 0x00000020 */
#define GPIO_MODER_MODER3_Pos  (6U)
#define GPIO_MODER_MODER3_Msk  (0x3U << GPIO_MODER_MODER3_Pos) /*!< 0x000000C0 */
#define GPIO_MODER_MODER3      GPIO_MODER_MODER3_Msk
#define GPIO_MODER_MODER3_0    (0x1U << GPIO_MODER_MODER3_Pos) /*!< 0x00000040 */
#define GPIO_MODER_MODER3_1    (0x2U << GPIO_MODER_MODER3_Pos) /*!< 0x00000080 */
#define GPIO_MODER_MODER4_Pos  (8U)
#define GPIO_MODER_MODER4_Msk  (0x3U << GPIO_MODER_MODER4_Pos) /*!< 0x00000300 */
#define GPIO_MODER_MODER4      GPIO_MODER_MODER4_Msk
#define GPIO_MODER_MODER4_0    (0x1U << GPIO_MODER_MODER4_Pos) /*!< 0x00000100 */
#define GPIO_MODER_MODER4_1    (0x2U << GPIO_MODER_MODER4_Pos) /*!< 0x00000200 */
#define GPIO_MODER_MODER5_Pos  (10U)
#define GPIO_MODER_MODER5_Msk  (0x3U << GPIO_MODER_MODER5_Pos) /*!< 0x00000C00 */
#define GPIO_MODER_MODER5      GPIO_MODER_MODER5_Msk
#define GPIO_MODER_MODER5_0    (0x1U << GPIO_MODER_MODER5_Pos) /*!< 0x00000400 */
#define GPIO_MODER_MODER5_1    (0x2U << GPIO_MODER_MODER5_Pos) /*!< 0x00000800 */
#define GPIO_MODER_MODER6_Pos  (12U)
#define GPIO_MODER_MODER6_Msk  (0x3U << GPIO_MODER_MODER6_Pos) /*!< 0x00003000 */
#define GPIO_MODER_MODER6      GPIO_MODER_MODER6_Msk
#define GPIO_MODER_MODER6_0    (0x1U << GPIO_MODER_MODER6_Pos) /*!< 0x00001000 */
#define GPIO_MODER_MODER6_1    (0x2U << GPIO_MODER_MODER6_Pos) /*!< 0x00002000 */
#define GPIO_MODER_MODER7_Pos  (14U)
#define GPIO_MODER_MODER7_Msk  (0x3U << GPIO_MODER_MODER7_Pos) /*!< 0x0000C000 */
#define GPIO_MODER_MODER7      GPIO_MODER_MODER7_Msk
#define GPIO_MODER_MODER7_0    (0x1U << GPIO_MODER_MODER7_Pos) /*!< 0x00004000 */
#define GPIO_MODER_MODER7_1    (0x2U << GPIO_MODER_MODER7_Pos) /*!< 0x00008000 */
#define GPIO_MODER_MODER8_Pos  (16U)
#define GPIO_MODER_MODER8_Msk  (0x3U << GPIO_MODER_MODER8_Pos) /*!< 0x00030000 */
#define GPIO_MODER_MODER8      GPIO_MODER_MODER8_Msk
#define GPIO_MODER_MODER8_0    (0x1U << GPIO_MODER_MODER8_Pos) /*!< 0x00010000 */
#define GPIO_MODER_MODER8_1    (0x2U << GPIO_MODER_MODER8_Pos) /*!< 0x00020000 */
#define GPIO_MODER_MODER9_Pos  (18U)
#define GPIO_MODER_MODER9_Msk  (0x3U << GPIO_MODER_MODER9_Pos) /*!< 0x000C0000 */
#define GPIO_MODER_MODER9      GPIO_MODER_MODER9_Msk
#define GPIO_MODER_MODER9_0    (0x1U << GPIO_MODER_MODER9_Pos) /*!< 0x00040000 */
#define GPIO_MODER_MODER9_1    (0x2U << GPIO_MODER_MODER9_Pos) /*!< 0x00080000 */
#define GPIO_MODER_MODER10_Pos (20U)
#define GPIO_MODER_MODER10_Msk (0x3U << GPIO_MODER_MODER10_Pos) /*!< 0x00300000 */
#define GPIO_MODER_MODER10     GPIO_MODER_MODER10_Msk
#define GPIO_MODER_MODER10_0   (0x1U << GPIO_MODER_MODER10_Pos) /*!< 0x00100000 */
#define GPIO_MODER_MODER10_1   (0x2U << GPIO_MODER_MODER10_Pos) /*!< 0x00200000 */
#define GPIO_MODER_MODER11_Pos (22U)
#define GPIO_MODER_MODER11_Msk (0x3U << GPIO_MODER_MODER11_Pos) /*!< 0x00C00000 */
#define GPIO_MODER_MODER11     GPIO_MODER_MODER11_Msk
#define GPIO_MODER_MODER11_0   (0x1U << GPIO_MODER_MODER11_Pos) /*!< 0x00400000 */
#define GPIO_MODER_MODER11_1   (0x2U << GPIO_MODER_MODER11_Pos) /*!< 0x00800000 */
#define GPIO_MODER_MODER12_Pos (24U)
#define GPIO_MODER_MODER12_Msk (0x3U << GPIO_MODER_MODER12_Pos) /*!< 0x03000000 */
#define GPIO_MODER_MODER12     GPIO_MODER_MODER12_Msk
#define GPIO_MODER_MODER12_0   (0x1U << GPIO_MODER_MODER12_Pos) /*!< 0x01000000 */
#define GPIO_MODER_MODER12_1   (0x2U << GPIO_MODER_MODER12_Pos) /*!< 0x02000000 */
#define GPIO_MODER_MODER13_Pos (26U)
#define GPIO_MODER_MODER13_Msk (0x3U << GPIO_MODER_MODER13_Pos) /*!< 0x0C000000 */
#define GPIO_MODER_MODER13     GPIO_MODER_MODER13_Msk
#define GPIO_MODER_MODER13_0   (0x1U << GPIO_MODER_MODER13_Pos) /*!< 0x04000000 */
#define GPIO_MODER_MODER13_1   (0x2U << GPIO_MODER_MODER13_Pos) /*!< 0x08000000 */
#define GPIO_MODER_MODER14_Pos (28U)
#define GPIO_MODER_MODER14_Msk (0x3U << GPIO_MODER_MODER14_Pos) /*!< 0x30000000 */
#define GPIO_MODER_MODER14     GPIO_MODER_MODER14_Msk
#define GPIO_MODER_MODER14_0   (0x1U << GPIO_MODER_MODER14_Pos) /*!< 0x10000000 */
#define GPIO_MODER_MODER14_1   (0x2U << GPIO_MODER_MODER14_Pos) /*!< 0x20000000 */
#define GPIO_MODER_MODER15_Pos (30U)
#define GPIO_MODER_MODER15_Msk (0x3U << GPIO_MODER_MODER15_Pos) /*!< 0xC0000000 */
#define GPIO_MODER_MODER15     GPIO_MODER_MODER15_Msk
#define GPIO_MODER_MODER15_0   (0x1U << GPIO_MODER_MODER15_Pos) /*!< 0x40000000 */
#define GPIO_MODER_MODER15_1   (0x2U << GPIO_MODER_MODER15_Pos) /*!< 0x80000000 */

/******************  Bits definition for GPIO_OTYPER register  ****************/
#define GPIO_OTYPER_OT0_Pos  (0U)
#define GPIO_OTYPER_OT0_Msk  (0x1U << GPIO_OTYPER_OT0_Pos) /*!< 0x00000001 */
#define GPIO_OTYPER_OT0      GPIO_OTYPER_OT0_Msk
#define GPIO_OTYPER_OT1_Pos  (1U)
#define GPIO_OTYPER_OT1_Msk  (0x1U << GPIO_OTYPER_OT1_Pos) /*!< 0x00000002 */
#define GPIO_OTYPER_OT1      GPIO_OTYPER_OT1_Msk
#define GPIO_OTYPER_OT2_Pos  (2U)
#define GPIO_OTYPER_OT2_Msk  (0x1U << GPIO_OTYPER_OT2_Pos) /*!< 0x00000004 */
#define GPIO_OTYPER_OT2      GPIO_OTYPER_OT2_Msk
#define GPIO_OTYPER_OT3_Pos  (3U)
#define GPIO_OTYPER_OT3_Msk  (0x1U << GPIO_OTYPER_OT3_Pos) /*!< 0x00000008 */
#define GPIO_OTYPER_OT3      GPIO_OTYPER_OT3_Msk
#define GPIO_OTYPER_OT4_Pos  (4U)
#define GPIO_OTYPER_OT4_Msk  (0x1U << GPIO_OTYPER_OT4_Pos) /*!< 0x00000010 */
#define GPIO_OTYPER_OT4      GPIO_OTYPER_OT4_Msk
#define GPIO_OTYPER_OT5_Pos  (5U)
#define GPIO_OTYPER_OT5_Msk  (0x1U << GPIO_OTYPER_OT5_Pos) /*!< 0x00000020 */
#define GPIO_OTYPER_OT5      GPIO_OTYPER_OT5_Msk
#define GPIO_OTYPER_OT6_Pos  (6U)
#define GPIO_OTYPER_OT6_Msk  (0x1U << GPIO_OTYPER_OT6_Pos) /*!< 0x00000040 */
#define GPIO_OTYPER_OT6      GPIO_OTYPER_OT6_Msk
#define GPIO_OTYPER_OT7_Pos  (7U)
#define GPIO_OTYPER_OT7_Msk  (0x1U << GPIO_OTYPER_OT7_Pos) /*!< 0x00000080 */
#define GPIO_OTYPER_OT7      GPIO_OTYPER_OT7_Msk
#define GPIO_OTYPER_OT8_Pos  (8U)
#define GPIO_OTYPER_OT8_Msk  (0x1U << GPIO_OTYPER_OT8_Pos) /*!< 0x00000100 */
#define GPIO_OTYPER_OT8      GPIO_OTYPER_OT8_Msk
#define GPIO_OTYPER_OT9_Pos  (9U)
#define GPIO_OTYPER_OT9_Msk  (0x1U << GPIO_OTYPER_OT9_Pos) /*!< 0x00000200 */
#define GPIO_OTYPER_OT9      GPIO_OTYPER_OT9_Msk
#define GPIO_OTYPER_OT10_Pos (10U)
#define GPIO_OTYPER_OT10_Msk (0x1U << GPIO_OTYPER_OT10_Pos) /*!< 0x00000400 */
#define GPIO_OTYPER_OT10     GPIO_OTYPER_OT10_Msk
#define GPIO_OTYPER_OT11_Pos (11U)
#define GPIO_OTYPER_OT11_Msk (0x1U << GPIO_OTYPER_OT11_Pos) /*!< 0x00000800 */
#define GPIO_OTYPER_OT11     GPIO_OTYPER_OT11_Msk
#define GPIO_OTYPER_OT12_Pos (12U)
#define GPIO_OTYPER_OT12_Msk (0x1U << GPIO_OTYPER_OT12_Pos) /*!< 0x00001000 */
#define GPIO_OTYPER_OT12     GPIO_OTYPER_OT12_Msk
#define GPIO_OTYPER_OT13_Pos (13U)
#define GPIO_OTYPER_OT13_Msk (0x1U << GPIO_OTYPER_OT13_Pos) /*!< 0x00002000 */
#define GPIO_OTYPER_OT13     GPIO_OTYPER_OT13_Msk
#define GPIO_OTYPER_OT14_Pos (14U)
#define GPIO_OTYPER_OT14_Msk (0x1U << GPIO_OTYPER_OT14_Pos) /*!< 0x00004000 */
#define GPIO_OTYPER_OT14     GPIO_OTYPER_OT14_Msk
#define GPIO_OTYPER_OT15_Pos (15U)
#define GPIO_OTYPER_OT15_Msk (0x1U << GPIO_OTYPER_OT15_Pos) /*!< 0x00008000 */
#define GPIO_OTYPER_OT15     GPIO_OTYPER_OT15_Msk

/* Legacy defines */
#define GPIO_OTYPER_OT_0  GPIO_OTYPER_OT0
#define GPIO_OTYPER_OT_1  GPIO_OTYPER_OT1
#define GPIO_OTYPER_OT_2  GPIO_OTYPER_OT2
#define GPIO_OTYPER_OT_3  GPIO_OTYPER_OT3
#define GPIO_OTYPER_OT_4  GPIO_OTYPER_OT4
#define GPIO_OTYPER_OT_5  GPIO_OTYPER_OT5
#define GPIO_OTYPER_OT_6  GPIO_OTYPER_OT6
#define GPIO_OTYPER_OT_7  GPIO_OTYPER_OT7
#define GPIO_OTYPER_OT_8  GPIO_OTYPER_OT8
#define GPIO_OTYPER_OT_9  GPIO_OTYPER_OT9
#define GPIO_OTYPER_OT_10 GPIO_OTYPER_OT10
#define GPIO_OTYPER_OT_11 GPIO_OTYPER_OT11
#define GPIO_OTYPER_OT_12 GPIO_OTYPER_OT12
#define GPIO_OTYPER_OT_13 GPIO_OTYPER_OT13
#define GPIO_OTYPER_OT_14 GPIO_OTYPER_OT14
#define GPIO_OTYPER_OT_15 GPIO_OTYPER_OT15

/******************  Bits definition for GPIO_OSPEEDR register  ***************/
#define GPIO_OSPEEDR_OSPEED0_Pos  (0U)
#define GPIO_OSPEEDR_OSPEED0_Msk  (0x3U << GPIO_OSPEEDR_OSPEED0_Pos) /*!< 0x00000003 */
#define GPIO_OSPEEDR_OSPEED0      GPIO_OSPEEDR_OSPEED0_Msk
#define GPIO_OSPEEDR_OSPEED0_0    (0x1U << GPIO_OSPEEDR_OSPEED0_Pos) /*!< 0x00000001 */
#define GPIO_OSPEEDR_OSPEED0_1    (0x2U << GPIO_OSPEEDR_OSPEED0_Pos) /*!< 0x00000002 */
#define GPIO_OSPEEDR_OSPEED1_Pos  (2U)
#define GPIO_OSPEEDR_OSPEED1_Msk  (0x3U << GPIO_OSPEEDR_OSPEED1_Pos) /*!< 0x0000000C */
#define GPIO_OSPEEDR_OSPEED1      GPIO_OSPEEDR_OSPEED1_Msk
#define GPIO_OSPEEDR_OSPEED1_0    (0x1U << GPIO_OSPEEDR_OSPEED1_Pos) /*!< 0x00000004 */
#define GPIO_OSPEEDR_OSPEED1_1    (0x2U << GPIO_OSPEEDR_OSPEED1_Pos) /*!< 0x00000008 */
#define GPIO_OSPEEDR_OSPEED2_Pos  (4U)
#define GPIO_OSPEEDR_OSPEED2_Msk  (0x3U << GPIO_OSPEEDR_OSPEED2_Pos) /*!< 0x00000030 */
#define GPIO_OSPEEDR_OSPEED2      GPIO_OSPEEDR_OSPEED2_Msk
#define GPIO_OSPEEDR_OSPEED2_0    (0x1U << GPIO_OSPEEDR_OSPEED2_Pos) /*!< 0x00000010 */
#define GPIO_OSPEEDR_OSPEED2_1    (0x2U << GPIO_OSPEEDR_OSPEED2_Pos) /*!< 0x00000020 */
#define GPIO_OSPEEDR_OSPEED3_Pos  (6U)
#define GPIO_OSPEEDR_OSPEED3_Msk  (0x3U << GPIO_OSPEEDR_OSPEED3_Pos) /*!< 0x000000C0 */
#define GPIO_OSPEEDR_OSPEED3      GPIO_OSPEEDR_OSPEED3_Msk
#define GPIO_OSPEEDR_OSPEED3_0    (0x1U << GPIO_OSPEEDR_OSPEED3_Pos) /*!< 0x00000040 */
#define GPIO_OSPEEDR_OSPEED3_1    (0x2U << GPIO_OSPEEDR_OSPEED3_Pos) /*!< 0x00000080 */
#define GPIO_OSPEEDR_OSPEED4_Pos  (8U)
#define GPIO_OSPEEDR_OSPEED4_Msk  (0x3U << GPIO_OSPEEDR_OSPEED4_Pos) /*!< 0x00000300 */
#define GPIO_OSPEEDR_OSPEED4      GPIO_OSPEEDR_OSPEED4_Msk
#define GPIO_OSPEEDR_OSPEED4_0    (0x1U << GPIO_OSPEEDR_OSPEED4_Pos) /*!< 0x00000100 */
#define GPIO_OSPEEDR_OSPEED4_1    (0x2U << GPIO_OSPEEDR_OSPEED4_Pos) /*!< 0x00000200 */
#define GPIO_OSPEEDR_OSPEED5_Pos  (10U)
#define GPIO_OSPEEDR_OSPEED5_Msk  (0x3U << GPIO_OSPEEDR_OSPEED5_Pos) /*!< 0x00000C00 */
#define GPIO_OSPEEDR_OSPEED5      GPIO_OSPEEDR_OSPEED5_Msk
#define GPIO_OSPEEDR_OSPEED5_0    (0x1U << GPIO_OSPEEDR_OSPEED5_Pos) /*!< 0x00000400 */
#define GPIO_OSPEEDR_OSPEED5_1    (0x2U << GPIO_OSPEEDR_OSPEED5_Pos) /*!< 0x00000800 */
#define GPIO_OSPEEDR_OSPEED6_Pos  (12U)
#define GPIO_OSPEEDR_OSPEED6_Msk  (0x3U << GPIO_OSPEEDR_OSPEED6_Pos) /*!< 0x00003000 */
#define GPIO_OSPEEDR_OSPEED6      GPIO_OSPEEDR_OSPEED6_Msk
#define GPIO_OSPEEDR_OSPEED6_0    (0x1U << GPIO_OSPEEDR_OSPEED6_Pos) /*!< 0x00001000 */
#define GPIO_OSPEEDR_OSPEED6_1    (0x2U << GPIO_OSPEEDR_OSPEED6_Pos) /*!< 0x00002000 */
#define GPIO_OSPEEDR_OSPEED7_Pos  (14U)
#define GPIO_OSPEEDR_OSPEED7_Msk  (0x3U << GPIO_OSPEEDR_OSPEED7_Pos) /*!< 0x0000C000 */
#define GPIO_OSPEEDR_OSPEED7      GPIO_OSPEEDR_OSPEED7_Msk
#define GPIO_OSPEEDR_OSPEED7_0    (0x1U << GPIO_OSPEEDR_OSPEED7_Pos) /*!< 0x00004000 */
#define GPIO_OSPEEDR_OSPEED7_1    (0x2U << GPIO_OSPEEDR_OSPEED7_Pos) /*!< 0x00008000 */
#define GPIO_OSPEEDR_OSPEED8_Pos  (16U)
#define GPIO_OSPEEDR_OSPEED8_Msk  (0x3U << GPIO_OSPEEDR_OSPEED8_Pos) /*!< 0x00030000 */
#define GPIO_OSPEEDR_OSPEED8      GPIO_OSPEEDR_OSPEED8_Msk
#define GPIO_OSPEEDR_OSPEED8_0    (0x1U << GPIO_OSPEEDR_OSPEED8_Pos) /*!< 0x00010000 */
#define GPIO_OSPEEDR_OSPEED8_1    (0x2U << GPIO_OSPEEDR_OSPEED8_Pos) /*!< 0x00020000 */
#define GPIO_OSPEEDR_OSPEED9_Pos  (18U)
#define GPIO_OSPEEDR_OSPEED9_Msk  (0x3U << GPIO_OSPEEDR_OSPEED9_Pos) /*!< 0x000C0000 */
#define GPIO_OSPEEDR_OSPEED9      GPIO_OSPEEDR_OSPEED9_Msk
#define GPIO_OSPEEDR_OSPEED9_0    (0x1U << GPIO_OSPEEDR_OSPEED9_Pos) /*!< 0x00040000 */
#define GPIO_OSPEEDR_OSPEED9_1    (0x2U << GPIO_OSPEEDR_OSPEED9_Pos) /*!< 0x00080000 */
#define GPIO_OSPEEDR_OSPEED10_Pos (20U)
#define GPIO_OSPEEDR_OSPEED10_Msk (0x3U << GPIO_OSPEEDR_OSPEED10_Pos) /*!< 0x00300000 */
#define GPIO_OSPEEDR_OSPEED10     GPIO_OSPEEDR_OSPEED10_Msk
#define GPIO_OSPEEDR_OSPEED10_0   (0x1U << GPIO_OSPEEDR_OSPEED10_Pos) /*!< 0x00100000 */
#define GPIO_OSPEEDR_OSPEED10_1   (0x2U << GPIO_OSPEEDR_OSPEED10_Pos) /*!< 0x00200000 */
#define GPIO_OSPEEDR_OSPEED11_Pos (22U)
#define GPIO_OSPEEDR_OSPEED11_Msk (0x3U << GPIO_OSPEEDR_OSPEED11_Pos) /*!< 0x00C00000 */
#define GPIO_OSPEEDR_OSPEED11     GPIO_OSPEEDR_OSPEED11_Msk
#define GPIO_OSPEEDR_OSPEED11_0   (0x1U << GPIO_OSPEEDR_OSPEED11_Pos) /*!< 0x00400000 */
#define GPIO_OSPEEDR_OSPEED11_1   (0x2U << GPIO_OSPEEDR_OSPEED11_Pos) /*!< 0x00800000 */
#define GPIO_OSPEEDR_OSPEED12_Pos (24U)
#define GPIO_OSPEEDR_OSPEED12_Msk (0x3U << GPIO_OSPEEDR_OSPEED12_Pos) /*!< 0x03000000 */
#define GPIO_OSPEEDR_OSPEED12     GPIO_OSPEEDR_OSPEED12_Msk
#define GPIO_OSPEEDR_OSPEED12_0   (0x1U << GPIO_OSPEEDR_OSPEED12_Pos) /*!< 0x01000000 */
#define GPIO_OSPEEDR_OSPEED12_1   (0x2U << GPIO_OSPEEDR_OSPEED12_Pos) /*!< 0x02000000 */
#define GPIO_OSPEEDR_OSPEED13_Pos (26U)
#define GPIO_OSPEEDR_OSPEED13_Msk (0x3U << GPIO_OSPEEDR_OSPEED13_Pos) /*!< 0x0C000000 */
#define GPIO_OSPEEDR_OSPEED13     GPIO_OSPEEDR_OSPEED13_Msk
#define GPIO_OSPEEDR_OSPEED13_0   (0x1U << GPIO_OSPEEDR_OSPEED13_Pos) /*!< 0x04000000 */
#define GPIO_OSPEEDR_OSPEED13_1   (0x2U << GPIO_OSPEEDR_OSPEED13_Pos) /*!< 0x08000000 */
#define GPIO_OSPEEDR_OSPEED14_Pos (28U)
#define GPIO_OSPEEDR_OSPEED14_Msk (0x3U << GPIO_OSPEEDR_OSPEED14_Pos) /*!< 0x30000000 */
#define GPIO_OSPEEDR_OSPEED14     GPIO_OSPEEDR_OSPEED14_Msk
#define GPIO_OSPEEDR_OSPEED14_0   (0x1U << GPIO_OSPEEDR_OSPEED14_Pos) /*!< 0x10000000 */
#define GPIO_OSPEEDR_OSPEED14_1   (0x2U << GPIO_OSPEEDR_OSPEED14_Pos) /*!< 0x20000000 */
#define GPIO_OSPEEDR_OSPEED15_Pos (30U)
#define GPIO_OSPEEDR_OSPEED15_Msk (0x3U << GPIO_OSPEEDR_OSPEED15_Pos) /*!< 0xC0000000 */
#define GPIO_OSPEEDR_OSPEED15     GPIO_OSPEEDR_OSPEED15_Msk
#define GPIO_OSPEEDR_OSPEED15_0   (0x1U << GPIO_OSPEEDR_OSPEED15_Pos) /*!< 0x40000000 */
#define GPIO_OSPEEDR_OSPEED15_1   (0x2U << GPIO_OSPEEDR_OSPEED15_Pos) /*!< 0x80000000 */

/* Legacy defines */
#define GPIO_OSPEEDER_OSPEEDR0    GPIO_OSPEEDR_OSPEED0
#define GPIO_OSPEEDER_OSPEEDR0_0  GPIO_OSPEEDR_OSPEED0_0
#define GPIO_OSPEEDER_OSPEEDR0_1  GPIO_OSPEEDR_OSPEED0_1
#define GPIO_OSPEEDER_OSPEEDR1    GPIO_OSPEEDR_OSPEED1
#define GPIO_OSPEEDER_OSPEEDR1_0  GPIO_OSPEEDR_OSPEED1_0
#define GPIO_OSPEEDER_OSPEEDR1_1  GPIO_OSPEEDR_OSPEED1_1
#define GPIO_OSPEEDER_OSPEEDR2    GPIO_OSPEEDR_OSPEED2
#define GPIO_OSPEEDER_OSPEEDR2_0  GPIO_OSPEEDR_OSPEED2_0
#define GPIO_OSPEEDER_OSPEEDR2_1  GPIO_OSPEEDR_OSPEED2_1
#define GPIO_OSPEEDER_OSPEEDR3    GPIO_OSPEEDR_OSPEED3
#define GPIO_OSPEEDER_OSPEEDR3_0  GPIO_OSPEEDR_OSPEED3_0
#define GPIO_OSPEEDER_OSPEEDR3_1  GPIO_OSPEEDR_OSPEED3_1
#define GPIO_OSPEEDER_OSPEEDR4    GPIO_OSPEEDR_OSPEED4
#define GPIO_OSPEEDER_OSPEEDR4_0  GPIO_OSPEEDR_OSPEED4_0
#define GPIO_OSPEEDER_OSPEEDR4_1  GPIO_OSPEEDR_OSPEED4_1
#define GPIO_OSPEEDER_OSPEEDR5    GPIO_OSPEEDR_OSPEED5
#define GPIO_OSPEEDER_OSPEEDR5_0  GPIO_OSPEEDR_OSPEED5_0
#define GPIO_OSPEEDER_OSPEEDR5_1  GPIO_OSPEEDR_OSPEED5_1
#define GPIO_OSPEEDER_OSPEEDR6    GPIO_OSPEEDR_OSPEED6
#define GPIO_OSPEEDER_OSPEEDR6_0  GPIO_OSPEEDR_OSPEED6_0
#define GPIO_OSPEEDER_OSPEEDR6_1  GPIO_OSPEEDR_OSPEED6_1
#define GPIO_OSPEEDER_OSPEEDR7    GPIO_OSPEEDR_OSPEED7
#define GPIO_OSPEEDER_OSPEEDR7_0  GPIO_OSPEEDR_OSPEED7_0
#define GPIO_OSPEEDER_OSPEEDR7_1  GPIO_OSPEEDR_OSPEED7_1
#define GPIO_OSPEEDER_OSPEEDR8    GPIO_OSPEEDR_OSPEED8
#define GPIO_OSPEEDER_OSPEEDR8_0  GPIO_OSPEEDR_OSPEED8_0
#define GPIO_OSPEEDER_OSPEEDR8_1  GPIO_OSPEEDR_OSPEED8_1
#define GPIO_OSPEEDER_OSPEEDR9    GPIO_OSPEEDR_OSPEED9
#define GPIO_OSPEEDER_OSPEEDR9_0  GPIO_OSPEEDR_OSPEED9_0
#define GPIO_OSPEEDER_OSPEEDR9_1  GPIO_OSPEEDR_OSPEED9_1
#define GPIO_OSPEEDER_OSPEEDR10   GPIO_OSPEEDR_OSPEED10
#define GPIO_OSPEEDER_OSPEEDR10_0 GPIO_OSPEEDR_OSPEED10_0
#define GPIO_OSPEEDER_OSPEEDR10_1 GPIO_OSPEEDR_OSPEED10_1
#define GPIO_OSPEEDER_OSPEEDR11   GPIO_OSPEEDR_OSPEED11
#define GPIO_OSPEEDER_OSPEEDR11_0 GPIO_OSPEEDR_OSPEED11_0
#define GPIO_OSPEEDER_OSPEEDR11_1 GPIO_OSPEEDR_OSPEED11_1
#define GPIO_OSPEEDER_OSPEEDR12   GPIO_OSPEEDR_OSPEED12
#define GPIO_OSPEEDER_OSPEEDR12_0 GPIO_OSPEEDR_OSPEED12_0
#define GPIO_OSPEEDER_OSPEEDR12_1 GPIO_OSPEEDR_OSPEED12_1
#define GPIO_OSPEEDER_OSPEEDR13   GPIO_OSPEEDR_OSPEED13
#define GPIO_OSPEEDER_OSPEEDR13_0 GPIO_OSPEEDR_OSPEED13_0
#define GPIO_OSPEEDER_OSPEEDR13_1 GPIO_OSPEEDR_OSPEED13_1
#define GPIO_OSPEEDER_OSPEEDR14   GPIO_OSPEEDR_OSPEED14
#define GPIO_OSPEEDER_OSPEEDR14_0 GPIO_OSPEEDR_OSPEED14_0
#define GPIO_OSPEEDER_OSPEEDR14_1 GPIO_OSPEEDR_OSPEED14_1
#define GPIO_OSPEEDER_OSPEEDR15   GPIO_OSPEEDR_OSPEED15
#define GPIO_OSPEEDER_OSPEEDR15_0 GPIO_OSPEEDR_OSPEED15_0
#define GPIO_OSPEEDER_OSPEEDR15_1 GPIO_OSPEEDR_OSPEED15_1

/******************  Bits definition for GPIO_PUPDR register  *****************/
#define GPIO_PUPDR_PUPD0_Pos  (0U)
#define GPIO_PUPDR_PUPD0_Msk  (0x3U << GPIO_PUPDR_PUPD0_Pos) /*!< 0x00000003 */
#define GPIO_PUPDR_PUPD0      GPIO_PUPDR_PUPD0_Msk
#define GPIO_PUPDR_PUPD0_0    (0x1U << GPIO_PUPDR_PUPD0_Pos) /*!< 0x00000001 */
#define GPIO_PUPDR_PUPD0_1    (0x2U << GPIO_PUPDR_PUPD0_Pos) /*!< 0x00000002 */
#define GPIO_PUPDR_PUPD1_Pos  (2U)
#define GPIO_PUPDR_PUPD1_Msk  (0x3U << GPIO_PUPDR_PUPD1_Pos) /*!< 0x0000000C */
#define GPIO_PUPDR_PUPD1      GPIO_PUPDR_PUPD1_Msk
#define GPIO_PUPDR_PUPD1_0    (0x1U << GPIO_PUPDR_PUPD1_Pos) /*!< 0x00000004 */
#define GPIO_PUPDR_PUPD1_1    (0x2U << GPIO_PUPDR_PUPD1_Pos) /*!< 0x00000008 */
#define GPIO_PUPDR_PUPD2_Pos  (4U)
#define GPIO_PUPDR_PUPD2_Msk  (0x3U << GPIO_PUPDR_PUPD2_Pos) /*!< 0x00000030 */
#define GPIO_PUPDR_PUPD2      GPIO_PUPDR_PUPD2_Msk
#define GPIO_PUPDR_PUPD2_0    (0x1U << GPIO_PUPDR_PUPD2_Pos) /*!< 0x00000010 */
#define GPIO_PUPDR_PUPD2_1    (0x2U << GPIO_PUPDR_PUPD2_Pos) /*!< 0x00000020 */
#define GPIO_PUPDR_PUPD3_Pos  (6U)
#define GPIO_PUPDR_PUPD3_Msk  (0x3U << GPIO_PUPDR_PUPD3_Pos) /*!< 0x000000C0 */
#define GPIO_PUPDR_PUPD3      GPIO_PUPDR_PUPD3_Msk
#define GPIO_PUPDR_PUPD3_0    (0x1U << GPIO_PUPDR_PUPD3_Pos) /*!< 0x00000040 */
#define GPIO_PUPDR_PUPD3_1    (0x2U << GPIO_PUPDR_PUPD3_Pos) /*!< 0x00000080 */
#define GPIO_PUPDR_PUPD4_Pos  (8U)
#define GPIO_PUPDR_PUPD4_Msk  (0x3U << GPIO_PUPDR_PUPD4_Pos) /*!< 0x00000300 */
#define GPIO_PUPDR_PUPD4      GPIO_PUPDR_PUPD4_Msk
#define GPIO_PUPDR_PUPD4_0    (0x1U << GPIO_PUPDR_PUPD4_Pos) /*!< 0x00000100 */
#define GPIO_PUPDR_PUPD4_1    (0x2U << GPIO_PUPDR_PUPD4_Pos) /*!< 0x00000200 */
#define GPIO_PUPDR_PUPD5_Pos  (10U)
#define GPIO_PUPDR_PUPD5_Msk  (0x3U << GPIO_PUPDR_PUPD5_Pos) /*!< 0x00000C00 */
#define GPIO_PUPDR_PUPD5      GPIO_PUPDR_PUPD5_Msk
#define GPIO_PUPDR_PUPD5_0    (0x1U << GPIO_PUPDR_PUPD5_Pos) /*!< 0x00000400 */
#define GPIO_PUPDR_PUPD5_1    (0x2U << GPIO_PUPDR_PUPD5_Pos) /*!< 0x00000800 */
#define GPIO_PUPDR_PUPD6_Pos  (12U)
#define GPIO_PUPDR_PUPD6_Msk  (0x3U << GPIO_PUPDR_PUPD6_Pos) /*!< 0x00003000 */
#define GPIO_PUPDR_PUPD6      GPIO_PUPDR_PUPD6_Msk
#define GPIO_PUPDR_PUPD6_0    (0x1U << GPIO_PUPDR_PUPD6_Pos) /*!< 0x00001000 */
#define GPIO_PUPDR_PUPD6_1    (0x2U << GPIO_PUPDR_PUPD6_Pos) /*!< 0x00002000 */
#define GPIO_PUPDR_PUPD7_Pos  (14U)
#define GPIO_PUPDR_PUPD7_Msk  (0x3U << GPIO_PUPDR_PUPD7_Pos) /*!< 0x0000C000 */
#define GPIO_PUPDR_PUPD7      GPIO_PUPDR_PUPD7_Msk
#define GPIO_PUPDR_PUPD7_0    (0x1U << GPIO_PUPDR_PUPD7_Pos) /*!< 0x00004000 */
#define GPIO_PUPDR_PUPD7_1    (0x2U << GPIO_PUPDR_PUPD7_Pos) /*!< 0x00008000 */
#define GPIO_PUPDR_PUPD8_Pos  (16U)
#define GPIO_PUPDR_PUPD8_Msk  (0x3U << GPIO_PUPDR_PUPD8_Pos) /*!< 0x00030000 */
#define GPIO_PUPDR_PUPD8      GPIO_PUPDR_PUPD8_Msk
#define GPIO_PUPDR_PUPD8_0    (0x1U << GPIO_PUPDR_PUPD8_Pos) /*!< 0x00010000 */
#define GPIO_PUPDR_PUPD8_1    (0x2U << GPIO_PUPDR_PUPD8_Pos) /*!< 0x00020000 */
#define GPIO_PUPDR_PUPD9_Pos  (18U)
#define GPIO_PUPDR_PUPD9_Msk  (0x3U << GPIO_PUPDR_PUPD9_Pos) /*!< 0x000C0000 */
#define GPIO_PUPDR_PUPD9      GPIO_PUPDR_PUPD9_Msk
#define GPIO_PUPDR_PUPD9_0    (0x1U << GPIO_PUPDR_PUPD9_Pos) /*!< 0x00040000 */
#define GPIO_PUPDR_PUPD9_1    (0x2U << GPIO_PUPDR_PUPD9_Pos) /*!< 0x00080000 */
#define GPIO_PUPDR_PUPD10_Pos (20U)
#define GPIO_PUPDR_PUPD10_Msk (0x3U << GPIO_PUPDR_PUPD10_Pos) /*!< 0x00300000 */
#define GPIO_PUPDR_PUPD10     GPIO_PUPDR_PUPD10_Msk
#define GPIO_PUPDR_PUPD10_0   (0x1U << GPIO_PUPDR_PUPD10_Pos) /*!< 0x00100000 */
#define GPIO_PUPDR_PUPD10_1   (0x2U << GPIO_PUPDR_PUPD10_Pos) /*!< 0x00200000 */
#define GPIO_PUPDR_PUPD11_Pos (22U)
#define GPIO_PUPDR_PUPD11_Msk (0x3U << GPIO_PUPDR_PUPD11_Pos) /*!< 0x00C00000 */
#define GPIO_PUPDR_PUPD11     GPIO_PUPDR_PUPD11_Msk
#define GPIO_PUPDR_PUPD11_0   (0x1U << GPIO_PUPDR_PUPD11_Pos) /*!< 0x00400000 */
#define GPIO_PUPDR_PUPD11_1   (0x2U << GPIO_PUPDR_PUPD11_Pos) /*!< 0x00800000 */
#define GPIO_PUPDR_PUPD12_Pos (24U)
#define GPIO_PUPDR_PUPD12_Msk (0x3U << GPIO_PUPDR_PUPD12_Pos) /*!< 0x03000000 */
#define GPIO_PUPDR_PUPD12     GPIO_PUPDR_PUPD12_Msk
#define GPIO_PUPDR_PUPD12_0   (0x1U << GPIO_PUPDR_PUPD12_Pos) /*!< 0x01000000 */
#define GPIO_PUPDR_PUPD12_1   (0x2U << GPIO_PUPDR_PUPD12_Pos) /*!< 0x02000000 */
#define GPIO_PUPDR_PUPD13_Pos (26U)
#define GPIO_PUPDR_PUPD13_Msk (0x3U << GPIO_PUPDR_PUPD13_Pos) /*!< 0x0C000000 */
#define GPIO_PUPDR_PUPD13     GPIO_PUPDR_PUPD13_Msk
#define GPIO_PUPDR_PUPD13_0   (0x1U << GPIO_PUPDR_PUPD13_Pos) /*!< 0x04000000 */
#define GPIO_PUPDR_PUPD13_1   (0x2U << GPIO_PUPDR_PUPD13_Pos) /*!< 0x08000000 */
#define GPIO_PUPDR_PUPD14_Pos (28U)
#define GPIO_PUPDR_PUPD14_Msk (0x3U << GPIO_PUPDR_PUPD14_Pos) /*!< 0x30000000 */
#define GPIO_PUPDR_PUPD14     GPIO_PUPDR_PUPD14_Msk
#define GPIO_PUPDR_PUPD14_0   (0x1U << GPIO_PUPDR_PUPD14_Pos) /*!< 0x10000000 */
#define GPIO_PUPDR_PUPD14_1   (0x2U << GPIO_PUPDR_PUPD14_Pos) /*!< 0x20000000 */
#define GPIO_PUPDR_PUPD15_Pos (30U)
#define GPIO_PUPDR_PUPD15_Msk (0x3U << GPIO_PUPDR_PUPD15_Pos) /*!< 0xC0000000 */
#define GPIO_PUPDR_PUPD15     GPIO_PUPDR_PUPD15_Msk
#define GPIO_PUPDR_PUPD15_0   (0x1U << GPIO_PUPDR_PUPD15_Pos) /*!< 0x40000000 */
#define GPIO_PUPDR_PUPD15_1   (0x2U << GPIO_PUPDR_PUPD15_Pos) /*!< 0x80000000 */

/* Legacy defines */
#define GPIO_PUPDR_PUPDR0    GPIO_PUPDR_PUPD0
#define GPIO_PUPDR_PUPDR0_0  GPIO_PUPDR_PUPD0_0
#define GPIO_PUPDR_PUPDR0_1  GPIO_PUPDR_PUPD0_1
#define GPIO_PUPDR_PUPDR1    GPIO_PUPDR_PUPD1
#define GPIO_PUPDR_PUPDR1_0  GPIO_PUPDR_PUPD1_0
#define GPIO_PUPDR_PUPDR1_1  GPIO_PUPDR_PUPD1_1
#define GPIO_PUPDR_PUPDR2    GPIO_PUPDR_PUPD2
#define GPIO_PUPDR_PUPDR2_0  GPIO_PUPDR_PUPD2_0
#define GPIO_PUPDR_PUPDR2_1  GPIO_PUPDR_PUPD2_1
#define GPIO_PUPDR_PUPDR3    GPIO_PUPDR_PUPD3
#define GPIO_PUPDR_PUPDR3_0  GPIO_PUPDR_PUPD3_0
#define GPIO_PUPDR_PUPDR3_1  GPIO_PUPDR_PUPD3_1
#define GPIO_PUPDR_PUPDR4    GPIO_PUPDR_PUPD4
#define GPIO_PUPDR_PUPDR4_0  GPIO_PUPDR_PUPD4_0
#define GPIO_PUPDR_PUPDR4_1  GPIO_PUPDR_PUPD4_1
#define GPIO_PUPDR_PUPDR5    GPIO_PUPDR_PUPD5
#define GPIO_PUPDR_PUPDR5_0  GPIO_PUPDR_PUPD5_0
#define GPIO_PUPDR_PUPDR5_1  GPIO_PUPDR_PUPD5_1
#define GPIO_PUPDR_PUPDR6    GPIO_PUPDR_PUPD6
#define GPIO_PUPDR_PUPDR6_0  GPIO_PUPDR_PUPD6_0
#define GPIO_PUPDR_PUPDR6_1  GPIO_PUPDR_PUPD6_1
#define GPIO_PUPDR_PUPDR7    GPIO_PUPDR_PUPD7
#define GPIO_PUPDR_PUPDR7_0  GPIO_PUPDR_PUPD7_0
#define GPIO_PUPDR_PUPDR7_1  GPIO_PUPDR_PUPD7_1
#define GPIO_PUPDR_PUPDR8    GPIO_PUPDR_PUPD8
#define GPIO_PUPDR_PUPDR8_0  GPIO_PUPDR_PUPD8_0
#define GPIO_PUPDR_PUPDR8_1  GPIO_PUPDR_PUPD8_1
#define GPIO_PUPDR_PUPDR9    GPIO_PUPDR_PUPD9
#define GPIO_PUPDR_PUPDR9_0  GPIO_PUPDR_PUPD9_0
#define GPIO_PUPDR_PUPDR9_1  GPIO_PUPDR_PUPD9_1
#define GPIO_PUPDR_PUPDR10   GPIO_PUPDR_PUPD10
#define GPIO_PUPDR_PUPDR10_0 GPIO_PUPDR_PUPD10_0
#define GPIO_PUPDR_PUPDR10_1 GPIO_PUPDR_PUPD10_1
#define GPIO_PUPDR_PUPDR11   GPIO_PUPDR_PUPD11
#define GPIO_PUPDR_PUPDR11_0 GPIO_PUPDR_PUPD11_0
#define GPIO_PUPDR_PUPDR11_1 GPIO_PUPDR_PUPD11_1
#define GPIO_PUPDR_PUPDR12   GPIO_PUPDR_PUPD12
#define GPIO_PUPDR_PUPDR12_0 GPIO_PUPDR_PUPD12_0
#define GPIO_PUPDR_PUPDR12_1 GPIO_PUPDR_PUPD12_1
#define GPIO_PUPDR_PUPDR13   GPIO_PUPDR_PUPD13
#define GPIO_PUPDR_PUPDR13_0 GPIO_PUPDR_PUPD13_0
#define GPIO_PUPDR_PUPDR13_1 GPIO_PUPDR_PUPD13_1
#define GPIO_PUPDR_PUPDR14   GPIO_PUPDR_PUPD14
#define GPIO_PUPDR_PUPDR14_0 GPIO_PUPDR_PUPD14_0
#define GPIO_PUPDR_PUPDR14_1 GPIO_PUPDR_PUPD14_1
#define GPIO_PUPDR_PUPDR15   GPIO_PUPDR_PUPD15
#define GPIO_PUPDR_PUPDR15_0 GPIO_PUPDR_PUPD15_0
#define GPIO_PUPDR_PUPDR15_1 GPIO_PUPDR_PUPD15_1

/******************  Bits definition for GPIO_IDR register  *******************/
#define GPIO_IDR_ID0_Pos  (0U)
#define GPIO_IDR_ID0_Msk  (0x1U << GPIO_IDR_ID0_Pos) /*!< 0x00000001 */
#define GPIO_IDR_ID0      GPIO_IDR_ID0_Msk
#define GPIO_IDR_ID1_Pos  (1U)
#define GPIO_IDR_ID1_Msk  (0x1U << GPIO_IDR_ID1_Pos) /*!< 0x00000002 */
#define GPIO_IDR_ID1      GPIO_IDR_ID1_Msk
#define GPIO_IDR_ID2_Pos  (2U)
#define GPIO_IDR_ID2_Msk  (0x1U << GPIO_IDR_ID2_Pos) /*!< 0x00000004 */
#define GPIO_IDR_ID2      GPIO_IDR_ID2_Msk
#define GPIO_IDR_ID3_Pos  (3U)
#define GPIO_IDR_ID3_Msk  (0x1U << GPIO_IDR_ID3_Pos) /*!< 0x00000008 */
#define GPIO_IDR_ID3      GPIO_IDR_ID3_Msk
#define GPIO_IDR_ID4_Pos  (4U)
#define GPIO_IDR_ID4_Msk  (0x1U << GPIO_IDR_ID4_Pos) /*!< 0x00000010 */
#define GPIO_IDR_ID4      GPIO_IDR_ID4_Msk
#define GPIO_IDR_ID5_Pos  (5U)
#define GPIO_IDR_ID5_Msk  (0x1U << GPIO_IDR_ID5_Pos) /*!< 0x00000020 */
#define GPIO_IDR_ID5      GPIO_IDR_ID5_Msk
#define GPIO_IDR_ID6_Pos  (6U)
#define GPIO_IDR_ID6_Msk  (0x1U << GPIO_IDR_ID6_Pos) /*!< 0x00000040 */
#define GPIO_IDR_ID6      GPIO_IDR_ID6_Msk
#define GPIO_IDR_ID7_Pos  (7U)
#define GPIO_IDR_ID7_Msk  (0x1U << GPIO_IDR_ID7_Pos) /*!< 0x00000080 */
#define GPIO_IDR_ID7      GPIO_IDR_ID7_Msk
#define GPIO_IDR_ID8_Pos  (8U)
#define GPIO_IDR_ID8_Msk  (0x1U << GPIO_IDR_ID8_Pos) /*!< 0x00000100 */
#define GPIO_IDR_ID8      GPIO_IDR_ID8_Msk
#define GPIO_IDR_ID9_Pos  (9U)
#define GPIO_IDR_ID9_Msk  (0x1U << GPIO_IDR_ID9_Pos) /*!< 0x00000200 */
#define GPIO_IDR_ID9      GPIO_IDR_ID9_Msk
#define GPIO_IDR_ID10_Pos (10U)
#define GPIO_IDR_ID10_Msk (0x1U << GPIO_IDR_ID10_Pos) /*!< 0x00000400 */
#define GPIO_IDR_ID10     GPIO_IDR_ID10_Msk
#define GPIO_IDR_ID11_Pos (11U)
#define GPIO_IDR_ID11_Msk (0x1U << GPIO_IDR_ID11_Pos) /*!< 0x00000800 */
#define GPIO_IDR_ID11     GPIO_IDR_ID11_Msk
#define GPIO_IDR_ID12_Pos (12U)
#define GPIO_IDR_ID12_Msk (0x1U << GPIO_IDR_ID12_Pos) /*!< 0x00001000 */
#define GPIO_IDR_ID12     GPIO_IDR_ID12_Msk
#define GPIO_IDR_ID13_Pos (13U)
#define GPIO_IDR_ID13_Msk (0x1U << GPIO_IDR_ID13_Pos) /*!< 0x00002000 */
#define GPIO_IDR_ID13     GPIO_IDR_ID13_Msk
#define GPIO_IDR_ID14_Pos (14U)
#define GPIO_IDR_ID14_Msk (0x1U << GPIO_IDR_ID14_Pos) /*!< 0x00004000 */
#define GPIO_IDR_ID14     GPIO_IDR_ID14_Msk
#define GPIO_IDR_ID15_Pos (15U)
#define GPIO_IDR_ID15_Msk (0x1U << GPIO_IDR_ID15_Pos) /*!< 0x00008000 */
#define GPIO_IDR_ID15     GPIO_IDR_ID15_Msk

/* Legacy defines */
#define GPIO_IDR_IDR_0  GPIO_IDR_ID0
#define GPIO_IDR_IDR_1  GPIO_IDR_ID1
#define GPIO_IDR_IDR_2  GPIO_IDR_ID2
#define GPIO_IDR_IDR_3  GPIO_IDR_ID3
#define GPIO_IDR_IDR_4  GPIO_IDR_ID4
#define GPIO_IDR_IDR_5  GPIO_IDR_ID5
#define GPIO_IDR_IDR_6  GPIO_IDR_ID6
#define GPIO_IDR_IDR_7  GPIO_IDR_ID7
#define GPIO_IDR_IDR_8  GPIO_IDR_ID8
#define GPIO_IDR_IDR_9  GPIO_IDR_ID9
#define GPIO_IDR_IDR_10 GPIO_IDR_ID10
#define GPIO_IDR_IDR_11 GPIO_IDR_ID11
#define GPIO_IDR_IDR_12 GPIO_IDR_ID12
#define GPIO_IDR_IDR_13 GPIO_IDR_ID13
#define GPIO_IDR_IDR_14 GPIO_IDR_ID14
#define GPIO_IDR_IDR_15 GPIO_IDR_ID15

/******************  Bits definition for GPIO_ODR register  *******************/
#define GPIO_ODR_OD0_Pos  (0U)
#define GPIO_ODR_OD0_Msk  (0x1U << GPIO_ODR_OD0_Pos) /*!< 0x00000001 */
#define GPIO_ODR_OD0      GPIO_ODR_OD0_Msk
#define GPIO_ODR_OD1_Pos  (1U)
#define GPIO_ODR_OD1_Msk  (0x1U << GPIO_ODR_OD1_Pos) /*!< 0x00000002 */
#define GPIO_ODR_OD1      GPIO_ODR_OD1_Msk
#define GPIO_ODR_OD2_Pos  (2U)
#define GPIO_ODR_OD2_Msk  (0x1U << GPIO_ODR_OD2_Pos) /*!< 0x00000004 */
#define GPIO_ODR_OD2      GPIO_ODR_OD2_Msk
#define GPIO_ODR_OD3_Pos  (3U)
#define GPIO_ODR_OD3_Msk  (0x1U << GPIO_ODR_OD3_Pos) /*!< 0x00000008 */
#define GPIO_ODR_OD3      GPIO_ODR_OD3_Msk
#define GPIO_ODR_OD4_Pos  (4U)
#define GPIO_ODR_OD4_Msk  (0x1U << GPIO_ODR_OD4_Pos) /*!< 0x00000010 */
#define GPIO_ODR_OD4      GPIO_ODR_OD4_Msk
#define GPIO_ODR_OD5_Pos  (5U)
#define GPIO_ODR_OD5_Msk  (0x1U << GPIO_ODR_OD5_Pos) /*!< 0x00000020 */
#define GPIO_ODR_OD5      GPIO_ODR_OD5_Msk
#define GPIO_ODR_OD6_Pos  (6U)
#define GPIO_ODR_OD6_Msk  (0x1U << GPIO_ODR_OD6_Pos) /*!< 0x00000040 */
#define GPIO_ODR_OD6      GPIO_ODR_OD6_Msk
#define GPIO_ODR_OD7_Pos  (7U)
#define GPIO_ODR_OD7_Msk  (0x1U << GPIO_ODR_OD7_Pos) /*!< 0x00000080 */
#define GPIO_ODR_OD7      GPIO_ODR_OD7_Msk
#define GPIO_ODR_OD8_Pos  (8U)
#define GPIO_ODR_OD8_Msk  (0x1U << GPIO_ODR_OD8_Pos) /*!< 0x00000100 */
#define GPIO_ODR_OD8      GPIO_ODR_OD8_Msk
#define GPIO_ODR_OD9_Pos  (9U)
#define GPIO_ODR_OD9_Msk  (0x1U << GPIO_ODR_OD9_Pos) /*!< 0x00000200 */
#define GPIO_ODR_OD9      GPIO_ODR_OD9_Msk
#define GPIO_ODR_OD10_Pos (10U)
#define GPIO_ODR_OD10_Msk (0x1U << GPIO_ODR_OD10_Pos) /*!< 0x00000400 */
#define GPIO_ODR_OD10     GPIO_ODR_OD10_Msk
#define GPIO_ODR_OD11_Pos (11U)
#define GPIO_ODR_OD11_Msk (0x1U << GPIO_ODR_OD11_Pos) /*!< 0x00000800 */
#define GPIO_ODR_OD11     GPIO_ODR_OD11_Msk
#define GPIO_ODR_OD12_Pos (12U)
#define GPIO_ODR_OD12_Msk (0x1U << GPIO_ODR_OD12_Pos) /*!< 0x00001000 */
#define GPIO_ODR_OD12     GPIO_ODR_OD12_Msk
#define GPIO_ODR_OD13_Pos (13U)
#define GPIO_ODR_OD13_Msk (0x1U << GPIO_ODR_OD13_Pos) /*!< 0x00002000 */
#define GPIO_ODR_OD13     GPIO_ODR_OD13_Msk
#define GPIO_ODR_OD14_Pos (14U)
#define GPIO_ODR_OD14_Msk (0x1U << GPIO_ODR_OD14_Pos) /*!< 0x00004000 */
#define GPIO_ODR_OD14     GPIO_ODR_OD14_Msk
#define GPIO_ODR_OD15_Pos (15U)
#define GPIO_ODR_OD15_Msk (0x1U << GPIO_ODR_OD15_Pos) /*!< 0x00008000 */
#define GPIO_ODR_OD15     GPIO_ODR_OD15_Msk
/* Legacy defines */
#define GPIO_ODR_ODR_0    GPIO_ODR_OD0
#define GPIO_ODR_ODR_1    GPIO_ODR_OD1
#define GPIO_ODR_ODR_2    GPIO_ODR_OD2
#define GPIO_ODR_ODR_3    GPIO_ODR_OD3
#define GPIO_ODR_ODR_4    GPIO_ODR_OD4
#define GPIO_ODR_ODR_5    GPIO_ODR_OD5
#define GPIO_ODR_ODR_6    GPIO_ODR_OD6
#define GPIO_ODR_ODR_7    GPIO_ODR_OD7
#define GPIO_ODR_ODR_8    GPIO_ODR_OD8
#define GPIO_ODR_ODR_9    GPIO_ODR_OD9
#define GPIO_ODR_ODR_10   GPIO_ODR_OD10
#define GPIO_ODR_ODR_11   GPIO_ODR_OD11
#define GPIO_ODR_ODR_12   GPIO_ODR_OD12
#define GPIO_ODR_ODR_13   GPIO_ODR_OD13
#define GPIO_ODR_ODR_14   GPIO_ODR_OD14
#define GPIO_ODR_ODR_15   GPIO_ODR_OD15

/******************  Bits definition for GPIO_BSRR register  ******************/
#define GPIO_BSRR_BS0_Pos  (0U)
#define GPIO_BSRR_BS0_Msk  (0x1U << GPIO_BSRR_BS0_Pos) /*!< 0x00000001 */
#define GPIO_BSRR_BS0      GPIO_BSRR_BS0_Msk
#define GPIO_BSRR_BS1_Pos  (1U)
#define GPIO_BSRR_BS1_Msk  (0x1U << GPIO_BSRR_BS1_Pos) /*!< 0x00000002 */
#define GPIO_BSRR_BS1      GPIO_BSRR_BS1_Msk
#define GPIO_BSRR_BS2_Pos  (2U)
#define GPIO_BSRR_BS2_Msk  (0x1U << GPIO_BSRR_BS2_Pos) /*!< 0x00000004 */
#define GPIO_BSRR_BS2      GPIO_BSRR_BS2_Msk
#define GPIO_BSRR_BS3_Pos  (3U)
#define GPIO_BSRR_BS3_Msk  (0x1U << GPIO_BSRR_BS3_Pos) /*!< 0x00000008 */
#define GPIO_BSRR_BS3      GPIO_BSRR_BS3_Msk
#define GPIO_BSRR_BS4_Pos  (4U)
#define GPIO_BSRR_BS4_Msk  (0x1U << GPIO_BSRR_BS4_Pos) /*!< 0x00000010 */
#define GPIO_BSRR_BS4      GPIO_BSRR_BS4_Msk
#define GPIO_BSRR_BS5_Pos  (5U)
#define GPIO_BSRR_BS5_Msk  (0x1U << GPIO_BSRR_BS5_Pos) /*!< 0x00000020 */
#define GPIO_BSRR_BS5      GPIO_BSRR_BS5_Msk
#define GPIO_BSRR_BS6_Pos  (6U)
#define GPIO_BSRR_BS6_Msk  (0x1U << GPIO_BSRR_BS6_Pos) /*!< 0x00000040 */
#define GPIO_BSRR_BS6      GPIO_BSRR_BS6_Msk
#define GPIO_BSRR_BS7_Pos  (7U)
#define GPIO_BSRR_BS7_Msk  (0x1U << GPIO_BSRR_BS7_Pos) /*!< 0x00000080 */
#define GPIO_BSRR_BS7      GPIO_BSRR_BS7_Msk
#define GPIO_BSRR_BS8_Pos  (8U)
#define GPIO_BSRR_BS8_Msk  (0x1U << GPIO_BSRR_BS8_Pos) /*!< 0x00000100 */
#define GPIO_BSRR_BS8      GPIO_BSRR_BS8_Msk
#define GPIO_BSRR_BS9_Pos  (9U)
#define GPIO_BSRR_BS9_Msk  (0x1U << GPIO_BSRR_BS9_Pos) /*!< 0x00000200 */
#define GPIO_BSRR_BS9      GPIO_BSRR_BS9_Msk
#define GPIO_BSRR_BS10_Pos (10U)
#define GPIO_BSRR_BS10_Msk (0x1U << GPIO_BSRR_BS10_Pos) /*!< 0x00000400 */
#define GPIO_BSRR_BS10     GPIO_BSRR_BS10_Msk
#define GPIO_BSRR_BS11_Pos (11U)
#define GPIO_BSRR_BS11_Msk (0x1U << GPIO_BSRR_BS11_Pos) /*!< 0x00000800 */
#define GPIO_BSRR_BS11     GPIO_BSRR_BS11_Msk
#define GPIO_BSRR_BS12_Pos (12U)
#define GPIO_BSRR_BS12_Msk (0x1U << GPIO_BSRR_BS12_Pos) /*!< 0x00001000 */
#define GPIO_BSRR_BS12     GPIO_BSRR_BS12_Msk
#define GPIO_BSRR_BS13_Pos (13U)
#define GPIO_BSRR_BS13_Msk (0x1U << GPIO_BSRR_BS13_Pos) /*!< 0x00002000 */
#define GPIO_BSRR_BS13     GPIO_BSRR_BS13_Msk
#define GPIO_BSRR_BS14_Pos (14U)
#define GPIO_BSRR_BS14_Msk (0x1U << GPIO_BSRR_BS14_Pos) /*!< 0x00004000 */
#define GPIO_BSRR_BS14     GPIO_BSRR_BS14_Msk
#define GPIO_BSRR_BS15_Pos (15U)
#define GPIO_BSRR_BS15_Msk (0x1U << GPIO_BSRR_BS15_Pos) /*!< 0x00008000 */
#define GPIO_BSRR_BS15     GPIO_BSRR_BS15_Msk
#define GPIO_BSRR_BR0_Pos  (16U)
#define GPIO_BSRR_BR0_Msk  (0x1U << GPIO_BSRR_BR0_Pos) /*!< 0x00010000 */
#define GPIO_BSRR_BR0      GPIO_BSRR_BR0_Msk
#define GPIO_BSRR_BR1_Pos  (17U)
#define GPIO_BSRR_BR1_Msk  (0x1U << GPIO_BSRR_BR1_Pos) /*!< 0x00020000 */
#define GPIO_BSRR_BR1      GPIO_BSRR_BR1_Msk
#define GPIO_BSRR_BR2_Pos  (18U)
#define GPIO_BSRR_BR2_Msk  (0x1U << GPIO_BSRR_BR2_Pos) /*!< 0x00040000 */
#define GPIO_BSRR_BR2      GPIO_BSRR_BR2_Msk
#define GPIO_BSRR_BR3_Pos  (19U)
#define GPIO_BSRR_BR3_Msk  (0x1U << GPIO_BSRR_BR3_Pos) /*!< 0x00080000 */
#define GPIO_BSRR_BR3      GPIO_BSRR_BR3_Msk
#define GPIO_BSRR_BR4_Pos  (20U)
#define GPIO_BSRR_BR4_Msk  (0x1U << GPIO_BSRR_BR4_Pos) /*!< 0x00100000 */
#define GPIO_BSRR_BR4      GPIO_BSRR_BR4_Msk
#define GPIO_BSRR_BR5_Pos  (21U)
#define GPIO_BSRR_BR5_Msk  (0x1U << GPIO_BSRR_BR5_Pos) /*!< 0x00200000 */
#define GPIO_BSRR_BR5      GPIO_BSRR_BR5_Msk
#define GPIO_BSRR_BR6_Pos  (22U)
#define GPIO_BSRR_BR6_Msk  (0x1U << GPIO_BSRR_BR6_Pos) /*!< 0x00400000 */
#define GPIO_BSRR_BR6      GPIO_BSRR_BR6_Msk
#define GPIO_BSRR_BR7_Pos  (23U)
#define GPIO_BSRR_BR7_Msk  (0x1U << GPIO_BSRR_BR7_Pos) /*!< 0x00800000 */
#define GPIO_BSRR_BR7      GPIO_BSRR_BR7_Msk
#define GPIO_BSRR_BR8_Pos  (24U)
#define GPIO_BSRR_BR8_Msk  (0x1U << GPIO_BSRR_BR8_Pos) /*!< 0x01000000 */
#define GPIO_BSRR_BR8      GPIO_BSRR_BR8_Msk
#define GPIO_BSRR_BR9_Pos  (25U)
#define GPIO_BSRR_BR9_Msk  (0x1U << GPIO_BSRR_BR9_Pos) /*!< 0x02000000 */
#define GPIO_BSRR_BR9      GPIO_BSRR_BR9_Msk
#define GPIO_BSRR_BR10_Pos (26U)
#define GPIO_BSRR_BR10_Msk (0x1U << GPIO_BSRR_BR10_Pos) /*!< 0x04000000 */
#define GPIO_BSRR_BR10     GPIO_BSRR_BR10_Msk
#define GPIO_BSRR_BR11_Pos (27U)
#define GPIO_BSRR_BR11_Msk (0x1U << GPIO_BSRR_BR11_Pos) /*!< 0x08000000 */
#define GPIO_BSRR_BR11     GPIO_BSRR_BR11_Msk
#define GPIO_BSRR_BR12_Pos (28U)
#define GPIO_BSRR_BR12_Msk (0x1U << GPIO_BSRR_BR12_Pos) /*!< 0x10000000 */
#define GPIO_BSRR_BR12     GPIO_BSRR_BR12_Msk
#define GPIO_BSRR_BR13_Pos (29U)
#define GPIO_BSRR_BR13_Msk (0x1U << GPIO_BSRR_BR13_Pos) /*!< 0x20000000 */
#define GPIO_BSRR_BR13     GPIO_BSRR_BR13_Msk
#define GPIO_BSRR_BR14_Pos (30U)
#define GPIO_BSRR_BR14_Msk (0x1U << GPIO_BSRR_BR14_Pos) /*!< 0x40000000 */
#define GPIO_BSRR_BR14     GPIO_BSRR_BR14_Msk
#define GPIO_BSRR_BR15_Pos (31U)
#define GPIO_BSRR_BR15_Msk (0x1U << GPIO_BSRR_BR15_Pos) /*!< 0x80000000 */
#define GPIO_BSRR_BR15     GPIO_BSRR_BR15_Msk

/* Legacy defines */
#define GPIO_BSRR_BS_0       GPIO_BSRR_BS0
#define GPIO_BSRR_BS_1       GPIO_BSRR_BS1
#define GPIO_BSRR_BS_2       GPIO_BSRR_BS2
#define GPIO_BSRR_BS_3       GPIO_BSRR_BS3
#define GPIO_BSRR_BS_4       GPIO_BSRR_BS4
#define GPIO_BSRR_BS_5       GPIO_BSRR_BS5
#define GPIO_BSRR_BS_6       GPIO_BSRR_BS6
#define GPIO_BSRR_BS_7       GPIO_BSRR_BS7
#define GPIO_BSRR_BS_8       GPIO_BSRR_BS8
#define GPIO_BSRR_BS_9       GPIO_BSRR_BS9
#define GPIO_BSRR_BS_10      GPIO_BSRR_BS10
#define GPIO_BSRR_BS_11      GPIO_BSRR_BS11
#define GPIO_BSRR_BS_12      GPIO_BSRR_BS12
#define GPIO_BSRR_BS_13      GPIO_BSRR_BS13
#define GPIO_BSRR_BS_14      GPIO_BSRR_BS14
#define GPIO_BSRR_BS_15      GPIO_BSRR_BS15
#define GPIO_BSRR_BR_0       GPIO_BSRR_BR0
#define GPIO_BSRR_BR_1       GPIO_BSRR_BR1
#define GPIO_BSRR_BR_2       GPIO_BSRR_BR2
#define GPIO_BSRR_BR_3       GPIO_BSRR_BR3
#define GPIO_BSRR_BR_4       GPIO_BSRR_BR4
#define GPIO_BSRR_BR_5       GPIO_BSRR_BR5
#define GPIO_BSRR_BR_6       GPIO_BSRR_BR6
#define GPIO_BSRR_BR_7       GPIO_BSRR_BR7
#define GPIO_BSRR_BR_8       GPIO_BSRR_BR8
#define GPIO_BSRR_BR_9       GPIO_BSRR_BR9
#define GPIO_BSRR_BR_10      GPIO_BSRR_BR10
#define GPIO_BSRR_BR_11      GPIO_BSRR_BR11
#define GPIO_BSRR_BR_12      GPIO_BSRR_BR12
#define GPIO_BSRR_BR_13      GPIO_BSRR_BR13
#define GPIO_BSRR_BR_14      GPIO_BSRR_BR14
#define GPIO_BSRR_BR_15      GPIO_BSRR_BR15
/****************** Bit definition for GPIO_LCKR register *********************/
#define GPIO_LCKR_LCK0_Pos   (0U)
#define GPIO_LCKR_LCK0_Msk   (0x1U << GPIO_LCKR_LCK0_Pos) /*!< 0x00000001 */
#define GPIO_LCKR_LCK0       GPIO_LCKR_LCK0_Msk
#define GPIO_LCKR_LCK1_Pos   (1U)
#define GPIO_LCKR_LCK1_Msk   (0x1U << GPIO_LCKR_LCK1_Pos) /*!< 0x00000002 */
#define GPIO_LCKR_LCK1       GPIO_LCKR_LCK1_Msk
#define GPIO_LCKR_LCK2_Pos   (2U)
#define GPIO_LCKR_LCK2_Msk   (0x1U << GPIO_LCKR_LCK2_Pos) /*!< 0x00000004 */
#define GPIO_LCKR_LCK2       GPIO_LCKR_LCK2_Msk
#define GPIO_LCKR_LCK3_Pos   (3U)
#define GPIO_LCKR_LCK3_Msk   (0x1U << GPIO_LCKR_LCK3_Pos) /*!< 0x00000008 */
#define GPIO_LCKR_LCK3       GPIO_LCKR_LCK3_Msk
#define GPIO_LCKR_LCK4_Pos   (4U)
#define GPIO_LCKR_LCK4_Msk   (0x1U << GPIO_LCKR_LCK4_Pos) /*!< 0x00000010 */
#define GPIO_LCKR_LCK4       GPIO_LCKR_LCK4_Msk
#define GPIO_LCKR_LCK5_Pos   (5U)
#define GPIO_LCKR_LCK5_Msk   (0x1U << GPIO_LCKR_LCK5_Pos) /*!< 0x00000020 */
#define GPIO_LCKR_LCK5       GPIO_LCKR_LCK5_Msk
#define GPIO_LCKR_LCK6_Pos   (6U)
#define GPIO_LCKR_LCK6_Msk   (0x1U << GPIO_LCKR_LCK6_Pos) /*!< 0x00000040 */
#define GPIO_LCKR_LCK6       GPIO_LCKR_LCK6_Msk
#define GPIO_LCKR_LCK7_Pos   (7U)
#define GPIO_LCKR_LCK7_Msk   (0x1U << GPIO_LCKR_LCK7_Pos) /*!< 0x00000080 */
#define GPIO_LCKR_LCK7       GPIO_LCKR_LCK7_Msk
#define GPIO_LCKR_LCK8_Pos   (8U)
#define GPIO_LCKR_LCK8_Msk   (0x1U << GPIO_LCKR_LCK8_Pos) /*!< 0x00000100 */
#define GPIO_LCKR_LCK8       GPIO_LCKR_LCK8_Msk
#define GPIO_LCKR_LCK9_Pos   (9U)
#define GPIO_LCKR_LCK9_Msk   (0x1U << GPIO_LCKR_LCK9_Pos) /*!< 0x00000200 */
#define GPIO_LCKR_LCK9       GPIO_LCKR_LCK9_Msk
#define GPIO_LCKR_LCK10_Pos  (10U)
#define GPIO_LCKR_LCK10_Msk  (0x1U << GPIO_LCKR_LCK10_Pos) /*!< 0x00000400 */
#define GPIO_LCKR_LCK10      GPIO_LCKR_LCK10_Msk
#define GPIO_LCKR_LCK11_Pos  (11U)
#define GPIO_LCKR_LCK11_Msk  (0x1U << GPIO_LCKR_LCK11_Pos) /*!< 0x00000800 */
#define GPIO_LCKR_LCK11      GPIO_LCKR_LCK11_Msk
#define GPIO_LCKR_LCK12_Pos  (12U)
#define GPIO_LCKR_LCK12_Msk  (0x1U << GPIO_LCKR_LCK12_Pos) /*!< 0x00001000 */
#define GPIO_LCKR_LCK12      GPIO_LCKR_LCK12_Msk
#define GPIO_LCKR_LCK13_Pos  (13U)
#define GPIO_LCKR_LCK13_Msk  (0x1U << GPIO_LCKR_LCK13_Pos) /*!< 0x00002000 */
#define GPIO_LCKR_LCK13      GPIO_LCKR_LCK13_Msk
#define GPIO_LCKR_LCK14_Pos  (14U)
#define GPIO_LCKR_LCK14_Msk  (0x1U << GPIO_LCKR_LCK14_Pos) /*!< 0x00004000 */
#define GPIO_LCKR_LCK14      GPIO_LCKR_LCK14_Msk
#define GPIO_LCKR_LCK15_Pos  (15U)
#define GPIO_LCKR_LCK15_Msk  (0x1U << GPIO_LCKR_LCK15_Pos) /*!< 0x00008000 */
#define GPIO_LCKR_LCK15      GPIO_LCKR_LCK15_Msk
#define GPIO_LCKR_LCKK_Pos   (16U)
#define GPIO_LCKR_LCKK_Msk   (0x1U << GPIO_LCKR_LCKK_Pos) /*!< 0x00010000 */
#define GPIO_LCKR_LCKK       GPIO_LCKR_LCKK_Msk
/****************** Bit definition for GPIO_AFRL register *********************/
#define GPIO_AFRL_AFSEL0_Pos (0U)
#define GPIO_AFRL_AFSEL0_Msk (0xFU << GPIO_AFRL_AFSEL0_Pos) /*!< 0x0000000F */
#define GPIO_AFRL_AFSEL0     GPIO_AFRL_AFSEL0_Msk
#define GPIO_AFRL_AFSEL0_0   (0x1U << GPIO_AFRL_AFSEL0_Pos) /*!< 0x00000001 */
#define GPIO_AFRL_AFSEL0_1   (0x2U << GPIO_AFRL_AFSEL0_Pos) /*!< 0x00000002 */
#define GPIO_AFRL_AFSEL0_2   (0x4U << GPIO_AFRL_AFSEL0_Pos) /*!< 0x00000004 */
#define GPIO_AFRL_AFSEL0_3   (0x8U << GPIO_AFRL_AFSEL0_Pos) /*!< 0x00000008 */
#define GPIO_AFRL_AFSEL1_Pos (4U)
#define GPIO_AFRL_AFSEL1_Msk (0xFU << GPIO_AFRL_AFSEL1_Pos) /*!< 0x000000F0 */
#define GPIO_AFRL_AFSEL1     GPIO_AFRL_AFSEL1_Msk
#define GPIO_AFRL_AFSEL1_0   (0x1U << GPIO_AFRL_AFSEL1_Pos) /*!< 0x00000010 */
#define GPIO_AFRL_AFSEL1_1   (0x2U << GPIO_AFRL_AFSEL1_Pos) /*!< 0x00000020 */
#define GPIO_AFRL_AFSEL1_2   (0x4U << GPIO_AFRL_AFSEL1_Pos) /*!< 0x00000040 */
#define GPIO_AFRL_AFSEL1_3   (0x8U << GPIO_AFRL_AFSEL1_Pos) /*!< 0x00000080 */
#define GPIO_AFRL_AFSEL2_Pos (8U)
#define GPIO_AFRL_AFSEL2_Msk (0xFU << GPIO_AFRL_AFSEL2_Pos) /*!< 0x00000F00 */
#define GPIO_AFRL_AFSEL2     GPIO_AFRL_AFSEL2_Msk
#define GPIO_AFRL_AFSEL2_0   (0x1U << GPIO_AFRL_AFSEL2_Pos) /*!< 0x00000100 */
#define GPIO_AFRL_AFSEL2_1   (0x2U << GPIO_AFRL_AFSEL2_Pos) /*!< 0x00000200 */
#define GPIO_AFRL_AFSEL2_2   (0x4U << GPIO_AFRL_AFSEL2_Pos) /*!< 0x00000400 */
#define GPIO_AFRL_AFSEL2_3   (0x8U << GPIO_AFRL_AFSEL2_Pos) /*!< 0x00000800 */
#define GPIO_AFRL_AFSEL3_Pos (12U)
#define GPIO_AFRL_AFSEL3_Msk (0xFU << GPIO_AFRL_AFSEL3_Pos) /*!< 0x0000F000 */
#define GPIO_AFRL_AFSEL3     GPIO_AFRL_AFSEL3_Msk
#define GPIO_AFRL_AFSEL3_0   (0x1U << GPIO_AFRL_AFSEL3_Pos) /*!< 0x00001000 */
#define GPIO_AFRL_AFSEL3_1   (0x2U << GPIO_AFRL_AFSEL3_Pos) /*!< 0x00002000 */
#define GPIO_AFRL_AFSEL3_2   (0x4U << GPIO_AFRL_AFSEL3_Pos) /*!< 0x00004000 */
#define GPIO_AFRL_AFSEL3_3   (0x8U << GPIO_AFRL_AFSEL3_Pos) /*!< 0x00008000 */
#define GPIO_AFRL_AFSEL4_Pos (16U)
#define GPIO_AFRL_AFSEL4_Msk (0xFU << GPIO_AFRL_AFSEL4_Pos) /*!< 0x000F0000 */
#define GPIO_AFRL_AFSEL4     GPIO_AFRL_AFSEL4_Msk
#define GPIO_AFRL_AFSEL4_0   (0x1U << GPIO_AFRL_AFSEL4_Pos) /*!< 0x00010000 */
#define GPIO_AFRL_AFSEL4_1   (0x2U << GPIO_AFRL_AFSEL4_Pos) /*!< 0x00020000 */
#define GPIO_AFRL_AFSEL4_2   (0x4U << GPIO_AFRL_AFSEL4_Pos) /*!< 0x00040000 */
#define GPIO_AFRL_AFSEL4_3   (0x8U << GPIO_AFRL_AFSEL4_Pos) /*!< 0x00080000 */
#define GPIO_AFRL_AFSEL5_Pos (20U)
#define GPIO_AFRL_AFSEL5_Msk (0xFU << GPIO_AFRL_AFSEL5_Pos) /*!< 0x00F00000 */
#define GPIO_AFRL_AFSEL5     GPIO_AFRL_AFSEL5_Msk
#define GPIO_AFRL_AFSEL5_0   (0x1U << GPIO_AFRL_AFSEL5_Pos) /*!< 0x00100000 */
#define GPIO_AFRL_AFSEL5_1   (0x2U << GPIO_AFRL_AFSEL5_Pos) /*!< 0x00200000 */
#define GPIO_AFRL_AFSEL5_2   (0x4U << GPIO_AFRL_AFSEL5_Pos) /*!< 0x00400000 */
#define GPIO_AFRL_AFSEL5_3   (0x8U << GPIO_AFRL_AFSEL5_Pos) /*!< 0x00800000 */
#define GPIO_AFRL_AFSEL6_Pos (24U)
#define GPIO_AFRL_AFSEL6_Msk (0xFU << GPIO_AFRL_AFSEL6_Pos) /*!< 0x0F000000 */
#define GPIO_AFRL_AFSEL6     GPIO_AFRL_AFSEL6_Msk
#define GPIO_AFRL_AFSEL6_0   (0x1U << GPIO_AFRL_AFSEL6_Pos) /*!< 0x01000000 */
#define GPIO_AFRL_AFSEL6_1   (0x2U << GPIO_AFRL_AFSEL6_Pos) /*!< 0x02000000 */
#define GPIO_AFRL_AFSEL6_2   (0x4U << GPIO_AFRL_AFSEL6_Pos) /*!< 0x04000000 */
#define GPIO_AFRL_AFSEL6_3   (0x8U << GPIO_AFRL_AFSEL6_Pos) /*!< 0x08000000 */
#define GPIO_AFRL_AFSEL7_Pos (28U)
#define GPIO_AFRL_AFSEL7_Msk (0xFU << GPIO_AFRL_AFSEL7_Pos) /*!< 0xF0000000 */
#define GPIO_AFRL_AFSEL7     GPIO_AFRL_AFSEL7_Msk
#define GPIO_AFRL_AFSEL7_0   (0x1U << GPIO_AFRL_AFSEL7_Pos) /*!< 0x10000000 */
#define GPIO_AFRL_AFSEL7_1   (0x2U << GPIO_AFRL_AFSEL7_Pos) /*!< 0x20000000 */
#define GPIO_AFRL_AFSEL7_2   (0x4U << GPIO_AFRL_AFSEL7_Pos) /*!< 0x40000000 */
#define GPIO_AFRL_AFSEL7_3   (0x8U << GPIO_AFRL_AFSEL7_Pos) /*!< 0x80000000 */

/* Legacy defines */
#define GPIO_AFRL_AFRL0   GPIO_AFRL_AFSEL0
#define GPIO_AFRL_AFRL0_0 GPIO_AFRL_AFSEL0_0
#define GPIO_AFRL_AFRL0_1 GPIO_AFRL_AFSEL0_1
#define GPIO_AFRL_AFRL0_2 GPIO_AFRL_AFSEL0_2
#define GPIO_AFRL_AFRL0_3 GPIO_AFRL_AFSEL0_3
#define GPIO_AFRL_AFRL1   GPIO_AFRL_AFSEL1
#define GPIO_AFRL_AFRL1_0 GPIO_AFRL_AFSEL1_0
#define GPIO_AFRL_AFRL1_1 GPIO_AFRL_AFSEL1_1
#define GPIO_AFRL_AFRL1_2 GPIO_AFRL_AFSEL1_2
#define GPIO_AFRL_AFRL1_3 GPIO_AFRL_AFSEL1_3
#define GPIO_AFRL_AFRL2   GPIO_AFRL_AFSEL2
#define GPIO_AFRL_AFRL2_0 GPIO_AFRL_AFSEL2_0
#define GPIO_AFRL_AFRL2_1 GPIO_AFRL_AFSEL2_1
#define GPIO_AFRL_AFRL2_2 GPIO_AFRL_AFSEL2_2
#define GPIO_AFRL_AFRL2_3 GPIO_AFRL_AFSEL2_3
#define GPIO_AFRL_AFRL3   GPIO_AFRL_AFSEL3
#define GPIO_AFRL_AFRL3_0 GPIO_AFRL_AFSEL3_0
#define GPIO_AFRL_AFRL3_1 GPIO_AFRL_AFSEL3_1
#define GPIO_AFRL_AFRL3_2 GPIO_AFRL_AFSEL3_2
#define GPIO_AFRL_AFRL3_3 GPIO_AFRL_AFSEL3_3
#define GPIO_AFRL_AFRL4   GPIO_AFRL_AFSEL4
#define GPIO_AFRL_AFRL4_0 GPIO_AFRL_AFSEL4_0
#define GPIO_AFRL_AFRL4_1 GPIO_AFRL_AFSEL4_1
#define GPIO_AFRL_AFRL4_2 GPIO_AFRL_AFSEL4_2
#define GPIO_AFRL_AFRL4_3 GPIO_AFRL_AFSEL4_3
#define GPIO_AFRL_AFRL5   GPIO_AFRL_AFSEL5
#define GPIO_AFRL_AFRL5_0 GPIO_AFRL_AFSEL5_0
#define GPIO_AFRL_AFRL5_1 GPIO_AFRL_AFSEL5_1
#define GPIO_AFRL_AFRL5_2 GPIO_AFRL_AFSEL5_2
#define GPIO_AFRL_AFRL5_3 GPIO_AFRL_AFSEL5_3
#define GPIO_AFRL_AFRL6   GPIO_AFRL_AFSEL6
#define GPIO_AFRL_AFRL6_0 GPIO_AFRL_AFSEL6_0
#define GPIO_AFRL_AFRL6_1 GPIO_AFRL_AFSEL6_1
#define GPIO_AFRL_AFRL6_2 GPIO_AFRL_AFSEL6_2
#define GPIO_AFRL_AFRL6_3 GPIO_AFRL_AFSEL6_3
#define GPIO_AFRL_AFRL7   GPIO_AFRL_AFSEL7
#define GPIO_AFRL_AFRL7_0 GPIO_AFRL_AFSEL7_0
#define GPIO_AFRL_AFRL7_1 GPIO_AFRL_AFSEL7_1
#define GPIO_AFRL_AFRL7_2 GPIO_AFRL_AFSEL7_2
#define GPIO_AFRL_AFRL7_3 GPIO_AFRL_AFSEL7_3

/****************** Bit definition for GPIO_AFRH register *********************/
#define GPIO_AFRH_AFSEL8_Pos  (0U)
#define GPIO_AFRH_AFSEL8_Msk  (0xFU << GPIO_AFRH_AFSEL8_Pos) /*!< 0x0000000F */
#define GPIO_AFRH_AFSEL8      GPIO_AFRH_AFSEL8_Msk
#define GPIO_AFRH_AFSEL8_0    (0x1U << GPIO_AFRH_AFSEL8_Pos) /*!< 0x00000001 */
#define GPIO_AFRH_AFSEL8_1    (0x2U << GPIO_AFRH_AFSEL8_Pos) /*!< 0x00000002 */
#define GPIO_AFRH_AFSEL8_2    (0x4U << GPIO_AFRH_AFSEL8_Pos) /*!< 0x00000004 */
#define GPIO_AFRH_AFSEL8_3    (0x8U << GPIO_AFRH_AFSEL8_Pos) /*!< 0x00000008 */
#define GPIO_AFRH_AFSEL9_Pos  (4U)
#define GPIO_AFRH_AFSEL9_Msk  (0xFU << GPIO_AFRH_AFSEL9_Pos) /*!< 0x000000F0 */
#define GPIO_AFRH_AFSEL9      GPIO_AFRH_AFSEL9_Msk
#define GPIO_AFRH_AFSEL9_0    (0x1U << GPIO_AFRH_AFSEL9_Pos) /*!< 0x00000010 */
#define GPIO_AFRH_AFSEL9_1    (0x2U << GPIO_AFRH_AFSEL9_Pos) /*!< 0x00000020 */
#define GPIO_AFRH_AFSEL9_2    (0x4U << GPIO_AFRH_AFSEL9_Pos) /*!< 0x00000040 */
#define GPIO_AFRH_AFSEL9_3    (0x8U << GPIO_AFRH_AFSEL9_Pos) /*!< 0x00000080 */
#define GPIO_AFRH_AFSEL10_Pos (8U)
#define GPIO_AFRH_AFSEL10_Msk (0xFU << GPIO_AFRH_AFSEL10_Pos) /*!< 0x00000F00 */
#define GPIO_AFRH_AFSEL10     GPIO_AFRH_AFSEL10_Msk
#define GPIO_AFRH_AFSEL10_0   (0x1U << GPIO_AFRH_AFSEL10_Pos) /*!< 0x00000100 */
#define GPIO_AFRH_AFSEL10_1   (0x2U << GPIO_AFRH_AFSEL10_Pos) /*!< 0x00000200 */
#define GPIO_AFRH_AFSEL10_2   (0x4U << GPIO_AFRH_AFSEL10_Pos) /*!< 0x00000400 */
#define GPIO_AFRH_AFSEL10_3   (0x8U << GPIO_AFRH_AFSEL10_Pos) /*!< 0x00000800 */
#define GPIO_AFRH_AFSEL11_Pos (12U)
#define GPIO_AFRH_AFSEL11_Msk (0xFU << GPIO_AFRH_AFSEL11_Pos) /*!< 0x0000F000 */
#define GPIO_AFRH_AFSEL11     GPIO_AFRH_AFSEL11_Msk
#define GPIO_AFRH_AFSEL11_0   (0x1U << GPIO_AFRH_AFSEL11_Pos) /*!< 0x00001000 */
#define GPIO_AFRH_AFSEL11_1   (0x2U << GPIO_AFRH_AFSEL11_Pos) /*!< 0x00002000 */
#define GPIO_AFRH_AFSEL11_2   (0x4U << GPIO_AFRH_AFSEL11_Pos) /*!< 0x00004000 */
#define GPIO_AFRH_AFSEL11_3   (0x8U << GPIO_AFRH_AFSEL11_Pos) /*!< 0x00008000 */
#define GPIO_AFRH_AFSEL12_Pos (16U)
#define GPIO_AFRH_AFSEL12_Msk (0xFU << GPIO_AFRH_AFSEL12_Pos) /*!< 0x000F0000 */
#define GPIO_AFRH_AFSEL12     GPIO_AFRH_AFSEL12_Msk
#define GPIO_AFRH_AFSEL12_0   (0x1U << GPIO_AFRH_AFSEL12_Pos) /*!< 0x00010000 */
#define GPIO_AFRH_AFSEL12_1   (0x2U << GPIO_AFRH_AFSEL12_Pos) /*!< 0x00020000 */
#define GPIO_AFRH_AFSEL12_2   (0x4U << GPIO_AFRH_AFSEL12_Pos) /*!< 0x00040000 */
#define GPIO_AFRH_AFSEL12_3   (0x8U << GPIO_AFRH_AFSEL12_Pos) /*!< 0x00080000 */
#define GPIO_AFRH_AFSEL13_Pos (20U)
#define GPIO_AFRH_AFSEL13_Msk (0xFU << GPIO_AFRH_AFSEL13_Pos) /*!< 0x00F00000 */
#define GPIO_AFRH_AFSEL13     GPIO_AFRH_AFSEL13_Msk
#define GPIO_AFRH_AFSEL13_0   (0x1U << GPIO_AFRH_AFSEL13_Pos) /*!< 0x00100000 */
#define GPIO_AFRH_AFSEL13_1   (0x2U << GPIO_AFRH_AFSEL13_Pos) /*!< 0x00200000 */
#define GPIO_AFRH_AFSEL13_2   (0x4U << GPIO_AFRH_AFSEL13_Pos) /*!< 0x00400000 */
#define GPIO_AFRH_AFSEL13_3   (0x8U << GPIO_AFRH_AFSEL13_Pos) /*!< 0x00800000 */
#define GPIO_AFRH_AFSEL14_Pos (24U)
#define GPIO_AFRH_AFSEL14_Msk (0xFU << GPIO_AFRH_AFSEL14_Pos) /*!< 0x0F000000 */
#define GPIO_AFRH_AFSEL14     GPIO_AFRH_AFSEL14_Msk
#define GPIO_AFRH_AFSEL14_0   (0x1U << GPIO_AFRH_AFSEL14_Pos) /*!< 0x01000000 */
#define GPIO_AFRH_AFSEL14_1   (0x2U << GPIO_AFRH_AFSEL14_Pos) /*!< 0x02000000 */
#define GPIO_AFRH_AFSEL14_2   (0x4U << GPIO_AFRH_AFSEL14_Pos) /*!< 0x04000000 */
#define GPIO_AFRH_AFSEL14_3   (0x8U << GPIO_AFRH_AFSEL14_Pos) /*!< 0x08000000 */
#define GPIO_AFRH_AFSEL15_Pos (28U)
#define GPIO_AFRH_AFSEL15_Msk (0xFU << GPIO_AFRH_AFSEL15_Pos) /*!< 0xF0000000 */
#define GPIO_AFRH_AFSEL15     GPIO_AFRH_AFSEL15_Msk
#define GPIO_AFRH_AFSEL15_0   (0x1U << GPIO_AFRH_AFSEL15_Pos) /*!< 0x10000000 */
#define GPIO_AFRH_AFSEL15_1   (0x2U << GPIO_AFRH_AFSEL15_Pos) /*!< 0x20000000 */
#define GPIO_AFRH_AFSEL15_2   (0x4U << GPIO_AFRH_AFSEL15_Pos) /*!< 0x40000000 */
#define GPIO_AFRH_AFSEL15_3   (0x8U << GPIO_AFRH_AFSEL15_Pos) /*!< 0x80000000 */

/* Legacy defines */
#define GPIO_AFRH_AFRH0   GPIO_AFRH_AFSEL8
#define GPIO_AFRH_AFRH0_0 GPIO_AFRH_AFSEL8_0
#define GPIO_AFRH_AFRH0_1 GPIO_AFRH_AFSEL8_1
#define GPIO_AFRH_AFRH0_2 GPIO_AFRH_AFSEL8_2
#define GPIO_AFRH_AFRH0_3 GPIO_AFRH_AFSEL8_3
#define GPIO_AFRH_AFRH1   GPIO_AFRH_AFSEL9
#define GPIO_AFRH_AFRH1_0 GPIO_AFRH_AFSEL9_0
#define GPIO_AFRH_AFRH1_1 GPIO_AFRH_AFSEL9_1
#define GPIO_AFRH_AFRH1_2 GPIO_AFRH_AFSEL9_2
#define GPIO_AFRH_AFRH1_3 GPIO_AFRH_AFSEL9_3
#define GPIO_AFRH_AFRH2   GPIO_AFRH_AFSEL10
#define GPIO_AFRH_AFRH2_0 GPIO_AFRH_AFSEL10_0
#define GPIO_AFRH_AFRH2_1 GPIO_AFRH_AFSEL10_1
#define GPIO_AFRH_AFRH2_2 GPIO_AFRH_AFSEL10_2
#define GPIO_AFRH_AFRH2_3 GPIO_AFRH_AFSEL10_3
#define GPIO_AFRH_AFRH3   GPIO_AFRH_AFSEL11
#define GPIO_AFRH_AFRH3_0 GPIO_AFRH_AFSEL11_0
#define GPIO_AFRH_AFRH3_1 GPIO_AFRH_AFSEL11_1
#define GPIO_AFRH_AFRH3_2 GPIO_AFRH_AFSEL11_2
#define GPIO_AFRH_AFRH3_3 GPIO_AFRH_AFSEL11_3
#define GPIO_AFRH_AFRH4   GPIO_AFRH_AFSEL12
#define GPIO_AFRH_AFRH4_0 GPIO_AFRH_AFSEL12_0
#define GPIO_AFRH_AFRH4_1 GPIO_AFRH_AFSEL12_1
#define GPIO_AFRH_AFRH4_2 GPIO_AFRH_AFSEL12_2
#define GPIO_AFRH_AFRH4_3 GPIO_AFRH_AFSEL12_3
#define GPIO_AFRH_AFRH5   GPIO_AFRH_AFSEL13
#define GPIO_AFRH_AFRH5_0 GPIO_AFRH_AFSEL13_0
#define GPIO_AFRH_AFRH5_1 GPIO_AFRH_AFSEL13_1
#define GPIO_AFRH_AFRH5_2 GPIO_AFRH_AFSEL13_2
#define GPIO_AFRH_AFRH5_3 GPIO_AFRH_AFSEL13_3
#define GPIO_AFRH_AFRH6   GPIO_AFRH_AFSEL14
#define GPIO_AFRH_AFRH6_0 GPIO_AFRH_AFSEL14_0
#define GPIO_AFRH_AFRH6_1 GPIO_AFRH_AFSEL14_1
#define GPIO_AFRH_AFRH6_2 GPIO_AFRH_AFSEL14_2
#define GPIO_AFRH_AFRH6_3 GPIO_AFRH_AFSEL14_3
#define GPIO_AFRH_AFRH7   GPIO_AFRH_AFSEL15
#define GPIO_AFRH_AFRH7_0 GPIO_AFRH_AFSEL15_0
#define GPIO_AFRH_AFRH7_1 GPIO_AFRH_AFSEL15_1
#define GPIO_AFRH_AFRH7_2 GPIO_AFRH_AFSEL15_2
#define GPIO_AFRH_AFRH7_3 GPIO_AFRH_AFSEL15_3

/******************  Bits definition for GPIO_BRR register  ******************/
#define GPIO_BRR_BR0_Pos  (0U)
#define GPIO_BRR_BR0_Msk  (0x1U << GPIO_BRR_BR0_Pos) /*!< 0x00000001 */
#define GPIO_BRR_BR0      GPIO_BRR_BR0_Msk
#define GPIO_BRR_BR1_Pos  (1U)
#define GPIO_BRR_BR1_Msk  (0x1U << GPIO_BRR_BR1_Pos) /*!< 0x00000002 */
#define GPIO_BRR_BR1      GPIO_BRR_BR1_Msk
#define GPIO_BRR_BR2_Pos  (2U)
#define GPIO_BRR_BR2_Msk  (0x1U << GPIO_BRR_BR2_Pos) /*!< 0x00000004 */
#define GPIO_BRR_BR2      GPIO_BRR_BR2_Msk
#define GPIO_BRR_BR3_Pos  (3U)
#define GPIO_BRR_BR3_Msk  (0x1U << GPIO_BRR_BR3_Pos) /*!< 0x00000008 */
#define GPIO_BRR_BR3      GPIO_BRR_BR3_Msk
#define GPIO_BRR_BR4_Pos  (4U)
#define GPIO_BRR_BR4_Msk  (0x1U << GPIO_BRR_BR4_Pos) /*!< 0x00000010 */
#define GPIO_BRR_BR4      GPIO_BRR_BR4_Msk
#define GPIO_BRR_BR5_Pos  (5U)
#define GPIO_BRR_BR5_Msk  (0x1U << GPIO_BRR_BR5_Pos) /*!< 0x00000020 */
#define GPIO_BRR_BR5      GPIO_BRR_BR5_Msk
#define GPIO_BRR_BR6_Pos  (6U)
#define GPIO_BRR_BR6_Msk  (0x1U << GPIO_BRR_BR6_Pos) /*!< 0x00000040 */
#define GPIO_BRR_BR6      GPIO_BRR_BR6_Msk
#define GPIO_BRR_BR7_Pos  (7U)
#define GPIO_BRR_BR7_Msk  (0x1U << GPIO_BRR_BR7_Pos) /*!< 0x00000080 */
#define GPIO_BRR_BR7      GPIO_BRR_BR7_Msk
#define GPIO_BRR_BR8_Pos  (8U)
#define GPIO_BRR_BR8_Msk  (0x1U << GPIO_BRR_BR8_Pos) /*!< 0x00000100 */
#define GPIO_BRR_BR8      GPIO_BRR_BR8_Msk
#define GPIO_BRR_BR9_Pos  (9U)
#define GPIO_BRR_BR9_Msk  (0x1U << GPIO_BRR_BR9_Pos) /*!< 0x00000200 */
#define GPIO_BRR_BR9      GPIO_BRR_BR9_Msk
#define GPIO_BRR_BR10_Pos (10U)
#define GPIO_BRR_BR10_Msk (0x1U << GPIO_BRR_BR10_Pos) /*!< 0x00000400 */
#define GPIO_BRR_BR10     GPIO_BRR_BR10_Msk
#define GPIO_BRR_BR11_Pos (11U)
#define GPIO_BRR_BR11_Msk (0x1U << GPIO_BRR_BR11_Pos) /*!< 0x00000800 */
#define GPIO_BRR_BR11     GPIO_BRR_BR11_Msk
#define GPIO_BRR_BR12_Pos (12U)
#define GPIO_BRR_BR12_Msk (0x1U << GPIO_BRR_BR12_Pos) /*!< 0x00001000 */
#define GPIO_BRR_BR12     GPIO_BRR_BR12_Msk
#define GPIO_BRR_BR13_Pos (13U)
#define GPIO_BRR_BR13_Msk (0x1U << GPIO_BRR_BR13_Pos) /*!< 0x00002000 */
#define GPIO_BRR_BR13     GPIO_BRR_BR13_Msk
#define GPIO_BRR_BR14_Pos (14U)
#define GPIO_BRR_BR14_Msk (0x1U << GPIO_BRR_BR14_Pos) /*!< 0x00004000 */
#define GPIO_BRR_BR14     GPIO_BRR_BR14_Msk
#define GPIO_BRR_BR15_Pos (15U)
#define GPIO_BRR_BR15_Msk (0x1U << GPIO_BRR_BR15_Pos) /*!< 0x00008000 */
#define GPIO_BRR_BR15     GPIO_BRR_BR15_Msk


/******************************************************************************/
/*                                                                            */
/*                                    HASH                                    */
/*                                                                            */
/******************************************************************************/
/******************  Bits definition for HASH_CR register  ********************/
#define HASH_CR_INIT_Pos     (2U)
#define HASH_CR_INIT_Msk     (0x1U << HASH_CR_INIT_Pos) /*!< 0x00000004 */
#define HASH_CR_INIT         HASH_CR_INIT_Msk
#define HASH_CR_DMAE_Pos     (3U)
#define HASH_CR_DMAE_Msk     (0x1U << HASH_CR_DMAE_Pos) /*!< 0x00000008 */
#define HASH_CR_DMAE         HASH_CR_DMAE_Msk
#define HASH_CR_DATATYPE_Pos (4U)
#define HASH_CR_DATATYPE_Msk (0x3U << HASH_CR_DATATYPE_Pos) /*!< 0x00000030 */
#define HASH_CR_DATATYPE     HASH_CR_DATATYPE_Msk
#define HASH_CR_DATATYPE_0   (0x1U << HASH_CR_DATATYPE_Pos) /*!< 0x00000010 */
#define HASH_CR_DATATYPE_1   (0x2U << HASH_CR_DATATYPE_Pos) /*!< 0x00000020 */
#define HASH_CR_MODE_Pos     (6U)
#define HASH_CR_MODE_Msk     (0x1U << HASH_CR_MODE_Pos) /*!< 0x00000040 */
#define HASH_CR_MODE         HASH_CR_MODE_Msk
#define HASH_CR_ALGO_Pos     (7U)
#define HASH_CR_ALGO_Msk     (0x801U << HASH_CR_ALGO_Pos) /*!< 0x00040080 */
#define HASH_CR_ALGO         HASH_CR_ALGO_Msk
#define HASH_CR_ALGO_0       (0x001U << HASH_CR_ALGO_Pos) /*!< 0x00000080 */
#define HASH_CR_ALGO_1       (0x800U << HASH_CR_ALGO_Pos) /*!< 0x00040000 */
#define HASH_CR_NBW_Pos      (8U)
#define HASH_CR_NBW_Msk      (0xFU << HASH_CR_NBW_Pos) /*!< 0x00000F00 */
#define HASH_CR_NBW          HASH_CR_NBW_Msk
#define HASH_CR_NBW_0        (0x1U << HASH_CR_NBW_Pos) /*!< 0x00000100 */
#define HASH_CR_NBW_1        (0x2U << HASH_CR_NBW_Pos) /*!< 0x00000200 */
#define HASH_CR_NBW_2        (0x4U << HASH_CR_NBW_Pos) /*!< 0x00000400 */
#define HASH_CR_NBW_3        (0x8U << HASH_CR_NBW_Pos) /*!< 0x00000800 */
#define HASH_CR_DINNE_Pos    (12U)
#define HASH_CR_DINNE_Msk    (0x1U << HASH_CR_DINNE_Pos) /*!< 0x00001000 */
#define HASH_CR_DINNE        HASH_CR_DINNE_Msk
#define HASH_CR_MDMAT_Pos    (13U)
#define HASH_CR_MDMAT_Msk    (0x1U << HASH_CR_MDMAT_Pos) /*!< 0x00002000 */
#define HASH_CR_MDMAT        HASH_CR_MDMAT_Msk
#define HASH_CR_LKEY_Pos     (16U)
#define HASH_CR_LKEY_Msk     (0x1U << HASH_CR_LKEY_Pos) /*!< 0x00010000 */
#define HASH_CR_LKEY         HASH_CR_LKEY_Msk

/******************  Bits definition for HASH_STR register  *******************/
#define HASH_STR_NBLW_Pos (0U)
#define HASH_STR_NBLW_Msk (0x1FU << HASH_STR_NBLW_Pos) /*!< 0x0000001F */
#define HASH_STR_NBLW     HASH_STR_NBLW_Msk
#define HASH_STR_NBLW_0   (0x01U << HASH_STR_NBLW_Pos) /*!< 0x00000001 */
#define HASH_STR_NBLW_1   (0x02U << HASH_STR_NBLW_Pos) /*!< 0x00000002 */
#define HASH_STR_NBLW_2   (0x04U << HASH_STR_NBLW_Pos) /*!< 0x00000004 */
#define HASH_STR_NBLW_3   (0x08U << HASH_STR_NBLW_Pos) /*!< 0x00000008 */
#define HASH_STR_NBLW_4   (0x10U << HASH_STR_NBLW_Pos) /*!< 0x00000010 */
#define HASH_STR_DCAL_Pos (8U)
#define HASH_STR_DCAL_Msk (0x1U << HASH_STR_DCAL_Pos) /*!< 0x00000100 */
#define HASH_STR_DCAL     HASH_STR_DCAL_Msk
/* Aliases for HASH_STR register */
#define HASH_STR_NBW      HASH_STR_NBLW
#define HASH_STR_NBW_0    HASH_STR_NBLW_0
#define HASH_STR_NBW_1    HASH_STR_NBLW_1
#define HASH_STR_NBW_2    HASH_STR_NBLW_2
#define HASH_STR_NBW_3    HASH_STR_NBLW_3
#define HASH_STR_NBW_4    HASH_STR_NBLW_4

/******************  Bits definition for HASH_IMR register  *******************/
#define HASH_IMR_DINIE_Pos (0U)
#define HASH_IMR_DINIE_Msk (0x1U << HASH_IMR_DINIE_Pos) /*!< 0x00000001 */
#define HASH_IMR_DINIE     HASH_IMR_DINIE_Msk
#define HASH_IMR_DCIE_Pos  (1U)
#define HASH_IMR_DCIE_Msk  (0x1U << HASH_IMR_DCIE_Pos) /*!< 0x00000002 */
#define HASH_IMR_DCIE      HASH_IMR_DCIE_Msk
/* Aliases for HASH_IMR register */
#define HASH_IMR_DINIM     HASH_IMR_DINIE
#define HASH_IMR_DCIM      HASH_IMR_DCIE

/******************  Bits definition for HASH_SR register  ********************/
#define HASH_SR_DINIS_Pos (0U)
#define HASH_SR_DINIS_Msk (0x1U << HASH_SR_DINIS_Pos) /*!< 0x00000001 */
#define HASH_SR_DINIS     HASH_SR_DINIS_Msk
#define HASH_SR_DCIS_Pos  (1U)
#define HASH_SR_DCIS_Msk  (0x1U << HASH_SR_DCIS_Pos) /*!< 0x00000002 */
#define HASH_SR_DCIS      HASH_SR_DCIS_Msk
#define HASH_SR_DMAS_Pos  (2U)
#define HASH_SR_DMAS_Msk  (0x1U << HASH_SR_DMAS_Pos) /*!< 0x00000004 */
#define HASH_SR_DMAS      HASH_SR_DMAS_Msk
#define HASH_SR_BUSY_Pos  (3U)
#define HASH_SR_BUSY_Msk  (0x1U << HASH_SR_BUSY_Pos) /*!< 0x00000008 */
#define HASH_SR_BUSY      HASH_SR_BUSY_Msk

/******************************************************************************/
/*                                                                            */
/*                      Inter-integrated Circuit Interface                    */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for I2C_CR1 register  ********************/
#define I2C_CR1_PE_Pos        (0U)
#define I2C_CR1_PE_Msk        (0x1U << I2C_CR1_PE_Pos) /*!< 0x00000001 */
#define I2C_CR1_PE            I2C_CR1_PE_Msk           /*!<Peripheral Enable                             */
#define I2C_CR1_SMBUS_Pos     (1U)
#define I2C_CR1_SMBUS_Msk     (0x1U << I2C_CR1_SMBUS_Pos) /*!< 0x00000002 */
#define I2C_CR1_SMBUS         I2C_CR1_SMBUS_Msk           /*!<SMBus Mode                                    */
#define I2C_CR1_SMBTYPE_Pos   (3U)
#define I2C_CR1_SMBTYPE_Msk   (0x1U << I2C_CR1_SMBTYPE_Pos) /*!< 0x00000008 */
#define I2C_CR1_SMBTYPE       I2C_CR1_SMBTYPE_Msk           /*!<SMBus Type                                    */
#define I2C_CR1_ENARP_Pos     (4U)
#define I2C_CR1_ENARP_Msk     (0x1U << I2C_CR1_ENARP_Pos) /*!< 0x00000010 */
#define I2C_CR1_ENARP         I2C_CR1_ENARP_Msk           /*!<ARP Enable                                    */
#define I2C_CR1_ENPEC_Pos     (5U)
#define I2C_CR1_ENPEC_Msk     (0x1U << I2C_CR1_ENPEC_Pos) /*!< 0x00000020 */
#define I2C_CR1_ENPEC         I2C_CR1_ENPEC_Msk           /*!<PEC Enable                                    */
#define I2C_CR1_ENGC_Pos      (6U)
#define I2C_CR1_ENGC_Msk      (0x1U << I2C_CR1_ENGC_Pos) /*!< 0x00000040 */
#define I2C_CR1_ENGC          I2C_CR1_ENGC_Msk           /*!<General Call Enable                           */
#define I2C_CR1_NOSTRETCH_Pos (7U)
#define I2C_CR1_NOSTRETCH_Msk (0x1U << I2C_CR1_NOSTRETCH_Pos) /*!< 0x00000080 */
#define I2C_CR1_NOSTRETCH     I2C_CR1_NOSTRETCH_Msk           /*!<Clock Stretching Disable (Slave mode)         */
#define I2C_CR1_START_Pos     (8U)
#define I2C_CR1_START_Msk     (0x1U << I2C_CR1_START_Pos) /*!< 0x00000100 */
#define I2C_CR1_START         I2C_CR1_START_Msk           /*!<Start Generation                              */
#define I2C_CR1_STOP_Pos      (9U)
#define I2C_CR1_STOP_Msk      (0x1U << I2C_CR1_STOP_Pos) /*!< 0x00000200 */
#define I2C_CR1_STOP          I2C_CR1_STOP_Msk           /*!<Stop Generation                               */
#define I2C_CR1_ACK_Pos       (10U)
#define I2C_CR1_ACK_Msk       (0x1U << I2C_CR1_ACK_Pos) /*!< 0x00000400 */
#define I2C_CR1_ACK           I2C_CR1_ACK_Msk           /*!<Acknowledge Enable                            */
#define I2C_CR1_POS_Pos       (11U)
#define I2C_CR1_POS_Msk       (0x1U << I2C_CR1_POS_Pos) /*!< 0x00000800 */
#define I2C_CR1_POS           I2C_CR1_POS_Msk           /*!<Acknowledge/PEC Position (for data reception) */
#define I2C_CR1_PEC_Pos       (12U)
#define I2C_CR1_PEC_Msk       (0x1U << I2C_CR1_PEC_Pos) /*!< 0x00001000 */
#define I2C_CR1_PEC           I2C_CR1_PEC_Msk           /*!<Packet Error Checking                         */
#define I2C_CR1_ALERT_Pos     (13U)
#define I2C_CR1_ALERT_Msk     (0x1U << I2C_CR1_ALERT_Pos) /*!< 0x00002000 */
#define I2C_CR1_ALERT         I2C_CR1_ALERT_Msk           /*!<SMBus Alert                                   */
#define I2C_CR1_SWRST_Pos     (15U)
#define I2C_CR1_SWRST_Msk     (0x1U << I2C_CR1_SWRST_Pos) /*!< 0x00008000 */
#define I2C_CR1_SWRST         I2C_CR1_SWRST_Msk           /*!<Software Reset                                */

/*******************  Bit definition for I2C_CR2 register  ********************/
#define I2C_CR2_FREQ_Pos    (0U)
#define I2C_CR2_FREQ_Msk    (0x3FU << I2C_CR2_FREQ_Pos) /*!< 0x0000003F */
#define I2C_CR2_FREQ        I2C_CR2_FREQ_Msk            /*!<FREQ[5:0] bits (Peripheral Clock Frequency)   */
#define I2C_CR2_FREQ_0      (0x01U << I2C_CR2_FREQ_Pos) /*!< 0x00000001 */
#define I2C_CR2_FREQ_1      (0x02U << I2C_CR2_FREQ_Pos) /*!< 0x00000002 */
#define I2C_CR2_FREQ_2      (0x04U << I2C_CR2_FREQ_Pos) /*!< 0x00000004 */
#define I2C_CR2_FREQ_3      (0x08U << I2C_CR2_FREQ_Pos) /*!< 0x00000008 */
#define I2C_CR2_FREQ_4      (0x10U << I2C_CR2_FREQ_Pos) /*!< 0x00000010 */
#define I2C_CR2_FREQ_5      (0x20U << I2C_CR2_FREQ_Pos) /*!< 0x00000020 */

#define I2C_CR2_ITERREN_Pos (8U)
#define I2C_CR2_ITERREN_Msk (0x1U << I2C_CR2_ITERREN_Pos) /*!< 0x00000100 */
#define I2C_CR2_ITERREN     I2C_CR2_ITERREN_Msk           /*!<Error Interrupt Enable  */
#define I2C_CR2_ITEVTEN_Pos (9U)
#define I2C_CR2_ITEVTEN_Msk (0x1U << I2C_CR2_ITEVTEN_Pos) /*!< 0x00000200 */
#define I2C_CR2_ITEVTEN     I2C_CR2_ITEVTEN_Msk           /*!<Event Interrupt Enable  */
#define I2C_CR2_ITBUFEN_Pos (10U)
#define I2C_CR2_ITBUFEN_Msk (0x1U << I2C_CR2_ITBUFEN_Pos) /*!< 0x00000400 */
#define I2C_CR2_ITBUFEN     I2C_CR2_ITBUFEN_Msk           /*!<Buffer Interrupt Enable */
#define I2C_CR2_DMAEN_Pos   (11U)
#define I2C_CR2_DMAEN_Msk   (0x1U << I2C_CR2_DMAEN_Pos) /*!< 0x00000800 */
#define I2C_CR2_DMAEN       I2C_CR2_DMAEN_Msk           /*!<DMA Requests Enable     */
#define I2C_CR2_LAST_Pos    (12U)
#define I2C_CR2_LAST_Msk    (0x1U << I2C_CR2_LAST_Pos) /*!< 0x00001000 */
#define I2C_CR2_LAST        I2C_CR2_LAST_Msk           /*!<DMA Last Transfer       */

/*******************  Bit definition for I2C_OAR1 register  *******************/
#define I2C_OAR1_ADD1_7      0x000000FEU /*!<Interface Address */
#define I2C_OAR1_ADD8_9      0x00000300U /*!<Interface Address */

#define I2C_OAR1_ADD0_Pos    (0U)
#define I2C_OAR1_ADD0_Msk    (0x1U << I2C_OAR1_ADD0_Pos) /*!< 0x00000001 */
#define I2C_OAR1_ADD0        I2C_OAR1_ADD0_Msk           /*!<Bit 0 */
#define I2C_OAR1_ADD1_Pos    (1U)
#define I2C_OAR1_ADD1_Msk    (0x1U << I2C_OAR1_ADD1_Pos) /*!< 0x00000002 */
#define I2C_OAR1_ADD1        I2C_OAR1_ADD1_Msk           /*!<Bit 1 */
#define I2C_OAR1_ADD2_Pos    (2U)
#define I2C_OAR1_ADD2_Msk    (0x1U << I2C_OAR1_ADD2_Pos) /*!< 0x00000004 */
#define I2C_OAR1_ADD2        I2C_OAR1_ADD2_Msk           /*!<Bit 2 */
#define I2C_OAR1_ADD3_Pos    (3U)
#define I2C_OAR1_ADD3_Msk    (0x1U << I2C_OAR1_ADD3_Pos) /*!< 0x00000008 */
#define I2C_OAR1_ADD3        I2C_OAR1_ADD3_Msk           /*!<Bit 3 */
#define I2C_OAR1_ADD4_Pos    (4U)
#define I2C_OAR1_ADD4_Msk    (0x1U << I2C_OAR1_ADD4_Pos) /*!< 0x00000010 */
#define I2C_OAR1_ADD4        I2C_OAR1_ADD4_Msk           /*!<Bit 4 */
#define I2C_OAR1_ADD5_Pos    (5U)
#define I2C_OAR1_ADD5_Msk    (0x1U << I2C_OAR1_ADD5_Pos) /*!< 0x00000020 */
#define I2C_OAR1_ADD5        I2C_OAR1_ADD5_Msk           /*!<Bit 5 */
#define I2C_OAR1_ADD6_Pos    (6U)
#define I2C_OAR1_ADD6_Msk    (0x1U << I2C_OAR1_ADD6_Pos) /*!< 0x00000040 */
#define I2C_OAR1_ADD6        I2C_OAR1_ADD6_Msk           /*!<Bit 6 */
#define I2C_OAR1_ADD7_Pos    (7U)
#define I2C_OAR1_ADD7_Msk    (0x1U << I2C_OAR1_ADD7_Pos) /*!< 0x00000080 */
#define I2C_OAR1_ADD7        I2C_OAR1_ADD7_Msk           /*!<Bit 7 */
#define I2C_OAR1_ADD8_Pos    (8U)
#define I2C_OAR1_ADD8_Msk    (0x1U << I2C_OAR1_ADD8_Pos) /*!< 0x00000100 */
#define I2C_OAR1_ADD8        I2C_OAR1_ADD8_Msk           /*!<Bit 8 */
#define I2C_OAR1_ADD9_Pos    (9U)
#define I2C_OAR1_ADD9_Msk    (0x1U << I2C_OAR1_ADD9_Pos) /*!< 0x00000200 */
#define I2C_OAR1_ADD9        I2C_OAR1_ADD9_Msk           /*!<Bit 9 */

#define I2C_OAR1_ADDMODE_Pos (15U)
#define I2C_OAR1_ADDMODE_Msk (0x1U << I2C_OAR1_ADDMODE_Pos) /*!< 0x00008000 */
#define I2C_OAR1_ADDMODE     I2C_OAR1_ADDMODE_Msk           /*!<Addressing Mode (Slave mode) */

/*******************  Bit definition for I2C_OAR2 register  *******************/
#define I2C_OAR2_ENDUAL_Pos (0U)
#define I2C_OAR2_ENDUAL_Msk (0x1U << I2C_OAR2_ENDUAL_Pos) /*!< 0x00000001 */
#define I2C_OAR2_ENDUAL     I2C_OAR2_ENDUAL_Msk           /*!<Dual addressing mode enable */
#define I2C_OAR2_ADD2_Pos   (1U)
#define I2C_OAR2_ADD2_Msk   (0x7FU << I2C_OAR2_ADD2_Pos) /*!< 0x000000FE */
#define I2C_OAR2_ADD2       I2C_OAR2_ADD2_Msk            /*!<Interface address           */

/********************  Bit definition for I2C_DR register  ********************/
#define I2C_DR_DR_Pos (0U)
#define I2C_DR_DR_Msk (0xFFU << I2C_DR_DR_Pos) /*!< 0x000000FF */
#define I2C_DR_DR     I2C_DR_DR_Msk            /*!<8-bit Data Register         */

/*******************  Bit definition for I2C_SR1 register  ********************/
#define I2C_SR1_SB_Pos       (0U)
#define I2C_SR1_SB_Msk       (0x1U << I2C_SR1_SB_Pos) /*!< 0x00000001 */
#define I2C_SR1_SB           I2C_SR1_SB_Msk           /*!<Start Bit (Master mode)                         */
#define I2C_SR1_ADDR_Pos     (1U)
#define I2C_SR1_ADDR_Msk     (0x1U << I2C_SR1_ADDR_Pos) /*!< 0x00000002 */
#define I2C_SR1_ADDR         I2C_SR1_ADDR_Msk           /*!<Address sent (master mode)/matched (slave mode) */
#define I2C_SR1_BTF_Pos      (2U)
#define I2C_SR1_BTF_Msk      (0x1U << I2C_SR1_BTF_Pos) /*!< 0x00000004 */
#define I2C_SR1_BTF          I2C_SR1_BTF_Msk           /*!<Byte Transfer Finished                          */
#define I2C_SR1_ADD10_Pos    (3U)
#define I2C_SR1_ADD10_Msk    (0x1U << I2C_SR1_ADD10_Pos) /*!< 0x00000008 */
#define I2C_SR1_ADD10        I2C_SR1_ADD10_Msk           /*!<10-bit header sent (Master mode)                */
#define I2C_SR1_STOPF_Pos    (4U)
#define I2C_SR1_STOPF_Msk    (0x1U << I2C_SR1_STOPF_Pos) /*!< 0x00000010 */
#define I2C_SR1_STOPF        I2C_SR1_STOPF_Msk           /*!<Stop detection (Slave mode)                     */
#define I2C_SR1_RXNE_Pos     (6U)
#define I2C_SR1_RXNE_Msk     (0x1U << I2C_SR1_RXNE_Pos) /*!< 0x00000040 */
#define I2C_SR1_RXNE         I2C_SR1_RXNE_Msk           /*!<Data Register not Empty (receivers)             */
#define I2C_SR1_TXE_Pos      (7U)
#define I2C_SR1_TXE_Msk      (0x1U << I2C_SR1_TXE_Pos) /*!< 0x00000080 */
#define I2C_SR1_TXE          I2C_SR1_TXE_Msk           /*!<Data Register Empty (transmitters)              */
#define I2C_SR1_BERR_Pos     (8U)
#define I2C_SR1_BERR_Msk     (0x1U << I2C_SR1_BERR_Pos) /*!< 0x00000100 */
#define I2C_SR1_BERR         I2C_SR1_BERR_Msk           /*!<Bus Error                                       */
#define I2C_SR1_ARLO_Pos     (9U)
#define I2C_SR1_ARLO_Msk     (0x1U << I2C_SR1_ARLO_Pos) /*!< 0x00000200 */
#define I2C_SR1_ARLO         I2C_SR1_ARLO_Msk           /*!<Arbitration Lost (master mode)                  */
#define I2C_SR1_AF_Pos       (10U)
#define I2C_SR1_AF_Msk       (0x1U << I2C_SR1_AF_Pos) /*!< 0x00000400 */
#define I2C_SR1_AF           I2C_SR1_AF_Msk           /*!<Acknowledge Failure                             */
#define I2C_SR1_OVR_Pos      (11U)
#define I2C_SR1_OVR_Msk      (0x1U << I2C_SR1_OVR_Pos) /*!< 0x00000800 */
#define I2C_SR1_OVR          I2C_SR1_OVR_Msk           /*!<Overrun/Underrun                                */
#define I2C_SR1_PECERR_Pos   (12U)
#define I2C_SR1_PECERR_Msk   (0x1U << I2C_SR1_PECERR_Pos) /*!< 0x00001000 */
#define I2C_SR1_PECERR       I2C_SR1_PECERR_Msk           /*!<PEC Error in reception                          */
#define I2C_SR1_TIMEOUT_Pos  (14U)
#define I2C_SR1_TIMEOUT_Msk  (0x1U << I2C_SR1_TIMEOUT_Pos) /*!< 0x00004000 */
#define I2C_SR1_TIMEOUT      I2C_SR1_TIMEOUT_Msk           /*!<Timeout or Tlow Error                           */
#define I2C_SR1_SMBALERT_Pos (15U)
#define I2C_SR1_SMBALERT_Msk (0x1U << I2C_SR1_SMBALERT_Pos) /*!< 0x00008000 */
#define I2C_SR1_SMBALERT     I2C_SR1_SMBALERT_Msk           /*!<SMBus Alert                                     */

/*******************  Bit definition for I2C_SR2 register  ********************/
#define I2C_SR2_MSL_Pos        (0U)
#define I2C_SR2_MSL_Msk        (0x1U << I2C_SR2_MSL_Pos) /*!< 0x00000001 */
#define I2C_SR2_MSL            I2C_SR2_MSL_Msk           /*!<Master/Slave                                    */
#define I2C_SR2_BUSY_Pos       (1U)
#define I2C_SR2_BUSY_Msk       (0x1U << I2C_SR2_BUSY_Pos) /*!< 0x00000002 */
#define I2C_SR2_BUSY           I2C_SR2_BUSY_Msk           /*!<Bus Busy                                        */
#define I2C_SR2_TRA_Pos        (2U)
#define I2C_SR2_TRA_Msk        (0x1U << I2C_SR2_TRA_Pos) /*!< 0x00000004 */
#define I2C_SR2_TRA            I2C_SR2_TRA_Msk           /*!<Transmitter/Receiver                            */
#define I2C_SR2_GENCALL_Pos    (4U)
#define I2C_SR2_GENCALL_Msk    (0x1U << I2C_SR2_GENCALL_Pos) /*!< 0x00000010 */
#define I2C_SR2_GENCALL        I2C_SR2_GENCALL_Msk           /*!<General Call Address (Slave mode)               */
#define I2C_SR2_SMBDEFAULT_Pos (5U)
#define I2C_SR2_SMBDEFAULT_Msk (0x1U << I2C_SR2_SMBDEFAULT_Pos) /*!< 0x00000020 */
#define I2C_SR2_SMBDEFAULT     I2C_SR2_SMBDEFAULT_Msk           /*!<SMBus Device Default Address (Slave mode)       */
#define I2C_SR2_SMBHOST_Pos    (6U)
#define I2C_SR2_SMBHOST_Msk    (0x1U << I2C_SR2_SMBHOST_Pos) /*!< 0x00000040 */
#define I2C_SR2_SMBHOST        I2C_SR2_SMBHOST_Msk           /*!<SMBus Host Header (Slave mode)                  */
#define I2C_SR2_DUALF_Pos      (7U)
#define I2C_SR2_DUALF_Msk      (0x1U << I2C_SR2_DUALF_Pos) /*!< 0x00000080 */
#define I2C_SR2_DUALF          I2C_SR2_DUALF_Msk           /*!<Dual Flag (Slave mode)                          */
#define I2C_SR2_PEC_Pos        (8U)
#define I2C_SR2_PEC_Msk        (0xFFU << I2C_SR2_PEC_Pos) /*!< 0x0000FF00 */
#define I2C_SR2_PEC            I2C_SR2_PEC_Msk            /*!<Packet Error Checking Register                  */

/*******************  Bit definition for I2C_CCR register  ********************/
#define I2C_CCR_CCR_Pos  (0U)
#define I2C_CCR_CCR_Msk  (0xFFFU << I2C_CCR_CCR_Pos) /*!< 0x00000FFF */
#define I2C_CCR_CCR      I2C_CCR_CCR_Msk             /*!<Clock Control Register in Fast/Standard mode (Master mode) */
#define I2C_CCR_DUTY_Pos (14U)
#define I2C_CCR_DUTY_Msk (0x1U << I2C_CCR_DUTY_Pos) /*!< 0x00004000 */
#define I2C_CCR_DUTY     I2C_CCR_DUTY_Msk           /*!<Fast Mode Duty Cycle                                       */
#define I2C_CCR_FS_Pos   (15U)
#define I2C_CCR_FS_Msk   (0x1U << I2C_CCR_FS_Pos) /*!< 0x00008000 */
#define I2C_CCR_FS       I2C_CCR_FS_Msk           /*!<I2C Master Mode Selection                                  */

/******************  Bit definition for I2C_TRISE register  *******************/
#define I2C_TRISE_TRISE_Pos (0U)
#define I2C_TRISE_TRISE_Msk (0x3FU << I2C_TRISE_TRISE_Pos) /*!< 0x0000003F */
#define I2C_TRISE_TRISE     I2C_TRISE_TRISE_Msk            /*!<Maximum Rise Time in Fast/Standard mode (Master mode) */


/******************************************************************************/
/*                                                                            */
/*                           Independent WATCHDOG                             */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for IWDG_KR register  ********************/
#define IWDG_KR_KEY_Pos (0U)
#define IWDG_KR_KEY_Msk (0xFFFFU << IWDG_KR_KEY_Pos) /*!< 0x0000FFFF */
#define IWDG_KR_KEY     IWDG_KR_KEY_Msk              /*!<Key value (write only, read 0000h)  */

/*******************  Bit definition for IWDG_PR register  ********************/
#define IWDG_PR_PR_Pos (0U)
#define IWDG_PR_PR_Msk (0x7U << IWDG_PR_PR_Pos) /*!< 0x00000007 */
#define IWDG_PR_PR     IWDG_PR_PR_Msk           /*!<PR[2:0] (Prescaler divider)         */
#define IWDG_PR_PR_0   (0x1U << IWDG_PR_PR_Pos) /*!< 0x01 */
#define IWDG_PR_PR_1   (0x2U << IWDG_PR_PR_Pos) /*!< 0x02 */
#define IWDG_PR_PR_2   (0x4U << IWDG_PR_PR_Pos) /*!< 0x04 */

/*******************  Bit definition for IWDG_RLR register  *******************/
#define IWDG_RLR_RL_Pos (0U)
#define IWDG_RLR_RL_Msk (0xFFFU << IWDG_RLR_RL_Pos) /*!< 0x00000FFF */
#define IWDG_RLR_RL     IWDG_RLR_RL_Msk             /*!<Watchdog counter reload value        */

/*******************  Bit definition for IWDG_SR register  ********************/
#define IWDG_SR_PVU_Pos (0U)
#define IWDG_SR_PVU_Msk (0x1U << IWDG_SR_PVU_Pos) /*!< 0x00000001 */
#define IWDG_SR_PVU     IWDG_SR_PVU_Msk           /*!<Watchdog prescaler value update      */
#define IWDG_SR_RVU_Pos (1U)
#define IWDG_SR_RVU_Msk (0x1U << IWDG_SR_RVU_Pos) /*!< 0x00000002 */
#define IWDG_SR_RVU     IWDG_SR_RVU_Msk           /*!<Watchdog counter reload value update */


/******************************************************************************/
/*                                                                            */
/*                             Power Control                                  */
/*                                                                            */
/******************************************************************************/
/********************  Bit definition for PWR_CR register  ********************/
#define PWR_CR_LPDS_Pos (0U)
#define PWR_CR_LPDS_Msk (0x1U << PWR_CR_LPDS_Pos) /*!< 0x00000001 */
#define PWR_CR_LPDS     PWR_CR_LPDS_Msk           /*!< Low-Power Deepsleep                 */
#define PWR_CR_PDDS_Pos (1U)
#define PWR_CR_PDDS_Msk (0x1U << PWR_CR_PDDS_Pos) /*!< 0x00000002 */
#define PWR_CR_PDDS     PWR_CR_PDDS_Msk           /*!< Power Down Deepsleep                */
#define PWR_CR_CWUF_Pos (2U)
#define PWR_CR_CWUF_Msk (0x1U << PWR_CR_CWUF_Pos) /*!< 0x00000004 */
#define PWR_CR_CWUF     PWR_CR_CWUF_Msk           /*!< Clear Wakeup Flag                   */
#define PWR_CR_CSBF_Pos (3U)
#define PWR_CR_CSBF_Msk (0x1U << PWR_CR_CSBF_Pos) /*!< 0x00000008 */
#define PWR_CR_CSBF     PWR_CR_CSBF_Msk           /*!< Clear Standby Flag                  */
#define PWR_CR_PVDE_Pos (4U)
#define PWR_CR_PVDE_Msk (0x1U << PWR_CR_PVDE_Pos) /*!< 0x00000010 */
#define PWR_CR_PVDE     PWR_CR_PVDE_Msk           /*!< Power Voltage Detector Enable       */

#define PWR_CR_PLS_Pos  (5U)
#define PWR_CR_PLS_Msk  (0x7U << PWR_CR_PLS_Pos) /*!< 0x000000E0 */
#define PWR_CR_PLS      PWR_CR_PLS_Msk           /*!< PLS[2:0] bits (PVD Level Selection) */
#define PWR_CR_PLS_0    (0x1U << PWR_CR_PLS_Pos) /*!< 0x00000020 */
#define PWR_CR_PLS_1    (0x2U << PWR_CR_PLS_Pos) /*!< 0x00000040 */
#define PWR_CR_PLS_2    (0x4U << PWR_CR_PLS_Pos) /*!< 0x00000080 */

/*!< PVD level configuration */
#define PWR_CR_PLS_LEV0 0x00000000U /*!< PVD level 0 */
#define PWR_CR_PLS_LEV1 0x00000020U /*!< PVD level 1 */
#define PWR_CR_PLS_LEV2 0x00000040U /*!< PVD level 2 */
#define PWR_CR_PLS_LEV3 0x00000060U /*!< PVD level 3 */
#define PWR_CR_PLS_LEV4 0x00000080U /*!< PVD level 4 */
#define PWR_CR_PLS_LEV5 0x000000A0U /*!< PVD level 5 */
#define PWR_CR_PLS_LEV6 0x000000C0U /*!< PVD level 6 */
#define PWR_CR_PLS_LEV7 0x000000E0U /*!< PVD level 7 */
#define PWR_CR_DBP_Pos  (8U)
#define PWR_CR_DBP_Msk  (0x1U << PWR_CR_DBP_Pos) /*!< 0x00000100 */
#define PWR_CR_DBP      PWR_CR_DBP_Msk           /*!< Disable Backup Domain write protection                     */
#define PWR_CR_FPDS_Pos (9U)
#define PWR_CR_FPDS_Msk (0x1U << PWR_CR_FPDS_Pos) /*!< 0x00000200 */
#define PWR_CR_FPDS     PWR_CR_FPDS_Msk           /*!< Flash power down in Stop mode                              */
#define PWR_CR_VOS_Pos  (14U)
#define PWR_CR_VOS_Msk  (0x1U << PWR_CR_VOS_Pos) /*!< 0x00004000 */
#define PWR_CR_VOS      PWR_CR_VOS_Msk           /*!< VOS bit (Regulator voltage scaling output selection) */

/* Legacy define */
#define  PWR_CR_PMODE PWR_CR_VOS

/*******************  Bit definition for PWR_CSR register  ********************/
#define PWR_CSR_WUF_Pos    (0U)
#define PWR_CSR_WUF_Msk    (0x1U << PWR_CSR_WUF_Pos) /*!< 0x00000001 */
#define PWR_CSR_WUF        PWR_CSR_WUF_Msk           /*!< Wakeup Flag                                      */
#define PWR_CSR_SBF_Pos    (1U)
#define PWR_CSR_SBF_Msk    (0x1U << PWR_CSR_SBF_Pos) /*!< 0x00000002 */
#define PWR_CSR_SBF        PWR_CSR_SBF_Msk           /*!< Standby Flag                                     */
#define PWR_CSR_PVDO_Pos   (2U)
#define PWR_CSR_PVDO_Msk   (0x1U << PWR_CSR_PVDO_Pos) /*!< 0x00000004 */
#define PWR_CSR_PVDO       PWR_CSR_PVDO_Msk           /*!< PVD Output                                       */
#define PWR_CSR_BRR_Pos    (3U)
#define PWR_CSR_BRR_Msk    (0x1U << PWR_CSR_BRR_Pos) /*!< 0x00000008 */
#define PWR_CSR_BRR        PWR_CSR_BRR_Msk           /*!< Backup regulator ready                           */
#define PWR_CSR_EWUP_Pos   (8U)
#define PWR_CSR_EWUP_Msk   (0x1U << PWR_CSR_EWUP_Pos) /*!< 0x00000100 */
#define PWR_CSR_EWUP       PWR_CSR_EWUP_Msk           /*!< Enable WKUP pin                                  */
#define PWR_CSR_BRE_Pos    (9U)
#define PWR_CSR_BRE_Msk    (0x1U << PWR_CSR_BRE_Pos) /*!< 0x00000200 */
#define PWR_CSR_BRE        PWR_CSR_BRE_Msk           /*!< Backup regulator enable                          */
#define PWR_CSR_VOSRDY_Pos (14U)
#define PWR_CSR_VOSRDY_Msk (0x1U << PWR_CSR_VOSRDY_Pos) /*!< 0x00004000 */
#define PWR_CSR_VOSRDY     PWR_CSR_VOSRDY_Msk           /*!< Regulator voltage scaling output selection ready */

/* Legacy define */
#define  PWR_CSR_REGRDY PWR_CSR_VOSRDY

/******************************************************************************/
/*                                                                            */
/*                         Reset and Clock Control                            */
/*                                                                            */
/******************************************************************************/
/********************  Bit definition for RCC_CR register  ********************/
#define RCC_CR_HSION_Pos   (0U)
#define RCC_CR_HSION_Msk   (0x1U << RCC_CR_HSION_Pos) /*!< 0x00000001 */
#define RCC_CR_HSION       RCC_CR_HSION_Msk
#define RCC_CR_HSIRDY_Pos  (1U)
#define RCC_CR_HSIRDY_Msk  (0x1U << RCC_CR_HSIRDY_Pos) /*!< 0x00000002 */
#define RCC_CR_HSIRDY      RCC_CR_HSIRDY_Msk

#define RCC_CR_HSITRIM_Pos (3U)
#define RCC_CR_HSITRIM_Msk (0x1FU << RCC_CR_HSITRIM_Pos) /*!< 0x000000F8 */
#define RCC_CR_HSITRIM     RCC_CR_HSITRIM_Msk
#define RCC_CR_HSITRIM_0   (0x01U << RCC_CR_HSITRIM_Pos) /*!< 0x00000008 */
#define RCC_CR_HSITRIM_1   (0x02U << RCC_CR_HSITRIM_Pos) /*!< 0x00000010 */
#define RCC_CR_HSITRIM_2   (0x04U << RCC_CR_HSITRIM_Pos) /*!< 0x00000020 */
#define RCC_CR_HSITRIM_3   (0x08U << RCC_CR_HSITRIM_Pos) /*!< 0x00000040 */
#define RCC_CR_HSITRIM_4   (0x10U << RCC_CR_HSITRIM_Pos) /*!< 0x00000080 */

#define RCC_CR_HSICAL_Pos  (8U)
#define RCC_CR_HSICAL_Msk  (0xFFU << RCC_CR_HSICAL_Pos) /*!< 0x0000FF00 */
#define RCC_CR_HSICAL      RCC_CR_HSICAL_Msk
#define RCC_CR_HSICAL_0    (0x01U << RCC_CR_HSICAL_Pos) /*!< 0x00000100 */
#define RCC_CR_HSICAL_1    (0x02U << RCC_CR_HSICAL_Pos) /*!< 0x00000200 */
#define RCC_CR_HSICAL_2    (0x04U << RCC_CR_HSICAL_Pos) /*!< 0x00000400 */
#define RCC_CR_HSICAL_3    (0x08U << RCC_CR_HSICAL_Pos) /*!< 0x00000800 */
#define RCC_CR_HSICAL_4    (0x10U << RCC_CR_HSICAL_Pos) /*!< 0x00001000 */
#define RCC_CR_HSICAL_5    (0x20U << RCC_CR_HSICAL_Pos) /*!< 0x00002000 */
#define RCC_CR_HSICAL_6    (0x40U << RCC_CR_HSICAL_Pos) /*!< 0x00004000 */
#define RCC_CR_HSICAL_7    (0x80U << RCC_CR_HSICAL_Pos) /*!< 0x00008000 */

#define RCC_CR_HSEON_Pos   (16U)
#define RCC_CR_HSEON_Msk   (0x1U << RCC_CR_HSEON_Pos) /*!< 0x00010000 */
#define RCC_CR_HSEON       RCC_CR_HSEON_Msk
#define RCC_CR_HSERDY_Pos  (17U)
#define RCC_CR_HSERDY_Msk  (0x1U << RCC_CR_HSERDY_Pos) /*!< 0x00020000 */
#define RCC_CR_HSERDY      RCC_CR_HSERDY_Msk
#define RCC_CR_HSEBYP_Pos  (18U)
#define RCC_CR_HSEBYP_Msk  (0x1U << RCC_CR_HSEBYP_Pos) /*!< 0x00040000 */
#define RCC_CR_HSEBYP      RCC_CR_HSEBYP_Msk
#define RCC_CR_CSSON_Pos   (19U)
#define RCC_CR_CSSON_Msk   (0x1U << RCC_CR_CSSON_Pos) /*!< 0x00080000 */
#define RCC_CR_CSSON       RCC_CR_CSSON_Msk
#define RCC_CR_PLLON_Pos   (24U)
#define RCC_CR_PLLON_Msk   (0x1U << RCC_CR_PLLON_Pos) /*!< 0x01000000 */
#define RCC_CR_PLLON       RCC_CR_PLLON_Msk
#define RCC_CR_PLLRDY_Pos  (25U)
#define RCC_CR_PLLRDY_Msk  (0x1U << RCC_CR_PLLRDY_Pos) /*!< 0x02000000 */
#define RCC_CR_PLLRDY      RCC_CR_PLLRDY_Msk

/*
 * @brief Specific device feature definitions (not present on all devices in the STM32F4 serie)
 */
#define RCC_PLLI2S_SUPPORT /*!< Support PLLI2S oscillator */

#define RCC_CR_PLLI2SON_Pos  (26U)
#define RCC_CR_PLLI2SON_Msk  (0x1U << RCC_CR_PLLI2SON_Pos) /*!< 0x04000000 */
#define RCC_CR_PLLI2SON      RCC_CR_PLLI2SON_Msk
#define RCC_CR_PLLI2SRDY_Pos (27U)
#define RCC_CR_PLLI2SRDY_Msk (0x1U << RCC_CR_PLLI2SRDY_Pos) /*!< 0x08000000 */
#define RCC_CR_PLLI2SRDY     RCC_CR_PLLI2SRDY_Msk

/********************  Bit definition for RCC_PLLCFGR register  ***************/
#define RCC_PLLCFGR_PLLM_Pos       (0U)
#define RCC_PLLCFGR_PLLM_Msk       (0x3FU << RCC_PLLCFGR_PLLM_Pos) /*!< 0x0000003F */
#define RCC_PLLCFGR_PLLM           RCC_PLLCFGR_PLLM_Msk
#define RCC_PLLCFGR_PLLM_0         (0x01U << RCC_PLLCFGR_PLLM_Pos) /*!< 0x00000001 */
#define RCC_PLLCFGR_PLLM_1         (0x02U << RCC_PLLCFGR_PLLM_Pos) /*!< 0x00000002 */
#define RCC_PLLCFGR_PLLM_2         (0x04U << RCC_PLLCFGR_PLLM_Pos) /*!< 0x00000004 */
#define RCC_PLLCFGR_PLLM_3         (0x08U << RCC_PLLCFGR_PLLM_Pos) /*!< 0x00000008 */
#define RCC_PLLCFGR_PLLM_4         (0x10U << RCC_PLLCFGR_PLLM_Pos) /*!< 0x00000010 */
#define RCC_PLLCFGR_PLLM_5         (0x20U << RCC_PLLCFGR_PLLM_Pos) /*!< 0x00000020 */

#define RCC_PLLCFGR_PLLN_Pos       (6U)
#define RCC_PLLCFGR_PLLN_Msk       (0x1FFU << RCC_PLLCFGR_PLLN_Pos) /*!< 0x00007FC0 */
#define RCC_PLLCFGR_PLLN           RCC_PLLCFGR_PLLN_Msk
#define RCC_PLLCFGR_PLLN_0         (0x001U << RCC_PLLCFGR_PLLN_Pos) /*!< 0x00000040 */
#define RCC_PLLCFGR_PLLN_1         (0x002U << RCC_PLLCFGR_PLLN_Pos) /*!< 0x00000080 */
#define RCC_PLLCFGR_PLLN_2         (0x004U << RCC_PLLCFGR_PLLN_Pos) /*!< 0x00000100 */
#define RCC_PLLCFGR_PLLN_3         (0x008U << RCC_PLLCFGR_PLLN_Pos) /*!< 0x00000200 */
#define RCC_PLLCFGR_PLLN_4         (0x010U << RCC_PLLCFGR_PLLN_Pos) /*!< 0x00000400 */
#define RCC_PLLCFGR_PLLN_5         (0x020U << RCC_PLLCFGR_PLLN_Pos) /*!< 0x00000800 */
#define RCC_PLLCFGR_PLLN_6         (0x040U << RCC_PLLCFGR_PLLN_Pos) /*!< 0x00001000 */
#define RCC_PLLCFGR_PLLN_7         (0x080U << RCC_PLLCFGR_PLLN_Pos) /*!< 0x00002000 */
#define RCC_PLLCFGR_PLLN_8         (0x100U << RCC_PLLCFGR_PLLN_Pos) /*!< 0x00004000 */

#define RCC_PLLCFGR_PLLP_Pos       (16U)
#define RCC_PLLCFGR_PLLP_Msk       (0x3U << RCC_PLLCFGR_PLLP_Pos) /*!< 0x00030000 */
#define RCC_PLLCFGR_PLLP           RCC_PLLCFGR_PLLP_Msk
#define RCC_PLLCFGR_PLLP_0         (0x1U << RCC_PLLCFGR_PLLP_Pos) /*!< 0x00010000 */
#define RCC_PLLCFGR_PLLP_1         (0x2U << RCC_PLLCFGR_PLLP_Pos) /*!< 0x00020000 */

#define RCC_PLLCFGR_PLLSRC_Pos     (22U)
#define RCC_PLLCFGR_PLLSRC_Msk     (0x1U << RCC_PLLCFGR_PLLSRC_Pos) /*!< 0x00400000 */
#define RCC_PLLCFGR_PLLSRC         RCC_PLLCFGR_PLLSRC_Msk
#define RCC_PLLCFGR_PLLSRC_HSE_Pos (22U)
#define RCC_PLLCFGR_PLLSRC_HSE_Msk (0x1U << RCC_PLLCFGR_PLLSRC_HSE_Pos) /*!< 0x00400000 */
#define RCC_PLLCFGR_PLLSRC_HSE     RCC_PLLCFGR_PLLSRC_HSE_Msk
#define RCC_PLLCFGR_PLLSRC_HSI     0x00000000U

#define RCC_PLLCFGR_PLLQ_Pos       (24U)
#define RCC_PLLCFGR_PLLQ_Msk       (0xFU << RCC_PLLCFGR_PLLQ_Pos) /*!< 0x0F000000 */
#define RCC_PLLCFGR_PLLQ           RCC_PLLCFGR_PLLQ_Msk
#define RCC_PLLCFGR_PLLQ_0         (0x1U << RCC_PLLCFGR_PLLQ_Pos) /*!< 0x01000000 */
#define RCC_PLLCFGR_PLLQ_1         (0x2U << RCC_PLLCFGR_PLLQ_Pos) /*!< 0x02000000 */
#define RCC_PLLCFGR_PLLQ_2         (0x4U << RCC_PLLCFGR_PLLQ_Pos) /*!< 0x04000000 */
#define RCC_PLLCFGR_PLLQ_3         (0x8U << RCC_PLLCFGR_PLLQ_Pos) /*!< 0x08000000 */


/********************  Bit definition for RCC_CFGR register  ******************/
/*!< SW configuration */
#define RCC_CFGR_SW_Pos (0U)
#define RCC_CFGR_SW_Msk (0x3U << RCC_CFGR_SW_Pos) /*!< 0x00000003 */
#define RCC_CFGR_SW     RCC_CFGR_SW_Msk           /*!< SW[1:0] bits (System clock Switch) */
#define RCC_CFGR_SW_0   (0x1U << RCC_CFGR_SW_Pos) /*!< 0x00000001 */
#define RCC_CFGR_SW_1   (0x2U << RCC_CFGR_SW_Pos) /*!< 0x00000002 */

#define RCC_CFGR_SW_HSI 0x00000000U /*!< HSI selected as system clock */
#define RCC_CFGR_SW_HSE 0x00000001U /*!< HSE selected as system clock */
#define RCC_CFGR_SW_PLL 0x00000002U /*!< PLL selected as system clock */

/*!< SWS configuration */
#define RCC_CFGR_SWS_Pos (2U)
#define RCC_CFGR_SWS_Msk (0x3U << RCC_CFGR_SWS_Pos) /*!< 0x0000000C */
#define RCC_CFGR_SWS     RCC_CFGR_SWS_Msk           /*!< SWS[1:0] bits (System Clock Switch Status) */
#define RCC_CFGR_SWS_0   (0x1U << RCC_CFGR_SWS_Pos) /*!< 0x00000004 */
#define RCC_CFGR_SWS_1   (0x2U << RCC_CFGR_SWS_Pos) /*!< 0x00000008 */

#define RCC_CFGR_SWS_HSI 0x00000000U /*!< HSI oscillator used as system clock        */
#define RCC_CFGR_SWS_HSE 0x00000004U /*!< HSE oscillator used as system clock        */
#define RCC_CFGR_SWS_PLL 0x00000008U /*!< PLL used as system clock                   */

/*!< HPRE configuration */
#define RCC_CFGR_HPRE_Pos    (4U)
#define RCC_CFGR_HPRE_Msk    (0xFU << RCC_CFGR_HPRE_Pos) /*!< 0x000000F0 */
#define RCC_CFGR_HPRE        RCC_CFGR_HPRE_Msk           /*!< HPRE[3:0] bits (AHB prescaler) */
#define RCC_CFGR_HPRE_0      (0x1U << RCC_CFGR_HPRE_Pos) /*!< 0x00000010 */
#define RCC_CFGR_HPRE_1      (0x2U << RCC_CFGR_HPRE_Pos) /*!< 0x00000020 */
#define RCC_CFGR_HPRE_2      (0x4U << RCC_CFGR_HPRE_Pos) /*!< 0x00000040 */
#define RCC_CFGR_HPRE_3      (0x8U << RCC_CFGR_HPRE_Pos) /*!< 0x00000080 */

#define RCC_CFGR_HPRE_DIV1   0x00000000U /*!< SYSCLK not divided    */
#define RCC_CFGR_HPRE_DIV2   0x00000080U /*!< SYSCLK divided by 2   */
#define RCC_CFGR_HPRE_DIV4   0x00000090U /*!< SYSCLK divided by 4   */
#define RCC_CFGR_HPRE_DIV8   0x000000A0U /*!< SYSCLK divided by 8   */
#define RCC_CFGR_HPRE_DIV16  0x000000B0U /*!< SYSCLK divided by 16  */
#define RCC_CFGR_HPRE_DIV64  0x000000C0U /*!< SYSCLK divided by 64  */
#define RCC_CFGR_HPRE_DIV128 0x000000D0U /*!< SYSCLK divided by 128 */
#define RCC_CFGR_HPRE_DIV256 0x000000E0U /*!< SYSCLK divided by 256 */
#define RCC_CFGR_HPRE_DIV512 0x000000F0U /*!< SYSCLK divided by 512 */

/*!< PPRE1 configuration */
#define RCC_CFGR_PPRE1_Pos   (10U)
#define RCC_CFGR_PPRE1_Msk   (0x7U << RCC_CFGR_PPRE1_Pos) /*!< 0x00001C00 */
#define RCC_CFGR_PPRE1       RCC_CFGR_PPRE1_Msk           /*!< PRE1[2:0] bits (APB1 prescaler) */
#define RCC_CFGR_PPRE1_0     (0x1U << RCC_CFGR_PPRE1_Pos) /*!< 0x00000400 */
#define RCC_CFGR_PPRE1_1     (0x2U << RCC_CFGR_PPRE1_Pos) /*!< 0x00000800 */
#define RCC_CFGR_PPRE1_2     (0x4U << RCC_CFGR_PPRE1_Pos) /*!< 0x00001000 */

#define RCC_CFGR_PPRE1_DIV1  0x00000000U /*!< HCLK not divided   */
#define RCC_CFGR_PPRE1_DIV2  0x00001000U /*!< HCLK divided by 2  */
#define RCC_CFGR_PPRE1_DIV4  0x00001400U /*!< HCLK divided by 4  */
#define RCC_CFGR_PPRE1_DIV8  0x00001800U /*!< HCLK divided by 8  */
#define RCC_CFGR_PPRE1_DIV16 0x00001C00U /*!< HCLK divided by 16 */

/*!< PPRE2 configuration */
#define RCC_CFGR_PPRE2_Pos   (13U)
#define RCC_CFGR_PPRE2_Msk   (0x7U << RCC_CFGR_PPRE2_Pos) /*!< 0x0000E000 */
#define RCC_CFGR_PPRE2       RCC_CFGR_PPRE2_Msk           /*!< PRE2[2:0] bits (APB2 prescaler) */
#define RCC_CFGR_PPRE2_0     (0x1U << RCC_CFGR_PPRE2_Pos) /*!< 0x00002000 */
#define RCC_CFGR_PPRE2_1     (0x2U << RCC_CFGR_PPRE2_Pos) /*!< 0x00004000 */
#define RCC_CFGR_PPRE2_2     (0x4U << RCC_CFGR_PPRE2_Pos) /*!< 0x00008000 */

#define RCC_CFGR_PPRE2_DIV1  0x00000000U /*!< HCLK not divided   */
#define RCC_CFGR_PPRE2_DIV2  0x00008000U /*!< HCLK divided by 2  */
#define RCC_CFGR_PPRE2_DIV4  0x0000A000U /*!< HCLK divided by 4  */
#define RCC_CFGR_PPRE2_DIV8  0x0000C000U /*!< HCLK divided by 8  */
#define RCC_CFGR_PPRE2_DIV16 0x0000E000U /*!< HCLK divided by 16 */

/*!< RTCPRE configuration */
#define RCC_CFGR_RTCPRE_Pos (16U)
#define RCC_CFGR_RTCPRE_Msk (0x1FU << RCC_CFGR_RTCPRE_Pos) /*!< 0x001F0000 */
#define RCC_CFGR_RTCPRE     RCC_CFGR_RTCPRE_Msk
#define RCC_CFGR_RTCPRE_0   (0x01U << RCC_CFGR_RTCPRE_Pos) /*!< 0x00010000 */
#define RCC_CFGR_RTCPRE_1   (0x02U << RCC_CFGR_RTCPRE_Pos) /*!< 0x00020000 */
#define RCC_CFGR_RTCPRE_2   (0x04U << RCC_CFGR_RTCPRE_Pos) /*!< 0x00040000 */
#define RCC_CFGR_RTCPRE_3   (0x08U << RCC_CFGR_RTCPRE_Pos) /*!< 0x00080000 */
#define RCC_CFGR_RTCPRE_4   (0x10U << RCC_CFGR_RTCPRE_Pos) /*!< 0x00100000 */

/*!< MCO1 configuration */
#define RCC_CFGR_MCO1_Pos    (21U)
#define RCC_CFGR_MCO1_Msk    (0x3U << RCC_CFGR_MCO1_Pos) /*!< 0x00600000 */
#define RCC_CFGR_MCO1        RCC_CFGR_MCO1_Msk
#define RCC_CFGR_MCO1_0      (0x1U << RCC_CFGR_MCO1_Pos) /*!< 0x00200000 */
#define RCC_CFGR_MCO1_1      (0x2U << RCC_CFGR_MCO1_Pos) /*!< 0x00400000 */

#define RCC_CFGR_I2SSRC_Pos  (23U)
#define RCC_CFGR_I2SSRC_Msk  (0x1U << RCC_CFGR_I2SSRC_Pos) /*!< 0x00800000 */
#define RCC_CFGR_I2SSRC      RCC_CFGR_I2SSRC_Msk

#define RCC_CFGR_MCO1PRE_Pos (24U)
#define RCC_CFGR_MCO1PRE_Msk (0x7U << RCC_CFGR_MCO1PRE_Pos) /*!< 0x07000000 */
#define RCC_CFGR_MCO1PRE     RCC_CFGR_MCO1PRE_Msk
#define RCC_CFGR_MCO1PRE_0   (0x1U << RCC_CFGR_MCO1PRE_Pos) /*!< 0x01000000 */
#define RCC_CFGR_MCO1PRE_1   (0x2U << RCC_CFGR_MCO1PRE_Pos) /*!< 0x02000000 */
#define RCC_CFGR_MCO1PRE_2   (0x4U << RCC_CFGR_MCO1PRE_Pos) /*!< 0x04000000 */

#define RCC_CFGR_MCO2PRE_Pos (27U)
#define RCC_CFGR_MCO2PRE_Msk (0x7U << RCC_CFGR_MCO2PRE_Pos) /*!< 0x38000000 */
#define RCC_CFGR_MCO2PRE     RCC_CFGR_MCO2PRE_Msk
#define RCC_CFGR_MCO2PRE_0   (0x1U << RCC_CFGR_MCO2PRE_Pos) /*!< 0x08000000 */
#define RCC_CFGR_MCO2PRE_1   (0x2U << RCC_CFGR_MCO2PRE_Pos) /*!< 0x10000000 */
#define RCC_CFGR_MCO2PRE_2   (0x4U << RCC_CFGR_MCO2PRE_Pos) /*!< 0x20000000 */

#define RCC_CFGR_MCO2_Pos    (30U)
#define RCC_CFGR_MCO2_Msk    (0x3U << RCC_CFGR_MCO2_Pos) /*!< 0xC0000000 */
#define RCC_CFGR_MCO2        RCC_CFGR_MCO2_Msk
#define RCC_CFGR_MCO2_0      (0x1U << RCC_CFGR_MCO2_Pos) /*!< 0x40000000 */
#define RCC_CFGR_MCO2_1      (0x2U << RCC_CFGR_MCO2_Pos) /*!< 0x80000000 */

/********************  Bit definition for RCC_CIR register  *******************/
#define RCC_CIR_LSIRDYF_Pos     (0U)
#define RCC_CIR_LSIRDYF_Msk     (0x1U << RCC_CIR_LSIRDYF_Pos) /*!< 0x00000001 */
#define RCC_CIR_LSIRDYF         RCC_CIR_LSIRDYF_Msk
#define RCC_CIR_LSERDYF_Pos     (1U)
#define RCC_CIR_LSERDYF_Msk     (0x1U << RCC_CIR_LSERDYF_Pos) /*!< 0x00000002 */
#define RCC_CIR_LSERDYF         RCC_CIR_LSERDYF_Msk
#define RCC_CIR_HSIRDYF_Pos     (2U)
#define RCC_CIR_HSIRDYF_Msk     (0x1U << RCC_CIR_HSIRDYF_Pos) /*!< 0x00000004 */
#define RCC_CIR_HSIRDYF         RCC_CIR_HSIRDYF_Msk
#define RCC_CIR_HSERDYF_Pos     (3U)
#define RCC_CIR_HSERDYF_Msk     (0x1U << RCC_CIR_HSERDYF_Pos) /*!< 0x00000008 */
#define RCC_CIR_HSERDYF         RCC_CIR_HSERDYF_Msk
#define RCC_CIR_PLLRDYF_Pos     (4U)
#define RCC_CIR_PLLRDYF_Msk     (0x1U << RCC_CIR_PLLRDYF_Pos) /*!< 0x00000010 */
#define RCC_CIR_PLLRDYF         RCC_CIR_PLLRDYF_Msk
#define RCC_CIR_PLLI2SRDYF_Pos  (5U)
#define RCC_CIR_PLLI2SRDYF_Msk  (0x1U << RCC_CIR_PLLI2SRDYF_Pos) /*!< 0x00000020 */
#define RCC_CIR_PLLI2SRDYF      RCC_CIR_PLLI2SRDYF_Msk

#define RCC_CIR_CSSF_Pos        (7U)
#define RCC_CIR_CSSF_Msk        (0x1U << RCC_CIR_CSSF_Pos) /*!< 0x00000080 */
#define RCC_CIR_CSSF            RCC_CIR_CSSF_Msk
#define RCC_CIR_LSIRDYIE_Pos    (8U)
#define RCC_CIR_LSIRDYIE_Msk    (0x1U << RCC_CIR_LSIRDYIE_Pos) /*!< 0x00000100 */
#define RCC_CIR_LSIRDYIE        RCC_CIR_LSIRDYIE_Msk
#define RCC_CIR_LSERDYIE_Pos    (9U)
#define RCC_CIR_LSERDYIE_Msk    (0x1U << RCC_CIR_LSERDYIE_Pos) /*!< 0x00000200 */
#define RCC_CIR_LSERDYIE        RCC_CIR_LSERDYIE_Msk
#define RCC_CIR_HSIRDYIE_Pos    (10U)
#define RCC_CIR_HSIRDYIE_Msk    (0x1U << RCC_CIR_HSIRDYIE_Pos) /*!< 0x00000400 */
#define RCC_CIR_HSIRDYIE        RCC_CIR_HSIRDYIE_Msk
#define RCC_CIR_HSERDYIE_Pos    (11U)
#define RCC_CIR_HSERDYIE_Msk    (0x1U << RCC_CIR_HSERDYIE_Pos) /*!< 0x00000800 */
#define RCC_CIR_HSERDYIE        RCC_CIR_HSERDYIE_Msk
#define RCC_CIR_PLLRDYIE_Pos    (12U)
#define RCC_CIR_PLLRDYIE_Msk    (0x1U << RCC_CIR_PLLRDYIE_Pos) /*!< 0x00001000 */
#define RCC_CIR_PLLRDYIE        RCC_CIR_PLLRDYIE_Msk
#define RCC_CIR_PLLI2SRDYIE_Pos (13U)
#define RCC_CIR_PLLI2SRDYIE_Msk (0x1U << RCC_CIR_PLLI2SRDYIE_Pos) /*!< 0x00002000 */
#define RCC_CIR_PLLI2SRDYIE     RCC_CIR_PLLI2SRDYIE_Msk

#define RCC_CIR_LSIRDYC_Pos     (16U)
#define RCC_CIR_LSIRDYC_Msk     (0x1U << RCC_CIR_LSIRDYC_Pos) /*!< 0x00010000 */
#define RCC_CIR_LSIRDYC         RCC_CIR_LSIRDYC_Msk
#define RCC_CIR_LSERDYC_Pos     (17U)
#define RCC_CIR_LSERDYC_Msk     (0x1U << RCC_CIR_LSERDYC_Pos) /*!< 0x00020000 */
#define RCC_CIR_LSERDYC         RCC_CIR_LSERDYC_Msk
#define RCC_CIR_HSIRDYC_Pos     (18U)
#define RCC_CIR_HSIRDYC_Msk     (0x1U << RCC_CIR_HSIRDYC_Pos) /*!< 0x00040000 */
#define RCC_CIR_HSIRDYC         RCC_CIR_HSIRDYC_Msk
#define RCC_CIR_HSERDYC_Pos     (19U)
#define RCC_CIR_HSERDYC_Msk     (0x1U << RCC_CIR_HSERDYC_Pos) /*!< 0x00080000 */
#define RCC_CIR_HSERDYC         RCC_CIR_HSERDYC_Msk
#define RCC_CIR_PLLRDYC_Pos     (20U)
#define RCC_CIR_PLLRDYC_Msk     (0x1U << RCC_CIR_PLLRDYC_Pos) /*!< 0x00100000 */
#define RCC_CIR_PLLRDYC         RCC_CIR_PLLRDYC_Msk
#define RCC_CIR_PLLI2SRDYC_Pos  (21U)
#define RCC_CIR_PLLI2SRDYC_Msk  (0x1U << RCC_CIR_PLLI2SRDYC_Pos) /*!< 0x00200000 */
#define RCC_CIR_PLLI2SRDYC      RCC_CIR_PLLI2SRDYC_Msk

#define RCC_CIR_CSSC_Pos        (23U)
#define RCC_CIR_CSSC_Msk        (0x1U << RCC_CIR_CSSC_Pos) /*!< 0x00800000 */
#define RCC_CIR_CSSC            RCC_CIR_CSSC_Msk

/********************  Bit definition for RCC_AHB1RSTR register  **************/
#define RCC_AHB1RSTR_GPIOARST_Pos (0U)
#define RCC_AHB1RSTR_GPIOARST_Msk (0x1U << RCC_AHB1RSTR_GPIOARST_Pos) /*!< 0x00000001 */
#define RCC_AHB1RSTR_GPIOARST     RCC_AHB1RSTR_GPIOARST_Msk
#define RCC_AHB1RSTR_GPIOBRST_Pos (1U)
#define RCC_AHB1RSTR_GPIOBRST_Msk (0x1U << RCC_AHB1RSTR_GPIOBRST_Pos) /*!< 0x00000002 */
#define RCC_AHB1RSTR_GPIOBRST     RCC_AHB1RSTR_GPIOBRST_Msk
#define RCC_AHB1RSTR_GPIOCRST_Pos (2U)
#define RCC_AHB1RSTR_GPIOCRST_Msk (0x1U << RCC_AHB1RSTR_GPIOCRST_Pos) /*!< 0x00000004 */
#define RCC_AHB1RSTR_GPIOCRST     RCC_AHB1RSTR_GPIOCRST_Msk
#define RCC_AHB1RSTR_GPIODRST_Pos (3U)
#define RCC_AHB1RSTR_GPIODRST_Msk (0x1U << RCC_AHB1RSTR_GPIODRST_Pos) /*!< 0x00000008 */
#define RCC_AHB1RSTR_GPIODRST     RCC_AHB1RSTR_GPIODRST_Msk
#define RCC_AHB1RSTR_GPIOERST_Pos (4U)
#define RCC_AHB1RSTR_GPIOERST_Msk (0x1U << RCC_AHB1RSTR_GPIOERST_Pos) /*!< 0x00000010 */
#define RCC_AHB1RSTR_GPIOERST     RCC_AHB1RSTR_GPIOERST_Msk
#define RCC_AHB1RSTR_GPIOFRST_Pos (5U)
#define RCC_AHB1RSTR_GPIOFRST_Msk (0x1U << RCC_AHB1RSTR_GPIOFRST_Pos) /*!< 0x00000020 */
#define RCC_AHB1RSTR_GPIOFRST     RCC_AHB1RSTR_GPIOFRST_Msk
#define RCC_AHB1RSTR_GPIOGRST_Pos (6U)
#define RCC_AHB1RSTR_GPIOGRST_Msk (0x1U << RCC_AHB1RSTR_GPIOGRST_Pos) /*!< 0x00000040 */
#define RCC_AHB1RSTR_GPIOGRST     RCC_AHB1RSTR_GPIOGRST_Msk
#define RCC_AHB1RSTR_GPIOHRST_Pos (7U)
#define RCC_AHB1RSTR_GPIOHRST_Msk (0x1U << RCC_AHB1RSTR_GPIOHRST_Pos) /*!< 0x00000080 */
#define RCC_AHB1RSTR_GPIOHRST     RCC_AHB1RSTR_GPIOHRST_Msk
#define RCC_AHB1RSTR_GPIOIRST_Pos (8U)
#define RCC_AHB1RSTR_GPIOIRST_Msk (0x1U << RCC_AHB1RSTR_GPIOIRST_Pos) /*!< 0x00000100 */
#define RCC_AHB1RSTR_GPIOIRST     RCC_AHB1RSTR_GPIOIRST_Msk
#define RCC_AHB1RSTR_CRCRST_Pos   (12U)
#define RCC_AHB1RSTR_CRCRST_Msk   (0x1U << RCC_AHB1RSTR_CRCRST_Pos) /*!< 0x00001000 */
#define RCC_AHB1RSTR_CRCRST       RCC_AHB1RSTR_CRCRST_Msk
#define RCC_AHB1RSTR_DMA1RST_Pos  (21U)
#define RCC_AHB1RSTR_DMA1RST_Msk  (0x1U << RCC_AHB1RSTR_DMA1RST_Pos) /*!< 0x00200000 */
#define RCC_AHB1RSTR_DMA1RST      RCC_AHB1RSTR_DMA1RST_Msk
#define RCC_AHB1RSTR_DMA2RST_Pos  (22U)
#define RCC_AHB1RSTR_DMA2RST_Msk  (0x1U << RCC_AHB1RSTR_DMA2RST_Pos) /*!< 0x00400000 */
#define RCC_AHB1RSTR_DMA2RST      RCC_AHB1RSTR_DMA2RST_Msk
#define RCC_AHB1RSTR_OTGHRST_Pos  (29U)
#define RCC_AHB1RSTR_OTGHRST_Msk  (0x1U << RCC_AHB1RSTR_OTGHRST_Pos) /*!< 0x20000000 */
#define RCC_AHB1RSTR_OTGHRST      RCC_AHB1RSTR_OTGHRST_Msk

/********************  Bit definition for RCC_AHB2RSTR register  **************/
#define RCC_AHB2RSTR_CRYPRST_Pos  (4U)
#define RCC_AHB2RSTR_CRYPRST_Msk  (0x1U << RCC_AHB2RSTR_CRYPRST_Pos) /*!< 0x00000010 */
#define RCC_AHB2RSTR_CRYPRST      RCC_AHB2RSTR_CRYPRST_Msk
#define RCC_AHB2RSTR_HASHRST_Pos  (5U)
#define RCC_AHB2RSTR_HASHRST_Msk  (0x1U << RCC_AHB2RSTR_HASHRST_Pos) /*!< 0x00000020 */
#define RCC_AHB2RSTR_HASHRST      RCC_AHB2RSTR_HASHRST_Msk
/* maintained for legacy purpose */
#define  RCC_AHB2RSTR_HSAHRST     RCC_AHB2RSTR_HASHRST
#define RCC_AHB2RSTR_RNGRST_Pos   (6U)
#define RCC_AHB2RSTR_RNGRST_Msk   (0x1U << RCC_AHB2RSTR_RNGRST_Pos) /*!< 0x00000040 */
#define RCC_AHB2RSTR_RNGRST       RCC_AHB2RSTR_RNGRST_Msk
#define RCC_AHB2RSTR_OTGFSRST_Pos (7U)
#define RCC_AHB2RSTR_OTGFSRST_Msk (0x1U << RCC_AHB2RSTR_OTGFSRST_Pos) /*!< 0x00000080 */
#define RCC_AHB2RSTR_OTGFSRST     RCC_AHB2RSTR_OTGFSRST_Msk
/********************  Bit definition for RCC_AHB3RSTR register  **************/
#define RCC_AHB3RSTR_FSMCRST_Pos  (0U)
#define RCC_AHB3RSTR_FSMCRST_Msk  (0x1U << RCC_AHB3RSTR_FSMCRST_Pos) /*!< 0x00000001 */
#define RCC_AHB3RSTR_FSMCRST      RCC_AHB3RSTR_FSMCRST_Msk


/********************  Bit definition for RCC_APB1RSTR register  **************/
#define RCC_APB1RSTR_TIM2RST_Pos   (0U)
#define RCC_APB1RSTR_TIM2RST_Msk   (0x1U << RCC_APB1RSTR_TIM2RST_Pos) /*!< 0x00000001 */
#define RCC_APB1RSTR_TIM2RST       RCC_APB1RSTR_TIM2RST_Msk
#define RCC_APB1RSTR_TIM3RST_Pos   (1U)
#define RCC_APB1RSTR_TIM3RST_Msk   (0x1U << RCC_APB1RSTR_TIM3RST_Pos) /*!< 0x00000002 */
#define RCC_APB1RSTR_TIM3RST       RCC_APB1RSTR_TIM3RST_Msk
#define RCC_APB1RSTR_TIM4RST_Pos   (2U)
#define RCC_APB1RSTR_TIM4RST_Msk   (0x1U << RCC_APB1RSTR_TIM4RST_Pos) /*!< 0x00000004 */
#define RCC_APB1RSTR_TIM4RST       RCC_APB1RSTR_TIM4RST_Msk
#define RCC_APB1RSTR_TIM5RST_Pos   (3U)
#define RCC_APB1RSTR_TIM5RST_Msk   (0x1U << RCC_APB1RSTR_TIM5RST_Pos) /*!< 0x00000008 */
#define RCC_APB1RSTR_TIM5RST       RCC_APB1RSTR_TIM5RST_Msk
#define RCC_APB1RSTR_TIM6RST_Pos   (4U)
#define RCC_APB1RSTR_TIM6RST_Msk   (0x1U << RCC_APB1RSTR_TIM6RST_Pos) /*!< 0x00000010 */
#define RCC_APB1RSTR_TIM6RST       RCC_APB1RSTR_TIM6RST_Msk
#define RCC_APB1RSTR_TIM7RST_Pos   (5U)
#define RCC_APB1RSTR_TIM7RST_Msk   (0x1U << RCC_APB1RSTR_TIM7RST_Pos) /*!< 0x00000020 */
#define RCC_APB1RSTR_TIM7RST       RCC_APB1RSTR_TIM7RST_Msk
#define RCC_APB1RSTR_TIM12RST_Pos  (6U)
#define RCC_APB1RSTR_TIM12RST_Msk  (0x1U << RCC_APB1RSTR_TIM12RST_Pos) /*!< 0x00000040 */
#define RCC_APB1RSTR_TIM12RST      RCC_APB1RSTR_TIM12RST_Msk
#define RCC_APB1RSTR_TIM13RST_Pos  (7U)
#define RCC_APB1RSTR_TIM13RST_Msk  (0x1U << RCC_APB1RSTR_TIM13RST_Pos) /*!< 0x00000080 */
#define RCC_APB1RSTR_TIM13RST      RCC_APB1RSTR_TIM13RST_Msk
#define RCC_APB1RSTR_TIM14RST_Pos  (8U)
#define RCC_APB1RSTR_TIM14RST_Msk  (0x1U << RCC_APB1RSTR_TIM14RST_Pos) /*!< 0x00000100 */
#define RCC_APB1RSTR_TIM14RST      RCC_APB1RSTR_TIM14RST_Msk
#define RCC_APB1RSTR_WWDGRST_Pos   (11U)
#define RCC_APB1RSTR_WWDGRST_Msk   (0x1U << RCC_APB1RSTR_WWDGRST_Pos) /*!< 0x00000800 */
#define RCC_APB1RSTR_WWDGRST       RCC_APB1RSTR_WWDGRST_Msk
#define RCC_APB1RSTR_SPI2RST_Pos   (14U)
#define RCC_APB1RSTR_SPI2RST_Msk   (0x1U << RCC_APB1RSTR_SPI2RST_Pos) /*!< 0x00004000 */
#define RCC_APB1RSTR_SPI2RST       RCC_APB1RSTR_SPI2RST_Msk
#define RCC_APB1RSTR_SPI3RST_Pos   (15U)
#define RCC_APB1RSTR_SPI3RST_Msk   (0x1U << RCC_APB1RSTR_SPI3RST_Pos) /*!< 0x00008000 */
#define RCC_APB1RSTR_SPI3RST       RCC_APB1RSTR_SPI3RST_Msk
#define RCC_APB1RSTR_USART2RST_Pos (17U)
#define RCC_APB1RSTR_USART2RST_Msk (0x1U << RCC_APB1RSTR_USART2RST_Pos) /*!< 0x00020000 */
#define RCC_APB1RSTR_USART2RST     RCC_APB1RSTR_USART2RST_Msk
#define RCC_APB1RSTR_USART3RST_Pos (18U)
#define RCC_APB1RSTR_USART3RST_Msk (0x1U << RCC_APB1RSTR_USART3RST_Pos) /*!< 0x00040000 */
#define RCC_APB1RSTR_USART3RST     RCC_APB1RSTR_USART3RST_Msk
#define RCC_APB1RSTR_UART4RST_Pos  (19U)
#define RCC_APB1RSTR_UART4RST_Msk  (0x1U << RCC_APB1RSTR_UART4RST_Pos) /*!< 0x00080000 */
#define RCC_APB1RSTR_UART4RST      RCC_APB1RSTR_UART4RST_Msk
#define RCC_APB1RSTR_UART5RST_Pos  (20U)
#define RCC_APB1RSTR_UART5RST_Msk  (0x1U << RCC_APB1RSTR_UART5RST_Pos) /*!< 0x00100000 */
#define RCC_APB1RSTR_UART5RST      RCC_APB1RSTR_UART5RST_Msk
#define RCC_APB1RSTR_I2C1RST_Pos   (21U)
#define RCC_APB1RSTR_I2C1RST_Msk   (0x1U << RCC_APB1RSTR_I2C1RST_Pos) /*!< 0x00200000 */
#define RCC_APB1RSTR_I2C1RST       RCC_APB1RSTR_I2C1RST_Msk
#define RCC_APB1RSTR_I2C2RST_Pos   (22U)
#define RCC_APB1RSTR_I2C2RST_Msk   (0x1U << RCC_APB1RSTR_I2C2RST_Pos) /*!< 0x00400000 */
#define RCC_APB1RSTR_I2C2RST       RCC_APB1RSTR_I2C2RST_Msk
#define RCC_APB1RSTR_I2C3RST_Pos   (23U)
#define RCC_APB1RSTR_I2C3RST_Msk   (0x1U << RCC_APB1RSTR_I2C3RST_Pos) /*!< 0x00800000 */
#define RCC_APB1RSTR_I2C3RST       RCC_APB1RSTR_I2C3RST_Msk
#define RCC_APB1RSTR_CAN1RST_Pos   (25U)
#define RCC_APB1RSTR_CAN1RST_Msk   (0x1U << RCC_APB1RSTR_CAN1RST_Pos) /*!< 0x02000000 */
#define RCC_APB1RSTR_CAN1RST       RCC_APB1RSTR_CAN1RST_Msk
#define RCC_APB1RSTR_CAN2RST_Pos   (26U)
#define RCC_APB1RSTR_CAN2RST_Msk   (0x1U << RCC_APB1RSTR_CAN2RST_Pos) /*!< 0x04000000 */
#define RCC_APB1RSTR_CAN2RST       RCC_APB1RSTR_CAN2RST_Msk
#define RCC_APB1RSTR_PWRRST_Pos    (28U)
#define RCC_APB1RSTR_PWRRST_Msk    (0x1U << RCC_APB1RSTR_PWRRST_Pos) /*!< 0x10000000 */
#define RCC_APB1RSTR_PWRRST        RCC_APB1RSTR_PWRRST_Msk
#define RCC_APB1RSTR_DACRST_Pos    (29U)
#define RCC_APB1RSTR_DACRST_Msk    (0x1U << RCC_APB1RSTR_DACRST_Pos) /*!< 0x20000000 */
#define RCC_APB1RSTR_DACRST        RCC_APB1RSTR_DACRST_Msk

/********************  Bit definition for RCC_APB2RSTR register  **************/
#define RCC_APB2RSTR_TIM1RST_Pos   (0U)
#define RCC_APB2RSTR_TIM1RST_Msk   (0x1U << RCC_APB2RSTR_TIM1RST_Pos) /*!< 0x00000001 */
#define RCC_APB2RSTR_TIM1RST       RCC_APB2RSTR_TIM1RST_Msk
#define RCC_APB2RSTR_TIM8RST_Pos   (1U)
#define RCC_APB2RSTR_TIM8RST_Msk   (0x1U << RCC_APB2RSTR_TIM8RST_Pos) /*!< 0x00000002 */
#define RCC_APB2RSTR_TIM8RST       RCC_APB2RSTR_TIM8RST_Msk
#define RCC_APB2RSTR_USART1RST_Pos (4U)
#define RCC_APB2RSTR_USART1RST_Msk (0x1U << RCC_APB2RSTR_USART1RST_Pos) /*!< 0x00000010 */
#define RCC_APB2RSTR_USART1RST     RCC_APB2RSTR_USART1RST_Msk
#define RCC_APB2RSTR_USART6RST_Pos (5U)
#define RCC_APB2RSTR_USART6RST_Msk (0x1U << RCC_APB2RSTR_USART6RST_Pos) /*!< 0x00000020 */
#define RCC_APB2RSTR_USART6RST     RCC_APB2RSTR_USART6RST_Msk
#define RCC_APB2RSTR_ADCRST_Pos    (8U)
#define RCC_APB2RSTR_ADCRST_Msk    (0x1U << RCC_APB2RSTR_ADCRST_Pos) /*!< 0x00000100 */
#define RCC_APB2RSTR_ADCRST        RCC_APB2RSTR_ADCRST_Msk
#define RCC_APB2RSTR_SDIORST_Pos   (11U)
#define RCC_APB2RSTR_SDIORST_Msk   (0x1U << RCC_APB2RSTR_SDIORST_Pos) /*!< 0x00000800 */
#define RCC_APB2RSTR_SDIORST       RCC_APB2RSTR_SDIORST_Msk
#define RCC_APB2RSTR_SPI1RST_Pos   (12U)
#define RCC_APB2RSTR_SPI1RST_Msk   (0x1U << RCC_APB2RSTR_SPI1RST_Pos) /*!< 0x00001000 */
#define RCC_APB2RSTR_SPI1RST       RCC_APB2RSTR_SPI1RST_Msk
#define RCC_APB2RSTR_SYSCFGRST_Pos (14U)
#define RCC_APB2RSTR_SYSCFGRST_Msk (0x1U << RCC_APB2RSTR_SYSCFGRST_Pos) /*!< 0x00004000 */
#define RCC_APB2RSTR_SYSCFGRST     RCC_APB2RSTR_SYSCFGRST_Msk
#define RCC_APB2RSTR_TIM9RST_Pos   (16U)
#define RCC_APB2RSTR_TIM9RST_Msk   (0x1U << RCC_APB2RSTR_TIM9RST_Pos) /*!< 0x00010000 */
#define RCC_APB2RSTR_TIM9RST       RCC_APB2RSTR_TIM9RST_Msk
#define RCC_APB2RSTR_TIM10RST_Pos  (17U)
#define RCC_APB2RSTR_TIM10RST_Msk  (0x1U << RCC_APB2RSTR_TIM10RST_Pos) /*!< 0x00020000 */
#define RCC_APB2RSTR_TIM10RST      RCC_APB2RSTR_TIM10RST_Msk
#define RCC_APB2RSTR_TIM11RST_Pos  (18U)
#define RCC_APB2RSTR_TIM11RST_Msk  (0x1U << RCC_APB2RSTR_TIM11RST_Pos) /*!< 0x00040000 */
#define RCC_APB2RSTR_TIM11RST      RCC_APB2RSTR_TIM11RST_Msk

/* Old SPI1RST bit definition, maintained for legacy purpose */
#define  RCC_APB2RSTR_SPI1 RCC_APB2RSTR_SPI1RST

/********************  Bit definition for RCC_AHB1ENR register  ***************/
#define RCC_AHB1ENR_GPIOAEN_Pos      (0U)
#define RCC_AHB1ENR_GPIOAEN_Msk      (0x1U << RCC_AHB1ENR_GPIOAEN_Pos) /*!< 0x00000001 */
#define RCC_AHB1ENR_GPIOAEN          RCC_AHB1ENR_GPIOAEN_Msk
#define RCC_AHB1ENR_GPIOBEN_Pos      (1U)
#define RCC_AHB1ENR_GPIOBEN_Msk      (0x1U << RCC_AHB1ENR_GPIOBEN_Pos) /*!< 0x00000002 */
#define RCC_AHB1ENR_GPIOBEN          RCC_AHB1ENR_GPIOBEN_Msk
#define RCC_AHB1ENR_GPIOCEN_Pos      (2U)
#define RCC_AHB1ENR_GPIOCEN_Msk      (0x1U << RCC_AHB1ENR_GPIOCEN_Pos) /*!< 0x00000004 */
#define RCC_AHB1ENR_GPIOCEN          RCC_AHB1ENR_GPIOCEN_Msk
#define RCC_AHB1ENR_GPIODEN_Pos      (3U)
#define RCC_AHB1ENR_GPIODEN_Msk      (0x1U << RCC_AHB1ENR_GPIODEN_Pos) /*!< 0x00000008 */
#define RCC_AHB1ENR_GPIODEN          RCC_AHB1ENR_GPIODEN_Msk
#define RCC_AHB1ENR_GPIOEEN_Pos      (4U)
#define RCC_AHB1ENR_GPIOEEN_Msk      (0x1U << RCC_AHB1ENR_GPIOEEN_Pos) /*!< 0x00000010 */
#define RCC_AHB1ENR_GPIOEEN          RCC_AHB1ENR_GPIOEEN_Msk
#define RCC_AHB1ENR_GPIOFEN_Pos      (5U)
#define RCC_AHB1ENR_GPIOFEN_Msk      (0x1U << RCC_AHB1ENR_GPIOFEN_Pos) /*!< 0x00000020 */
#define RCC_AHB1ENR_GPIOFEN          RCC_AHB1ENR_GPIOFEN_Msk
#define RCC_AHB1ENR_GPIOGEN_Pos      (6U)
#define RCC_AHB1ENR_GPIOGEN_Msk      (0x1U << RCC_AHB1ENR_GPIOGEN_Pos) /*!< 0x00000040 */
#define RCC_AHB1ENR_GPIOGEN          RCC_AHB1ENR_GPIOGEN_Msk
#define RCC_AHB1ENR_GPIOHEN_Pos      (7U)
#define RCC_AHB1ENR_GPIOHEN_Msk      (0x1U << RCC_AHB1ENR_GPIOHEN_Pos) /*!< 0x00000080 */
#define RCC_AHB1ENR_GPIOHEN          RCC_AHB1ENR_GPIOHEN_Msk
#define RCC_AHB1ENR_GPIOIEN_Pos      (8U)
#define RCC_AHB1ENR_GPIOIEN_Msk      (0x1U << RCC_AHB1ENR_GPIOIEN_Pos) /*!< 0x00000100 */
#define RCC_AHB1ENR_GPIOIEN          RCC_AHB1ENR_GPIOIEN_Msk
#define RCC_AHB1ENR_CRCEN_Pos        (12U)
#define RCC_AHB1ENR_CRCEN_Msk        (0x1U << RCC_AHB1ENR_CRCEN_Pos) /*!< 0x00001000 */
#define RCC_AHB1ENR_CRCEN            RCC_AHB1ENR_CRCEN_Msk
#define RCC_AHB1ENR_BKPSRAMEN_Pos    (18U)
#define RCC_AHB1ENR_BKPSRAMEN_Msk    (0x1U << RCC_AHB1ENR_BKPSRAMEN_Pos) /*!< 0x00040000 */
#define RCC_AHB1ENR_BKPSRAMEN        RCC_AHB1ENR_BKPSRAMEN_Msk
#define RCC_AHB1ENR_CCMDATARAMEN_Pos (20U)
#define RCC_AHB1ENR_CCMDATARAMEN_Msk (0x1U << RCC_AHB1ENR_CCMDATARAMEN_Pos) /*!< 0x00100000 */
#define RCC_AHB1ENR_CCMDATARAMEN     RCC_AHB1ENR_CCMDATARAMEN_Msk
#define RCC_AHB1ENR_DMA1EN_Pos       (21U)
#define RCC_AHB1ENR_DMA1EN_Msk       (0x1U << RCC_AHB1ENR_DMA1EN_Pos) /*!< 0x00200000 */
#define RCC_AHB1ENR_DMA1EN           RCC_AHB1ENR_DMA1EN_Msk
#define RCC_AHB1ENR_DMA2EN_Pos       (22U)
#define RCC_AHB1ENR_DMA2EN_Msk       (0x1U << RCC_AHB1ENR_DMA2EN_Pos) /*!< 0x00400000 */
#define RCC_AHB1ENR_DMA2EN           RCC_AHB1ENR_DMA2EN_Msk
#define RCC_AHB1ENR_OTGHSEN_Pos      (29U)
#define RCC_AHB1ENR_OTGHSEN_Msk      (0x1U << RCC_AHB1ENR_OTGHSEN_Pos) /*!< 0x20000000 */
#define RCC_AHB1ENR_OTGHSEN          RCC_AHB1ENR_OTGHSEN_Msk
#define RCC_AHB1ENR_OTGHSULPIEN_Pos  (30U)
#define RCC_AHB1ENR_OTGHSULPIEN_Msk  (0x1U << RCC_AHB1ENR_OTGHSULPIEN_Pos) /*!< 0x40000000 */
#define RCC_AHB1ENR_OTGHSULPIEN      RCC_AHB1ENR_OTGHSULPIEN_Msk
/********************  Bit definition for RCC_AHB2ENR register  ***************/

/*
 * @brief Specific device feature definitions (not present on all devices in the STM32F4 serie)
 */
#define RCC_AHB2_SUPPORT /*!< AHB2 Bus is supported */

#define RCC_AHB2ENR_CRYPEN_Pos  (4U)
#define RCC_AHB2ENR_CRYPEN_Msk  (0x1U << RCC_AHB2ENR_CRYPEN_Pos) /*!< 0x00000010 */
#define RCC_AHB2ENR_CRYPEN      RCC_AHB2ENR_CRYPEN_Msk
#define RCC_AHB2ENR_HASHEN_Pos  (5U)
#define RCC_AHB2ENR_HASHEN_Msk  (0x1U << RCC_AHB2ENR_HASHEN_Pos) /*!< 0x00000020 */
#define RCC_AHB2ENR_HASHEN      RCC_AHB2ENR_HASHEN_Msk
#define RCC_AHB2ENR_RNGEN_Pos   (6U)
#define RCC_AHB2ENR_RNGEN_Msk   (0x1U << RCC_AHB2ENR_RNGEN_Pos) /*!< 0x00000040 */
#define RCC_AHB2ENR_RNGEN       RCC_AHB2ENR_RNGEN_Msk
#define RCC_AHB2ENR_OTGFSEN_Pos (7U)
#define RCC_AHB2ENR_OTGFSEN_Msk (0x1U << RCC_AHB2ENR_OTGFSEN_Pos) /*!< 0x00000080 */
#define RCC_AHB2ENR_OTGFSEN     RCC_AHB2ENR_OTGFSEN_Msk

/********************  Bit definition for RCC_AHB3ENR register  ***************/

/*
 * @brief Specific device feature definitions (not present on all devices in the STM32F4 serie)
 */
#define RCC_AHB3_SUPPORT /*!< AHB3 Bus is supported */

#define RCC_AHB3ENR_FSMCEN_Pos (0U)
#define RCC_AHB3ENR_FSMCEN_Msk (0x1U << RCC_AHB3ENR_FSMCEN_Pos) /*!< 0x00000001 */
#define RCC_AHB3ENR_FSMCEN     RCC_AHB3ENR_FSMCEN_Msk

/********************  Bit definition for RCC_APB1ENR register  ***************/
#define RCC_APB1ENR_TIM2EN_Pos   (0U)
#define RCC_APB1ENR_TIM2EN_Msk   (0x1U << RCC_APB1ENR_TIM2EN_Pos) /*!< 0x00000001 */
#define RCC_APB1ENR_TIM2EN       RCC_APB1ENR_TIM2EN_Msk
#define RCC_APB1ENR_TIM3EN_Pos   (1U)
#define RCC_APB1ENR_TIM3EN_Msk   (0x1U << RCC_APB1ENR_TIM3EN_Pos) /*!< 0x00000002 */
#define RCC_APB1ENR_TIM3EN       RCC_APB1ENR_TIM3EN_Msk
#define RCC_APB1ENR_TIM4EN_Pos   (2U)
#define RCC_APB1ENR_TIM4EN_Msk   (0x1U << RCC_APB1ENR_TIM4EN_Pos) /*!< 0x00000004 */
#define RCC_APB1ENR_TIM4EN       RCC_APB1ENR_TIM4EN_Msk
#define RCC_APB1ENR_TIM5EN_Pos   (3U)
#define RCC_APB1ENR_TIM5EN_Msk   (0x1U << RCC_APB1ENR_TIM5EN_Pos) /*!< 0x00000008 */
#define RCC_APB1ENR_TIM5EN       RCC_APB1ENR_TIM5EN_Msk
#define RCC_APB1ENR_TIM6EN_Pos   (4U)
#define RCC_APB1ENR_TIM6EN_Msk   (0x1U << RCC_APB1ENR_TIM6EN_Pos) /*!< 0x00000010 */
#define RCC_APB1ENR_TIM6EN       RCC_APB1ENR_TIM6EN_Msk
#define RCC_APB1ENR_TIM7EN_Pos   (5U)
#define RCC_APB1ENR_TIM7EN_Msk   (0x1U << RCC_APB1ENR_TIM7EN_Pos) /*!< 0x00000020 */
#define RCC_APB1ENR_TIM7EN       RCC_APB1ENR_TIM7EN_Msk
#define RCC_APB1ENR_TIM12EN_Pos  (6U)
#define RCC_APB1ENR_TIM12EN_Msk  (0x1U << RCC_APB1ENR_TIM12EN_Pos) /*!< 0x00000040 */
#define RCC_APB1ENR_TIM12EN      RCC_APB1ENR_TIM12EN_Msk
#define RCC_APB1ENR_TIM13EN_Pos  (7U)
#define RCC_APB1ENR_TIM13EN_Msk  (0x1U << RCC_APB1ENR_TIM13EN_Pos) /*!< 0x00000080 */
#define RCC_APB1ENR_TIM13EN      RCC_APB1ENR_TIM13EN_Msk
#define RCC_APB1ENR_TIM14EN_Pos  (8U)
#define RCC_APB1ENR_TIM14EN_Msk  (0x1U << RCC_APB1ENR_TIM14EN_Pos) /*!< 0x00000100 */
#define RCC_APB1ENR_TIM14EN      RCC_APB1ENR_TIM14EN_Msk
#define RCC_APB1ENR_WWDGEN_Pos   (11U)
#define RCC_APB1ENR_WWDGEN_Msk   (0x1U << RCC_APB1ENR_WWDGEN_Pos) /*!< 0x00000800 */
#define RCC_APB1ENR_WWDGEN       RCC_APB1ENR_WWDGEN_Msk
#define RCC_APB1ENR_SPI2EN_Pos   (14U)
#define RCC_APB1ENR_SPI2EN_Msk   (0x1U << RCC_APB1ENR_SPI2EN_Pos) /*!< 0x00004000 */
#define RCC_APB1ENR_SPI2EN       RCC_APB1ENR_SPI2EN_Msk
#define RCC_APB1ENR_SPI3EN_Pos   (15U)
#define RCC_APB1ENR_SPI3EN_Msk   (0x1U << RCC_APB1ENR_SPI3EN_Pos) /*!< 0x00008000 */
#define RCC_APB1ENR_SPI3EN       RCC_APB1ENR_SPI3EN_Msk
#define RCC_APB1ENR_USART2EN_Pos (17U)
#define RCC_APB1ENR_USART2EN_Msk (0x1U << RCC_APB1ENR_USART2EN_Pos) /*!< 0x00020000 */
#define RCC_APB1ENR_USART2EN     RCC_APB1ENR_USART2EN_Msk
#define RCC_APB1ENR_USART3EN_Pos (18U)
#define RCC_APB1ENR_USART3EN_Msk (0x1U << RCC_APB1ENR_USART3EN_Pos) /*!< 0x00040000 */
#define RCC_APB1ENR_USART3EN     RCC_APB1ENR_USART3EN_Msk
#define RCC_APB1ENR_UART4EN_Pos  (19U)
#define RCC_APB1ENR_UART4EN_Msk  (0x1U << RCC_APB1ENR_UART4EN_Pos) /*!< 0x00080000 */
#define RCC_APB1ENR_UART4EN      RCC_APB1ENR_UART4EN_Msk
#define RCC_APB1ENR_UART5EN_Pos  (20U)
#define RCC_APB1ENR_UART5EN_Msk  (0x1U << RCC_APB1ENR_UART5EN_Pos) /*!< 0x00100000 */
#define RCC_APB1ENR_UART5EN      RCC_APB1ENR_UART5EN_Msk
#define RCC_APB1ENR_I2C1EN_Pos   (21U)
#define RCC_APB1ENR_I2C1EN_Msk   (0x1U << RCC_APB1ENR_I2C1EN_Pos) /*!< 0x00200000 */
#define RCC_APB1ENR_I2C1EN       RCC_APB1ENR_I2C1EN_Msk
#define RCC_APB1ENR_I2C2EN_Pos   (22U)
#define RCC_APB1ENR_I2C2EN_Msk   (0x1U << RCC_APB1ENR_I2C2EN_Pos) /*!< 0x00400000 */
#define RCC_APB1ENR_I2C2EN       RCC_APB1ENR_I2C2EN_Msk
#define RCC_APB1ENR_I2C3EN_Pos   (23U)
#define RCC_APB1ENR_I2C3EN_Msk   (0x1U << RCC_APB1ENR_I2C3EN_Pos) /*!< 0x00800000 */
#define RCC_APB1ENR_I2C3EN       RCC_APB1ENR_I2C3EN_Msk
#define RCC_APB1ENR_CAN1EN_Pos   (25U)
#define RCC_APB1ENR_CAN1EN_Msk   (0x1U << RCC_APB1ENR_CAN1EN_Pos) /*!< 0x02000000 */
#define RCC_APB1ENR_CAN1EN       RCC_APB1ENR_CAN1EN_Msk
#define RCC_APB1ENR_CAN2EN_Pos   (26U)
#define RCC_APB1ENR_CAN2EN_Msk   (0x1U << RCC_APB1ENR_CAN2EN_Pos) /*!< 0x04000000 */
#define RCC_APB1ENR_CAN2EN       RCC_APB1ENR_CAN2EN_Msk
#define RCC_APB1ENR_PWREN_Pos    (28U)
#define RCC_APB1ENR_PWREN_Msk    (0x1U << RCC_APB1ENR_PWREN_Pos) /*!< 0x10000000 */
#define RCC_APB1ENR_PWREN        RCC_APB1ENR_PWREN_Msk
#define RCC_APB1ENR_DACEN_Pos    (29U)
#define RCC_APB1ENR_DACEN_Msk    (0x1U << RCC_APB1ENR_DACEN_Pos) /*!< 0x20000000 */
#define RCC_APB1ENR_DACEN        RCC_APB1ENR_DACEN_Msk

/********************  Bit definition for RCC_APB2ENR register  ***************/
#define RCC_APB2ENR_TIM1EN_Pos   (0U)
#define RCC_APB2ENR_TIM1EN_Msk   (0x1U << RCC_APB2ENR_TIM1EN_Pos) /*!< 0x00000001 */
#define RCC_APB2ENR_TIM1EN       RCC_APB2ENR_TIM1EN_Msk
#define RCC_APB2ENR_TIM8EN_Pos   (1U)
#define RCC_APB2ENR_TIM8EN_Msk   (0x1U << RCC_APB2ENR_TIM8EN_Pos) /*!< 0x00000002 */
#define RCC_APB2ENR_TIM8EN       RCC_APB2ENR_TIM8EN_Msk
#define RCC_APB2ENR_USART1EN_Pos (4U)
#define RCC_APB2ENR_USART1EN_Msk (0x1U << RCC_APB2ENR_USART1EN_Pos) /*!< 0x00000010 */
#define RCC_APB2ENR_USART1EN     RCC_APB2ENR_USART1EN_Msk
#define RCC_APB2ENR_USART6EN_Pos (5U)
#define RCC_APB2ENR_USART6EN_Msk (0x1U << RCC_APB2ENR_USART6EN_Pos) /*!< 0x00000020 */
#define RCC_APB2ENR_USART6EN     RCC_APB2ENR_USART6EN_Msk
#define RCC_APB2ENR_ADC1EN_Pos   (8U)
#define RCC_APB2ENR_ADC1EN_Msk   (0x1U << RCC_APB2ENR_ADC1EN_Pos) /*!< 0x00000100 */
#define RCC_APB2ENR_ADC1EN       RCC_APB2ENR_ADC1EN_Msk
#define RCC_APB2ENR_ADC2EN_Pos   (9U)
#define RCC_APB2ENR_ADC2EN_Msk   (0x1U << RCC_APB2ENR_ADC2EN_Pos) /*!< 0x00000200 */
#define RCC_APB2ENR_ADC2EN       RCC_APB2ENR_ADC2EN_Msk
#define RCC_APB2ENR_ADC3EN_Pos   (10U)
#define RCC_APB2ENR_ADC3EN_Msk   (0x1U << RCC_APB2ENR_ADC3EN_Pos) /*!< 0x00000400 */
#define RCC_APB2ENR_ADC3EN       RCC_APB2ENR_ADC3EN_Msk
#define RCC_APB2ENR_SDIOEN_Pos   (11U)
#define RCC_APB2ENR_SDIOEN_Msk   (0x1U << RCC_APB2ENR_SDIOEN_Pos) /*!< 0x00000800 */
#define RCC_APB2ENR_SDIOEN       RCC_APB2ENR_SDIOEN_Msk
#define RCC_APB2ENR_SPI1EN_Pos   (12U)
#define RCC_APB2ENR_SPI1EN_Msk   (0x1U << RCC_APB2ENR_SPI1EN_Pos) /*!< 0x00001000 */
#define RCC_APB2ENR_SPI1EN       RCC_APB2ENR_SPI1EN_Msk
#define RCC_APB2ENR_SYSCFGEN_Pos (14U)
#define RCC_APB2ENR_SYSCFGEN_Msk (0x1U << RCC_APB2ENR_SYSCFGEN_Pos) /*!< 0x00004000 */
#define RCC_APB2ENR_SYSCFGEN     RCC_APB2ENR_SYSCFGEN_Msk
#define RCC_APB2ENR_TIM9EN_Pos   (16U)
#define RCC_APB2ENR_TIM9EN_Msk   (0x1U << RCC_APB2ENR_TIM9EN_Pos) /*!< 0x00010000 */
#define RCC_APB2ENR_TIM9EN       RCC_APB2ENR_TIM9EN_Msk
#define RCC_APB2ENR_TIM10EN_Pos  (17U)
#define RCC_APB2ENR_TIM10EN_Msk  (0x1U << RCC_APB2ENR_TIM10EN_Pos) /*!< 0x00020000 */
#define RCC_APB2ENR_TIM10EN      RCC_APB2ENR_TIM10EN_Msk
#define RCC_APB2ENR_TIM11EN_Pos  (18U)
#define RCC_APB2ENR_TIM11EN_Msk  (0x1U << RCC_APB2ENR_TIM11EN_Pos) /*!< 0x00040000 */
#define RCC_APB2ENR_TIM11EN      RCC_APB2ENR_TIM11EN_Msk

/********************  Bit definition for RCC_AHB1LPENR register  *************/
#define RCC_AHB1LPENR_GPIOALPEN_Pos     (0U)
#define RCC_AHB1LPENR_GPIOALPEN_Msk     (0x1U << RCC_AHB1LPENR_GPIOALPEN_Pos) /*!< 0x00000001 */
#define RCC_AHB1LPENR_GPIOALPEN         RCC_AHB1LPENR_GPIOALPEN_Msk
#define RCC_AHB1LPENR_GPIOBLPEN_Pos     (1U)
#define RCC_AHB1LPENR_GPIOBLPEN_Msk     (0x1U << RCC_AHB1LPENR_GPIOBLPEN_Pos) /*!< 0x00000002 */
#define RCC_AHB1LPENR_GPIOBLPEN         RCC_AHB1LPENR_GPIOBLPEN_Msk
#define RCC_AHB1LPENR_GPIOCLPEN_Pos     (2U)
#define RCC_AHB1LPENR_GPIOCLPEN_Msk     (0x1U << RCC_AHB1LPENR_GPIOCLPEN_Pos) /*!< 0x00000004 */
#define RCC_AHB1LPENR_GPIOCLPEN         RCC_AHB1LPENR_GPIOCLPEN_Msk
#define RCC_AHB1LPENR_GPIODLPEN_Pos     (3U)
#define RCC_AHB1LPENR_GPIODLPEN_Msk     (0x1U << RCC_AHB1LPENR_GPIODLPEN_Pos) /*!< 0x00000008 */
#define RCC_AHB1LPENR_GPIODLPEN         RCC_AHB1LPENR_GPIODLPEN_Msk
#define RCC_AHB1LPENR_GPIOELPEN_Pos     (4U)
#define RCC_AHB1LPENR_GPIOELPEN_Msk     (0x1U << RCC_AHB1LPENR_GPIOELPEN_Pos) /*!< 0x00000010 */
#define RCC_AHB1LPENR_GPIOELPEN         RCC_AHB1LPENR_GPIOELPEN_Msk
#define RCC_AHB1LPENR_GPIOFLPEN_Pos     (5U)
#define RCC_AHB1LPENR_GPIOFLPEN_Msk     (0x1U << RCC_AHB1LPENR_GPIOFLPEN_Pos) /*!< 0x00000020 */
#define RCC_AHB1LPENR_GPIOFLPEN         RCC_AHB1LPENR_GPIOFLPEN_Msk
#define RCC_AHB1LPENR_GPIOGLPEN_Pos     (6U)
#define RCC_AHB1LPENR_GPIOGLPEN_Msk     (0x1U << RCC_AHB1LPENR_GPIOGLPEN_Pos) /*!< 0x00000040 */
#define RCC_AHB1LPENR_GPIOGLPEN         RCC_AHB1LPENR_GPIOGLPEN_Msk
#define RCC_AHB1LPENR_GPIOHLPEN_Pos     (7U)
#define RCC_AHB1LPENR_GPIOHLPEN_Msk     (0x1U << RCC_AHB1LPENR_GPIOHLPEN_Pos) /*!< 0x00000080 */
#define RCC_AHB1LPENR_GPIOHLPEN         RCC_AHB1LPENR_GPIOHLPEN_Msk
#define RCC_AHB1LPENR_GPIOILPEN_Pos     (8U)
#define RCC_AHB1LPENR_GPIOILPEN_Msk     (0x1U << RCC_AHB1LPENR_GPIOILPEN_Pos) /*!< 0x00000100 */
#define RCC_AHB1LPENR_GPIOILPEN         RCC_AHB1LPENR_GPIOILPEN_Msk
#define RCC_AHB1LPENR_CRCLPEN_Pos       (12U)
#define RCC_AHB1LPENR_CRCLPEN_Msk       (0x1U << RCC_AHB1LPENR_CRCLPEN_Pos) /*!< 0x00001000 */
#define RCC_AHB1LPENR_CRCLPEN           RCC_AHB1LPENR_CRCLPEN_Msk
#define RCC_AHB1LPENR_FLITFLPEN_Pos     (15U)
#define RCC_AHB1LPENR_FLITFLPEN_Msk     (0x1U << RCC_AHB1LPENR_FLITFLPEN_Pos) /*!< 0x00008000 */
#define RCC_AHB1LPENR_FLITFLPEN         RCC_AHB1LPENR_FLITFLPEN_Msk
#define RCC_AHB1LPENR_SRAM1LPEN_Pos     (16U)
#define RCC_AHB1LPENR_SRAM1LPEN_Msk     (0x1U << RCC_AHB1LPENR_SRAM1LPEN_Pos) /*!< 0x00010000 */
#define RCC_AHB1LPENR_SRAM1LPEN         RCC_AHB1LPENR_SRAM1LPEN_Msk
#define RCC_AHB1LPENR_SRAM2LPEN_Pos     (17U)
#define RCC_AHB1LPENR_SRAM2LPEN_Msk     (0x1U << RCC_AHB1LPENR_SRAM2LPEN_Pos) /*!< 0x00020000 */
#define RCC_AHB1LPENR_SRAM2LPEN         RCC_AHB1LPENR_SRAM2LPEN_Msk
#define RCC_AHB1LPENR_BKPSRAMLPEN_Pos   (18U)
#define RCC_AHB1LPENR_BKPSRAMLPEN_Msk   (0x1U << RCC_AHB1LPENR_BKPSRAMLPEN_Pos) /*!< 0x00040000 */
#define RCC_AHB1LPENR_BKPSRAMLPEN       RCC_AHB1LPENR_BKPSRAMLPEN_Msk
#define RCC_AHB1LPENR_DMA1LPEN_Pos      (21U)
#define RCC_AHB1LPENR_DMA1LPEN_Msk      (0x1U << RCC_AHB1LPENR_DMA1LPEN_Pos) /*!< 0x00200000 */
#define RCC_AHB1LPENR_DMA1LPEN          RCC_AHB1LPENR_DMA1LPEN_Msk
#define RCC_AHB1LPENR_DMA2LPEN_Pos      (22U)
#define RCC_AHB1LPENR_DMA2LPEN_Msk      (0x1U << RCC_AHB1LPENR_DMA2LPEN_Pos) /*!< 0x00400000 */
#define RCC_AHB1LPENR_DMA2LPEN          RCC_AHB1LPENR_DMA2LPEN_Msk

#define RCC_AHB1LPENR_OTGHSLPEN_Pos     (29U)
#define RCC_AHB1LPENR_OTGHSLPEN_Msk     (0x1U << RCC_AHB1LPENR_OTGHSLPEN_Pos) /*!< 0x20000000 */
#define RCC_AHB1LPENR_OTGHSLPEN         RCC_AHB1LPENR_OTGHSLPEN_Msk
#define RCC_AHB1LPENR_OTGHSULPILPEN_Pos (30U)
#define RCC_AHB1LPENR_OTGHSULPILPEN_Msk (0x1U << RCC_AHB1LPENR_OTGHSULPILPEN_Pos) /*!< 0x40000000 */
#define RCC_AHB1LPENR_OTGHSULPILPEN     RCC_AHB1LPENR_OTGHSULPILPEN_Msk

/********************  Bit definition for RCC_AHB2LPENR register  *************/
#define RCC_AHB2LPENR_CRYPLPEN_Pos  (4U)
#define RCC_AHB2LPENR_CRYPLPEN_Msk  (0x1U << RCC_AHB2LPENR_CRYPLPEN_Pos) /*!< 0x00000010 */
#define RCC_AHB2LPENR_CRYPLPEN      RCC_AHB2LPENR_CRYPLPEN_Msk
#define RCC_AHB2LPENR_HASHLPEN_Pos  (5U)
#define RCC_AHB2LPENR_HASHLPEN_Msk  (0x1U << RCC_AHB2LPENR_HASHLPEN_Pos) /*!< 0x00000020 */
#define RCC_AHB2LPENR_HASHLPEN      RCC_AHB2LPENR_HASHLPEN_Msk
#define RCC_AHB2LPENR_RNGLPEN_Pos   (6U)
#define RCC_AHB2LPENR_RNGLPEN_Msk   (0x1U << RCC_AHB2LPENR_RNGLPEN_Pos) /*!< 0x00000040 */
#define RCC_AHB2LPENR_RNGLPEN       RCC_AHB2LPENR_RNGLPEN_Msk
#define RCC_AHB2LPENR_OTGFSLPEN_Pos (7U)
#define RCC_AHB2LPENR_OTGFSLPEN_Msk (0x1U << RCC_AHB2LPENR_OTGFSLPEN_Pos) /*!< 0x00000080 */
#define RCC_AHB2LPENR_OTGFSLPEN     RCC_AHB2LPENR_OTGFSLPEN_Msk

/********************  Bit definition for RCC_AHB3LPENR register  *************/
#define RCC_AHB3LPENR_FSMCLPEN_Pos (0U)
#define RCC_AHB3LPENR_FSMCLPEN_Msk (0x1U << RCC_AHB3LPENR_FSMCLPEN_Pos) /*!< 0x00000001 */
#define RCC_AHB3LPENR_FSMCLPEN     RCC_AHB3LPENR_FSMCLPEN_Msk

/********************  Bit definition for RCC_APB1LPENR register  *************/
#define RCC_APB1LPENR_TIM2LPEN_Pos   (0U)
#define RCC_APB1LPENR_TIM2LPEN_Msk   (0x1U << RCC_APB1LPENR_TIM2LPEN_Pos) /*!< 0x00000001 */
#define RCC_APB1LPENR_TIM2LPEN       RCC_APB1LPENR_TIM2LPEN_Msk
#define RCC_APB1LPENR_TIM3LPEN_Pos   (1U)
#define RCC_APB1LPENR_TIM3LPEN_Msk   (0x1U << RCC_APB1LPENR_TIM3LPEN_Pos) /*!< 0x00000002 */
#define RCC_APB1LPENR_TIM3LPEN       RCC_APB1LPENR_TIM3LPEN_Msk
#define RCC_APB1LPENR_TIM4LPEN_Pos   (2U)
#define RCC_APB1LPENR_TIM4LPEN_Msk   (0x1U << RCC_APB1LPENR_TIM4LPEN_Pos) /*!< 0x00000004 */
#define RCC_APB1LPENR_TIM4LPEN       RCC_APB1LPENR_TIM4LPEN_Msk
#define RCC_APB1LPENR_TIM5LPEN_Pos   (3U)
#define RCC_APB1LPENR_TIM5LPEN_Msk   (0x1U << RCC_APB1LPENR_TIM5LPEN_Pos) /*!< 0x00000008 */
#define RCC_APB1LPENR_TIM5LPEN       RCC_APB1LPENR_TIM5LPEN_Msk
#define RCC_APB1LPENR_TIM6LPEN_Pos   (4U)
#define RCC_APB1LPENR_TIM6LPEN_Msk   (0x1U << RCC_APB1LPENR_TIM6LPEN_Pos) /*!< 0x00000010 */
#define RCC_APB1LPENR_TIM6LPEN       RCC_APB1LPENR_TIM6LPEN_Msk
#define RCC_APB1LPENR_TIM7LPEN_Pos   (5U)
#define RCC_APB1LPENR_TIM7LPEN_Msk   (0x1U << RCC_APB1LPENR_TIM7LPEN_Pos) /*!< 0x00000020 */
#define RCC_APB1LPENR_TIM7LPEN       RCC_APB1LPENR_TIM7LPEN_Msk
#define RCC_APB1LPENR_TIM12LPEN_Pos  (6U)
#define RCC_APB1LPENR_TIM12LPEN_Msk  (0x1U << RCC_APB1LPENR_TIM12LPEN_Pos) /*!< 0x00000040 */
#define RCC_APB1LPENR_TIM12LPEN      RCC_APB1LPENR_TIM12LPEN_Msk
#define RCC_APB1LPENR_TIM13LPEN_Pos  (7U)
#define RCC_APB1LPENR_TIM13LPEN_Msk  (0x1U << RCC_APB1LPENR_TIM13LPEN_Pos) /*!< 0x00000080 */
#define RCC_APB1LPENR_TIM13LPEN      RCC_APB1LPENR_TIM13LPEN_Msk
#define RCC_APB1LPENR_TIM14LPEN_Pos  (8U)
#define RCC_APB1LPENR_TIM14LPEN_Msk  (0x1U << RCC_APB1LPENR_TIM14LPEN_Pos) /*!< 0x00000100 */
#define RCC_APB1LPENR_TIM14LPEN      RCC_APB1LPENR_TIM14LPEN_Msk
#define RCC_APB1LPENR_WWDGLPEN_Pos   (11U)
#define RCC_APB1LPENR_WWDGLPEN_Msk   (0x1U << RCC_APB1LPENR_WWDGLPEN_Pos) /*!< 0x00000800 */
#define RCC_APB1LPENR_WWDGLPEN       RCC_APB1LPENR_WWDGLPEN_Msk
#define RCC_APB1LPENR_SPI2LPEN_Pos   (14U)
#define RCC_APB1LPENR_SPI2LPEN_Msk   (0x1U << RCC_APB1LPENR_SPI2LPEN_Pos) /*!< 0x00004000 */
#define RCC_APB1LPENR_SPI2LPEN       RCC_APB1LPENR_SPI2LPEN_Msk
#define RCC_APB1LPENR_SPI3LPEN_Pos   (15U)
#define RCC_APB1LPENR_SPI3LPEN_Msk   (0x1U << RCC_APB1LPENR_SPI3LPEN_Pos) /*!< 0x00008000 */
#define RCC_APB1LPENR_SPI3LPEN       RCC_APB1LPENR_SPI3LPEN_Msk
#define RCC_APB1LPENR_USART2LPEN_Pos (17U)
#define RCC_APB1LPENR_USART2LPEN_Msk (0x1U << RCC_APB1LPENR_USART2LPEN_Pos) /*!< 0x00020000 */
#define RCC_APB1LPENR_USART2LPEN     RCC_APB1LPENR_USART2LPEN_Msk
#define RCC_APB1LPENR_USART3LPEN_Pos (18U)
#define RCC_APB1LPENR_USART3LPEN_Msk (0x1U << RCC_APB1LPENR_USART3LPEN_Pos) /*!< 0x00040000 */
#define RCC_APB1LPENR_USART3LPEN     RCC_APB1LPENR_USART3LPEN_Msk
#define RCC_APB1LPENR_UART4LPEN_Pos  (19U)
#define RCC_APB1LPENR_UART4LPEN_Msk  (0x1U << RCC_APB1LPENR_UART4LPEN_Pos) /*!< 0x00080000 */
#define RCC_APB1LPENR_UART4LPEN      RCC_APB1LPENR_UART4LPEN_Msk
#define RCC_APB1LPENR_UART5LPEN_Pos  (20U)
#define RCC_APB1LPENR_UART5LPEN_Msk  (0x1U << RCC_APB1LPENR_UART5LPEN_Pos) /*!< 0x00100000 */
#define RCC_APB1LPENR_UART5LPEN      RCC_APB1LPENR_UART5LPEN_Msk
#define RCC_APB1LPENR_I2C1LPEN_Pos   (21U)
#define RCC_APB1LPENR_I2C1LPEN_Msk   (0x1U << RCC_APB1LPENR_I2C1LPEN_Pos) /*!< 0x00200000 */
#define RCC_APB1LPENR_I2C1LPEN       RCC_APB1LPENR_I2C1LPEN_Msk
#define RCC_APB1LPENR_I2C2LPEN_Pos   (22U)
#define RCC_APB1LPENR_I2C2LPEN_Msk   (0x1U << RCC_APB1LPENR_I2C2LPEN_Pos) /*!< 0x00400000 */
#define RCC_APB1LPENR_I2C2LPEN       RCC_APB1LPENR_I2C2LPEN_Msk
#define RCC_APB1LPENR_I2C3LPEN_Pos   (23U)
#define RCC_APB1LPENR_I2C3LPEN_Msk   (0x1U << RCC_APB1LPENR_I2C3LPEN_Pos) /*!< 0x00800000 */
#define RCC_APB1LPENR_I2C3LPEN       RCC_APB1LPENR_I2C3LPEN_Msk
#define RCC_APB1LPENR_CAN1LPEN_Pos   (25U)
#define RCC_APB1LPENR_CAN1LPEN_Msk   (0x1U << RCC_APB1LPENR_CAN1LPEN_Pos) /*!< 0x02000000 */
#define RCC_APB1LPENR_CAN1LPEN       RCC_APB1LPENR_CAN1LPEN_Msk
#define RCC_APB1LPENR_CAN2LPEN_Pos   (26U)
#define RCC_APB1LPENR_CAN2LPEN_Msk   (0x1U << RCC_APB1LPENR_CAN2LPEN_Pos) /*!< 0x04000000 */
#define RCC_APB1LPENR_CAN2LPEN       RCC_APB1LPENR_CAN2LPEN_Msk
#define RCC_APB1LPENR_PWRLPEN_Pos    (28U)
#define RCC_APB1LPENR_PWRLPEN_Msk    (0x1U << RCC_APB1LPENR_PWRLPEN_Pos) /*!< 0x10000000 */
#define RCC_APB1LPENR_PWRLPEN        RCC_APB1LPENR_PWRLPEN_Msk
#define RCC_APB1LPENR_DACLPEN_Pos    (29U)
#define RCC_APB1LPENR_DACLPEN_Msk    (0x1U << RCC_APB1LPENR_DACLPEN_Pos) /*!< 0x20000000 */
#define RCC_APB1LPENR_DACLPEN        RCC_APB1LPENR_DACLPEN_Msk

/********************  Bit definition for RCC_APB2LPENR register  *************/
#define RCC_APB2LPENR_TIM1LPEN_Pos   (0U)
#define RCC_APB2LPENR_TIM1LPEN_Msk   (0x1U << RCC_APB2LPENR_TIM1LPEN_Pos) /*!< 0x00000001 */
#define RCC_APB2LPENR_TIM1LPEN       RCC_APB2LPENR_TIM1LPEN_Msk
#define RCC_APB2LPENR_TIM8LPEN_Pos   (1U)
#define RCC_APB2LPENR_TIM8LPEN_Msk   (0x1U << RCC_APB2LPENR_TIM8LPEN_Pos) /*!< 0x00000002 */
#define RCC_APB2LPENR_TIM8LPEN       RCC_APB2LPENR_TIM8LPEN_Msk
#define RCC_APB2LPENR_USART1LPEN_Pos (4U)
#define RCC_APB2LPENR_USART1LPEN_Msk (0x1U << RCC_APB2LPENR_USART1LPEN_Pos) /*!< 0x00000010 */
#define RCC_APB2LPENR_USART1LPEN     RCC_APB2LPENR_USART1LPEN_Msk
#define RCC_APB2LPENR_USART6LPEN_Pos (5U)
#define RCC_APB2LPENR_USART6LPEN_Msk (0x1U << RCC_APB2LPENR_USART6LPEN_Pos) /*!< 0x00000020 */
#define RCC_APB2LPENR_USART6LPEN     RCC_APB2LPENR_USART6LPEN_Msk
#define RCC_APB2LPENR_ADC1LPEN_Pos   (8U)
#define RCC_APB2LPENR_ADC1LPEN_Msk   (0x1U << RCC_APB2LPENR_ADC1LPEN_Pos) /*!< 0x00000100 */
#define RCC_APB2LPENR_ADC1LPEN       RCC_APB2LPENR_ADC1LPEN_Msk
#define RCC_APB2LPENR_ADC2LPEN_Pos   (9U)
#define RCC_APB2LPENR_ADC2LPEN_Msk   (0x1U << RCC_APB2LPENR_ADC2LPEN_Pos) /*!< 0x00000200 */
#define RCC_APB2LPENR_ADC2LPEN       RCC_APB2LPENR_ADC2LPEN_Msk
#define RCC_APB2LPENR_ADC3LPEN_Pos   (10U)
#define RCC_APB2LPENR_ADC3LPEN_Msk   (0x1U << RCC_APB2LPENR_ADC3LPEN_Pos) /*!< 0x00000400 */
#define RCC_APB2LPENR_ADC3LPEN       RCC_APB2LPENR_ADC3LPEN_Msk
#define RCC_APB2LPENR_SDIOLPEN_Pos   (11U)
#define RCC_APB2LPENR_SDIOLPEN_Msk   (0x1U << RCC_APB2LPENR_SDIOLPEN_Pos) /*!< 0x00000800 */
#define RCC_APB2LPENR_SDIOLPEN       RCC_APB2LPENR_SDIOLPEN_Msk
#define RCC_APB2LPENR_SPI1LPEN_Pos   (12U)
#define RCC_APB2LPENR_SPI1LPEN_Msk   (0x1U << RCC_APB2LPENR_SPI1LPEN_Pos) /*!< 0x00001000 */
#define RCC_APB2LPENR_SPI1LPEN       RCC_APB2LPENR_SPI1LPEN_Msk
#define RCC_APB2LPENR_SYSCFGLPEN_Pos (14U)
#define RCC_APB2LPENR_SYSCFGLPEN_Msk (0x1U << RCC_APB2LPENR_SYSCFGLPEN_Pos) /*!< 0x00004000 */
#define RCC_APB2LPENR_SYSCFGLPEN     RCC_APB2LPENR_SYSCFGLPEN_Msk
#define RCC_APB2LPENR_TIM9LPEN_Pos   (16U)
#define RCC_APB2LPENR_TIM9LPEN_Msk   (0x1U << RCC_APB2LPENR_TIM9LPEN_Pos) /*!< 0x00010000 */
#define RCC_APB2LPENR_TIM9LPEN       RCC_APB2LPENR_TIM9LPEN_Msk
#define RCC_APB2LPENR_TIM10LPEN_Pos  (17U)
#define RCC_APB2LPENR_TIM10LPEN_Msk  (0x1U << RCC_APB2LPENR_TIM10LPEN_Pos) /*!< 0x00020000 */
#define RCC_APB2LPENR_TIM10LPEN      RCC_APB2LPENR_TIM10LPEN_Msk
#define RCC_APB2LPENR_TIM11LPEN_Pos  (18U)
#define RCC_APB2LPENR_TIM11LPEN_Msk  (0x1U << RCC_APB2LPENR_TIM11LPEN_Pos) /*!< 0x00040000 */
#define RCC_APB2LPENR_TIM11LPEN      RCC_APB2LPENR_TIM11LPEN_Msk

/********************  Bit definition for RCC_BDCR register  ******************/
#define RCC_BDCR_LSEON_Pos  (0U)
#define RCC_BDCR_LSEON_Msk  (0x1U << RCC_BDCR_LSEON_Pos) /*!< 0x00000001 */
#define RCC_BDCR_LSEON      RCC_BDCR_LSEON_Msk
#define RCC_BDCR_LSERDY_Pos (1U)
#define RCC_BDCR_LSERDY_Msk (0x1U << RCC_BDCR_LSERDY_Pos) /*!< 0x00000002 */
#define RCC_BDCR_LSERDY     RCC_BDCR_LSERDY_Msk
#define RCC_BDCR_LSEBYP_Pos (2U)
#define RCC_BDCR_LSEBYP_Msk (0x1U << RCC_BDCR_LSEBYP_Pos) /*!< 0x00000004 */
#define RCC_BDCR_LSEBYP     RCC_BDCR_LSEBYP_Msk

#define RCC_BDCR_RTCSEL_Pos (8U)
#define RCC_BDCR_RTCSEL_Msk (0x3U << RCC_BDCR_RTCSEL_Pos) /*!< 0x00000300 */
#define RCC_BDCR_RTCSEL     RCC_BDCR_RTCSEL_Msk
#define RCC_BDCR_RTCSEL_0   (0x1U << RCC_BDCR_RTCSEL_Pos) /*!< 0x00000100 */
#define RCC_BDCR_RTCSEL_1   (0x2U << RCC_BDCR_RTCSEL_Pos) /*!< 0x00000200 */

#define RCC_BDCR_RTCEN_Pos  (15U)
#define RCC_BDCR_RTCEN_Msk  (0x1U << RCC_BDCR_RTCEN_Pos) /*!< 0x00008000 */
#define RCC_BDCR_RTCEN      RCC_BDCR_RTCEN_Msk
#define RCC_BDCR_BDRST_Pos  (16U)
#define RCC_BDCR_BDRST_Msk  (0x1U << RCC_BDCR_BDRST_Pos) /*!< 0x00010000 */
#define RCC_BDCR_BDRST      RCC_BDCR_BDRST_Msk

/********************  Bit definition for RCC_CSR register  *******************/
#define RCC_CSR_LSION_Pos    (0U)
#define RCC_CSR_LSION_Msk    (0x1U << RCC_CSR_LSION_Pos) /*!< 0x00000001 */
#define RCC_CSR_LSION        RCC_CSR_LSION_Msk
#define RCC_CSR_LSIRDY_Pos   (1U)
#define RCC_CSR_LSIRDY_Msk   (0x1U << RCC_CSR_LSIRDY_Pos) /*!< 0x00000002 */
#define RCC_CSR_LSIRDY       RCC_CSR_LSIRDY_Msk
#define RCC_CSR_RMVF_Pos     (24U)
#define RCC_CSR_RMVF_Msk     (0x1U << RCC_CSR_RMVF_Pos) /*!< 0x01000000 */
#define RCC_CSR_RMVF         RCC_CSR_RMVF_Msk
#define RCC_CSR_BORRSTF_Pos  (25U)
#define RCC_CSR_BORRSTF_Msk  (0x1U << RCC_CSR_BORRSTF_Pos) /*!< 0x02000000 */
#define RCC_CSR_BORRSTF      RCC_CSR_BORRSTF_Msk
#define RCC_CSR_PINRSTF_Pos  (26U)
#define RCC_CSR_PINRSTF_Msk  (0x1U << RCC_CSR_PINRSTF_Pos) /*!< 0x04000000 */
#define RCC_CSR_PINRSTF      RCC_CSR_PINRSTF_Msk
#define RCC_CSR_PORRSTF_Pos  (27U)
#define RCC_CSR_PORRSTF_Msk  (0x1U << RCC_CSR_PORRSTF_Pos) /*!< 0x08000000 */
#define RCC_CSR_PORRSTF      RCC_CSR_PORRSTF_Msk
#define RCC_CSR_SFTRSTF_Pos  (28U)
#define RCC_CSR_SFTRSTF_Msk  (0x1U << RCC_CSR_SFTRSTF_Pos) /*!< 0x10000000 */
#define RCC_CSR_SFTRSTF      RCC_CSR_SFTRSTF_Msk
#define RCC_CSR_IWDGRSTF_Pos (29U)
#define RCC_CSR_IWDGRSTF_Msk (0x1U << RCC_CSR_IWDGRSTF_Pos) /*!< 0x20000000 */
#define RCC_CSR_IWDGRSTF     RCC_CSR_IWDGRSTF_Msk
#define RCC_CSR_WWDGRSTF_Pos (30U)
#define RCC_CSR_WWDGRSTF_Msk (0x1U << RCC_CSR_WWDGRSTF_Pos) /*!< 0x40000000 */
#define RCC_CSR_WWDGRSTF     RCC_CSR_WWDGRSTF_Msk
#define RCC_CSR_LPWRRSTF_Pos (31U)
#define RCC_CSR_LPWRRSTF_Msk (0x1U << RCC_CSR_LPWRRSTF_Pos) /*!< 0x80000000 */
#define RCC_CSR_LPWRRSTF     RCC_CSR_LPWRRSTF_Msk
/* Legacy defines */
#define RCC_CSR_PADRSTF      RCC_CSR_PINRSTF
#define RCC_CSR_WDGRSTF      RCC_CSR_IWDGRSTF

/********************  Bit definition for RCC_SSCGR register  *****************/
#define RCC_SSCGR_MODPER_Pos    (0U)
#define RCC_SSCGR_MODPER_Msk    (0x1FFFU << RCC_SSCGR_MODPER_Pos) /*!< 0x00001FFF */
#define RCC_SSCGR_MODPER        RCC_SSCGR_MODPER_Msk
#define RCC_SSCGR_INCSTEP_Pos   (13U)
#define RCC_SSCGR_INCSTEP_Msk   (0x7FFFU << RCC_SSCGR_INCSTEP_Pos) /*!< 0x0FFFE000 */
#define RCC_SSCGR_INCSTEP       RCC_SSCGR_INCSTEP_Msk
#define RCC_SSCGR_SPREADSEL_Pos (30U)
#define RCC_SSCGR_SPREADSEL_Msk (0x1U << RCC_SSCGR_SPREADSEL_Pos) /*!< 0x40000000 */
#define RCC_SSCGR_SPREADSEL     RCC_SSCGR_SPREADSEL_Msk
#define RCC_SSCGR_SSCGEN_Pos    (31U)
#define RCC_SSCGR_SSCGEN_Msk    (0x1U << RCC_SSCGR_SSCGEN_Pos) /*!< 0x80000000 */
#define RCC_SSCGR_SSCGEN        RCC_SSCGR_SSCGEN_Msk

/********************  Bit definition for RCC_PLLI2SCFGR register  ************/
#define RCC_PLLI2SCFGR_PLLI2SN_Pos (6U)
#define RCC_PLLI2SCFGR_PLLI2SN_Msk (0x1FFU << RCC_PLLI2SCFGR_PLLI2SN_Pos) /*!< 0x00007FC0 */
#define RCC_PLLI2SCFGR_PLLI2SN     RCC_PLLI2SCFGR_PLLI2SN_Msk
#define RCC_PLLI2SCFGR_PLLI2SN_0   (0x001U << RCC_PLLI2SCFGR_PLLI2SN_Pos) /*!< 0x00000040 */
#define RCC_PLLI2SCFGR_PLLI2SN_1   (0x002U << RCC_PLLI2SCFGR_PLLI2SN_Pos) /*!< 0x00000080 */
#define RCC_PLLI2SCFGR_PLLI2SN_2   (0x004U << RCC_PLLI2SCFGR_PLLI2SN_Pos) /*!< 0x00000100 */
#define RCC_PLLI2SCFGR_PLLI2SN_3   (0x008U << RCC_PLLI2SCFGR_PLLI2SN_Pos) /*!< 0x00000200 */
#define RCC_PLLI2SCFGR_PLLI2SN_4   (0x010U << RCC_PLLI2SCFGR_PLLI2SN_Pos) /*!< 0x00000400 */
#define RCC_PLLI2SCFGR_PLLI2SN_5   (0x020U << RCC_PLLI2SCFGR_PLLI2SN_Pos) /*!< 0x00000800 */
#define RCC_PLLI2SCFGR_PLLI2SN_6   (0x040U << RCC_PLLI2SCFGR_PLLI2SN_Pos) /*!< 0x00001000 */
#define RCC_PLLI2SCFGR_PLLI2SN_7   (0x080U << RCC_PLLI2SCFGR_PLLI2SN_Pos) /*!< 0x00002000 */
#define RCC_PLLI2SCFGR_PLLI2SN_8   (0x100U << RCC_PLLI2SCFGR_PLLI2SN_Pos) /*!< 0x00004000 */

#define RCC_PLLI2SCFGR_PLLI2SR_Pos (28U)
#define RCC_PLLI2SCFGR_PLLI2SR_Msk (0x7U << RCC_PLLI2SCFGR_PLLI2SR_Pos) /*!< 0x70000000 */
#define RCC_PLLI2SCFGR_PLLI2SR     RCC_PLLI2SCFGR_PLLI2SR_Msk
#define RCC_PLLI2SCFGR_PLLI2SR_0   (0x1U << RCC_PLLI2SCFGR_PLLI2SR_Pos) /*!< 0x10000000 */
#define RCC_PLLI2SCFGR_PLLI2SR_1   (0x2U << RCC_PLLI2SCFGR_PLLI2SR_Pos) /*!< 0x20000000 */
#define RCC_PLLI2SCFGR_PLLI2SR_2   (0x4U << RCC_PLLI2SCFGR_PLLI2SR_Pos) /*!< 0x40000000 */


/******************************************************************************/
/*                                                                            */
/*                                    RNG                                     */
/*                                                                            */
/******************************************************************************/
/********************  Bits definition for RNG_CR register  *******************/
#define RNG_CR_RNGEN_Pos (2U)
#define RNG_CR_RNGEN_Msk (0x1U << RNG_CR_RNGEN_Pos) /*!< 0x00000004 */
#define RNG_CR_RNGEN     RNG_CR_RNGEN_Msk
#define RNG_CR_IE_Pos    (3U)
#define RNG_CR_IE_Msk    (0x1U << RNG_CR_IE_Pos) /*!< 0x00000008 */
#define RNG_CR_IE        RNG_CR_IE_Msk

/********************  Bits definition for RNG_SR register  *******************/
#define RNG_SR_DRDY_Pos (0U)
#define RNG_SR_DRDY_Msk (0x1U << RNG_SR_DRDY_Pos) /*!< 0x00000001 */
#define RNG_SR_DRDY     RNG_SR_DRDY_Msk
#define RNG_SR_CECS_Pos (1U)
#define RNG_SR_CECS_Msk (0x1U << RNG_SR_CECS_Pos) /*!< 0x00000002 */
#define RNG_SR_CECS     RNG_SR_CECS_Msk
#define RNG_SR_SECS_Pos (2U)
#define RNG_SR_SECS_Msk (0x1U << RNG_SR_SECS_Pos) /*!< 0x00000004 */
#define RNG_SR_SECS     RNG_SR_SECS_Msk
#define RNG_SR_CEIS_Pos (5U)
#define RNG_SR_CEIS_Msk (0x1U << RNG_SR_CEIS_Pos) /*!< 0x00000020 */
#define RNG_SR_CEIS     RNG_SR_CEIS_Msk
#define RNG_SR_SEIS_Pos (6U)
#define RNG_SR_SEIS_Msk (0x1U << RNG_SR_SEIS_Pos) /*!< 0x00000040 */
#define RNG_SR_SEIS     RNG_SR_SEIS_Msk

/******************************************************************************/
/*                                                                            */
/*                           Real-Time Clock (RTC)                            */
/*                                                                            */
/******************************************************************************/

/*
 * @brief Specific device feature definitions  (not present on all devices in the STM32F4 serie)
 */
#define RTC_TAMPER2_SUPPORT /*!< TAMPER 2 feature support */
#define RTC_AF2_SUPPORT     /*!< RTC Alternate Function 2 mapping support */
/********************  Bits definition for RTC_TR register  *******************/
#define RTC_TR_PM_Pos       (22U)
#define RTC_TR_PM_Msk       (0x1U << RTC_TR_PM_Pos) /*!< 0x00400000 */
#define RTC_TR_PM           RTC_TR_PM_Msk
#define RTC_TR_HT_Pos       (20U)
#define RTC_TR_HT_Msk       (0x3U << RTC_TR_HT_Pos) /*!< 0x00300000 */
#define RTC_TR_HT           RTC_TR_HT_Msk
#define RTC_TR_HT_0         (0x1U << RTC_TR_HT_Pos) /*!< 0x00100000 */
#define RTC_TR_HT_1         (0x2U << RTC_TR_HT_Pos) /*!< 0x00200000 */
#define RTC_TR_HU_Pos       (16U)
#define RTC_TR_HU_Msk       (0xFU << RTC_TR_HU_Pos) /*!< 0x000F0000 */
#define RTC_TR_HU           RTC_TR_HU_Msk
#define RTC_TR_HU_0         (0x1U << RTC_TR_HU_Pos) /*!< 0x00010000 */
#define RTC_TR_HU_1         (0x2U << RTC_TR_HU_Pos) /*!< 0x00020000 */
#define RTC_TR_HU_2         (0x4U << RTC_TR_HU_Pos) /*!< 0x00040000 */
#define RTC_TR_HU_3         (0x8U << RTC_TR_HU_Pos) /*!< 0x00080000 */
#define RTC_TR_MNT_Pos      (12U)
#define RTC_TR_MNT_Msk      (0x7U << RTC_TR_MNT_Pos) /*!< 0x00007000 */
#define RTC_TR_MNT          RTC_TR_MNT_Msk
#define RTC_TR_MNT_0        (0x1U << RTC_TR_MNT_Pos) /*!< 0x00001000 */
#define RTC_TR_MNT_1        (0x2U << RTC_TR_MNT_Pos) /*!< 0x00002000 */
#define RTC_TR_MNT_2        (0x4U << RTC_TR_MNT_Pos) /*!< 0x00004000 */
#define RTC_TR_MNU_Pos      (8U)
#define RTC_TR_MNU_Msk      (0xFU << RTC_TR_MNU_Pos) /*!< 0x00000F00 */
#define RTC_TR_MNU          RTC_TR_MNU_Msk
#define RTC_TR_MNU_0        (0x1U << RTC_TR_MNU_Pos) /*!< 0x00000100 */
#define RTC_TR_MNU_1        (0x2U << RTC_TR_MNU_Pos) /*!< 0x00000200 */
#define RTC_TR_MNU_2        (0x4U << RTC_TR_MNU_Pos) /*!< 0x00000400 */
#define RTC_TR_MNU_3        (0x8U << RTC_TR_MNU_Pos) /*!< 0x00000800 */
#define RTC_TR_ST_Pos       (4U)
#define RTC_TR_ST_Msk       (0x7U << RTC_TR_ST_Pos) /*!< 0x00000070 */
#define RTC_TR_ST           RTC_TR_ST_Msk
#define RTC_TR_ST_0         (0x1U << RTC_TR_ST_Pos) /*!< 0x00000010 */
#define RTC_TR_ST_1         (0x2U << RTC_TR_ST_Pos) /*!< 0x00000020 */
#define RTC_TR_ST_2         (0x4U << RTC_TR_ST_Pos) /*!< 0x00000040 */
#define RTC_TR_SU_Pos       (0U)
#define RTC_TR_SU_Msk       (0xFU << RTC_TR_SU_Pos) /*!< 0x0000000F */
#define RTC_TR_SU           RTC_TR_SU_Msk
#define RTC_TR_SU_0         (0x1U << RTC_TR_SU_Pos) /*!< 0x00000001 */
#define RTC_TR_SU_1         (0x2U << RTC_TR_SU_Pos) /*!< 0x00000002 */
#define RTC_TR_SU_2         (0x4U << RTC_TR_SU_Pos) /*!< 0x00000004 */
#define RTC_TR_SU_3         (0x8U << RTC_TR_SU_Pos) /*!< 0x00000008 */

/********************  Bits definition for RTC_DR register  *******************/
#define RTC_DR_YT_Pos  (20U)
#define RTC_DR_YT_Msk  (0xFU << RTC_DR_YT_Pos) /*!< 0x00F00000 */
#define RTC_DR_YT      RTC_DR_YT_Msk
#define RTC_DR_YT_0    (0x1U << RTC_DR_YT_Pos) /*!< 0x00100000 */
#define RTC_DR_YT_1    (0x2U << RTC_DR_YT_Pos) /*!< 0x00200000 */
#define RTC_DR_YT_2    (0x4U << RTC_DR_YT_Pos) /*!< 0x00400000 */
#define RTC_DR_YT_3    (0x8U << RTC_DR_YT_Pos) /*!< 0x00800000 */
#define RTC_DR_YU_Pos  (16U)
#define RTC_DR_YU_Msk  (0xFU << RTC_DR_YU_Pos) /*!< 0x000F0000 */
#define RTC_DR_YU      RTC_DR_YU_Msk
#define RTC_DR_YU_0    (0x1U << RTC_DR_YU_Pos) /*!< 0x00010000 */
#define RTC_DR_YU_1    (0x2U << RTC_DR_YU_Pos) /*!< 0x00020000 */
#define RTC_DR_YU_2    (0x4U << RTC_DR_YU_Pos) /*!< 0x00040000 */
#define RTC_DR_YU_3    (0x8U << RTC_DR_YU_Pos) /*!< 0x00080000 */
#define RTC_DR_WDU_Pos (13U)
#define RTC_DR_WDU_Msk (0x7U << RTC_DR_WDU_Pos) /*!< 0x0000E000 */
#define RTC_DR_WDU     RTC_DR_WDU_Msk
#define RTC_DR_WDU_0   (0x1U << RTC_DR_WDU_Pos) /*!< 0x00002000 */
#define RTC_DR_WDU_1   (0x2U << RTC_DR_WDU_Pos) /*!< 0x00004000 */
#define RTC_DR_WDU_2   (0x4U << RTC_DR_WDU_Pos) /*!< 0x00008000 */
#define RTC_DR_MT_Pos  (12U)
#define RTC_DR_MT_Msk  (0x1U << RTC_DR_MT_Pos) /*!< 0x00001000 */
#define RTC_DR_MT      RTC_DR_MT_Msk
#define RTC_DR_MU_Pos  (8U)
#define RTC_DR_MU_Msk  (0xFU << RTC_DR_MU_Pos) /*!< 0x00000F00 */
#define RTC_DR_MU      RTC_DR_MU_Msk
#define RTC_DR_MU_0    (0x1U << RTC_DR_MU_Pos) /*!< 0x00000100 */
#define RTC_DR_MU_1    (0x2U << RTC_DR_MU_Pos) /*!< 0x00000200 */
#define RTC_DR_MU_2    (0x4U << RTC_DR_MU_Pos) /*!< 0x00000400 */
#define RTC_DR_MU_3    (0x8U << RTC_DR_MU_Pos) /*!< 0x00000800 */
#define RTC_DR_DT_Pos  (4U)
#define RTC_DR_DT_Msk  (0x3U << RTC_DR_DT_Pos) /*!< 0x00000030 */
#define RTC_DR_DT      RTC_DR_DT_Msk
#define RTC_DR_DT_0    (0x1U << RTC_DR_DT_Pos) /*!< 0x00000010 */
#define RTC_DR_DT_1    (0x2U << RTC_DR_DT_Pos) /*!< 0x00000020 */
#define RTC_DR_DU_Pos  (0U)
#define RTC_DR_DU_Msk  (0xFU << RTC_DR_DU_Pos) /*!< 0x0000000F */
#define RTC_DR_DU      RTC_DR_DU_Msk
#define RTC_DR_DU_0    (0x1U << RTC_DR_DU_Pos) /*!< 0x00000001 */
#define RTC_DR_DU_1    (0x2U << RTC_DR_DU_Pos) /*!< 0x00000002 */
#define RTC_DR_DU_2    (0x4U << RTC_DR_DU_Pos) /*!< 0x00000004 */
#define RTC_DR_DU_3    (0x8U << RTC_DR_DU_Pos) /*!< 0x00000008 */

/********************  Bits definition for RTC_CR register  *******************/
#define RTC_CR_COE_Pos     (23U)
#define RTC_CR_COE_Msk     (0x1U << RTC_CR_COE_Pos) /*!< 0x00800000 */
#define RTC_CR_COE         RTC_CR_COE_Msk
#define RTC_CR_OSEL_Pos    (21U)
#define RTC_CR_OSEL_Msk    (0x3U << RTC_CR_OSEL_Pos) /*!< 0x00600000 */
#define RTC_CR_OSEL        RTC_CR_OSEL_Msk
#define RTC_CR_OSEL_0      (0x1U << RTC_CR_OSEL_Pos) /*!< 0x00200000 */
#define RTC_CR_OSEL_1      (0x2U << RTC_CR_OSEL_Pos) /*!< 0x00400000 */
#define RTC_CR_POL_Pos     (20U)
#define RTC_CR_POL_Msk     (0x1U << RTC_CR_POL_Pos) /*!< 0x00100000 */
#define RTC_CR_POL         RTC_CR_POL_Msk
#define RTC_CR_COSEL_Pos   (19U)
#define RTC_CR_COSEL_Msk   (0x1U << RTC_CR_COSEL_Pos) /*!< 0x00080000 */
#define RTC_CR_COSEL       RTC_CR_COSEL_Msk
#define RTC_CR_BKP_Pos     (18U)
#define RTC_CR_BKP_Msk     (0x1U << RTC_CR_BKP_Pos) /*!< 0x00040000 */
#define RTC_CR_BKP         RTC_CR_BKP_Msk
#define RTC_CR_SUB1H_Pos   (17U)
#define RTC_CR_SUB1H_Msk   (0x1U << RTC_CR_SUB1H_Pos) /*!< 0x00020000 */
#define RTC_CR_SUB1H       RTC_CR_SUB1H_Msk
#define RTC_CR_ADD1H_Pos   (16U)
#define RTC_CR_ADD1H_Msk   (0x1U << RTC_CR_ADD1H_Pos) /*!< 0x00010000 */
#define RTC_CR_ADD1H       RTC_CR_ADD1H_Msk
#define RTC_CR_TSIE_Pos    (15U)
#define RTC_CR_TSIE_Msk    (0x1U << RTC_CR_TSIE_Pos) /*!< 0x00008000 */
#define RTC_CR_TSIE        RTC_CR_TSIE_Msk
#define RTC_CR_WUTIE_Pos   (14U)
#define RTC_CR_WUTIE_Msk   (0x1U << RTC_CR_WUTIE_Pos) /*!< 0x00004000 */
#define RTC_CR_WUTIE       RTC_CR_WUTIE_Msk
#define RTC_CR_ALRBIE_Pos  (13U)
#define RTC_CR_ALRBIE_Msk  (0x1U << RTC_CR_ALRBIE_Pos) /*!< 0x00002000 */
#define RTC_CR_ALRBIE      RTC_CR_ALRBIE_Msk
#define RTC_CR_ALRAIE_Pos  (12U)
#define RTC_CR_ALRAIE_Msk  (0x1U << RTC_CR_ALRAIE_Pos) /*!< 0x00001000 */
#define RTC_CR_ALRAIE      RTC_CR_ALRAIE_Msk
#define RTC_CR_TSE_Pos     (11U)
#define RTC_CR_TSE_Msk     (0x1U << RTC_CR_TSE_Pos) /*!< 0x00000800 */
#define RTC_CR_TSE         RTC_CR_TSE_Msk
#define RTC_CR_WUTE_Pos    (10U)
#define RTC_CR_WUTE_Msk    (0x1U << RTC_CR_WUTE_Pos) /*!< 0x00000400 */
#define RTC_CR_WUTE        RTC_CR_WUTE_Msk
#define RTC_CR_ALRBE_Pos   (9U)
#define RTC_CR_ALRBE_Msk   (0x1U << RTC_CR_ALRBE_Pos) /*!< 0x00000200 */
#define RTC_CR_ALRBE       RTC_CR_ALRBE_Msk
#define RTC_CR_ALRAE_Pos   (8U)
#define RTC_CR_ALRAE_Msk   (0x1U << RTC_CR_ALRAE_Pos) /*!< 0x00000100 */
#define RTC_CR_ALRAE       RTC_CR_ALRAE_Msk
#define RTC_CR_DCE_Pos     (7U)
#define RTC_CR_DCE_Msk     (0x1U << RTC_CR_DCE_Pos) /*!< 0x00000080 */
#define RTC_CR_DCE         RTC_CR_DCE_Msk
#define RTC_CR_FMT_Pos     (6U)
#define RTC_CR_FMT_Msk     (0x1U << RTC_CR_FMT_Pos) /*!< 0x00000040 */
#define RTC_CR_FMT         RTC_CR_FMT_Msk
#define RTC_CR_BYPSHAD_Pos (5U)
#define RTC_CR_BYPSHAD_Msk (0x1U << RTC_CR_BYPSHAD_Pos) /*!< 0x00000020 */
#define RTC_CR_BYPSHAD     RTC_CR_BYPSHAD_Msk
#define RTC_CR_REFCKON_Pos (4U)
#define RTC_CR_REFCKON_Msk (0x1U << RTC_CR_REFCKON_Pos) /*!< 0x00000010 */
#define RTC_CR_REFCKON     RTC_CR_REFCKON_Msk
#define RTC_CR_TSEDGE_Pos  (3U)
#define RTC_CR_TSEDGE_Msk  (0x1U << RTC_CR_TSEDGE_Pos) /*!< 0x00000008 */
#define RTC_CR_TSEDGE      RTC_CR_TSEDGE_Msk
#define RTC_CR_WUCKSEL_Pos (0U)
#define RTC_CR_WUCKSEL_Msk (0x7U << RTC_CR_WUCKSEL_Pos) /*!< 0x00000007 */
#define RTC_CR_WUCKSEL     RTC_CR_WUCKSEL_Msk
#define RTC_CR_WUCKSEL_0   (0x1U << RTC_CR_WUCKSEL_Pos) /*!< 0x00000001 */
#define RTC_CR_WUCKSEL_1   (0x2U << RTC_CR_WUCKSEL_Pos) /*!< 0x00000002 */
#define RTC_CR_WUCKSEL_2   (0x4U << RTC_CR_WUCKSEL_Pos) /*!< 0x00000004 */

/* Legacy defines */
#define RTC_CR_BCK RTC_CR_BKP

/********************  Bits definition for RTC_ISR register  ******************/
#define RTC_ISR_RECALPF_Pos (16U)
#define RTC_ISR_RECALPF_Msk (0x1U << RTC_ISR_RECALPF_Pos) /*!< 0x00010000 */
#define RTC_ISR_RECALPF     RTC_ISR_RECALPF_Msk
#define RTC_ISR_TAMP1F_Pos  (13U)
#define RTC_ISR_TAMP1F_Msk  (0x1U << RTC_ISR_TAMP1F_Pos) /*!< 0x00002000 */
#define RTC_ISR_TAMP1F      RTC_ISR_TAMP1F_Msk
#define RTC_ISR_TAMP2F_Pos  (14U)
#define RTC_ISR_TAMP2F_Msk  (0x1U << RTC_ISR_TAMP2F_Pos) /*!< 0x00004000 */
#define RTC_ISR_TAMP2F      RTC_ISR_TAMP2F_Msk
#define RTC_ISR_TSOVF_Pos   (12U)
#define RTC_ISR_TSOVF_Msk   (0x1U << RTC_ISR_TSOVF_Pos) /*!< 0x00001000 */
#define RTC_ISR_TSOVF       RTC_ISR_TSOVF_Msk
#define RTC_ISR_TSF_Pos     (11U)
#define RTC_ISR_TSF_Msk     (0x1U << RTC_ISR_TSF_Pos) /*!< 0x00000800 */
#define RTC_ISR_TSF         RTC_ISR_TSF_Msk
#define RTC_ISR_WUTF_Pos    (10U)
#define RTC_ISR_WUTF_Msk    (0x1U << RTC_ISR_WUTF_Pos) /*!< 0x00000400 */
#define RTC_ISR_WUTF        RTC_ISR_WUTF_Msk
#define RTC_ISR_ALRBF_Pos   (9U)
#define RTC_ISR_ALRBF_Msk   (0x1U << RTC_ISR_ALRBF_Pos) /*!< 0x00000200 */
#define RTC_ISR_ALRBF       RTC_ISR_ALRBF_Msk
#define RTC_ISR_ALRAF_Pos   (8U)
#define RTC_ISR_ALRAF_Msk   (0x1U << RTC_ISR_ALRAF_Pos) /*!< 0x00000100 */
#define RTC_ISR_ALRAF       RTC_ISR_ALRAF_Msk
#define RTC_ISR_INIT_Pos    (7U)
#define RTC_ISR_INIT_Msk    (0x1U << RTC_ISR_INIT_Pos) /*!< 0x00000080 */
#define RTC_ISR_INIT        RTC_ISR_INIT_Msk
#define RTC_ISR_INITF_Pos   (6U)
#define RTC_ISR_INITF_Msk   (0x1U << RTC_ISR_INITF_Pos) /*!< 0x00000040 */
#define RTC_ISR_INITF       RTC_ISR_INITF_Msk
#define RTC_ISR_RSF_Pos     (5U)
#define RTC_ISR_RSF_Msk     (0x1U << RTC_ISR_RSF_Pos) /*!< 0x00000020 */
#define RTC_ISR_RSF         RTC_ISR_RSF_Msk
#define RTC_ISR_INITS_Pos   (4U)
#define RTC_ISR_INITS_Msk   (0x1U << RTC_ISR_INITS_Pos) /*!< 0x00000010 */
#define RTC_ISR_INITS       RTC_ISR_INITS_Msk
#define RTC_ISR_SHPF_Pos    (3U)
#define RTC_ISR_SHPF_Msk    (0x1U << RTC_ISR_SHPF_Pos) /*!< 0x00000008 */
#define RTC_ISR_SHPF        RTC_ISR_SHPF_Msk
#define RTC_ISR_WUTWF_Pos   (2U)
#define RTC_ISR_WUTWF_Msk   (0x1U << RTC_ISR_WUTWF_Pos) /*!< 0x00000004 */
#define RTC_ISR_WUTWF       RTC_ISR_WUTWF_Msk
#define RTC_ISR_ALRBWF_Pos  (1U)
#define RTC_ISR_ALRBWF_Msk  (0x1U << RTC_ISR_ALRBWF_Pos) /*!< 0x00000002 */
#define RTC_ISR_ALRBWF      RTC_ISR_ALRBWF_Msk
#define RTC_ISR_ALRAWF_Pos  (0U)
#define RTC_ISR_ALRAWF_Msk  (0x1U << RTC_ISR_ALRAWF_Pos) /*!< 0x00000001 */
#define RTC_ISR_ALRAWF      RTC_ISR_ALRAWF_Msk

/********************  Bits definition for RTC_PRER register  *****************/
#define RTC_PRER_PREDIV_A_Pos (16U)
#define RTC_PRER_PREDIV_A_Msk (0x7FU << RTC_PRER_PREDIV_A_Pos) /*!< 0x007F0000 */
#define RTC_PRER_PREDIV_A     RTC_PRER_PREDIV_A_Msk
#define RTC_PRER_PREDIV_S_Pos (0U)
#define RTC_PRER_PREDIV_S_Msk (0x7FFFU << RTC_PRER_PREDIV_S_Pos) /*!< 0x00007FFF */
#define RTC_PRER_PREDIV_S     RTC_PRER_PREDIV_S_Msk

/********************  Bits definition for RTC_WUTR register  *****************/
#define RTC_WUTR_WUT_Pos (0U)
#define RTC_WUTR_WUT_Msk (0xFFFFU << RTC_WUTR_WUT_Pos) /*!< 0x0000FFFF */
#define RTC_WUTR_WUT     RTC_WUTR_WUT_Msk

/********************  Bits definition for RTC_CALIBR register  ***************/
#define RTC_CALIBR_DCS_Pos (7U)
#define RTC_CALIBR_DCS_Msk (0x1U << RTC_CALIBR_DCS_Pos) /*!< 0x00000080 */
#define RTC_CALIBR_DCS     RTC_CALIBR_DCS_Msk
#define RTC_CALIBR_DC_Pos  (0U)
#define RTC_CALIBR_DC_Msk  (0x1FU << RTC_CALIBR_DC_Pos) /*!< 0x0000001F */
#define RTC_CALIBR_DC      RTC_CALIBR_DC_Msk

/********************  Bits definition for RTC_ALRMAR register  ***************/
#define RTC_ALRMAR_MSK4_Pos  (31U)
#define RTC_ALRMAR_MSK4_Msk  (0x1U << RTC_ALRMAR_MSK4_Pos) /*!< 0x80000000 */
#define RTC_ALRMAR_MSK4      RTC_ALRMAR_MSK4_Msk
#define RTC_ALRMAR_WDSEL_Pos (30U)
#define RTC_ALRMAR_WDSEL_Msk (0x1U << RTC_ALRMAR_WDSEL_Pos) /*!< 0x40000000 */
#define RTC_ALRMAR_WDSEL     RTC_ALRMAR_WDSEL_Msk
#define RTC_ALRMAR_DT_Pos    (28U)
#define RTC_ALRMAR_DT_Msk    (0x3U << RTC_ALRMAR_DT_Pos) /*!< 0x30000000 */
#define RTC_ALRMAR_DT        RTC_ALRMAR_DT_Msk
#define RTC_ALRMAR_DT_0      (0x1U << RTC_ALRMAR_DT_Pos) /*!< 0x10000000 */
#define RTC_ALRMAR_DT_1      (0x2U << RTC_ALRMAR_DT_Pos) /*!< 0x20000000 */
#define RTC_ALRMAR_DU_Pos    (24U)
#define RTC_ALRMAR_DU_Msk    (0xFU << RTC_ALRMAR_DU_Pos) /*!< 0x0F000000 */
#define RTC_ALRMAR_DU        RTC_ALRMAR_DU_Msk
#define RTC_ALRMAR_DU_0      (0x1U << RTC_ALRMAR_DU_Pos) /*!< 0x01000000 */
#define RTC_ALRMAR_DU_1      (0x2U << RTC_ALRMAR_DU_Pos) /*!< 0x02000000 */
#define RTC_ALRMAR_DU_2      (0x4U << RTC_ALRMAR_DU_Pos) /*!< 0x04000000 */
#define RTC_ALRMAR_DU_3      (0x8U << RTC_ALRMAR_DU_Pos) /*!< 0x08000000 */
#define RTC_ALRMAR_MSK3_Pos  (23U)
#define RTC_ALRMAR_MSK3_Msk  (0x1U << RTC_ALRMAR_MSK3_Pos) /*!< 0x00800000 */
#define RTC_ALRMAR_MSK3      RTC_ALRMAR_MSK3_Msk
#define RTC_ALRMAR_PM_Pos    (22U)
#define RTC_ALRMAR_PM_Msk    (0x1U << RTC_ALRMAR_PM_Pos) /*!< 0x00400000 */
#define RTC_ALRMAR_PM        RTC_ALRMAR_PM_Msk
#define RTC_ALRMAR_HT_Pos    (20U)
#define RTC_ALRMAR_HT_Msk    (0x3U << RTC_ALRMAR_HT_Pos) /*!< 0x00300000 */
#define RTC_ALRMAR_HT        RTC_ALRMAR_HT_Msk
#define RTC_ALRMAR_HT_0      (0x1U << RTC_ALRMAR_HT_Pos) /*!< 0x00100000 */
#define RTC_ALRMAR_HT_1      (0x2U << RTC_ALRMAR_HT_Pos) /*!< 0x00200000 */
#define RTC_ALRMAR_HU_Pos    (16U)
#define RTC_ALRMAR_HU_Msk    (0xFU << RTC_ALRMAR_HU_Pos) /*!< 0x000F0000 */
#define RTC_ALRMAR_HU        RTC_ALRMAR_HU_Msk
#define RTC_ALRMAR_HU_0      (0x1U << RTC_ALRMAR_HU_Pos) /*!< 0x00010000 */
#define RTC_ALRMAR_HU_1      (0x2U << RTC_ALRMAR_HU_Pos) /*!< 0x00020000 */
#define RTC_ALRMAR_HU_2      (0x4U << RTC_ALRMAR_HU_Pos) /*!< 0x00040000 */
#define RTC_ALRMAR_HU_3      (0x8U << RTC_ALRMAR_HU_Pos) /*!< 0x00080000 */
#define RTC_ALRMAR_MSK2_Pos  (15U)
#define RTC_ALRMAR_MSK2_Msk  (0x1U << RTC_ALRMAR_MSK2_Pos) /*!< 0x00008000 */
#define RTC_ALRMAR_MSK2      RTC_ALRMAR_MSK2_Msk
#define RTC_ALRMAR_MNT_Pos   (12U)
#define RTC_ALRMAR_MNT_Msk   (0x7U << RTC_ALRMAR_MNT_Pos) /*!< 0x00007000 */
#define RTC_ALRMAR_MNT       RTC_ALRMAR_MNT_Msk
#define RTC_ALRMAR_MNT_0     (0x1U << RTC_ALRMAR_MNT_Pos) /*!< 0x00001000 */
#define RTC_ALRMAR_MNT_1     (0x2U << RTC_ALRMAR_MNT_Pos) /*!< 0x00002000 */
#define RTC_ALRMAR_MNT_2     (0x4U << RTC_ALRMAR_MNT_Pos) /*!< 0x00004000 */
#define RTC_ALRMAR_MNU_Pos   (8U)
#define RTC_ALRMAR_MNU_Msk   (0xFU << RTC_ALRMAR_MNU_Pos) /*!< 0x00000F00 */
#define RTC_ALRMAR_MNU       RTC_ALRMAR_MNU_Msk
#define RTC_ALRMAR_MNU_0     (0x1U << RTC_ALRMAR_MNU_Pos) /*!< 0x00000100 */
#define RTC_ALRMAR_MNU_1     (0x2U << RTC_ALRMAR_MNU_Pos) /*!< 0x00000200 */
#define RTC_ALRMAR_MNU_2     (0x4U << RTC_ALRMAR_MNU_Pos) /*!< 0x00000400 */
#define RTC_ALRMAR_MNU_3     (0x8U << RTC_ALRMAR_MNU_Pos) /*!< 0x00000800 */
#define RTC_ALRMAR_MSK1_Pos  (7U)
#define RTC_ALRMAR_MSK1_Msk  (0x1U << RTC_ALRMAR_MSK1_Pos) /*!< 0x00000080 */
#define RTC_ALRMAR_MSK1      RTC_ALRMAR_MSK1_Msk
#define RTC_ALRMAR_ST_Pos    (4U)
#define RTC_ALRMAR_ST_Msk    (0x7U << RTC_ALRMAR_ST_Pos) /*!< 0x00000070 */
#define RTC_ALRMAR_ST        RTC_ALRMAR_ST_Msk
#define RTC_ALRMAR_ST_0      (0x1U << RTC_ALRMAR_ST_Pos) /*!< 0x00000010 */
#define RTC_ALRMAR_ST_1      (0x2U << RTC_ALRMAR_ST_Pos) /*!< 0x00000020 */
#define RTC_ALRMAR_ST_2      (0x4U << RTC_ALRMAR_ST_Pos) /*!< 0x00000040 */
#define RTC_ALRMAR_SU_Pos    (0U)
#define RTC_ALRMAR_SU_Msk    (0xFU << RTC_ALRMAR_SU_Pos) /*!< 0x0000000F */
#define RTC_ALRMAR_SU        RTC_ALRMAR_SU_Msk
#define RTC_ALRMAR_SU_0      (0x1U << RTC_ALRMAR_SU_Pos) /*!< 0x00000001 */
#define RTC_ALRMAR_SU_1      (0x2U << RTC_ALRMAR_SU_Pos) /*!< 0x00000002 */
#define RTC_ALRMAR_SU_2      (0x4U << RTC_ALRMAR_SU_Pos) /*!< 0x00000004 */
#define RTC_ALRMAR_SU_3      (0x8U << RTC_ALRMAR_SU_Pos) /*!< 0x00000008 */

/********************  Bits definition for RTC_ALRMBR register  ***************/
#define RTC_ALRMBR_MSK4_Pos  (31U)
#define RTC_ALRMBR_MSK4_Msk  (0x1U << RTC_ALRMBR_MSK4_Pos) /*!< 0x80000000 */
#define RTC_ALRMBR_MSK4      RTC_ALRMBR_MSK4_Msk
#define RTC_ALRMBR_WDSEL_Pos (30U)
#define RTC_ALRMBR_WDSEL_Msk (0x1U << RTC_ALRMBR_WDSEL_Pos) /*!< 0x40000000 */
#define RTC_ALRMBR_WDSEL     RTC_ALRMBR_WDSEL_Msk
#define RTC_ALRMBR_DT_Pos    (28U)
#define RTC_ALRMBR_DT_Msk    (0x3U << RTC_ALRMBR_DT_Pos) /*!< 0x30000000 */
#define RTC_ALRMBR_DT        RTC_ALRMBR_DT_Msk
#define RTC_ALRMBR_DT_0      (0x1U << RTC_ALRMBR_DT_Pos) /*!< 0x10000000 */
#define RTC_ALRMBR_DT_1      (0x2U << RTC_ALRMBR_DT_Pos) /*!< 0x20000000 */
#define RTC_ALRMBR_DU_Pos    (24U)
#define RTC_ALRMBR_DU_Msk    (0xFU << RTC_ALRMBR_DU_Pos) /*!< 0x0F000000 */
#define RTC_ALRMBR_DU        RTC_ALRMBR_DU_Msk
#define RTC_ALRMBR_DU_0      (0x1U << RTC_ALRMBR_DU_Pos) /*!< 0x01000000 */
#define RTC_ALRMBR_DU_1      (0x2U << RTC_ALRMBR_DU_Pos) /*!< 0x02000000 */
#define RTC_ALRMBR_DU_2      (0x4U << RTC_ALRMBR_DU_Pos) /*!< 0x04000000 */
#define RTC_ALRMBR_DU_3      (0x8U << RTC_ALRMBR_DU_Pos) /*!< 0x08000000 */
#define RTC_ALRMBR_MSK3_Pos  (23U)
#define RTC_ALRMBR_MSK3_Msk  (0x1U << RTC_ALRMBR_MSK3_Pos) /*!< 0x00800000 */
#define RTC_ALRMBR_MSK3      RTC_ALRMBR_MSK3_Msk
#define RTC_ALRMBR_PM_Pos    (22U)
#define RTC_ALRMBR_PM_Msk    (0x1U << RTC_ALRMBR_PM_Pos) /*!< 0x00400000 */
#define RTC_ALRMBR_PM        RTC_ALRMBR_PM_Msk
#define RTC_ALRMBR_HT_Pos    (20U)
#define RTC_ALRMBR_HT_Msk    (0x3U << RTC_ALRMBR_HT_Pos) /*!< 0x00300000 */
#define RTC_ALRMBR_HT        RTC_ALRMBR_HT_Msk
#define RTC_ALRMBR_HT_0      (0x1U << RTC_ALRMBR_HT_Pos) /*!< 0x00100000 */
#define RTC_ALRMBR_HT_1      (0x2U << RTC_ALRMBR_HT_Pos) /*!< 0x00200000 */
#define RTC_ALRMBR_HU_Pos    (16U)
#define RTC_ALRMBR_HU_Msk    (0xFU << RTC_ALRMBR_HU_Pos) /*!< 0x000F0000 */
#define RTC_ALRMBR_HU        RTC_ALRMBR_HU_Msk
#define RTC_ALRMBR_HU_0      (0x1U << RTC_ALRMBR_HU_Pos) /*!< 0x00010000 */
#define RTC_ALRMBR_HU_1      (0x2U << RTC_ALRMBR_HU_Pos) /*!< 0x00020000 */
#define RTC_ALRMBR_HU_2      (0x4U << RTC_ALRMBR_HU_Pos) /*!< 0x00040000 */
#define RTC_ALRMBR_HU_3      (0x8U << RTC_ALRMBR_HU_Pos) /*!< 0x00080000 */
#define RTC_ALRMBR_MSK2_Pos  (15U)
#define RTC_ALRMBR_MSK2_Msk  (0x1U << RTC_ALRMBR_MSK2_Pos) /*!< 0x00008000 */
#define RTC_ALRMBR_MSK2      RTC_ALRMBR_MSK2_Msk
#define RTC_ALRMBR_MNT_Pos   (12U)
#define RTC_ALRMBR_MNT_Msk   (0x7U << RTC_ALRMBR_MNT_Pos) /*!< 0x00007000 */
#define RTC_ALRMBR_MNT       RTC_ALRMBR_MNT_Msk
#define RTC_ALRMBR_MNT_0     (0x1U << RTC_ALRMBR_MNT_Pos) /*!< 0x00001000 */
#define RTC_ALRMBR_MNT_1     (0x2U << RTC_ALRMBR_MNT_Pos) /*!< 0x00002000 */
#define RTC_ALRMBR_MNT_2     (0x4U << RTC_ALRMBR_MNT_Pos) /*!< 0x00004000 */
#define RTC_ALRMBR_MNU_Pos   (8U)
#define RTC_ALRMBR_MNU_Msk   (0xFU << RTC_ALRMBR_MNU_Pos) /*!< 0x00000F00 */
#define RTC_ALRMBR_MNU       RTC_ALRMBR_MNU_Msk
#define RTC_ALRMBR_MNU_0     (0x1U << RTC_ALRMBR_MNU_Pos) /*!< 0x00000100 */
#define RTC_ALRMBR_MNU_1     (0x2U << RTC_ALRMBR_MNU_Pos) /*!< 0x00000200 */
#define RTC_ALRMBR_MNU_2     (0x4U << RTC_ALRMBR_MNU_Pos) /*!< 0x00000400 */
#define RTC_ALRMBR_MNU_3     (0x8U << RTC_ALRMBR_MNU_Pos) /*!< 0x00000800 */
#define RTC_ALRMBR_MSK1_Pos  (7U)
#define RTC_ALRMBR_MSK1_Msk  (0x1U << RTC_ALRMBR_MSK1_Pos) /*!< 0x00000080 */
#define RTC_ALRMBR_MSK1      RTC_ALRMBR_MSK1_Msk
#define RTC_ALRMBR_ST_Pos    (4U)
#define RTC_ALRMBR_ST_Msk    (0x7U << RTC_ALRMBR_ST_Pos) /*!< 0x00000070 */
#define RTC_ALRMBR_ST        RTC_ALRMBR_ST_Msk
#define RTC_ALRMBR_ST_0      (0x1U << RTC_ALRMBR_ST_Pos) /*!< 0x00000010 */
#define RTC_ALRMBR_ST_1      (0x2U << RTC_ALRMBR_ST_Pos) /*!< 0x00000020 */
#define RTC_ALRMBR_ST_2      (0x4U << RTC_ALRMBR_ST_Pos) /*!< 0x00000040 */
#define RTC_ALRMBR_SU_Pos    (0U)
#define RTC_ALRMBR_SU_Msk    (0xFU << RTC_ALRMBR_SU_Pos) /*!< 0x0000000F */
#define RTC_ALRMBR_SU        RTC_ALRMBR_SU_Msk
#define RTC_ALRMBR_SU_0      (0x1U << RTC_ALRMBR_SU_Pos) /*!< 0x00000001 */
#define RTC_ALRMBR_SU_1      (0x2U << RTC_ALRMBR_SU_Pos) /*!< 0x00000002 */
#define RTC_ALRMBR_SU_2      (0x4U << RTC_ALRMBR_SU_Pos) /*!< 0x00000004 */
#define RTC_ALRMBR_SU_3      (0x8U << RTC_ALRMBR_SU_Pos) /*!< 0x00000008 */

/********************  Bits definition for RTC_WPR register  ******************/
#define RTC_WPR_KEY_Pos (0U)
#define RTC_WPR_KEY_Msk (0xFFU << RTC_WPR_KEY_Pos) /*!< 0x000000FF */
#define RTC_WPR_KEY     RTC_WPR_KEY_Msk

/********************  Bits definition for RTC_SSR register  ******************/
#define RTC_SSR_SS_Pos (0U)
#define RTC_SSR_SS_Msk (0xFFFFU << RTC_SSR_SS_Pos) /*!< 0x0000FFFF */
#define RTC_SSR_SS     RTC_SSR_SS_Msk

/********************  Bits definition for RTC_SHIFTR register  ***************/
#define RTC_SHIFTR_SUBFS_Pos (0U)
#define RTC_SHIFTR_SUBFS_Msk (0x7FFFU << RTC_SHIFTR_SUBFS_Pos) /*!< 0x00007FFF */
#define RTC_SHIFTR_SUBFS     RTC_SHIFTR_SUBFS_Msk
#define RTC_SHIFTR_ADD1S_Pos (31U)
#define RTC_SHIFTR_ADD1S_Msk (0x1U << RTC_SHIFTR_ADD1S_Pos) /*!< 0x80000000 */
#define RTC_SHIFTR_ADD1S     RTC_SHIFTR_ADD1S_Msk

/********************  Bits definition for RTC_TSTR register  *****************/
#define RTC_TSTR_PM_Pos  (22U)
#define RTC_TSTR_PM_Msk  (0x1U << RTC_TSTR_PM_Pos) /*!< 0x00400000 */
#define RTC_TSTR_PM      RTC_TSTR_PM_Msk
#define RTC_TSTR_HT_Pos  (20U)
#define RTC_TSTR_HT_Msk  (0x3U << RTC_TSTR_HT_Pos) /*!< 0x00300000 */
#define RTC_TSTR_HT      RTC_TSTR_HT_Msk
#define RTC_TSTR_HT_0    (0x1U << RTC_TSTR_HT_Pos) /*!< 0x00100000 */
#define RTC_TSTR_HT_1    (0x2U << RTC_TSTR_HT_Pos) /*!< 0x00200000 */
#define RTC_TSTR_HU_Pos  (16U)
#define RTC_TSTR_HU_Msk  (0xFU << RTC_TSTR_HU_Pos) /*!< 0x000F0000 */
#define RTC_TSTR_HU      RTC_TSTR_HU_Msk
#define RTC_TSTR_HU_0    (0x1U << RTC_TSTR_HU_Pos) /*!< 0x00010000 */
#define RTC_TSTR_HU_1    (0x2U << RTC_TSTR_HU_Pos) /*!< 0x00020000 */
#define RTC_TSTR_HU_2    (0x4U << RTC_TSTR_HU_Pos) /*!< 0x00040000 */
#define RTC_TSTR_HU_3    (0x8U << RTC_TSTR_HU_Pos) /*!< 0x00080000 */
#define RTC_TSTR_MNT_Pos (12U)
#define RTC_TSTR_MNT_Msk (0x7U << RTC_TSTR_MNT_Pos) /*!< 0x00007000 */
#define RTC_TSTR_MNT     RTC_TSTR_MNT_Msk
#define RTC_TSTR_MNT_0   (0x1U << RTC_TSTR_MNT_Pos) /*!< 0x00001000 */
#define RTC_TSTR_MNT_1   (0x2U << RTC_TSTR_MNT_Pos) /*!< 0x00002000 */
#define RTC_TSTR_MNT_2   (0x4U << RTC_TSTR_MNT_Pos) /*!< 0x00004000 */
#define RTC_TSTR_MNU_Pos (8U)
#define RTC_TSTR_MNU_Msk (0xFU << RTC_TSTR_MNU_Pos) /*!< 0x00000F00 */
#define RTC_TSTR_MNU     RTC_TSTR_MNU_Msk
#define RTC_TSTR_MNU_0   (0x1U << RTC_TSTR_MNU_Pos) /*!< 0x00000100 */
#define RTC_TSTR_MNU_1   (0x2U << RTC_TSTR_MNU_Pos) /*!< 0x00000200 */
#define RTC_TSTR_MNU_2   (0x4U << RTC_TSTR_MNU_Pos) /*!< 0x00000400 */
#define RTC_TSTR_MNU_3   (0x8U << RTC_TSTR_MNU_Pos) /*!< 0x00000800 */
#define RTC_TSTR_ST_Pos  (4U)
#define RTC_TSTR_ST_Msk  (0x7U << RTC_TSTR_ST_Pos) /*!< 0x00000070 */
#define RTC_TSTR_ST      RTC_TSTR_ST_Msk
#define RTC_TSTR_ST_0    (0x1U << RTC_TSTR_ST_Pos) /*!< 0x00000010 */
#define RTC_TSTR_ST_1    (0x2U << RTC_TSTR_ST_Pos) /*!< 0x00000020 */
#define RTC_TSTR_ST_2    (0x4U << RTC_TSTR_ST_Pos) /*!< 0x00000040 */
#define RTC_TSTR_SU_Pos  (0U)
#define RTC_TSTR_SU_Msk  (0xFU << RTC_TSTR_SU_Pos) /*!< 0x0000000F */
#define RTC_TSTR_SU      RTC_TSTR_SU_Msk
#define RTC_TSTR_SU_0    (0x1U << RTC_TSTR_SU_Pos) /*!< 0x00000001 */
#define RTC_TSTR_SU_1    (0x2U << RTC_TSTR_SU_Pos) /*!< 0x00000002 */
#define RTC_TSTR_SU_2    (0x4U << RTC_TSTR_SU_Pos) /*!< 0x00000004 */
#define RTC_TSTR_SU_3    (0x8U << RTC_TSTR_SU_Pos) /*!< 0x00000008 */

/********************  Bits definition for RTC_TSDR register  *****************/
#define RTC_TSDR_WDU_Pos (13U)
#define RTC_TSDR_WDU_Msk (0x7U << RTC_TSDR_WDU_Pos) /*!< 0x0000E000 */
#define RTC_TSDR_WDU     RTC_TSDR_WDU_Msk
#define RTC_TSDR_WDU_0   (0x1U << RTC_TSDR_WDU_Pos) /*!< 0x00002000 */
#define RTC_TSDR_WDU_1   (0x2U << RTC_TSDR_WDU_Pos) /*!< 0x00004000 */
#define RTC_TSDR_WDU_2   (0x4U << RTC_TSDR_WDU_Pos) /*!< 0x00008000 */
#define RTC_TSDR_MT_Pos  (12U)
#define RTC_TSDR_MT_Msk  (0x1U << RTC_TSDR_MT_Pos) /*!< 0x00001000 */
#define RTC_TSDR_MT      RTC_TSDR_MT_Msk
#define RTC_TSDR_MU_Pos  (8U)
#define RTC_TSDR_MU_Msk  (0xFU << RTC_TSDR_MU_Pos) /*!< 0x00000F00 */
#define RTC_TSDR_MU      RTC_TSDR_MU_Msk
#define RTC_TSDR_MU_0    (0x1U << RTC_TSDR_MU_Pos) /*!< 0x00000100 */
#define RTC_TSDR_MU_1    (0x2U << RTC_TSDR_MU_Pos) /*!< 0x00000200 */
#define RTC_TSDR_MU_2    (0x4U << RTC_TSDR_MU_Pos) /*!< 0x00000400 */
#define RTC_TSDR_MU_3    (0x8U << RTC_TSDR_MU_Pos) /*!< 0x00000800 */
#define RTC_TSDR_DT_Pos  (4U)
#define RTC_TSDR_DT_Msk  (0x3U << RTC_TSDR_DT_Pos) /*!< 0x00000030 */
#define RTC_TSDR_DT      RTC_TSDR_DT_Msk
#define RTC_TSDR_DT_0    (0x1U << RTC_TSDR_DT_Pos) /*!< 0x00000010 */
#define RTC_TSDR_DT_1    (0x2U << RTC_TSDR_DT_Pos) /*!< 0x00000020 */
#define RTC_TSDR_DU_Pos  (0U)
#define RTC_TSDR_DU_Msk  (0xFU << RTC_TSDR_DU_Pos) /*!< 0x0000000F */
#define RTC_TSDR_DU      RTC_TSDR_DU_Msk
#define RTC_TSDR_DU_0    (0x1U << RTC_TSDR_DU_Pos) /*!< 0x00000001 */
#define RTC_TSDR_DU_1    (0x2U << RTC_TSDR_DU_Pos) /*!< 0x00000002 */
#define RTC_TSDR_DU_2    (0x4U << RTC_TSDR_DU_Pos) /*!< 0x00000004 */
#define RTC_TSDR_DU_3    (0x8U << RTC_TSDR_DU_Pos) /*!< 0x00000008 */

/********************  Bits definition for RTC_TSSSR register  ****************/
#define RTC_TSSSR_SS_Pos (0U)
#define RTC_TSSSR_SS_Msk (0xFFFFU << RTC_TSSSR_SS_Pos) /*!< 0x0000FFFF */
#define RTC_TSSSR_SS     RTC_TSSSR_SS_Msk

/********************  Bits definition for RTC_CAL register  *****************/
#define RTC_CALR_CALP_Pos   (15U)
#define RTC_CALR_CALP_Msk   (0x1U << RTC_CALR_CALP_Pos) /*!< 0x00008000 */
#define RTC_CALR_CALP       RTC_CALR_CALP_Msk
#define RTC_CALR_CALW8_Pos  (14U)
#define RTC_CALR_CALW8_Msk  (0x1U << RTC_CALR_CALW8_Pos) /*!< 0x00004000 */
#define RTC_CALR_CALW8      RTC_CALR_CALW8_Msk
#define RTC_CALR_CALW16_Pos (13U)
#define RTC_CALR_CALW16_Msk (0x1U << RTC_CALR_CALW16_Pos) /*!< 0x00002000 */
#define RTC_CALR_CALW16     RTC_CALR_CALW16_Msk
#define RTC_CALR_CALM_Pos   (0U)
#define RTC_CALR_CALM_Msk   (0x1FFU << RTC_CALR_CALM_Pos) /*!< 0x000001FF */
#define RTC_CALR_CALM       RTC_CALR_CALM_Msk
#define RTC_CALR_CALM_0     (0x001U << RTC_CALR_CALM_Pos) /*!< 0x00000001 */
#define RTC_CALR_CALM_1     (0x002U << RTC_CALR_CALM_Pos) /*!< 0x00000002 */
#define RTC_CALR_CALM_2     (0x004U << RTC_CALR_CALM_Pos) /*!< 0x00000004 */
#define RTC_CALR_CALM_3     (0x008U << RTC_CALR_CALM_Pos) /*!< 0x00000008 */
#define RTC_CALR_CALM_4     (0x010U << RTC_CALR_CALM_Pos) /*!< 0x00000010 */
#define RTC_CALR_CALM_5     (0x020U << RTC_CALR_CALM_Pos) /*!< 0x00000020 */
#define RTC_CALR_CALM_6     (0x040U << RTC_CALR_CALM_Pos) /*!< 0x00000040 */
#define RTC_CALR_CALM_7     (0x080U << RTC_CALR_CALM_Pos) /*!< 0x00000080 */
#define RTC_CALR_CALM_8     (0x100U << RTC_CALR_CALM_Pos) /*!< 0x00000100 */

/********************  Bits definition for RTC_TAFCR register  ****************/
#define RTC_TAFCR_ALARMOUTTYPE_Pos (18U)
#define RTC_TAFCR_ALARMOUTTYPE_Msk (0x1U << RTC_TAFCR_ALARMOUTTYPE_Pos) /*!< 0x00040000 */
#define RTC_TAFCR_ALARMOUTTYPE     RTC_TAFCR_ALARMOUTTYPE_Msk
#define RTC_TAFCR_TSINSEL_Pos      (17U)
#define RTC_TAFCR_TSINSEL_Msk      (0x1U << RTC_TAFCR_TSINSEL_Pos) /*!< 0x00020000 */
#define RTC_TAFCR_TSINSEL          RTC_TAFCR_TSINSEL_Msk
#define RTC_TAFCR_TAMP1INSEL_Pos   (16U)
#define RTC_TAFCR_TAMP1INSEL_Msk   (0x1U << RTC_TAFCR_TAMP1INSEL_Pos) /*!< 0x00010000 */
#define RTC_TAFCR_TAMP1INSEL       RTC_TAFCR_TAMP1INSEL_Msk
#define RTC_TAFCR_TAMPPUDIS_Pos    (15U)
#define RTC_TAFCR_TAMPPUDIS_Msk    (0x1U << RTC_TAFCR_TAMPPUDIS_Pos) /*!< 0x00008000 */
#define RTC_TAFCR_TAMPPUDIS        RTC_TAFCR_TAMPPUDIS_Msk
#define RTC_TAFCR_TAMPPRCH_Pos     (13U)
#define RTC_TAFCR_TAMPPRCH_Msk     (0x3U << RTC_TAFCR_TAMPPRCH_Pos) /*!< 0x00006000 */
#define RTC_TAFCR_TAMPPRCH         RTC_TAFCR_TAMPPRCH_Msk
#define RTC_TAFCR_TAMPPRCH_0       (0x1U << RTC_TAFCR_TAMPPRCH_Pos) /*!< 0x00002000 */
#define RTC_TAFCR_TAMPPRCH_1       (0x2U << RTC_TAFCR_TAMPPRCH_Pos) /*!< 0x00004000 */
#define RTC_TAFCR_TAMPFLT_Pos      (11U)
#define RTC_TAFCR_TAMPFLT_Msk      (0x3U << RTC_TAFCR_TAMPFLT_Pos) /*!< 0x00001800 */
#define RTC_TAFCR_TAMPFLT          RTC_TAFCR_TAMPFLT_Msk
#define RTC_TAFCR_TAMPFLT_0        (0x1U << RTC_TAFCR_TAMPFLT_Pos) /*!< 0x00000800 */
#define RTC_TAFCR_TAMPFLT_1        (0x2U << RTC_TAFCR_TAMPFLT_Pos) /*!< 0x00001000 */
#define RTC_TAFCR_TAMPFREQ_Pos     (8U)
#define RTC_TAFCR_TAMPFREQ_Msk     (0x7U << RTC_TAFCR_TAMPFREQ_Pos) /*!< 0x00000700 */
#define RTC_TAFCR_TAMPFREQ         RTC_TAFCR_TAMPFREQ_Msk
#define RTC_TAFCR_TAMPFREQ_0       (0x1U << RTC_TAFCR_TAMPFREQ_Pos) /*!< 0x00000100 */
#define RTC_TAFCR_TAMPFREQ_1       (0x2U << RTC_TAFCR_TAMPFREQ_Pos) /*!< 0x00000200 */
#define RTC_TAFCR_TAMPFREQ_2       (0x4U << RTC_TAFCR_TAMPFREQ_Pos) /*!< 0x00000400 */
#define RTC_TAFCR_TAMPTS_Pos       (7U)
#define RTC_TAFCR_TAMPTS_Msk       (0x1U << RTC_TAFCR_TAMPTS_Pos) /*!< 0x00000080 */
#define RTC_TAFCR_TAMPTS           RTC_TAFCR_TAMPTS_Msk
#define RTC_TAFCR_TAMP2TRG_Pos     (4U)
#define RTC_TAFCR_TAMP2TRG_Msk     (0x1U << RTC_TAFCR_TAMP2TRG_Pos) /*!< 0x00000010 */
#define RTC_TAFCR_TAMP2TRG         RTC_TAFCR_TAMP2TRG_Msk
#define RTC_TAFCR_TAMP2E_Pos       (3U)
#define RTC_TAFCR_TAMP2E_Msk       (0x1U << RTC_TAFCR_TAMP2E_Pos) /*!< 0x00000008 */
#define RTC_TAFCR_TAMP2E           RTC_TAFCR_TAMP2E_Msk
#define RTC_TAFCR_TAMPIE_Pos       (2U)
#define RTC_TAFCR_TAMPIE_Msk       (0x1U << RTC_TAFCR_TAMPIE_Pos) /*!< 0x00000004 */
#define RTC_TAFCR_TAMPIE           RTC_TAFCR_TAMPIE_Msk
#define RTC_TAFCR_TAMP1TRG_Pos     (1U)
#define RTC_TAFCR_TAMP1TRG_Msk     (0x1U << RTC_TAFCR_TAMP1TRG_Pos) /*!< 0x00000002 */
#define RTC_TAFCR_TAMP1TRG         RTC_TAFCR_TAMP1TRG_Msk
#define RTC_TAFCR_TAMP1E_Pos       (0U)
#define RTC_TAFCR_TAMP1E_Msk       (0x1U << RTC_TAFCR_TAMP1E_Pos) /*!< 0x00000001 */
#define RTC_TAFCR_TAMP1E           RTC_TAFCR_TAMP1E_Msk

/* Legacy defines */
#define RTC_TAFCR_TAMPINSEL RTC_TAFCR_TAMP1INSEL

/********************  Bits definition for RTC_ALRMASSR register  *************/
#define RTC_ALRMASSR_MASKSS_Pos (24U)
#define RTC_ALRMASSR_MASKSS_Msk (0xFU << RTC_ALRMASSR_MASKSS_Pos) /*!< 0x0F000000 */
#define RTC_ALRMASSR_MASKSS     RTC_ALRMASSR_MASKSS_Msk
#define RTC_ALRMASSR_MASKSS_0   (0x1U << RTC_ALRMASSR_MASKSS_Pos) /*!< 0x01000000 */
#define RTC_ALRMASSR_MASKSS_1   (0x2U << RTC_ALRMASSR_MASKSS_Pos) /*!< 0x02000000 */
#define RTC_ALRMASSR_MASKSS_2   (0x4U << RTC_ALRMASSR_MASKSS_Pos) /*!< 0x04000000 */
#define RTC_ALRMASSR_MASKSS_3   (0x8U << RTC_ALRMASSR_MASKSS_Pos) /*!< 0x08000000 */
#define RTC_ALRMASSR_SS_Pos     (0U)
#define RTC_ALRMASSR_SS_Msk     (0x7FFFU << RTC_ALRMASSR_SS_Pos) /*!< 0x00007FFF */
#define RTC_ALRMASSR_SS         RTC_ALRMASSR_SS_Msk

/********************  Bits definition for RTC_ALRMBSSR register  *************/
#define RTC_ALRMBSSR_MASKSS_Pos (24U)
#define RTC_ALRMBSSR_MASKSS_Msk (0xFU << RTC_ALRMBSSR_MASKSS_Pos) /*!< 0x0F000000 */
#define RTC_ALRMBSSR_MASKSS     RTC_ALRMBSSR_MASKSS_Msk
#define RTC_ALRMBSSR_MASKSS_0   (0x1U << RTC_ALRMBSSR_MASKSS_Pos) /*!< 0x01000000 */
#define RTC_ALRMBSSR_MASKSS_1   (0x2U << RTC_ALRMBSSR_MASKSS_Pos) /*!< 0x02000000 */
#define RTC_ALRMBSSR_MASKSS_2   (0x4U << RTC_ALRMBSSR_MASKSS_Pos) /*!< 0x04000000 */
#define RTC_ALRMBSSR_MASKSS_3   (0x8U << RTC_ALRMBSSR_MASKSS_Pos) /*!< 0x08000000 */
#define RTC_ALRMBSSR_SS_Pos     (0U)
#define RTC_ALRMBSSR_SS_Msk     (0x7FFFU << RTC_ALRMBSSR_SS_Pos) /*!< 0x00007FFF */
#define RTC_ALRMBSSR_SS         RTC_ALRMBSSR_SS_Msk

/********************  Bits definition for RTC_BKP0R register  ****************/
#define RTC_BKP0R_Pos (0U)
#define RTC_BKP0R_Msk (0xFFFFFFFFU << RTC_BKP0R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP0R     RTC_BKP0R_Msk

/********************  Bits definition for RTC_BKP1R register  ****************/
#define RTC_BKP1R_Pos (0U)
#define RTC_BKP1R_Msk (0xFFFFFFFFU << RTC_BKP1R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP1R     RTC_BKP1R_Msk

/********************  Bits definition for RTC_BKP2R register  ****************/
#define RTC_BKP2R_Pos (0U)
#define RTC_BKP2R_Msk (0xFFFFFFFFU << RTC_BKP2R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP2R     RTC_BKP2R_Msk

/********************  Bits definition for RTC_BKP3R register  ****************/
#define RTC_BKP3R_Pos (0U)
#define RTC_BKP3R_Msk (0xFFFFFFFFU << RTC_BKP3R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP3R     RTC_BKP3R_Msk

/********************  Bits definition for RTC_BKP4R register  ****************/
#define RTC_BKP4R_Pos (0U)
#define RTC_BKP4R_Msk (0xFFFFFFFFU << RTC_BKP4R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP4R     RTC_BKP4R_Msk

/********************  Bits definition for RTC_BKP5R register  ****************/
#define RTC_BKP5R_Pos (0U)
#define RTC_BKP5R_Msk (0xFFFFFFFFU << RTC_BKP5R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP5R     RTC_BKP5R_Msk

/********************  Bits definition for RTC_BKP6R register  ****************/
#define RTC_BKP6R_Pos (0U)
#define RTC_BKP6R_Msk (0xFFFFFFFFU << RTC_BKP6R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP6R     RTC_BKP6R_Msk

/********************  Bits definition for RTC_BKP7R register  ****************/
#define RTC_BKP7R_Pos (0U)
#define RTC_BKP7R_Msk (0xFFFFFFFFU << RTC_BKP7R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP7R     RTC_BKP7R_Msk

/********************  Bits definition for RTC_BKP8R register  ****************/
#define RTC_BKP8R_Pos (0U)
#define RTC_BKP8R_Msk (0xFFFFFFFFU << RTC_BKP8R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP8R     RTC_BKP8R_Msk

/********************  Bits definition for RTC_BKP9R register  ****************/
#define RTC_BKP9R_Pos (0U)
#define RTC_BKP9R_Msk (0xFFFFFFFFU << RTC_BKP9R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP9R     RTC_BKP9R_Msk

/********************  Bits definition for RTC_BKP10R register  ***************/
#define RTC_BKP10R_Pos (0U)
#define RTC_BKP10R_Msk (0xFFFFFFFFU << RTC_BKP10R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP10R     RTC_BKP10R_Msk

/********************  Bits definition for RTC_BKP11R register  ***************/
#define RTC_BKP11R_Pos (0U)
#define RTC_BKP11R_Msk (0xFFFFFFFFU << RTC_BKP11R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP11R     RTC_BKP11R_Msk

/********************  Bits definition for RTC_BKP12R register  ***************/
#define RTC_BKP12R_Pos (0U)
#define RTC_BKP12R_Msk (0xFFFFFFFFU << RTC_BKP12R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP12R     RTC_BKP12R_Msk

/********************  Bits definition for RTC_BKP13R register  ***************/
#define RTC_BKP13R_Pos (0U)
#define RTC_BKP13R_Msk (0xFFFFFFFFU << RTC_BKP13R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP13R     RTC_BKP13R_Msk

/********************  Bits definition for RTC_BKP14R register  ***************/
#define RTC_BKP14R_Pos (0U)
#define RTC_BKP14R_Msk (0xFFFFFFFFU << RTC_BKP14R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP14R     RTC_BKP14R_Msk

/********************  Bits definition for RTC_BKP15R register  ***************/
#define RTC_BKP15R_Pos (0U)
#define RTC_BKP15R_Msk (0xFFFFFFFFU << RTC_BKP15R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP15R     RTC_BKP15R_Msk

/********************  Bits definition for RTC_BKP16R register  ***************/
#define RTC_BKP16R_Pos (0U)
#define RTC_BKP16R_Msk (0xFFFFFFFFU << RTC_BKP16R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP16R     RTC_BKP16R_Msk

/********************  Bits definition for RTC_BKP17R register  ***************/
#define RTC_BKP17R_Pos (0U)
#define RTC_BKP17R_Msk (0xFFFFFFFFU << RTC_BKP17R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP17R     RTC_BKP17R_Msk

/********************  Bits definition for RTC_BKP18R register  ***************/
#define RTC_BKP18R_Pos (0U)
#define RTC_BKP18R_Msk (0xFFFFFFFFU << RTC_BKP18R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP18R     RTC_BKP18R_Msk

/********************  Bits definition for RTC_BKP19R register  ***************/
#define RTC_BKP19R_Pos (0U)
#define RTC_BKP19R_Msk (0xFFFFFFFFU << RTC_BKP19R_Pos) /*!< 0xFFFFFFFF */
#define RTC_BKP19R     RTC_BKP19R_Msk

/******************** Number of backup registers ******************************/
#define RTC_BKP_NUMBER 0x000000014U


/******************************************************************************/
/*                                                                            */
/*                          SD host Interface                                 */
/*                                                                            */
/******************************************************************************/
/******************  Bit definition for SDIO_POWER register  ******************/
#define SDIO_POWER_PWRCTRL_Pos (0U)
#define SDIO_POWER_PWRCTRL_Msk (0x3U << SDIO_POWER_PWRCTRL_Pos) /*!< 0x00000003 */
#define SDIO_POWER_PWRCTRL     SDIO_POWER_PWRCTRL_Msk           /*!<PWRCTRL[1:0] bits (Power supply control bits) */
#define SDIO_POWER_PWRCTRL_0   (0x1U << SDIO_POWER_PWRCTRL_Pos) /*!< 0x01 */
#define SDIO_POWER_PWRCTRL_1   (0x2U << SDIO_POWER_PWRCTRL_Pos) /*!< 0x02 */

/******************  Bit definition for SDIO_CLKCR register  ******************/
#define SDIO_CLKCR_CLKDIV_Pos  (0U)
#define SDIO_CLKCR_CLKDIV_Msk  (0xFFU << SDIO_CLKCR_CLKDIV_Pos) /*!< 0x000000FF */
#define SDIO_CLKCR_CLKDIV      SDIO_CLKCR_CLKDIV_Msk            /*!<Clock divide factor             */
#define SDIO_CLKCR_CLKEN_Pos   (8U)
#define SDIO_CLKCR_CLKEN_Msk   (0x1U << SDIO_CLKCR_CLKEN_Pos) /*!< 0x00000100 */
#define SDIO_CLKCR_CLKEN       SDIO_CLKCR_CLKEN_Msk           /*!<Clock enable bit                */
#define SDIO_CLKCR_PWRSAV_Pos  (9U)
#define SDIO_CLKCR_PWRSAV_Msk  (0x1U << SDIO_CLKCR_PWRSAV_Pos) /*!< 0x00000200 */
#define SDIO_CLKCR_PWRSAV      SDIO_CLKCR_PWRSAV_Msk           /*!<Power saving configuration bit  */
#define SDIO_CLKCR_BYPASS_Pos  (10U)
#define SDIO_CLKCR_BYPASS_Msk  (0x1U << SDIO_CLKCR_BYPASS_Pos) /*!< 0x00000400 */
#define SDIO_CLKCR_BYPASS      SDIO_CLKCR_BYPASS_Msk           /*!<Clock divider bypass enable bit */

#define SDIO_CLKCR_WIDBUS_Pos  (11U)
#define SDIO_CLKCR_WIDBUS_Msk  (0x3U << SDIO_CLKCR_WIDBUS_Pos) /*!< 0x00001800 */
#define SDIO_CLKCR_WIDBUS      SDIO_CLKCR_WIDBUS_Msk           /*!<WIDBUS[1:0] bits (Wide bus mode enable bit) */
#define SDIO_CLKCR_WIDBUS_0    (0x1U << SDIO_CLKCR_WIDBUS_Pos) /*!< 0x0800 */
#define SDIO_CLKCR_WIDBUS_1    (0x2U << SDIO_CLKCR_WIDBUS_Pos) /*!< 0x1000 */

#define SDIO_CLKCR_NEGEDGE_Pos (13U)
#define SDIO_CLKCR_NEGEDGE_Msk (0x1U << SDIO_CLKCR_NEGEDGE_Pos) /*!< 0x00002000 */
#define SDIO_CLKCR_NEGEDGE     SDIO_CLKCR_NEGEDGE_Msk           /*!<SDIO_CK dephasing selection bit */
#define SDIO_CLKCR_HWFC_EN_Pos (14U)
#define SDIO_CLKCR_HWFC_EN_Msk (0x1U << SDIO_CLKCR_HWFC_EN_Pos) /*!< 0x00004000 */
#define SDIO_CLKCR_HWFC_EN     SDIO_CLKCR_HWFC_EN_Msk           /*!<HW Flow Control enable          */

/*******************  Bit definition for SDIO_ARG register  *******************/
#define SDIO_ARG_CMDARG_Pos (0U)
#define SDIO_ARG_CMDARG_Msk (0xFFFFFFFFU << SDIO_ARG_CMDARG_Pos) /*!< 0xFFFFFFFF */
#define SDIO_ARG_CMDARG     SDIO_ARG_CMDARG_Msk                  /*!<Command argument */

/*******************  Bit definition for SDIO_CMD register  *******************/
#define SDIO_CMD_CMDINDEX_Pos    (0U)
#define SDIO_CMD_CMDINDEX_Msk    (0x3FU << SDIO_CMD_CMDINDEX_Pos) /*!< 0x0000003F */
#define SDIO_CMD_CMDINDEX        SDIO_CMD_CMDINDEX_Msk            /*!<Command Index                               */

#define SDIO_CMD_WAITRESP_Pos    (6U)
#define SDIO_CMD_WAITRESP_Msk    (0x3U << SDIO_CMD_WAITRESP_Pos) /*!< 0x000000C0 */
#define SDIO_CMD_WAITRESP        SDIO_CMD_WAITRESP_Msk           /*!<WAITRESP[1:0] bits (Wait for response bits) */
#define SDIO_CMD_WAITRESP_0      (0x1U << SDIO_CMD_WAITRESP_Pos) /*!< 0x0040 */
#define SDIO_CMD_WAITRESP_1      (0x2U << SDIO_CMD_WAITRESP_Pos) /*!< 0x0080 */

#define SDIO_CMD_WAITINT_Pos     (8U)
#define SDIO_CMD_WAITINT_Msk     (0x1U << SDIO_CMD_WAITINT_Pos) /*!< 0x00000100 */
#define SDIO_CMD_WAITINT         SDIO_CMD_WAITINT_Msk           /*!<CPSM Waits for Interrupt Request                               */
#define SDIO_CMD_WAITPEND_Pos    (9U)
#define SDIO_CMD_WAITPEND_Msk    (0x1U << SDIO_CMD_WAITPEND_Pos) /*!< 0x00000200 */
#define SDIO_CMD_WAITPEND        SDIO_CMD_WAITPEND_Msk           /*!<CPSM Waits for ends of data transfer (CmdPend internal signal) */
#define SDIO_CMD_CPSMEN_Pos      (10U)
#define SDIO_CMD_CPSMEN_Msk      (0x1U << SDIO_CMD_CPSMEN_Pos) /*!< 0x00000400 */
#define SDIO_CMD_CPSMEN          SDIO_CMD_CPSMEN_Msk           /*!<Command path state machine (CPSM) Enable bit                   */
#define SDIO_CMD_SDIOSUSPEND_Pos (11U)
#define SDIO_CMD_SDIOSUSPEND_Msk (0x1U << SDIO_CMD_SDIOSUSPEND_Pos) /*!< 0x00000800 */
#define SDIO_CMD_SDIOSUSPEND     SDIO_CMD_SDIOSUSPEND_Msk           /*!<SD I/O suspend command                                         */
#define SDIO_CMD_ENCMDCOMPL_Pos  (12U)
#define SDIO_CMD_ENCMDCOMPL_Msk  (0x1U << SDIO_CMD_ENCMDCOMPL_Pos) /*!< 0x00001000 */
#define SDIO_CMD_ENCMDCOMPL      SDIO_CMD_ENCMDCOMPL_Msk           /*!<Enable CMD completion                                          */
#define SDIO_CMD_NIEN_Pos        (13U)
#define SDIO_CMD_NIEN_Msk        (0x1U << SDIO_CMD_NIEN_Pos) /*!< 0x00002000 */
#define SDIO_CMD_NIEN            SDIO_CMD_NIEN_Msk           /*!<Not Interrupt Enable                                           */
#define SDIO_CMD_CEATACMD_Pos    (14U)
#define SDIO_CMD_CEATACMD_Msk    (0x1U << SDIO_CMD_CEATACMD_Pos) /*!< 0x00004000 */
#define SDIO_CMD_CEATACMD        SDIO_CMD_CEATACMD_Msk           /*!<CE-ATA command                                                 */

/*****************  Bit definition for SDIO_RESPCMD register  *****************/
#define SDIO_RESPCMD_RESPCMD_Pos (0U)
#define SDIO_RESPCMD_RESPCMD_Msk (0x3FU << SDIO_RESPCMD_RESPCMD_Pos) /*!< 0x0000003F */
#define SDIO_RESPCMD_RESPCMD     SDIO_RESPCMD_RESPCMD_Msk            /*!<Response command index */

/******************  Bit definition for SDIO_RESP0 register  ******************/
#define SDIO_RESP0_CARDSTATUS0_Pos (0U)
#define SDIO_RESP0_CARDSTATUS0_Msk (0xFFFFFFFFU << SDIO_RESP0_CARDSTATUS0_Pos) /*!< 0xFFFFFFFF */
#define SDIO_RESP0_CARDSTATUS0     SDIO_RESP0_CARDSTATUS0_Msk                  /*!<Card Status */

/******************  Bit definition for SDIO_RESP1 register  ******************/
#define SDIO_RESP1_CARDSTATUS1_Pos (0U)
#define SDIO_RESP1_CARDSTATUS1_Msk (0xFFFFFFFFU << SDIO_RESP1_CARDSTATUS1_Pos) /*!< 0xFFFFFFFF */
#define SDIO_RESP1_CARDSTATUS1     SDIO_RESP1_CARDSTATUS1_Msk                  /*!<Card Status */

/******************  Bit definition for SDIO_RESP2 register  ******************/
#define SDIO_RESP2_CARDSTATUS2_Pos (0U)
#define SDIO_RESP2_CARDSTATUS2_Msk (0xFFFFFFFFU << SDIO_RESP2_CARDSTATUS2_Pos) /*!< 0xFFFFFFFF */
#define SDIO_RESP2_CARDSTATUS2     SDIO_RESP2_CARDSTATUS2_Msk                  /*!<Card Status */

/******************  Bit definition for SDIO_RESP3 register  ******************/
#define SDIO_RESP3_CARDSTATUS3_Pos (0U)
#define SDIO_RESP3_CARDSTATUS3_Msk (0xFFFFFFFFU << SDIO_RESP3_CARDSTATUS3_Pos) /*!< 0xFFFFFFFF */
#define SDIO_RESP3_CARDSTATUS3     SDIO_RESP3_CARDSTATUS3_Msk                  /*!<Card Status */

/******************  Bit definition for SDIO_RESP4 register  ******************/
#define SDIO_RESP4_CARDSTATUS4_Pos (0U)
#define SDIO_RESP4_CARDSTATUS4_Msk (0xFFFFFFFFU << SDIO_RESP4_CARDSTATUS4_Pos) /*!< 0xFFFFFFFF */
#define SDIO_RESP4_CARDSTATUS4     SDIO_RESP4_CARDSTATUS4_Msk                  /*!<Card Status */

/******************  Bit definition for SDIO_DTIMER register  *****************/
#define SDIO_DTIMER_DATATIME_Pos (0U)
#define SDIO_DTIMER_DATATIME_Msk (0xFFFFFFFFU << SDIO_DTIMER_DATATIME_Pos) /*!< 0xFFFFFFFF */
#define SDIO_DTIMER_DATATIME     SDIO_DTIMER_DATATIME_Msk                  /*!<Data timeout period. */

/******************  Bit definition for SDIO_DLEN register  *******************/
#define SDIO_DLEN_DATALENGTH_Pos (0U)
#define SDIO_DLEN_DATALENGTH_Msk (0x1FFFFFFU << SDIO_DLEN_DATALENGTH_Pos) /*!< 0x01FFFFFF */
#define SDIO_DLEN_DATALENGTH     SDIO_DLEN_DATALENGTH_Msk                 /*!<Data length value    */

/******************  Bit definition for SDIO_DCTRL register  ******************/
#define SDIO_DCTRL_DTEN_Pos       (0U)
#define SDIO_DCTRL_DTEN_Msk       (0x1U << SDIO_DCTRL_DTEN_Pos) /*!< 0x00000001 */
#define SDIO_DCTRL_DTEN           SDIO_DCTRL_DTEN_Msk           /*!<Data transfer enabled bit         */
#define SDIO_DCTRL_DTDIR_Pos      (1U)
#define SDIO_DCTRL_DTDIR_Msk      (0x1U << SDIO_DCTRL_DTDIR_Pos) /*!< 0x00000002 */
#define SDIO_DCTRL_DTDIR          SDIO_DCTRL_DTDIR_Msk           /*!<Data transfer direction selection */
#define SDIO_DCTRL_DTMODE_Pos     (2U)
#define SDIO_DCTRL_DTMODE_Msk     (0x1U << SDIO_DCTRL_DTMODE_Pos) /*!< 0x00000004 */
#define SDIO_DCTRL_DTMODE         SDIO_DCTRL_DTMODE_Msk           /*!<Data transfer mode selection      */
#define SDIO_DCTRL_DMAEN_Pos      (3U)
#define SDIO_DCTRL_DMAEN_Msk      (0x1U << SDIO_DCTRL_DMAEN_Pos) /*!< 0x00000008 */
#define SDIO_DCTRL_DMAEN          SDIO_DCTRL_DMAEN_Msk           /*!<DMA enabled bit                   */

#define SDIO_DCTRL_DBLOCKSIZE_Pos (4U)
#define SDIO_DCTRL_DBLOCKSIZE_Msk (0xFU << SDIO_DCTRL_DBLOCKSIZE_Pos) /*!< 0x000000F0 */
#define SDIO_DCTRL_DBLOCKSIZE     SDIO_DCTRL_DBLOCKSIZE_Msk           /*!<DBLOCKSIZE[3:0] bits (Data block size) */
#define SDIO_DCTRL_DBLOCKSIZE_0   (0x1U << SDIO_DCTRL_DBLOCKSIZE_Pos) /*!< 0x0010 */
#define SDIO_DCTRL_DBLOCKSIZE_1   (0x2U << SDIO_DCTRL_DBLOCKSIZE_Pos) /*!< 0x0020 */
#define SDIO_DCTRL_DBLOCKSIZE_2   (0x4U << SDIO_DCTRL_DBLOCKSIZE_Pos) /*!< 0x0040 */
#define SDIO_DCTRL_DBLOCKSIZE_3   (0x8U << SDIO_DCTRL_DBLOCKSIZE_Pos) /*!< 0x0080 */

#define SDIO_DCTRL_RWSTART_Pos    (8U)
#define SDIO_DCTRL_RWSTART_Msk    (0x1U << SDIO_DCTRL_RWSTART_Pos) /*!< 0x00000100 */
#define SDIO_DCTRL_RWSTART        SDIO_DCTRL_RWSTART_Msk           /*!<Read wait start         */
#define SDIO_DCTRL_RWSTOP_Pos     (9U)
#define SDIO_DCTRL_RWSTOP_Msk     (0x1U << SDIO_DCTRL_RWSTOP_Pos) /*!< 0x00000200 */
#define SDIO_DCTRL_RWSTOP         SDIO_DCTRL_RWSTOP_Msk           /*!<Read wait stop          */
#define SDIO_DCTRL_RWMOD_Pos      (10U)
#define SDIO_DCTRL_RWMOD_Msk      (0x1U << SDIO_DCTRL_RWMOD_Pos) /*!< 0x00000400 */
#define SDIO_DCTRL_RWMOD          SDIO_DCTRL_RWMOD_Msk           /*!<Read wait mode          */
#define SDIO_DCTRL_SDIOEN_Pos     (11U)
#define SDIO_DCTRL_SDIOEN_Msk     (0x1U << SDIO_DCTRL_SDIOEN_Pos) /*!< 0x00000800 */
#define SDIO_DCTRL_SDIOEN         SDIO_DCTRL_SDIOEN_Msk           /*!<SD I/O enable functions */

/******************  Bit definition for SDIO_DCOUNT register  *****************/
#define SDIO_DCOUNT_DATACOUNT_Pos (0U)
#define SDIO_DCOUNT_DATACOUNT_Msk (0x1FFFFFFU << SDIO_DCOUNT_DATACOUNT_Pos) /*!< 0x01FFFFFF */
#define SDIO_DCOUNT_DATACOUNT     SDIO_DCOUNT_DATACOUNT_Msk                 /*!<Data count value */

/******************  Bit definition for SDIO_STA register  ********************/
#define SDIO_STA_CCRCFAIL_Pos (0U)
#define SDIO_STA_CCRCFAIL_Msk (0x1U << SDIO_STA_CCRCFAIL_Pos) /*!< 0x00000001 */
#define SDIO_STA_CCRCFAIL     SDIO_STA_CCRCFAIL_Msk           /*!<Command response received (CRC check failed)  */
#define SDIO_STA_DCRCFAIL_Pos (1U)
#define SDIO_STA_DCRCFAIL_Msk (0x1U << SDIO_STA_DCRCFAIL_Pos) /*!< 0x00000002 */
#define SDIO_STA_DCRCFAIL     SDIO_STA_DCRCFAIL_Msk           /*!<Data block sent/received (CRC check failed)   */
#define SDIO_STA_CTIMEOUT_Pos (2U)
#define SDIO_STA_CTIMEOUT_Msk (0x1U << SDIO_STA_CTIMEOUT_Pos) /*!< 0x00000004 */
#define SDIO_STA_CTIMEOUT     SDIO_STA_CTIMEOUT_Msk           /*!<Command response timeout                      */
#define SDIO_STA_DTIMEOUT_Pos (3U)
#define SDIO_STA_DTIMEOUT_Msk (0x1U << SDIO_STA_DTIMEOUT_Pos) /*!< 0x00000008 */
#define SDIO_STA_DTIMEOUT     SDIO_STA_DTIMEOUT_Msk           /*!<Data timeout                                  */
#define SDIO_STA_TXUNDERR_Pos (4U)
#define SDIO_STA_TXUNDERR_Msk (0x1U << SDIO_STA_TXUNDERR_Pos) /*!< 0x00000010 */
#define SDIO_STA_TXUNDERR     SDIO_STA_TXUNDERR_Msk           /*!<Transmit FIFO underrun error                  */
#define SDIO_STA_RXOVERR_Pos  (5U)
#define SDIO_STA_RXOVERR_Msk  (0x1U << SDIO_STA_RXOVERR_Pos) /*!< 0x00000020 */
#define SDIO_STA_RXOVERR      SDIO_STA_RXOVERR_Msk           /*!<Received FIFO overrun error                   */
#define SDIO_STA_CMDREND_Pos  (6U)
#define SDIO_STA_CMDREND_Msk  (0x1U << SDIO_STA_CMDREND_Pos) /*!< 0x00000040 */
#define SDIO_STA_CMDREND      SDIO_STA_CMDREND_Msk           /*!<Command response received (CRC check passed)  */
#define SDIO_STA_CMDSENT_Pos  (7U)
#define SDIO_STA_CMDSENT_Msk  (0x1U << SDIO_STA_CMDSENT_Pos) /*!< 0x00000080 */
#define SDIO_STA_CMDSENT      SDIO_STA_CMDSENT_Msk           /*!<Command sent (no response required)           */
#define SDIO_STA_DATAEND_Pos  (8U)
#define SDIO_STA_DATAEND_Msk  (0x1U << SDIO_STA_DATAEND_Pos) /*!< 0x00000100 */
#define SDIO_STA_DATAEND      SDIO_STA_DATAEND_Msk           /*!<Data end (data counter, SDIDCOUNT, is zero)   */
#define SDIO_STA_STBITERR_Pos (9U)
#define SDIO_STA_STBITERR_Msk (0x1U << SDIO_STA_STBITERR_Pos) /*!< 0x00000200 */
#define SDIO_STA_STBITERR     SDIO_STA_STBITERR_Msk           /*!<Start bit not detected on all data signals in wide bus mode */
#define SDIO_STA_DBCKEND_Pos  (10U)
#define SDIO_STA_DBCKEND_Msk  (0x1U << SDIO_STA_DBCKEND_Pos) /*!< 0x00000400 */
#define SDIO_STA_DBCKEND      SDIO_STA_DBCKEND_Msk           /*!<Data block sent/received (CRC check passed)   */
#define SDIO_STA_CMDACT_Pos   (11U)
#define SDIO_STA_CMDACT_Msk   (0x1U << SDIO_STA_CMDACT_Pos) /*!< 0x00000800 */
#define SDIO_STA_CMDACT       SDIO_STA_CMDACT_Msk           /*!<Command transfer in progress                  */
#define SDIO_STA_TXACT_Pos    (12U)
#define SDIO_STA_TXACT_Msk    (0x1U << SDIO_STA_TXACT_Pos) /*!< 0x00001000 */
#define SDIO_STA_TXACT        SDIO_STA_TXACT_Msk           /*!<Data transmit in progress                     */
#define SDIO_STA_RXACT_Pos    (13U)
#define SDIO_STA_RXACT_Msk    (0x1U << SDIO_STA_RXACT_Pos) /*!< 0x00002000 */
#define SDIO_STA_RXACT        SDIO_STA_RXACT_Msk           /*!<Data receive in progress                      */
#define SDIO_STA_TXFIFOHE_Pos (14U)
#define SDIO_STA_TXFIFOHE_Msk (0x1U << SDIO_STA_TXFIFOHE_Pos) /*!< 0x00004000 */
#define SDIO_STA_TXFIFOHE     SDIO_STA_TXFIFOHE_Msk           /*!<Transmit FIFO Half Empty: at least 8 words can be written into the FIFO */
#define SDIO_STA_RXFIFOHF_Pos (15U)
#define SDIO_STA_RXFIFOHF_Msk (0x1U << SDIO_STA_RXFIFOHF_Pos) /*!< 0x00008000 */
#define SDIO_STA_RXFIFOHF     SDIO_STA_RXFIFOHF_Msk           /*!<Receive FIFO Half Full: there are at least 8 words in the FIFO */
#define SDIO_STA_TXFIFOF_Pos  (16U)
#define SDIO_STA_TXFIFOF_Msk  (0x1U << SDIO_STA_TXFIFOF_Pos) /*!< 0x00010000 */
#define SDIO_STA_TXFIFOF      SDIO_STA_TXFIFOF_Msk           /*!<Transmit FIFO full                            */
#define SDIO_STA_RXFIFOF_Pos  (17U)
#define SDIO_STA_RXFIFOF_Msk  (0x1U << SDIO_STA_RXFIFOF_Pos) /*!< 0x00020000 */
#define SDIO_STA_RXFIFOF      SDIO_STA_RXFIFOF_Msk           /*!<Receive FIFO full                             */
#define SDIO_STA_TXFIFOE_Pos  (18U)
#define SDIO_STA_TXFIFOE_Msk  (0x1U << SDIO_STA_TXFIFOE_Pos) /*!< 0x00040000 */
#define SDIO_STA_TXFIFOE      SDIO_STA_TXFIFOE_Msk           /*!<Transmit FIFO empty                           */
#define SDIO_STA_RXFIFOE_Pos  (19U)
#define SDIO_STA_RXFIFOE_Msk  (0x1U << SDIO_STA_RXFIFOE_Pos) /*!< 0x00080000 */
#define SDIO_STA_RXFIFOE      SDIO_STA_RXFIFOE_Msk           /*!<Receive FIFO empty                            */
#define SDIO_STA_TXDAVL_Pos   (20U)
#define SDIO_STA_TXDAVL_Msk   (0x1U << SDIO_STA_TXDAVL_Pos) /*!< 0x00100000 */
#define SDIO_STA_TXDAVL       SDIO_STA_TXDAVL_Msk           /*!<Data available in transmit FIFO               */
#define SDIO_STA_RXDAVL_Pos   (21U)
#define SDIO_STA_RXDAVL_Msk   (0x1U << SDIO_STA_RXDAVL_Pos) /*!< 0x00200000 */
#define SDIO_STA_RXDAVL       SDIO_STA_RXDAVL_Msk           /*!<Data available in receive FIFO                */
#define SDIO_STA_SDIOIT_Pos   (22U)
#define SDIO_STA_SDIOIT_Msk   (0x1U << SDIO_STA_SDIOIT_Pos) /*!< 0x00400000 */
#define SDIO_STA_SDIOIT       SDIO_STA_SDIOIT_Msk           /*!<SDIO interrupt received                       */
#define SDIO_STA_CEATAEND_Pos (23U)
#define SDIO_STA_CEATAEND_Msk (0x1U << SDIO_STA_CEATAEND_Pos) /*!< 0x00800000 */
#define SDIO_STA_CEATAEND     SDIO_STA_CEATAEND_Msk           /*!<CE-ATA command completion signal received for CMD61 */

/*******************  Bit definition for SDIO_ICR register  *******************/
#define SDIO_ICR_CCRCFAILC_Pos (0U)
#define SDIO_ICR_CCRCFAILC_Msk (0x1U << SDIO_ICR_CCRCFAILC_Pos) /*!< 0x00000001 */
#define SDIO_ICR_CCRCFAILC     SDIO_ICR_CCRCFAILC_Msk           /*!<CCRCFAIL flag clear bit */
#define SDIO_ICR_DCRCFAILC_Pos (1U)
#define SDIO_ICR_DCRCFAILC_Msk (0x1U << SDIO_ICR_DCRCFAILC_Pos) /*!< 0x00000002 */
#define SDIO_ICR_DCRCFAILC     SDIO_ICR_DCRCFAILC_Msk           /*!<DCRCFAIL flag clear bit */
#define SDIO_ICR_CTIMEOUTC_Pos (2U)
#define SDIO_ICR_CTIMEOUTC_Msk (0x1U << SDIO_ICR_CTIMEOUTC_Pos) /*!< 0x00000004 */
#define SDIO_ICR_CTIMEOUTC     SDIO_ICR_CTIMEOUTC_Msk           /*!<CTIMEOUT flag clear bit */
#define SDIO_ICR_DTIMEOUTC_Pos (3U)
#define SDIO_ICR_DTIMEOUTC_Msk (0x1U << SDIO_ICR_DTIMEOUTC_Pos) /*!< 0x00000008 */
#define SDIO_ICR_DTIMEOUTC     SDIO_ICR_DTIMEOUTC_Msk           /*!<DTIMEOUT flag clear bit */
#define SDIO_ICR_TXUNDERRC_Pos (4U)
#define SDIO_ICR_TXUNDERRC_Msk (0x1U << SDIO_ICR_TXUNDERRC_Pos) /*!< 0x00000010 */
#define SDIO_ICR_TXUNDERRC     SDIO_ICR_TXUNDERRC_Msk           /*!<TXUNDERR flag clear bit */
#define SDIO_ICR_RXOVERRC_Pos  (5U)
#define SDIO_ICR_RXOVERRC_Msk  (0x1U << SDIO_ICR_RXOVERRC_Pos) /*!< 0x00000020 */
#define SDIO_ICR_RXOVERRC      SDIO_ICR_RXOVERRC_Msk           /*!<RXOVERR flag clear bit  */
#define SDIO_ICR_CMDRENDC_Pos  (6U)
#define SDIO_ICR_CMDRENDC_Msk  (0x1U << SDIO_ICR_CMDRENDC_Pos) /*!< 0x00000040 */
#define SDIO_ICR_CMDRENDC      SDIO_ICR_CMDRENDC_Msk           /*!<CMDREND flag clear bit  */
#define SDIO_ICR_CMDSENTC_Pos  (7U)
#define SDIO_ICR_CMDSENTC_Msk  (0x1U << SDIO_ICR_CMDSENTC_Pos) /*!< 0x00000080 */
#define SDIO_ICR_CMDSENTC      SDIO_ICR_CMDSENTC_Msk           /*!<CMDSENT flag clear bit  */
#define SDIO_ICR_DATAENDC_Pos  (8U)
#define SDIO_ICR_DATAENDC_Msk  (0x1U << SDIO_ICR_DATAENDC_Pos) /*!< 0x00000100 */
#define SDIO_ICR_DATAENDC      SDIO_ICR_DATAENDC_Msk           /*!<DATAEND flag clear bit  */
#define SDIO_ICR_STBITERRC_Pos (9U)
#define SDIO_ICR_STBITERRC_Msk (0x1U << SDIO_ICR_STBITERRC_Pos) /*!< 0x00000200 */
#define SDIO_ICR_STBITERRC     SDIO_ICR_STBITERRC_Msk           /*!<STBITERR flag clear bit */
#define SDIO_ICR_DBCKENDC_Pos  (10U)
#define SDIO_ICR_DBCKENDC_Msk  (0x1U << SDIO_ICR_DBCKENDC_Pos) /*!< 0x00000400 */
#define SDIO_ICR_DBCKENDC      SDIO_ICR_DBCKENDC_Msk           /*!<DBCKEND flag clear bit  */
#define SDIO_ICR_SDIOITC_Pos   (22U)
#define SDIO_ICR_SDIOITC_Msk   (0x1U << SDIO_ICR_SDIOITC_Pos) /*!< 0x00400000 */
#define SDIO_ICR_SDIOITC       SDIO_ICR_SDIOITC_Msk           /*!<SDIOIT flag clear bit   */
#define SDIO_ICR_CEATAENDC_Pos (23U)
#define SDIO_ICR_CEATAENDC_Msk (0x1U << SDIO_ICR_CEATAENDC_Pos) /*!< 0x00800000 */
#define SDIO_ICR_CEATAENDC     SDIO_ICR_CEATAENDC_Msk           /*!<CEATAEND flag clear bit */

/******************  Bit definition for SDIO_MASK register  *******************/
#define SDIO_MASK_CCRCFAILIE_Pos (0U)
#define SDIO_MASK_CCRCFAILIE_Msk (0x1U << SDIO_MASK_CCRCFAILIE_Pos) /*!< 0x00000001 */
#define SDIO_MASK_CCRCFAILIE     SDIO_MASK_CCRCFAILIE_Msk           /*!<Command CRC Fail Interrupt Enable          */
#define SDIO_MASK_DCRCFAILIE_Pos (1U)
#define SDIO_MASK_DCRCFAILIE_Msk (0x1U << SDIO_MASK_DCRCFAILIE_Pos) /*!< 0x00000002 */
#define SDIO_MASK_DCRCFAILIE     SDIO_MASK_DCRCFAILIE_Msk           /*!<Data CRC Fail Interrupt Enable             */
#define SDIO_MASK_CTIMEOUTIE_Pos (2U)
#define SDIO_MASK_CTIMEOUTIE_Msk (0x1U << SDIO_MASK_CTIMEOUTIE_Pos) /*!< 0x00000004 */
#define SDIO_MASK_CTIMEOUTIE     SDIO_MASK_CTIMEOUTIE_Msk           /*!<Command TimeOut Interrupt Enable           */
#define SDIO_MASK_DTIMEOUTIE_Pos (3U)
#define SDIO_MASK_DTIMEOUTIE_Msk (0x1U << SDIO_MASK_DTIMEOUTIE_Pos) /*!< 0x00000008 */
#define SDIO_MASK_DTIMEOUTIE     SDIO_MASK_DTIMEOUTIE_Msk           /*!<Data TimeOut Interrupt Enable              */
#define SDIO_MASK_TXUNDERRIE_Pos (4U)
#define SDIO_MASK_TXUNDERRIE_Msk (0x1U << SDIO_MASK_TXUNDERRIE_Pos) /*!< 0x00000010 */
#define SDIO_MASK_TXUNDERRIE     SDIO_MASK_TXUNDERRIE_Msk           /*!<Tx FIFO UnderRun Error Interrupt Enable    */
#define SDIO_MASK_RXOVERRIE_Pos  (5U)
#define SDIO_MASK_RXOVERRIE_Msk  (0x1U << SDIO_MASK_RXOVERRIE_Pos) /*!< 0x00000020 */
#define SDIO_MASK_RXOVERRIE      SDIO_MASK_RXOVERRIE_Msk           /*!<Rx FIFO OverRun Error Interrupt Enable     */
#define SDIO_MASK_CMDRENDIE_Pos  (6U)
#define SDIO_MASK_CMDRENDIE_Msk  (0x1U << SDIO_MASK_CMDRENDIE_Pos) /*!< 0x00000040 */
#define SDIO_MASK_CMDRENDIE      SDIO_MASK_CMDRENDIE_Msk           /*!<Command Response Received Interrupt Enable */
#define SDIO_MASK_CMDSENTIE_Pos  (7U)
#define SDIO_MASK_CMDSENTIE_Msk  (0x1U << SDIO_MASK_CMDSENTIE_Pos) /*!< 0x00000080 */
#define SDIO_MASK_CMDSENTIE      SDIO_MASK_CMDSENTIE_Msk           /*!<Command Sent Interrupt Enable              */
#define SDIO_MASK_DATAENDIE_Pos  (8U)
#define SDIO_MASK_DATAENDIE_Msk  (0x1U << SDIO_MASK_DATAENDIE_Pos) /*!< 0x00000100 */
#define SDIO_MASK_DATAENDIE      SDIO_MASK_DATAENDIE_Msk           /*!<Data End Interrupt Enable                  */
#define SDIO_MASK_STBITERRIE_Pos (9U)
#define SDIO_MASK_STBITERRIE_Msk (0x1U << SDIO_MASK_STBITERRIE_Pos) /*!< 0x00000200 */
#define SDIO_MASK_STBITERRIE     SDIO_MASK_STBITERRIE_Msk           /*!<Start Bit Error Interrupt Enable           */
#define SDIO_MASK_DBCKENDIE_Pos  (10U)
#define SDIO_MASK_DBCKENDIE_Msk  (0x1U << SDIO_MASK_DBCKENDIE_Pos) /*!< 0x00000400 */
#define SDIO_MASK_DBCKENDIE      SDIO_MASK_DBCKENDIE_Msk           /*!<Data Block End Interrupt Enable            */
#define SDIO_MASK_CMDACTIE_Pos   (11U)
#define SDIO_MASK_CMDACTIE_Msk   (0x1U << SDIO_MASK_CMDACTIE_Pos) /*!< 0x00000800 */
#define SDIO_MASK_CMDACTIE       SDIO_MASK_CMDACTIE_Msk           /*!<CCommand Acting Interrupt Enable           */
#define SDIO_MASK_TXACTIE_Pos    (12U)
#define SDIO_MASK_TXACTIE_Msk    (0x1U << SDIO_MASK_TXACTIE_Pos) /*!< 0x00001000 */
#define SDIO_MASK_TXACTIE        SDIO_MASK_TXACTIE_Msk           /*!<Data Transmit Acting Interrupt Enable      */
#define SDIO_MASK_RXACTIE_Pos    (13U)
#define SDIO_MASK_RXACTIE_Msk    (0x1U << SDIO_MASK_RXACTIE_Pos) /*!< 0x00002000 */
#define SDIO_MASK_RXACTIE        SDIO_MASK_RXACTIE_Msk           /*!<Data receive acting interrupt enabled      */
#define SDIO_MASK_TXFIFOHEIE_Pos (14U)
#define SDIO_MASK_TXFIFOHEIE_Msk (0x1U << SDIO_MASK_TXFIFOHEIE_Pos) /*!< 0x00004000 */
#define SDIO_MASK_TXFIFOHEIE     SDIO_MASK_TXFIFOHEIE_Msk           /*!<Tx FIFO Half Empty interrupt Enable        */
#define SDIO_MASK_RXFIFOHFIE_Pos (15U)
#define SDIO_MASK_RXFIFOHFIE_Msk (0x1U << SDIO_MASK_RXFIFOHFIE_Pos) /*!< 0x00008000 */
#define SDIO_MASK_RXFIFOHFIE     SDIO_MASK_RXFIFOHFIE_Msk           /*!<Rx FIFO Half Full interrupt Enable         */
#define SDIO_MASK_TXFIFOFIE_Pos  (16U)
#define SDIO_MASK_TXFIFOFIE_Msk  (0x1U << SDIO_MASK_TXFIFOFIE_Pos) /*!< 0x00010000 */
#define SDIO_MASK_TXFIFOFIE      SDIO_MASK_TXFIFOFIE_Msk           /*!<Tx FIFO Full interrupt Enable              */
#define SDIO_MASK_RXFIFOFIE_Pos  (17U)
#define SDIO_MASK_RXFIFOFIE_Msk  (0x1U << SDIO_MASK_RXFIFOFIE_Pos) /*!< 0x00020000 */
#define SDIO_MASK_RXFIFOFIE      SDIO_MASK_RXFIFOFIE_Msk           /*!<Rx FIFO Full interrupt Enable              */
#define SDIO_MASK_TXFIFOEIE_Pos  (18U)
#define SDIO_MASK_TXFIFOEIE_Msk  (0x1U << SDIO_MASK_TXFIFOEIE_Pos) /*!< 0x00040000 */
#define SDIO_MASK_TXFIFOEIE      SDIO_MASK_TXFIFOEIE_Msk           /*!<Tx FIFO Empty interrupt Enable             */
#define SDIO_MASK_RXFIFOEIE_Pos  (19U)
#define SDIO_MASK_RXFIFOEIE_Msk  (0x1U << SDIO_MASK_RXFIFOEIE_Pos) /*!< 0x00080000 */
#define SDIO_MASK_RXFIFOEIE      SDIO_MASK_RXFIFOEIE_Msk           /*!<Rx FIFO Empty interrupt Enable             */
#define SDIO_MASK_TXDAVLIE_Pos   (20U)
#define SDIO_MASK_TXDAVLIE_Msk   (0x1U << SDIO_MASK_TXDAVLIE_Pos) /*!< 0x00100000 */
#define SDIO_MASK_TXDAVLIE       SDIO_MASK_TXDAVLIE_Msk           /*!<Data available in Tx FIFO interrupt Enable */
#define SDIO_MASK_RXDAVLIE_Pos   (21U)
#define SDIO_MASK_RXDAVLIE_Msk   (0x1U << SDIO_MASK_RXDAVLIE_Pos) /*!< 0x00200000 */
#define SDIO_MASK_RXDAVLIE       SDIO_MASK_RXDAVLIE_Msk           /*!<Data available in Rx FIFO interrupt Enable */
#define SDIO_MASK_SDIOITIE_Pos   (22U)
#define SDIO_MASK_SDIOITIE_Msk   (0x1U << SDIO_MASK_SDIOITIE_Pos) /*!< 0x00400000 */
#define SDIO_MASK_SDIOITIE       SDIO_MASK_SDIOITIE_Msk           /*!<SDIO Mode Interrupt Received interrupt Enable */
#define SDIO_MASK_CEATAENDIE_Pos (23U)
#define SDIO_MASK_CEATAENDIE_Msk (0x1U << SDIO_MASK_CEATAENDIE_Pos) /*!< 0x00800000 */
#define SDIO_MASK_CEATAENDIE     SDIO_MASK_CEATAENDIE_Msk           /*!<CE-ATA command completion signal received Interrupt Enable */

/*****************  Bit definition for SDIO_FIFOCNT register  *****************/
#define SDIO_FIFOCNT_FIFOCOUNT_Pos (0U)
#define SDIO_FIFOCNT_FIFOCOUNT_Msk (0xFFFFFFU << SDIO_FIFOCNT_FIFOCOUNT_Pos) /*!< 0x00FFFFFF */
#define SDIO_FIFOCNT_FIFOCOUNT     SDIO_FIFOCNT_FIFOCOUNT_Msk                /*!<Remaining number of words to be written to or read from the FIFO */

/******************  Bit definition for SDIO_FIFO register  *******************/
#define SDIO_FIFO_FIFODATA_Pos (0U)
#define SDIO_FIFO_FIFODATA_Msk (0xFFFFFFFFU << SDIO_FIFO_FIFODATA_Pos) /*!< 0xFFFFFFFF */
#define SDIO_FIFO_FIFODATA     SDIO_FIFO_FIFODATA_Msk                  /*!<Receive and transmit FIFO data */

/******************************************************************************/
/*                                                                            */
/*                        Serial Peripheral Interface                         */
/*                                                                            */
/******************************************************************************/
#define SPI_I2S_FULLDUPLEX_SUPPORT /*!< I2S Full-Duplex support */

/*******************  Bit definition for SPI_CR1 register  ********************/
#define SPI_CR1_CPHA_Pos     (0U)
#define SPI_CR1_CPHA_Msk     (0x1U << SPI_CR1_CPHA_Pos) /*!< 0x00000001 */
#define SPI_CR1_CPHA         SPI_CR1_CPHA_Msk           /*!<Clock Phase      */
#define SPI_CR1_CPOL_Pos     (1U)
#define SPI_CR1_CPOL_Msk     (0x1U << SPI_CR1_CPOL_Pos) /*!< 0x00000002 */
#define SPI_CR1_CPOL         SPI_CR1_CPOL_Msk           /*!<Clock Polarity   */
#define SPI_CR1_MSTR_Pos     (2U)
#define SPI_CR1_MSTR_Msk     (0x1U << SPI_CR1_MSTR_Pos) /*!< 0x00000004 */
#define SPI_CR1_MSTR         SPI_CR1_MSTR_Msk           /*!<Master Selection */

#define SPI_CR1_BR_Pos       (3U)
#define SPI_CR1_BR_Msk       (0x7U << SPI_CR1_BR_Pos) /*!< 0x00000038 */
#define SPI_CR1_BR           SPI_CR1_BR_Msk           /*!<BR[2:0] bits (Baud Rate Control) */
#define SPI_CR1_BR_0         (0x1U << SPI_CR1_BR_Pos) /*!< 0x00000008 */
#define SPI_CR1_BR_1         (0x2U << SPI_CR1_BR_Pos) /*!< 0x00000010 */
#define SPI_CR1_BR_2         (0x4U << SPI_CR1_BR_Pos) /*!< 0x00000020 */

#define SPI_CR1_SPE_Pos      (6U)
#define SPI_CR1_SPE_Msk      (0x1U << SPI_CR1_SPE_Pos) /*!< 0x00000040 */
#define SPI_CR1_SPE          SPI_CR1_SPE_Msk           /*!<SPI Enable                          */
#define SPI_CR1_LSBFIRST_Pos (7U)
#define SPI_CR1_LSBFIRST_Msk (0x1U << SPI_CR1_LSBFIRST_Pos) /*!< 0x00000080 */
#define SPI_CR1_LSBFIRST     SPI_CR1_LSBFIRST_Msk           /*!<Frame Format                        */
#define SPI_CR1_SSI_Pos      (8U)
#define SPI_CR1_SSI_Msk      (0x1U << SPI_CR1_SSI_Pos) /*!< 0x00000100 */
#define SPI_CR1_SSI          SPI_CR1_SSI_Msk           /*!<Internal slave select               */
#define SPI_CR1_SSM_Pos      (9U)
#define SPI_CR1_SSM_Msk      (0x1U << SPI_CR1_SSM_Pos) /*!< 0x00000200 */
#define SPI_CR1_SSM          SPI_CR1_SSM_Msk           /*!<Software slave management           */
#define SPI_CR1_RXONLY_Pos   (10U)
#define SPI_CR1_RXONLY_Msk   (0x1U << SPI_CR1_RXONLY_Pos) /*!< 0x00000400 */
#define SPI_CR1_RXONLY       SPI_CR1_RXONLY_Msk           /*!<Receive only                        */
#define SPI_CR1_DFF_Pos      (11U)
#define SPI_CR1_DFF_Msk      (0x1U << SPI_CR1_DFF_Pos) /*!< 0x00000800 */
#define SPI_CR1_DFF          SPI_CR1_DFF_Msk           /*!<Data Frame Format                   */
#define SPI_CR1_CRCNEXT_Pos  (12U)
#define SPI_CR1_CRCNEXT_Msk  (0x1U << SPI_CR1_CRCNEXT_Pos) /*!< 0x00001000 */
#define SPI_CR1_CRCNEXT      SPI_CR1_CRCNEXT_Msk           /*!<Transmit CRC next                   */
#define SPI_CR1_CRCEN_Pos    (13U)
#define SPI_CR1_CRCEN_Msk    (0x1U << SPI_CR1_CRCEN_Pos) /*!< 0x00002000 */
#define SPI_CR1_CRCEN        SPI_CR1_CRCEN_Msk           /*!<Hardware CRC calculation enable     */
#define SPI_CR1_BIDIOE_Pos   (14U)
#define SPI_CR1_BIDIOE_Msk   (0x1U << SPI_CR1_BIDIOE_Pos) /*!< 0x00004000 */
#define SPI_CR1_BIDIOE       SPI_CR1_BIDIOE_Msk           /*!<Output enable in bidirectional mode */
#define SPI_CR1_BIDIMODE_Pos (15U)
#define SPI_CR1_BIDIMODE_Msk (0x1U << SPI_CR1_BIDIMODE_Pos) /*!< 0x00008000 */
#define SPI_CR1_BIDIMODE     SPI_CR1_BIDIMODE_Msk           /*!<Bidirectional data mode enable      */

/*******************  Bit definition for SPI_CR2 register  ********************/
#define SPI_CR2_RXDMAEN_Pos (0U)
#define SPI_CR2_RXDMAEN_Msk (0x1U << SPI_CR2_RXDMAEN_Pos) /*!< 0x00000001 */
#define SPI_CR2_RXDMAEN     SPI_CR2_RXDMAEN_Msk           /*!<Rx Buffer DMA Enable                 */
#define SPI_CR2_TXDMAEN_Pos (1U)
#define SPI_CR2_TXDMAEN_Msk (0x1U << SPI_CR2_TXDMAEN_Pos) /*!< 0x00000002 */
#define SPI_CR2_TXDMAEN     SPI_CR2_TXDMAEN_Msk           /*!<Tx Buffer DMA Enable                 */
#define SPI_CR2_SSOE_Pos    (2U)
#define SPI_CR2_SSOE_Msk    (0x1U << SPI_CR2_SSOE_Pos) /*!< 0x00000004 */
#define SPI_CR2_SSOE        SPI_CR2_SSOE_Msk           /*!<SS Output Enable                     */
#define SPI_CR2_FRF_Pos     (4U)
#define SPI_CR2_FRF_Msk     (0x1U << SPI_CR2_FRF_Pos) /*!< 0x00000010 */
#define SPI_CR2_FRF         SPI_CR2_FRF_Msk           /*!<Frame Format                         */
#define SPI_CR2_ERRIE_Pos   (5U)
#define SPI_CR2_ERRIE_Msk   (0x1U << SPI_CR2_ERRIE_Pos) /*!< 0x00000020 */
#define SPI_CR2_ERRIE       SPI_CR2_ERRIE_Msk           /*!<Error Interrupt Enable               */
#define SPI_CR2_RXNEIE_Pos  (6U)
#define SPI_CR2_RXNEIE_Msk  (0x1U << SPI_CR2_RXNEIE_Pos) /*!< 0x00000040 */
#define SPI_CR2_RXNEIE      SPI_CR2_RXNEIE_Msk           /*!<RX buffer Not Empty Interrupt Enable */
#define SPI_CR2_TXEIE_Pos   (7U)
#define SPI_CR2_TXEIE_Msk   (0x1U << SPI_CR2_TXEIE_Pos) /*!< 0x00000080 */
#define SPI_CR2_TXEIE       SPI_CR2_TXEIE_Msk           /*!<Tx buffer Empty Interrupt Enable     */

/********************  Bit definition for SPI_SR register  ********************/
#define SPI_SR_RXNE_Pos   (0U)
#define SPI_SR_RXNE_Msk   (0x1U << SPI_SR_RXNE_Pos) /*!< 0x00000001 */
#define SPI_SR_RXNE       SPI_SR_RXNE_Msk           /*!<Receive buffer Not Empty */
#define SPI_SR_TXE_Pos    (1U)
#define SPI_SR_TXE_Msk    (0x1U << SPI_SR_TXE_Pos) /*!< 0x00000002 */
#define SPI_SR_TXE        SPI_SR_TXE_Msk           /*!<Transmit buffer Empty    */
#define SPI_SR_CHSIDE_Pos (2U)
#define SPI_SR_CHSIDE_Msk (0x1U << SPI_SR_CHSIDE_Pos) /*!< 0x00000004 */
#define SPI_SR_CHSIDE     SPI_SR_CHSIDE_Msk           /*!<Channel side             */
#define SPI_SR_UDR_Pos    (3U)
#define SPI_SR_UDR_Msk    (0x1U << SPI_SR_UDR_Pos) /*!< 0x00000008 */
#define SPI_SR_UDR        SPI_SR_UDR_Msk           /*!<Underrun flag            */
#define SPI_SR_CRCERR_Pos (4U)
#define SPI_SR_CRCERR_Msk (0x1U << SPI_SR_CRCERR_Pos) /*!< 0x00000010 */
#define SPI_SR_CRCERR     SPI_SR_CRCERR_Msk           /*!<CRC Error flag           */
#define SPI_SR_MODF_Pos   (5U)
#define SPI_SR_MODF_Msk   (0x1U << SPI_SR_MODF_Pos) /*!< 0x00000020 */
#define SPI_SR_MODF       SPI_SR_MODF_Msk           /*!<Mode fault               */
#define SPI_SR_OVR_Pos    (6U)
#define SPI_SR_OVR_Msk    (0x1U << SPI_SR_OVR_Pos) /*!< 0x00000040 */
#define SPI_SR_OVR        SPI_SR_OVR_Msk           /*!<Overrun flag             */
#define SPI_SR_BSY_Pos    (7U)
#define SPI_SR_BSY_Msk    (0x1U << SPI_SR_BSY_Pos) /*!< 0x00000080 */
#define SPI_SR_BSY        SPI_SR_BSY_Msk           /*!<Busy flag                */
#define SPI_SR_FRE_Pos    (8U)
#define SPI_SR_FRE_Msk    (0x1U << SPI_SR_FRE_Pos) /*!< 0x00000100 */
#define SPI_SR_FRE        SPI_SR_FRE_Msk           /*!<Frame format error flag  */

/********************  Bit definition for SPI_DR register  ********************/
#define SPI_DR_DR_Pos (0U)
#define SPI_DR_DR_Msk (0xFFFFU << SPI_DR_DR_Pos) /*!< 0x0000FFFF */
#define SPI_DR_DR     SPI_DR_DR_Msk              /*!<Data Register           */

/*******************  Bit definition for SPI_CRCPR register  ******************/
#define SPI_CRCPR_CRCPOLY_Pos (0U)
#define SPI_CRCPR_CRCPOLY_Msk (0xFFFFU << SPI_CRCPR_CRCPOLY_Pos) /*!< 0x0000FFFF */
#define SPI_CRCPR_CRCPOLY     SPI_CRCPR_CRCPOLY_Msk              /*!<CRC polynomial register */

/******************  Bit definition for SPI_RXCRCR register  ******************/
#define SPI_RXCRCR_RXCRC_Pos (0U)
#define SPI_RXCRCR_RXCRC_Msk (0xFFFFU << SPI_RXCRCR_RXCRC_Pos) /*!< 0x0000FFFF */
#define SPI_RXCRCR_RXCRC     SPI_RXCRCR_RXCRC_Msk              /*!<Rx CRC Register         */

/******************  Bit definition for SPI_TXCRCR register  ******************/
#define SPI_TXCRCR_TXCRC_Pos (0U)
#define SPI_TXCRCR_TXCRC_Msk (0xFFFFU << SPI_TXCRCR_TXCRC_Pos) /*!< 0x0000FFFF */
#define SPI_TXCRCR_TXCRC     SPI_TXCRCR_TXCRC_Msk              /*!<Tx CRC Register         */

/******************  Bit definition for SPI_I2SCFGR register  *****************/
#define SPI_I2SCFGR_CHLEN_Pos   (0U)
#define SPI_I2SCFGR_CHLEN_Msk   (0x1U << SPI_I2SCFGR_CHLEN_Pos) /*!< 0x00000001 */
#define SPI_I2SCFGR_CHLEN       SPI_I2SCFGR_CHLEN_Msk           /*!<Channel length (number of bits per audio channel) */

#define SPI_I2SCFGR_DATLEN_Pos  (1U)
#define SPI_I2SCFGR_DATLEN_Msk  (0x3U << SPI_I2SCFGR_DATLEN_Pos) /*!< 0x00000006 */
#define SPI_I2SCFGR_DATLEN      SPI_I2SCFGR_DATLEN_Msk           /*!<DATLEN[1:0] bits (Data length to be transferred)  */
#define SPI_I2SCFGR_DATLEN_0    (0x1U << SPI_I2SCFGR_DATLEN_Pos) /*!< 0x00000002 */
#define SPI_I2SCFGR_DATLEN_1    (0x2U << SPI_I2SCFGR_DATLEN_Pos) /*!< 0x00000004 */

#define SPI_I2SCFGR_CKPOL_Pos   (3U)
#define SPI_I2SCFGR_CKPOL_Msk   (0x1U << SPI_I2SCFGR_CKPOL_Pos) /*!< 0x00000008 */
#define SPI_I2SCFGR_CKPOL       SPI_I2SCFGR_CKPOL_Msk           /*!<steady state clock polarity               */

#define SPI_I2SCFGR_I2SSTD_Pos  (4U)
#define SPI_I2SCFGR_I2SSTD_Msk  (0x3U << SPI_I2SCFGR_I2SSTD_Pos) /*!< 0x00000030 */
#define SPI_I2SCFGR_I2SSTD      SPI_I2SCFGR_I2SSTD_Msk           /*!<I2SSTD[1:0] bits (I2S standard selection) */
#define SPI_I2SCFGR_I2SSTD_0    (0x1U << SPI_I2SCFGR_I2SSTD_Pos) /*!< 0x00000010 */
#define SPI_I2SCFGR_I2SSTD_1    (0x2U << SPI_I2SCFGR_I2SSTD_Pos) /*!< 0x00000020 */

#define SPI_I2SCFGR_PCMSYNC_Pos (7U)
#define SPI_I2SCFGR_PCMSYNC_Msk (0x1U << SPI_I2SCFGR_PCMSYNC_Pos) /*!< 0x00000080 */
#define SPI_I2SCFGR_PCMSYNC     SPI_I2SCFGR_PCMSYNC_Msk           /*!<PCM frame synchronization                 */

#define SPI_I2SCFGR_I2SCFG_Pos  (8U)
#define SPI_I2SCFGR_I2SCFG_Msk  (0x3U << SPI_I2SCFGR_I2SCFG_Pos) /*!< 0x00000300 */
#define SPI_I2SCFGR_I2SCFG      SPI_I2SCFGR_I2SCFG_Msk           /*!<I2SCFG[1:0] bits (I2S configuration mode) */
#define SPI_I2SCFGR_I2SCFG_0    (0x1U << SPI_I2SCFGR_I2SCFG_Pos) /*!< 0x00000100 */
#define SPI_I2SCFGR_I2SCFG_1    (0x2U << SPI_I2SCFGR_I2SCFG_Pos) /*!< 0x00000200 */

#define SPI_I2SCFGR_I2SE_Pos    (10U)
#define SPI_I2SCFGR_I2SE_Msk    (0x1U << SPI_I2SCFGR_I2SE_Pos) /*!< 0x00000400 */
#define SPI_I2SCFGR_I2SE        SPI_I2SCFGR_I2SE_Msk           /*!<I2S Enable         */
#define SPI_I2SCFGR_I2SMOD_Pos  (11U)
#define SPI_I2SCFGR_I2SMOD_Msk  (0x1U << SPI_I2SCFGR_I2SMOD_Pos) /*!< 0x00000800 */
#define SPI_I2SCFGR_I2SMOD      SPI_I2SCFGR_I2SMOD_Msk           /*!<I2S mode selection */

/******************  Bit definition for SPI_I2SPR register  *******************/
#define SPI_I2SPR_I2SDIV_Pos (0U)
#define SPI_I2SPR_I2SDIV_Msk (0xFFU << SPI_I2SPR_I2SDIV_Pos) /*!< 0x000000FF */
#define SPI_I2SPR_I2SDIV     SPI_I2SPR_I2SDIV_Msk            /*!<I2S Linear prescaler         */
#define SPI_I2SPR_ODD_Pos    (8U)
#define SPI_I2SPR_ODD_Msk    (0x1U << SPI_I2SPR_ODD_Pos) /*!< 0x00000100 */
#define SPI_I2SPR_ODD        SPI_I2SPR_ODD_Msk           /*!<Odd factor for the prescaler */
#define SPI_I2SPR_MCKOE_Pos  (9U)
#define SPI_I2SPR_MCKOE_Msk  (0x1U << SPI_I2SPR_MCKOE_Pos) /*!< 0x00000200 */
#define SPI_I2SPR_MCKOE      SPI_I2SPR_MCKOE_Msk           /*!<Master Clock Output Enable   */

/******************************************************************************/
/*                                                                            */
/*                                 SYSCFG                                     */
/*                                                                            */
/******************************************************************************/
/******************  Bit definition for SYSCFG_MEMRMP register  ***************/
#define SYSCFG_MEMRMP_MEM_MODE_Pos  (0U)
#define SYSCFG_MEMRMP_MEM_MODE_Msk  (0x3U << SYSCFG_MEMRMP_MEM_MODE_Pos) /*!< 0x00000003 */
#define SYSCFG_MEMRMP_MEM_MODE      SYSCFG_MEMRMP_MEM_MODE_Msk           /*!< SYSCFG_Memory Remap Config */
#define SYSCFG_MEMRMP_MEM_MODE_0    (0x1U << SYSCFG_MEMRMP_MEM_MODE_Pos) /*!< 0x00000001 */
#define SYSCFG_MEMRMP_MEM_MODE_1    (0x2U << SYSCFG_MEMRMP_MEM_MODE_Pos) /*!< 0x00000002 */
/******************  Bit definition for SYSCFG_PMC register  ******************/
#define SYSCFG_PMC_MII_RMII_SEL_Pos (23U)
#define SYSCFG_PMC_MII_RMII_SEL_Msk (0x1U << SYSCFG_PMC_MII_RMII_SEL_Pos) /*!< 0x00800000 */
#define SYSCFG_PMC_MII_RMII_SEL     SYSCFG_PMC_MII_RMII_SEL_Msk           /*!<Ethernet PHY interface selection */
/* Old MII_RMII_SEL bit definition, maintained for legacy purpose */
#define SYSCFG_PMC_MII_RMII         SYSCFG_PMC_MII_RMII_SEL

/*****************  Bit definition for SYSCFG_EXTICR1 register  ***************/
#define SYSCFG_EXTICR1_EXTI0_Pos (0U)
#define SYSCFG_EXTICR1_EXTI0_Msk (0xFU << SYSCFG_EXTICR1_EXTI0_Pos) /*!< 0x0000000F */
#define SYSCFG_EXTICR1_EXTI0     SYSCFG_EXTICR1_EXTI0_Msk           /*!<EXTI 0 configuration */
#define SYSCFG_EXTICR1_EXTI1_Pos (4U)
#define SYSCFG_EXTICR1_EXTI1_Msk (0xFU << SYSCFG_EXTICR1_EXTI1_Pos) /*!< 0x000000F0 */
#define SYSCFG_EXTICR1_EXTI1     SYSCFG_EXTICR1_EXTI1_Msk           /*!<EXTI 1 configuration */
#define SYSCFG_EXTICR1_EXTI2_Pos (8U)
#define SYSCFG_EXTICR1_EXTI2_Msk (0xFU << SYSCFG_EXTICR1_EXTI2_Pos) /*!< 0x00000F00 */
#define SYSCFG_EXTICR1_EXTI2     SYSCFG_EXTICR1_EXTI2_Msk           /*!<EXTI 2 configuration */
#define SYSCFG_EXTICR1_EXTI3_Pos (12U)
#define SYSCFG_EXTICR1_EXTI3_Msk (0xFU << SYSCFG_EXTICR1_EXTI3_Pos) /*!< 0x0000F000 */
#define SYSCFG_EXTICR1_EXTI3     SYSCFG_EXTICR1_EXTI3_Msk           /*!<EXTI 3 configuration */

/**
 * @brief   EXTI0 configuration
 */
#define SYSCFG_EXTICR1_EXTI0_PA 0x0000U /*!<PA[0] pin */
#define SYSCFG_EXTICR1_EXTI0_PB 0x0001U /*!<PB[0] pin */
#define SYSCFG_EXTICR1_EXTI0_PC 0x0002U /*!<PC[0] pin */
#define SYSCFG_EXTICR1_EXTI0_PD 0x0003U /*!<PD[0] pin */
#define SYSCFG_EXTICR1_EXTI0_PE 0x0004U /*!<PE[0] pin */
#define SYSCFG_EXTICR1_EXTI0_PF 0x0005U /*!<PF[0] pin */
#define SYSCFG_EXTICR1_EXTI0_PG 0x0006U /*!<PG[0] pin */
#define SYSCFG_EXTICR1_EXTI0_PH 0x0007U /*!<PH[0] pin */
#define SYSCFG_EXTICR1_EXTI0_PI 0x0008U /*!<PI[0] pin */

/**
 * @brief   EXTI1 configuration
 */
#define SYSCFG_EXTICR1_EXTI1_PA 0x0000U /*!<PA[1] pin */
#define SYSCFG_EXTICR1_EXTI1_PB 0x0010U /*!<PB[1] pin */
#define SYSCFG_EXTICR1_EXTI1_PC 0x0020U /*!<PC[1] pin */
#define SYSCFG_EXTICR1_EXTI1_PD 0x0030U /*!<PD[1] pin */
#define SYSCFG_EXTICR1_EXTI1_PE 0x0040U /*!<PE[1] pin */
#define SYSCFG_EXTICR1_EXTI1_PF 0x0050U /*!<PF[1] pin */
#define SYSCFG_EXTICR1_EXTI1_PG 0x0060U /*!<PG[1] pin */
#define SYSCFG_EXTICR1_EXTI1_PH 0x0070U /*!<PH[1] pin */
#define SYSCFG_EXTICR1_EXTI1_PI 0x0080U /*!<PI[1] pin */

/**
 * @brief   EXTI2 configuration
 */
#define SYSCFG_EXTICR1_EXTI2_PA 0x0000U /*!<PA[2] pin */
#define SYSCFG_EXTICR1_EXTI2_PB 0x0100U /*!<PB[2] pin */
#define SYSCFG_EXTICR1_EXTI2_PC 0x0200U /*!<PC[2] pin */
#define SYSCFG_EXTICR1_EXTI2_PD 0x0300U /*!<PD[2] pin */
#define SYSCFG_EXTICR1_EXTI2_PE 0x0400U /*!<PE[2] pin */
#define SYSCFG_EXTICR1_EXTI2_PF 0x0500U /*!<PF[2] pin */
#define SYSCFG_EXTICR1_EXTI2_PG 0x0600U /*!<PG[2] pin */
#define SYSCFG_EXTICR1_EXTI2_PH 0x0700U /*!<PH[2] pin */
#define SYSCFG_EXTICR1_EXTI2_PI 0x0800U /*!<PI[2] pin */

/**
 * @brief   EXTI3 configuration
 */
#define SYSCFG_EXTICR1_EXTI3_PA 0x0000U /*!<PA[3] pin */
#define SYSCFG_EXTICR1_EXTI3_PB 0x1000U /*!<PB[3] pin */
#define SYSCFG_EXTICR1_EXTI3_PC 0x2000U /*!<PC[3] pin */
#define SYSCFG_EXTICR1_EXTI3_PD 0x3000U /*!<PD[3] pin */
#define SYSCFG_EXTICR1_EXTI3_PE 0x4000U /*!<PE[3] pin */
#define SYSCFG_EXTICR1_EXTI3_PF 0x5000U /*!<PF[3] pin */
#define SYSCFG_EXTICR1_EXTI3_PG 0x6000U /*!<PG[3] pin */
#define SYSCFG_EXTICR1_EXTI3_PH 0x7000U /*!<PH[3] pin */
#define SYSCFG_EXTICR1_EXTI3_PI 0x8000U /*!<PI[3] pin */

/*****************  Bit definition for SYSCFG_EXTICR2 register  ***************/
#define SYSCFG_EXTICR2_EXTI4_Pos (0U)
#define SYSCFG_EXTICR2_EXTI4_Msk (0xFU << SYSCFG_EXTICR2_EXTI4_Pos) /*!< 0x0000000F */
#define SYSCFG_EXTICR2_EXTI4     SYSCFG_EXTICR2_EXTI4_Msk           /*!<EXTI 4 configuration */
#define SYSCFG_EXTICR2_EXTI5_Pos (4U)
#define SYSCFG_EXTICR2_EXTI5_Msk (0xFU << SYSCFG_EXTICR2_EXTI5_Pos) /*!< 0x000000F0 */
#define SYSCFG_EXTICR2_EXTI5     SYSCFG_EXTICR2_EXTI5_Msk           /*!<EXTI 5 configuration */
#define SYSCFG_EXTICR2_EXTI6_Pos (8U)
#define SYSCFG_EXTICR2_EXTI6_Msk (0xFU << SYSCFG_EXTICR2_EXTI6_Pos) /*!< 0x00000F00 */
#define SYSCFG_EXTICR2_EXTI6     SYSCFG_EXTICR2_EXTI6_Msk           /*!<EXTI 6 configuration */
#define SYSCFG_EXTICR2_EXTI7_Pos (12U)
#define SYSCFG_EXTICR2_EXTI7_Msk (0xFU << SYSCFG_EXTICR2_EXTI7_Pos) /*!< 0x0000F000 */
#define SYSCFG_EXTICR2_EXTI7     SYSCFG_EXTICR2_EXTI7_Msk           /*!<EXTI 7 configuration */

/**
 * @brief   EXTI4 configuration
 */
#define SYSCFG_EXTICR2_EXTI4_PA 0x0000U /*!<PA[4] pin */
#define SYSCFG_EXTICR2_EXTI4_PB 0x0001U /*!<PB[4] pin */
#define SYSCFG_EXTICR2_EXTI4_PC 0x0002U /*!<PC[4] pin */
#define SYSCFG_EXTICR2_EXTI4_PD 0x0003U /*!<PD[4] pin */
#define SYSCFG_EXTICR2_EXTI4_PE 0x0004U /*!<PE[4] pin */
#define SYSCFG_EXTICR2_EXTI4_PF 0x0005U /*!<PF[4] pin */
#define SYSCFG_EXTICR2_EXTI4_PG 0x0006U /*!<PG[4] pin */
#define SYSCFG_EXTICR2_EXTI4_PH 0x0007U /*!<PH[4] pin */
#define SYSCFG_EXTICR2_EXTI4_PI 0x0008U /*!<PI[4] pin */

/**
 * @brief   EXTI5 configuration
 */
#define SYSCFG_EXTICR2_EXTI5_PA 0x0000U /*!<PA[5] pin */
#define SYSCFG_EXTICR2_EXTI5_PB 0x0010U /*!<PB[5] pin */
#define SYSCFG_EXTICR2_EXTI5_PC 0x0020U /*!<PC[5] pin */
#define SYSCFG_EXTICR2_EXTI5_PD 0x0030U /*!<PD[5] pin */
#define SYSCFG_EXTICR2_EXTI5_PE 0x0040U /*!<PE[5] pin */
#define SYSCFG_EXTICR2_EXTI5_PF 0x0050U /*!<PF[5] pin */
#define SYSCFG_EXTICR2_EXTI5_PG 0x0060U /*!<PG[5] pin */
#define SYSCFG_EXTICR2_EXTI5_PH 0x0070U /*!<PH[5] pin */
#define SYSCFG_EXTICR2_EXTI5_PI 0x0080U /*!<PI[5] pin */

/**
 * @brief   EXTI6 configuration
 */
#define SYSCFG_EXTICR2_EXTI6_PA 0x0000U /*!<PA[6] pin */
#define SYSCFG_EXTICR2_EXTI6_PB 0x0100U /*!<PB[6] pin */
#define SYSCFG_EXTICR2_EXTI6_PC 0x0200U /*!<PC[6] pin */
#define SYSCFG_EXTICR2_EXTI6_PD 0x0300U /*!<PD[6] pin */
#define SYSCFG_EXTICR2_EXTI6_PE 0x0400U /*!<PE[6] pin */
#define SYSCFG_EXTICR2_EXTI6_PF 0x0500U /*!<PF[6] pin */
#define SYSCFG_EXTICR2_EXTI6_PG 0x0600U /*!<PG[6] pin */
#define SYSCFG_EXTICR2_EXTI6_PH 0x0700U /*!<PH[6] pin */
#define SYSCFG_EXTICR2_EXTI6_PI 0x0800U /*!<PI[6] pin */

/**
 * @brief   EXTI7 configuration
 */
#define SYSCFG_EXTICR2_EXTI7_PA 0x0000U /*!<PA[7] pin */
#define SYSCFG_EXTICR2_EXTI7_PB 0x1000U /*!<PB[7] pin */
#define SYSCFG_EXTICR2_EXTI7_PC 0x2000U /*!<PC[7] pin */
#define SYSCFG_EXTICR2_EXTI7_PD 0x3000U /*!<PD[7] pin */
#define SYSCFG_EXTICR2_EXTI7_PE 0x4000U /*!<PE[7] pin */
#define SYSCFG_EXTICR2_EXTI7_PF 0x5000U /*!<PF[7] pin */
#define SYSCFG_EXTICR2_EXTI7_PG 0x6000U /*!<PG[7] pin */
#define SYSCFG_EXTICR2_EXTI7_PH 0x7000U /*!<PH[7] pin */
#define SYSCFG_EXTICR2_EXTI7_PI 0x8000U /*!<PI[7] pin */

/*****************  Bit definition for SYSCFG_EXTICR3 register  ***************/
#define SYSCFG_EXTICR3_EXTI8_Pos  (0U)
#define SYSCFG_EXTICR3_EXTI8_Msk  (0xFU << SYSCFG_EXTICR3_EXTI8_Pos) /*!< 0x0000000F */
#define SYSCFG_EXTICR3_EXTI8      SYSCFG_EXTICR3_EXTI8_Msk           /*!<EXTI 8 configuration */
#define SYSCFG_EXTICR3_EXTI9_Pos  (4U)
#define SYSCFG_EXTICR3_EXTI9_Msk  (0xFU << SYSCFG_EXTICR3_EXTI9_Pos) /*!< 0x000000F0 */
#define SYSCFG_EXTICR3_EXTI9      SYSCFG_EXTICR3_EXTI9_Msk           /*!<EXTI 9 configuration */
#define SYSCFG_EXTICR3_EXTI10_Pos (8U)
#define SYSCFG_EXTICR3_EXTI10_Msk (0xFU << SYSCFG_EXTICR3_EXTI10_Pos) /*!< 0x00000F00 */
#define SYSCFG_EXTICR3_EXTI10     SYSCFG_EXTICR3_EXTI10_Msk           /*!<EXTI 10 configuration */
#define SYSCFG_EXTICR3_EXTI11_Pos (12U)
#define SYSCFG_EXTICR3_EXTI11_Msk (0xFU << SYSCFG_EXTICR3_EXTI11_Pos) /*!< 0x0000F000 */
#define SYSCFG_EXTICR3_EXTI11     SYSCFG_EXTICR3_EXTI11_Msk           /*!<EXTI 11 configuration */

/**
 * @brief   EXTI8 configuration
 */
#define SYSCFG_EXTICR3_EXTI8_PA 0x0000U /*!<PA[8] pin */
#define SYSCFG_EXTICR3_EXTI8_PB 0x0001U /*!<PB[8] pin */
#define SYSCFG_EXTICR3_EXTI8_PC 0x0002U /*!<PC[8] pin */
#define SYSCFG_EXTICR3_EXTI8_PD 0x0003U /*!<PD[8] pin */
#define SYSCFG_EXTICR3_EXTI8_PE 0x0004U /*!<PE[8] pin */
#define SYSCFG_EXTICR3_EXTI8_PF 0x0005U /*!<PF[8] pin */
#define SYSCFG_EXTICR3_EXTI8_PG 0x0006U /*!<PG[8] pin */
#define SYSCFG_EXTICR3_EXTI8_PH 0x0007U /*!<PH[8] pin */
#define SYSCFG_EXTICR3_EXTI8_PI 0x0008U /*!<PI[8] pin */

/**
 * @brief   EXTI9 configuration
 */
#define SYSCFG_EXTICR3_EXTI9_PA 0x0000U /*!<PA[9] pin */
#define SYSCFG_EXTICR3_EXTI9_PB 0x0010U /*!<PB[9] pin */
#define SYSCFG_EXTICR3_EXTI9_PC 0x0020U /*!<PC[9] pin */
#define SYSCFG_EXTICR3_EXTI9_PD 0x0030U /*!<PD[9] pin */
#define SYSCFG_EXTICR3_EXTI9_PE 0x0040U /*!<PE[9] pin */
#define SYSCFG_EXTICR3_EXTI9_PF 0x0050U /*!<PF[9] pin */
#define SYSCFG_EXTICR3_EXTI9_PG 0x0060U /*!<PG[9] pin */
#define SYSCFG_EXTICR3_EXTI9_PH 0x0070U /*!<PH[9] pin */
#define SYSCFG_EXTICR3_EXTI9_PI 0x0080U /*!<PI[9] pin */

/**
 * @brief   EXTI10 configuration
 */
#define SYSCFG_EXTICR3_EXTI10_PA 0x0000U /*!<PA[10] pin */
#define SYSCFG_EXTICR3_EXTI10_PB 0x0100U /*!<PB[10] pin */
#define SYSCFG_EXTICR3_EXTI10_PC 0x0200U /*!<PC[10] pin */
#define SYSCFG_EXTICR3_EXTI10_PD 0x0300U /*!<PD[10] pin */
#define SYSCFG_EXTICR3_EXTI10_PE 0x0400U /*!<PE[10] pin */
#define SYSCFG_EXTICR3_EXTI10_PF 0x0500U /*!<PF[10] pin */
#define SYSCFG_EXTICR3_EXTI10_PG 0x0600U /*!<PG[10] pin */
#define SYSCFG_EXTICR3_EXTI10_PH 0x0700U /*!<PH[10] pin */
#define SYSCFG_EXTICR3_EXTI10_PI 0x0800U /*!<PI[10] pin */

/**
 * @brief   EXTI11 configuration
 */
#define SYSCFG_EXTICR3_EXTI11_PA 0x0000U /*!<PA[11] pin */
#define SYSCFG_EXTICR3_EXTI11_PB 0x1000U /*!<PB[11] pin */
#define SYSCFG_EXTICR3_EXTI11_PC 0x2000U /*!<PC[11] pin */
#define SYSCFG_EXTICR3_EXTI11_PD 0x3000U /*!<PD[11] pin */
#define SYSCFG_EXTICR3_EXTI11_PE 0x4000U /*!<PE[11] pin */
#define SYSCFG_EXTICR3_EXTI11_PF 0x5000U /*!<PF[11] pin */
#define SYSCFG_EXTICR3_EXTI11_PG 0x6000U /*!<PG[11] pin */
#define SYSCFG_EXTICR3_EXTI11_PH 0x7000U /*!<PH[11] pin */
#define SYSCFG_EXTICR3_EXTI11_PI 0x8000U /*!<PI[11] pin */

/*****************  Bit definition for SYSCFG_EXTICR4 register  ***************/
#define SYSCFG_EXTICR4_EXTI12_Pos (0U)
#define SYSCFG_EXTICR4_EXTI12_Msk (0xFU << SYSCFG_EXTICR4_EXTI12_Pos) /*!< 0x0000000F */
#define SYSCFG_EXTICR4_EXTI12     SYSCFG_EXTICR4_EXTI12_Msk           /*!<EXTI 12 configuration */
#define SYSCFG_EXTICR4_EXTI13_Pos (4U)
#define SYSCFG_EXTICR4_EXTI13_Msk (0xFU << SYSCFG_EXTICR4_EXTI13_Pos) /*!< 0x000000F0 */
#define SYSCFG_EXTICR4_EXTI13     SYSCFG_EXTICR4_EXTI13_Msk           /*!<EXTI 13 configuration */
#define SYSCFG_EXTICR4_EXTI14_Pos (8U)
#define SYSCFG_EXTICR4_EXTI14_Msk (0xFU << SYSCFG_EXTICR4_EXTI14_Pos) /*!< 0x00000F00 */
#define SYSCFG_EXTICR4_EXTI14     SYSCFG_EXTICR4_EXTI14_Msk           /*!<EXTI 14 configuration */
#define SYSCFG_EXTICR4_EXTI15_Pos (12U)
#define SYSCFG_EXTICR4_EXTI15_Msk (0xFU << SYSCFG_EXTICR4_EXTI15_Pos) /*!< 0x0000F000 */
#define SYSCFG_EXTICR4_EXTI15     SYSCFG_EXTICR4_EXTI15_Msk           /*!<EXTI 15 configuration */

/**
 * @brief   EXTI12 configuration
 */
#define SYSCFG_EXTICR4_EXTI12_PA 0x0000U /*!<PA[12] pin */
#define SYSCFG_EXTICR4_EXTI12_PB 0x0001U /*!<PB[12] pin */
#define SYSCFG_EXTICR4_EXTI12_PC 0x0002U /*!<PC[12] pin */
#define SYSCFG_EXTICR4_EXTI12_PD 0x0003U /*!<PD[12] pin */
#define SYSCFG_EXTICR4_EXTI12_PE 0x0004U /*!<PE[12] pin */
#define SYSCFG_EXTICR4_EXTI12_PF 0x0005U /*!<PF[12] pin */
#define SYSCFG_EXTICR4_EXTI12_PG 0x0006U /*!<PG[12] pin */
#define SYSCFG_EXTICR4_EXTI12_PH 0x0007U /*!<PH[12] pin */

/**
 * @brief   EXTI13 configuration
 */
#define SYSCFG_EXTICR4_EXTI13_PA 0x0000U /*!<PA[13] pin */
#define SYSCFG_EXTICR4_EXTI13_PB 0x0010U /*!<PB[13] pin */
#define SYSCFG_EXTICR4_EXTI13_PC 0x0020U /*!<PC[13] pin */
#define SYSCFG_EXTICR4_EXTI13_PD 0x0030U /*!<PD[13] pin */
#define SYSCFG_EXTICR4_EXTI13_PE 0x0040U /*!<PE[13] pin */
#define SYSCFG_EXTICR4_EXTI13_PF 0x0050U /*!<PF[13] pin */
#define SYSCFG_EXTICR4_EXTI13_PG 0x0060U /*!<PG[13] pin */
#define SYSCFG_EXTICR4_EXTI13_PH 0x0070U /*!<PH[13] pin */

/**
 * @brief   EXTI14 configuration
 */
#define SYSCFG_EXTICR4_EXTI14_PA 0x0000U /*!<PA[14] pin */
#define SYSCFG_EXTICR4_EXTI14_PB 0x0100U /*!<PB[14] pin */
#define SYSCFG_EXTICR4_EXTI14_PC 0x0200U /*!<PC[14] pin */
#define SYSCFG_EXTICR4_EXTI14_PD 0x0300U /*!<PD[14] pin */
#define SYSCFG_EXTICR4_EXTI14_PE 0x0400U /*!<PE[14] pin */
#define SYSCFG_EXTICR4_EXTI14_PF 0x0500U /*!<PF[14] pin */
#define SYSCFG_EXTICR4_EXTI14_PG 0x0600U /*!<PG[14] pin */
#define SYSCFG_EXTICR4_EXTI14_PH 0x0700U /*!<PH[14] pin */

/**
 * @brief   EXTI15 configuration
 */
#define SYSCFG_EXTICR4_EXTI15_PA 0x0000U /*!<PA[15] pin */
#define SYSCFG_EXTICR4_EXTI15_PB 0x1000U /*!<PB[15] pin */
#define SYSCFG_EXTICR4_EXTI15_PC 0x2000U /*!<PC[15] pin */
#define SYSCFG_EXTICR4_EXTI15_PD 0x3000U /*!<PD[15] pin */
#define SYSCFG_EXTICR4_EXTI15_PE 0x4000U /*!<PE[15] pin */
#define SYSCFG_EXTICR4_EXTI15_PF 0x5000U /*!<PF[15] pin */
#define SYSCFG_EXTICR4_EXTI15_PG 0x6000U /*!<PG[15] pin */
#define SYSCFG_EXTICR4_EXTI15_PH 0x7000U /*!<PH[15] pin */

/******************  Bit definition for SYSCFG_CMPCR register  ****************/
#define SYSCFG_CMPCR_CMP_PD_Pos (0U)
#define SYSCFG_CMPCR_CMP_PD_Msk (0x1U << SYSCFG_CMPCR_CMP_PD_Pos) /*!< 0x00000001 */
#define SYSCFG_CMPCR_CMP_PD     SYSCFG_CMPCR_CMP_PD_Msk           /*!<Compensation cell ready flag */
#define SYSCFG_CMPCR_READY_Pos  (8U)
#define SYSCFG_CMPCR_READY_Msk  (0x1U << SYSCFG_CMPCR_READY_Pos) /*!< 0x00000100 */
#define SYSCFG_CMPCR_READY      SYSCFG_CMPCR_READY_Msk           /*!<Compensation cell power-down */

/******************************************************************************/
/*                                                                            */
/*                                    TIM                                     */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for TIM_CR1 register  ********************/
#define TIM_CR1_CEN_Pos  (0U)
#define TIM_CR1_CEN_Msk  (0x1U << TIM_CR1_CEN_Pos) /*!< 0x00000001 */
#define TIM_CR1_CEN      TIM_CR1_CEN_Msk           /*!<Counter enable        */
#define TIM_CR1_UDIS_Pos (1U)
#define TIM_CR1_UDIS_Msk (0x1U << TIM_CR1_UDIS_Pos) /*!< 0x00000002 */
#define TIM_CR1_UDIS     TIM_CR1_UDIS_Msk           /*!<Update disable        */
#define TIM_CR1_URS_Pos  (2U)
#define TIM_CR1_URS_Msk  (0x1U << TIM_CR1_URS_Pos) /*!< 0x00000004 */
#define TIM_CR1_URS      TIM_CR1_URS_Msk           /*!<Update request source */
#define TIM_CR1_OPM_Pos  (3U)
#define TIM_CR1_OPM_Msk  (0x1U << TIM_CR1_OPM_Pos) /*!< 0x00000008 */
#define TIM_CR1_OPM      TIM_CR1_OPM_Msk           /*!<One pulse mode        */
#define TIM_CR1_DIR_Pos  (4U)
#define TIM_CR1_DIR_Msk  (0x1U << TIM_CR1_DIR_Pos) /*!< 0x00000010 */
#define TIM_CR1_DIR      TIM_CR1_DIR_Msk           /*!<Direction             */

#define TIM_CR1_CMS_Pos  (5U)
#define TIM_CR1_CMS_Msk  (0x3U << TIM_CR1_CMS_Pos) /*!< 0x00000060 */
#define TIM_CR1_CMS      TIM_CR1_CMS_Msk           /*!<CMS[1:0] bits (Center-aligned mode selection) */
#define TIM_CR1_CMS_0    (0x1U << TIM_CR1_CMS_Pos) /*!< 0x0020 */
#define TIM_CR1_CMS_1    (0x2U << TIM_CR1_CMS_Pos) /*!< 0x0040 */

#define TIM_CR1_ARPE_Pos (7U)
#define TIM_CR1_ARPE_Msk (0x1U << TIM_CR1_ARPE_Pos) /*!< 0x00000080 */
#define TIM_CR1_ARPE     TIM_CR1_ARPE_Msk           /*!<Auto-reload preload enable     */

#define TIM_CR1_CKD_Pos  (8U)
#define TIM_CR1_CKD_Msk  (0x3U << TIM_CR1_CKD_Pos) /*!< 0x00000300 */
#define TIM_CR1_CKD      TIM_CR1_CKD_Msk           /*!<CKD[1:0] bits (clock division) */
#define TIM_CR1_CKD_0    (0x1U << TIM_CR1_CKD_Pos) /*!< 0x0100 */
#define TIM_CR1_CKD_1    (0x2U << TIM_CR1_CKD_Pos) /*!< 0x0200 */

/*******************  Bit definition for TIM_CR2 register  ********************/
#define TIM_CR2_CCPC_Pos  (0U)
#define TIM_CR2_CCPC_Msk  (0x1U << TIM_CR2_CCPC_Pos) /*!< 0x00000001 */
#define TIM_CR2_CCPC      TIM_CR2_CCPC_Msk           /*!<Capture/Compare Preloaded Control        */
#define TIM_CR2_CCUS_Pos  (2U)
#define TIM_CR2_CCUS_Msk  (0x1U << TIM_CR2_CCUS_Pos) /*!< 0x00000004 */
#define TIM_CR2_CCUS      TIM_CR2_CCUS_Msk           /*!<Capture/Compare Control Update Selection */
#define TIM_CR2_CCDS_Pos  (3U)
#define TIM_CR2_CCDS_Msk  (0x1U << TIM_CR2_CCDS_Pos) /*!< 0x00000008 */
#define TIM_CR2_CCDS      TIM_CR2_CCDS_Msk           /*!<Capture/Compare DMA Selection            */

#define TIM_CR2_MMS_Pos   (4U)
#define TIM_CR2_MMS_Msk   (0x7U << TIM_CR2_MMS_Pos) /*!< 0x00000070 */
#define TIM_CR2_MMS       TIM_CR2_MMS_Msk           /*!<MMS[2:0] bits (Master Mode Selection) */
#define TIM_CR2_MMS_0     (0x1U << TIM_CR2_MMS_Pos) /*!< 0x0010 */
#define TIM_CR2_MMS_1     (0x2U << TIM_CR2_MMS_Pos) /*!< 0x0020 */
#define TIM_CR2_MMS_2     (0x4U << TIM_CR2_MMS_Pos) /*!< 0x0040 */

#define TIM_CR2_TI1S_Pos  (7U)
#define TIM_CR2_TI1S_Msk  (0x1U << TIM_CR2_TI1S_Pos) /*!< 0x00000080 */
#define TIM_CR2_TI1S      TIM_CR2_TI1S_Msk           /*!<TI1 Selection */
#define TIM_CR2_OIS1_Pos  (8U)
#define TIM_CR2_OIS1_Msk  (0x1U << TIM_CR2_OIS1_Pos) /*!< 0x00000100 */
#define TIM_CR2_OIS1      TIM_CR2_OIS1_Msk           /*!<Output Idle state 1 (OC1 output)  */
#define TIM_CR2_OIS1N_Pos (9U)
#define TIM_CR2_OIS1N_Msk (0x1U << TIM_CR2_OIS1N_Pos) /*!< 0x00000200 */
#define TIM_CR2_OIS1N     TIM_CR2_OIS1N_Msk           /*!<Output Idle state 1 (OC1N output) */
#define TIM_CR2_OIS2_Pos  (10U)
#define TIM_CR2_OIS2_Msk  (0x1U << TIM_CR2_OIS2_Pos) /*!< 0x00000400 */
#define TIM_CR2_OIS2      TIM_CR2_OIS2_Msk           /*!<Output Idle state 2 (OC2 output)  */
#define TIM_CR2_OIS2N_Pos (11U)
#define TIM_CR2_OIS2N_Msk (0x1U << TIM_CR2_OIS2N_Pos) /*!< 0x00000800 */
#define TIM_CR2_OIS2N     TIM_CR2_OIS2N_Msk           /*!<Output Idle state 2 (OC2N output) */
#define TIM_CR2_OIS3_Pos  (12U)
#define TIM_CR2_OIS3_Msk  (0x1U << TIM_CR2_OIS3_Pos) /*!< 0x00001000 */
#define TIM_CR2_OIS3      TIM_CR2_OIS3_Msk           /*!<Output Idle state 3 (OC3 output)  */
#define TIM_CR2_OIS3N_Pos (13U)
#define TIM_CR2_OIS3N_Msk (0x1U << TIM_CR2_OIS3N_Pos) /*!< 0x00002000 */
#define TIM_CR2_OIS3N     TIM_CR2_OIS3N_Msk           /*!<Output Idle state 3 (OC3N output) */
#define TIM_CR2_OIS4_Pos  (14U)
#define TIM_CR2_OIS4_Msk  (0x1U << TIM_CR2_OIS4_Pos) /*!< 0x00004000 */
#define TIM_CR2_OIS4      TIM_CR2_OIS4_Msk           /*!<Output Idle state 4 (OC4 output)  */

/*******************  Bit definition for TIM_SMCR register  *******************/
#define TIM_SMCR_SMS_Pos  (0U)
#define TIM_SMCR_SMS_Msk  (0x7U << TIM_SMCR_SMS_Pos) /*!< 0x00000007 */
#define TIM_SMCR_SMS      TIM_SMCR_SMS_Msk           /*!<SMS[2:0] bits (Slave mode selection)    */
#define TIM_SMCR_SMS_0    (0x1U << TIM_SMCR_SMS_Pos) /*!< 0x0001 */
#define TIM_SMCR_SMS_1    (0x2U << TIM_SMCR_SMS_Pos) /*!< 0x0002 */
#define TIM_SMCR_SMS_2    (0x4U << TIM_SMCR_SMS_Pos) /*!< 0x0004 */

#define TIM_SMCR_TS_Pos   (4U)
#define TIM_SMCR_TS_Msk   (0x7U << TIM_SMCR_TS_Pos) /*!< 0x00000070 */
#define TIM_SMCR_TS       TIM_SMCR_TS_Msk           /*!<TS[2:0] bits (Trigger selection)        */
#define TIM_SMCR_TS_0     (0x1U << TIM_SMCR_TS_Pos) /*!< 0x0010 */
#define TIM_SMCR_TS_1     (0x2U << TIM_SMCR_TS_Pos) /*!< 0x0020 */
#define TIM_SMCR_TS_2     (0x4U << TIM_SMCR_TS_Pos) /*!< 0x0040 */

#define TIM_SMCR_MSM_Pos  (7U)
#define TIM_SMCR_MSM_Msk  (0x1U << TIM_SMCR_MSM_Pos) /*!< 0x00000080 */
#define TIM_SMCR_MSM      TIM_SMCR_MSM_Msk           /*!<Master/slave mode                       */

#define TIM_SMCR_ETF_Pos  (8U)
#define TIM_SMCR_ETF_Msk  (0xFU << TIM_SMCR_ETF_Pos) /*!< 0x00000F00 */
#define TIM_SMCR_ETF      TIM_SMCR_ETF_Msk           /*!<ETF[3:0] bits (External trigger filter) */
#define TIM_SMCR_ETF_0    (0x1U << TIM_SMCR_ETF_Pos) /*!< 0x0100 */
#define TIM_SMCR_ETF_1    (0x2U << TIM_SMCR_ETF_Pos) /*!< 0x0200 */
#define TIM_SMCR_ETF_2    (0x4U << TIM_SMCR_ETF_Pos) /*!< 0x0400 */
#define TIM_SMCR_ETF_3    (0x8U << TIM_SMCR_ETF_Pos) /*!< 0x0800 */

#define TIM_SMCR_ETPS_Pos (12U)
#define TIM_SMCR_ETPS_Msk (0x3U << TIM_SMCR_ETPS_Pos) /*!< 0x00003000 */
#define TIM_SMCR_ETPS     TIM_SMCR_ETPS_Msk           /*!<ETPS[1:0] bits (External trigger prescaler) */
#define TIM_SMCR_ETPS_0   (0x1U << TIM_SMCR_ETPS_Pos) /*!< 0x1000 */
#define TIM_SMCR_ETPS_1   (0x2U << TIM_SMCR_ETPS_Pos) /*!< 0x2000 */

#define TIM_SMCR_ECE_Pos  (14U)
#define TIM_SMCR_ECE_Msk  (0x1U << TIM_SMCR_ECE_Pos) /*!< 0x00004000 */
#define TIM_SMCR_ECE      TIM_SMCR_ECE_Msk           /*!<External clock enable     */
#define TIM_SMCR_ETP_Pos  (15U)
#define TIM_SMCR_ETP_Msk  (0x1U << TIM_SMCR_ETP_Pos) /*!< 0x00008000 */
#define TIM_SMCR_ETP      TIM_SMCR_ETP_Msk           /*!<External trigger polarity */

/*******************  Bit definition for TIM_DIER register  *******************/
#define TIM_DIER_UIE_Pos   (0U)
#define TIM_DIER_UIE_Msk   (0x1U << TIM_DIER_UIE_Pos) /*!< 0x00000001 */
#define TIM_DIER_UIE       TIM_DIER_UIE_Msk           /*!<Update interrupt enable */
#define TIM_DIER_CC1IE_Pos (1U)
#define TIM_DIER_CC1IE_Msk (0x1U << TIM_DIER_CC1IE_Pos) /*!< 0x00000002 */
#define TIM_DIER_CC1IE     TIM_DIER_CC1IE_Msk           /*!<Capture/Compare 1 interrupt enable   */
#define TIM_DIER_CC2IE_Pos (2U)
#define TIM_DIER_CC2IE_Msk (0x1U << TIM_DIER_CC2IE_Pos) /*!< 0x00000004 */
#define TIM_DIER_CC2IE     TIM_DIER_CC2IE_Msk           /*!<Capture/Compare 2 interrupt enable   */
#define TIM_DIER_CC3IE_Pos (3U)
#define TIM_DIER_CC3IE_Msk (0x1U << TIM_DIER_CC3IE_Pos) /*!< 0x00000008 */
#define TIM_DIER_CC3IE     TIM_DIER_CC3IE_Msk           /*!<Capture/Compare 3 interrupt enable   */
#define TIM_DIER_CC4IE_Pos (4U)
#define TIM_DIER_CC4IE_Msk (0x1U << TIM_DIER_CC4IE_Pos) /*!< 0x00000010 */
#define TIM_DIER_CC4IE     TIM_DIER_CC4IE_Msk           /*!<Capture/Compare 4 interrupt enable   */
#define TIM_DIER_COMIE_Pos (5U)
#define TIM_DIER_COMIE_Msk (0x1U << TIM_DIER_COMIE_Pos) /*!< 0x00000020 */
#define TIM_DIER_COMIE     TIM_DIER_COMIE_Msk           /*!<COM interrupt enable                 */
#define TIM_DIER_TIE_Pos   (6U)
#define TIM_DIER_TIE_Msk   (0x1U << TIM_DIER_TIE_Pos) /*!< 0x00000040 */
#define TIM_DIER_TIE       TIM_DIER_TIE_Msk           /*!<Trigger interrupt enable             */
#define TIM_DIER_BIE_Pos   (7U)
#define TIM_DIER_BIE_Msk   (0x1U << TIM_DIER_BIE_Pos) /*!< 0x00000080 */
#define TIM_DIER_BIE       TIM_DIER_BIE_Msk           /*!<Break interrupt enable               */
#define TIM_DIER_UDE_Pos   (8U)
#define TIM_DIER_UDE_Msk   (0x1U << TIM_DIER_UDE_Pos) /*!< 0x00000100 */
#define TIM_DIER_UDE       TIM_DIER_UDE_Msk           /*!<Update DMA request enable            */
#define TIM_DIER_CC1DE_Pos (9U)
#define TIM_DIER_CC1DE_Msk (0x1U << TIM_DIER_CC1DE_Pos) /*!< 0x00000200 */
#define TIM_DIER_CC1DE     TIM_DIER_CC1DE_Msk           /*!<Capture/Compare 1 DMA request enable */
#define TIM_DIER_CC2DE_Pos (10U)
#define TIM_DIER_CC2DE_Msk (0x1U << TIM_DIER_CC2DE_Pos) /*!< 0x00000400 */
#define TIM_DIER_CC2DE     TIM_DIER_CC2DE_Msk           /*!<Capture/Compare 2 DMA request enable */
#define TIM_DIER_CC3DE_Pos (11U)
#define TIM_DIER_CC3DE_Msk (0x1U << TIM_DIER_CC3DE_Pos) /*!< 0x00000800 */
#define TIM_DIER_CC3DE     TIM_DIER_CC3DE_Msk           /*!<Capture/Compare 3 DMA request enable */
#define TIM_DIER_CC4DE_Pos (12U)
#define TIM_DIER_CC4DE_Msk (0x1U << TIM_DIER_CC4DE_Pos) /*!< 0x00001000 */
#define TIM_DIER_CC4DE     TIM_DIER_CC4DE_Msk           /*!<Capture/Compare 4 DMA request enable */
#define TIM_DIER_COMDE_Pos (13U)
#define TIM_DIER_COMDE_Msk (0x1U << TIM_DIER_COMDE_Pos) /*!< 0x00002000 */
#define TIM_DIER_COMDE     TIM_DIER_COMDE_Msk           /*!<COM DMA request enable               */
#define TIM_DIER_TDE_Pos   (14U)
#define TIM_DIER_TDE_Msk   (0x1U << TIM_DIER_TDE_Pos) /*!< 0x00004000 */
#define TIM_DIER_TDE       TIM_DIER_TDE_Msk           /*!<Trigger DMA request enable           */

/********************  Bit definition for TIM_SR register  ********************/
#define TIM_SR_UIF_Pos   (0U)
#define TIM_SR_UIF_Msk   (0x1U << TIM_SR_UIF_Pos) /*!< 0x00000001 */
#define TIM_SR_UIF       TIM_SR_UIF_Msk           /*!<Update interrupt Flag              */
#define TIM_SR_CC1IF_Pos (1U)
#define TIM_SR_CC1IF_Msk (0x1U << TIM_SR_CC1IF_Pos) /*!< 0x00000002 */
#define TIM_SR_CC1IF     TIM_SR_CC1IF_Msk           /*!<Capture/Compare 1 interrupt Flag   */
#define TIM_SR_CC2IF_Pos (2U)
#define TIM_SR_CC2IF_Msk (0x1U << TIM_SR_CC2IF_Pos) /*!< 0x00000004 */
#define TIM_SR_CC2IF     TIM_SR_CC2IF_Msk           /*!<Capture/Compare 2 interrupt Flag   */
#define TIM_SR_CC3IF_Pos (3U)
#define TIM_SR_CC3IF_Msk (0x1U << TIM_SR_CC3IF_Pos) /*!< 0x00000008 */
#define TIM_SR_CC3IF     TIM_SR_CC3IF_Msk           /*!<Capture/Compare 3 interrupt Flag   */
#define TIM_SR_CC4IF_Pos (4U)
#define TIM_SR_CC4IF_Msk (0x1U << TIM_SR_CC4IF_Pos) /*!< 0x00000010 */
#define TIM_SR_CC4IF     TIM_SR_CC4IF_Msk           /*!<Capture/Compare 4 interrupt Flag   */
#define TIM_SR_COMIF_Pos (5U)
#define TIM_SR_COMIF_Msk (0x1U << TIM_SR_COMIF_Pos) /*!< 0x00000020 */
#define TIM_SR_COMIF     TIM_SR_COMIF_Msk           /*!<COM interrupt Flag                 */
#define TIM_SR_TIF_Pos   (6U)
#define TIM_SR_TIF_Msk   (0x1U << TIM_SR_TIF_Pos) /*!< 0x00000040 */
#define TIM_SR_TIF       TIM_SR_TIF_Msk           /*!<Trigger interrupt Flag             */
#define TIM_SR_BIF_Pos   (7U)
#define TIM_SR_BIF_Msk   (0x1U << TIM_SR_BIF_Pos) /*!< 0x00000080 */
#define TIM_SR_BIF       TIM_SR_BIF_Msk           /*!<Break interrupt Flag               */
#define TIM_SR_CC1OF_Pos (9U)
#define TIM_SR_CC1OF_Msk (0x1U << TIM_SR_CC1OF_Pos) /*!< 0x00000200 */
#define TIM_SR_CC1OF     TIM_SR_CC1OF_Msk           /*!<Capture/Compare 1 Overcapture Flag */
#define TIM_SR_CC2OF_Pos (10U)
#define TIM_SR_CC2OF_Msk (0x1U << TIM_SR_CC2OF_Pos) /*!< 0x00000400 */
#define TIM_SR_CC2OF     TIM_SR_CC2OF_Msk           /*!<Capture/Compare 2 Overcapture Flag */
#define TIM_SR_CC3OF_Pos (11U)
#define TIM_SR_CC3OF_Msk (0x1U << TIM_SR_CC3OF_Pos) /*!< 0x00000800 */
#define TIM_SR_CC3OF     TIM_SR_CC3OF_Msk           /*!<Capture/Compare 3 Overcapture Flag */
#define TIM_SR_CC4OF_Pos (12U)
#define TIM_SR_CC4OF_Msk (0x1U << TIM_SR_CC4OF_Pos) /*!< 0x00001000 */
#define TIM_SR_CC4OF     TIM_SR_CC4OF_Msk           /*!<Capture/Compare 4 Overcapture Flag */

/*******************  Bit definition for TIM_EGR register  ********************/
#define TIM_EGR_UG_Pos   (0U)
#define TIM_EGR_UG_Msk   (0x1U << TIM_EGR_UG_Pos) /*!< 0x00000001 */
#define TIM_EGR_UG       TIM_EGR_UG_Msk           /*!<Update Generation                         */
#define TIM_EGR_CC1G_Pos (1U)
#define TIM_EGR_CC1G_Msk (0x1U << TIM_EGR_CC1G_Pos) /*!< 0x00000002 */
#define TIM_EGR_CC1G     TIM_EGR_CC1G_Msk           /*!<Capture/Compare 1 Generation              */
#define TIM_EGR_CC2G_Pos (2U)
#define TIM_EGR_CC2G_Msk (0x1U << TIM_EGR_CC2G_Pos) /*!< 0x00000004 */
#define TIM_EGR_CC2G     TIM_EGR_CC2G_Msk           /*!<Capture/Compare 2 Generation              */
#define TIM_EGR_CC3G_Pos (3U)
#define TIM_EGR_CC3G_Msk (0x1U << TIM_EGR_CC3G_Pos) /*!< 0x00000008 */
#define TIM_EGR_CC3G     TIM_EGR_CC3G_Msk           /*!<Capture/Compare 3 Generation              */
#define TIM_EGR_CC4G_Pos (4U)
#define TIM_EGR_CC4G_Msk (0x1U << TIM_EGR_CC4G_Pos) /*!< 0x00000010 */
#define TIM_EGR_CC4G     TIM_EGR_CC4G_Msk           /*!<Capture/Compare 4 Generation              */
#define TIM_EGR_COMG_Pos (5U)
#define TIM_EGR_COMG_Msk (0x1U << TIM_EGR_COMG_Pos) /*!< 0x00000020 */
#define TIM_EGR_COMG     TIM_EGR_COMG_Msk           /*!<Capture/Compare Control Update Generation */
#define TIM_EGR_TG_Pos   (6U)
#define TIM_EGR_TG_Msk   (0x1U << TIM_EGR_TG_Pos) /*!< 0x00000040 */
#define TIM_EGR_TG       TIM_EGR_TG_Msk           /*!<Trigger Generation                        */
#define TIM_EGR_BG_Pos   (7U)
#define TIM_EGR_BG_Msk   (0x1U << TIM_EGR_BG_Pos) /*!< 0x00000080 */
#define TIM_EGR_BG       TIM_EGR_BG_Msk           /*!<Break Generation                          */

/******************  Bit definition for TIM_CCMR1 register  *******************/
#define TIM_CCMR1_CC1S_Pos  (0U)
#define TIM_CCMR1_CC1S_Msk  (0x3U << TIM_CCMR1_CC1S_Pos) /*!< 0x00000003 */
#define TIM_CCMR1_CC1S      TIM_CCMR1_CC1S_Msk           /*!<CC1S[1:0] bits (Capture/Compare 1 Selection) */
#define TIM_CCMR1_CC1S_0    (0x1U << TIM_CCMR1_CC1S_Pos) /*!< 0x0001 */
#define TIM_CCMR1_CC1S_1    (0x2U << TIM_CCMR1_CC1S_Pos) /*!< 0x0002 */

#define TIM_CCMR1_OC1FE_Pos (2U)
#define TIM_CCMR1_OC1FE_Msk (0x1U << TIM_CCMR1_OC1FE_Pos) /*!< 0x00000004 */
#define TIM_CCMR1_OC1FE     TIM_CCMR1_OC1FE_Msk           /*!<Output Compare 1 Fast enable                 */
#define TIM_CCMR1_OC1PE_Pos (3U)
#define TIM_CCMR1_OC1PE_Msk (0x1U << TIM_CCMR1_OC1PE_Pos) /*!< 0x00000008 */
#define TIM_CCMR1_OC1PE     TIM_CCMR1_OC1PE_Msk           /*!<Output Compare 1 Preload enable              */

#define TIM_CCMR1_OC1M_Pos  (4U)
#define TIM_CCMR1_OC1M_Msk  (0x7U << TIM_CCMR1_OC1M_Pos) /*!< 0x00000070 */
#define TIM_CCMR1_OC1M      TIM_CCMR1_OC1M_Msk           /*!<OC1M[2:0] bits (Output Compare 1 Mode)       */
#define TIM_CCMR1_OC1M_0    (0x1U << TIM_CCMR1_OC1M_Pos) /*!< 0x0010 */
#define TIM_CCMR1_OC1M_1    (0x2U << TIM_CCMR1_OC1M_Pos) /*!< 0x0020 */
#define TIM_CCMR1_OC1M_2    (0x4U << TIM_CCMR1_OC1M_Pos) /*!< 0x0040 */

#define TIM_CCMR1_OC1CE_Pos (7U)
#define TIM_CCMR1_OC1CE_Msk (0x1U << TIM_CCMR1_OC1CE_Pos) /*!< 0x00000080 */
#define TIM_CCMR1_OC1CE     TIM_CCMR1_OC1CE_Msk           /*!<Output Compare 1Clear Enable                 */

#define TIM_CCMR1_CC2S_Pos  (8U)
#define TIM_CCMR1_CC2S_Msk  (0x3U << TIM_CCMR1_CC2S_Pos) /*!< 0x00000300 */
#define TIM_CCMR1_CC2S      TIM_CCMR1_CC2S_Msk           /*!<CC2S[1:0] bits (Capture/Compare 2 Selection) */
#define TIM_CCMR1_CC2S_0    (0x1U << TIM_CCMR1_CC2S_Pos) /*!< 0x0100 */
#define TIM_CCMR1_CC2S_1    (0x2U << TIM_CCMR1_CC2S_Pos) /*!< 0x0200 */

#define TIM_CCMR1_OC2FE_Pos (10U)
#define TIM_CCMR1_OC2FE_Msk (0x1U << TIM_CCMR1_OC2FE_Pos) /*!< 0x00000400 */
#define TIM_CCMR1_OC2FE     TIM_CCMR1_OC2FE_Msk           /*!<Output Compare 2 Fast enable                 */
#define TIM_CCMR1_OC2PE_Pos (11U)
#define TIM_CCMR1_OC2PE_Msk (0x1U << TIM_CCMR1_OC2PE_Pos) /*!< 0x00000800 */
#define TIM_CCMR1_OC2PE     TIM_CCMR1_OC2PE_Msk           /*!<Output Compare 2 Preload enable              */

#define TIM_CCMR1_OC2M_Pos  (12U)
#define TIM_CCMR1_OC2M_Msk  (0x7U << TIM_CCMR1_OC2M_Pos) /*!< 0x00007000 */
#define TIM_CCMR1_OC2M      TIM_CCMR1_OC2M_Msk           /*!<OC2M[2:0] bits (Output Compare 2 Mode)       */
#define TIM_CCMR1_OC2M_0    (0x1U << TIM_CCMR1_OC2M_Pos) /*!< 0x1000 */
#define TIM_CCMR1_OC2M_1    (0x2U << TIM_CCMR1_OC2M_Pos) /*!< 0x2000 */
#define TIM_CCMR1_OC2M_2    (0x4U << TIM_CCMR1_OC2M_Pos) /*!< 0x4000 */

#define TIM_CCMR1_OC2CE_Pos (15U)
#define TIM_CCMR1_OC2CE_Msk (0x1U << TIM_CCMR1_OC2CE_Pos) /*!< 0x00008000 */
#define TIM_CCMR1_OC2CE     TIM_CCMR1_OC2CE_Msk           /*!<Output Compare 2 Clear Enable */

/*----------------------------------------------------------------------------*/

#define TIM_CCMR1_IC1PSC_Pos (2U)
#define TIM_CCMR1_IC1PSC_Msk (0x3U << TIM_CCMR1_IC1PSC_Pos) /*!< 0x0000000C */
#define TIM_CCMR1_IC1PSC     TIM_CCMR1_IC1PSC_Msk           /*!<IC1PSC[1:0] bits (Input Capture 1 Prescaler) */
#define TIM_CCMR1_IC1PSC_0   (0x1U << TIM_CCMR1_IC1PSC_Pos) /*!< 0x0004 */
#define TIM_CCMR1_IC1PSC_1   (0x2U << TIM_CCMR1_IC1PSC_Pos) /*!< 0x0008 */

#define TIM_CCMR1_IC1F_Pos   (4U)
#define TIM_CCMR1_IC1F_Msk   (0xFU << TIM_CCMR1_IC1F_Pos) /*!< 0x000000F0 */
#define TIM_CCMR1_IC1F       TIM_CCMR1_IC1F_Msk           /*!<IC1F[3:0] bits (Input Capture 1 Filter)      */
#define TIM_CCMR1_IC1F_0     (0x1U << TIM_CCMR1_IC1F_Pos) /*!< 0x0010 */
#define TIM_CCMR1_IC1F_1     (0x2U << TIM_CCMR1_IC1F_Pos) /*!< 0x0020 */
#define TIM_CCMR1_IC1F_2     (0x4U << TIM_CCMR1_IC1F_Pos) /*!< 0x0040 */
#define TIM_CCMR1_IC1F_3     (0x8U << TIM_CCMR1_IC1F_Pos) /*!< 0x0080 */

#define TIM_CCMR1_IC2PSC_Pos (10U)
#define TIM_CCMR1_IC2PSC_Msk (0x3U << TIM_CCMR1_IC2PSC_Pos) /*!< 0x00000C00 */
#define TIM_CCMR1_IC2PSC     TIM_CCMR1_IC2PSC_Msk           /*!<IC2PSC[1:0] bits (Input Capture 2 Prescaler)  */
#define TIM_CCMR1_IC2PSC_0   (0x1U << TIM_CCMR1_IC2PSC_Pos) /*!< 0x0400 */
#define TIM_CCMR1_IC2PSC_1   (0x2U << TIM_CCMR1_IC2PSC_Pos) /*!< 0x0800 */

#define TIM_CCMR1_IC2F_Pos   (12U)
#define TIM_CCMR1_IC2F_Msk   (0xFU << TIM_CCMR1_IC2F_Pos) /*!< 0x0000F000 */
#define TIM_CCMR1_IC2F       TIM_CCMR1_IC2F_Msk           /*!<IC2F[3:0] bits (Input Capture 2 Filter)       */
#define TIM_CCMR1_IC2F_0     (0x1U << TIM_CCMR1_IC2F_Pos) /*!< 0x1000 */
#define TIM_CCMR1_IC2F_1     (0x2U << TIM_CCMR1_IC2F_Pos) /*!< 0x2000 */
#define TIM_CCMR1_IC2F_2     (0x4U << TIM_CCMR1_IC2F_Pos) /*!< 0x4000 */
#define TIM_CCMR1_IC2F_3     (0x8U << TIM_CCMR1_IC2F_Pos) /*!< 0x8000 */

/******************  Bit definition for TIM_CCMR2 register  *******************/
#define TIM_CCMR2_CC3S_Pos  (0U)
#define TIM_CCMR2_CC3S_Msk  (0x3U << TIM_CCMR2_CC3S_Pos) /*!< 0x00000003 */
#define TIM_CCMR2_CC3S      TIM_CCMR2_CC3S_Msk           /*!<CC3S[1:0] bits (Capture/Compare 3 Selection)  */
#define TIM_CCMR2_CC3S_0    (0x1U << TIM_CCMR2_CC3S_Pos) /*!< 0x0001 */
#define TIM_CCMR2_CC3S_1    (0x2U << TIM_CCMR2_CC3S_Pos) /*!< 0x0002 */

#define TIM_CCMR2_OC3FE_Pos (2U)
#define TIM_CCMR2_OC3FE_Msk (0x1U << TIM_CCMR2_OC3FE_Pos) /*!< 0x00000004 */
#define TIM_CCMR2_OC3FE     TIM_CCMR2_OC3FE_Msk           /*!<Output Compare 3 Fast enable           */
#define TIM_CCMR2_OC3PE_Pos (3U)
#define TIM_CCMR2_OC3PE_Msk (0x1U << TIM_CCMR2_OC3PE_Pos) /*!< 0x00000008 */
#define TIM_CCMR2_OC3PE     TIM_CCMR2_OC3PE_Msk           /*!<Output Compare 3 Preload enable        */

#define TIM_CCMR2_OC3M_Pos  (4U)
#define TIM_CCMR2_OC3M_Msk  (0x7U << TIM_CCMR2_OC3M_Pos) /*!< 0x00000070 */
#define TIM_CCMR2_OC3M      TIM_CCMR2_OC3M_Msk           /*!<OC3M[2:0] bits (Output Compare 3 Mode) */
#define TIM_CCMR2_OC3M_0    (0x1U << TIM_CCMR2_OC3M_Pos) /*!< 0x0010 */
#define TIM_CCMR2_OC3M_1    (0x2U << TIM_CCMR2_OC3M_Pos) /*!< 0x0020 */
#define TIM_CCMR2_OC3M_2    (0x4U << TIM_CCMR2_OC3M_Pos) /*!< 0x0040 */

#define TIM_CCMR2_OC3CE_Pos (7U)
#define TIM_CCMR2_OC3CE_Msk (0x1U << TIM_CCMR2_OC3CE_Pos) /*!< 0x00000080 */
#define TIM_CCMR2_OC3CE     TIM_CCMR2_OC3CE_Msk           /*!<Output Compare 3 Clear Enable */

#define TIM_CCMR2_CC4S_Pos  (8U)
#define TIM_CCMR2_CC4S_Msk  (0x3U << TIM_CCMR2_CC4S_Pos) /*!< 0x00000300 */
#define TIM_CCMR2_CC4S      TIM_CCMR2_CC4S_Msk           /*!<CC4S[1:0] bits (Capture/Compare 4 Selection) */
#define TIM_CCMR2_CC4S_0    (0x1U << TIM_CCMR2_CC4S_Pos) /*!< 0x0100 */
#define TIM_CCMR2_CC4S_1    (0x2U << TIM_CCMR2_CC4S_Pos) /*!< 0x0200 */

#define TIM_CCMR2_OC4FE_Pos (10U)
#define TIM_CCMR2_OC4FE_Msk (0x1U << TIM_CCMR2_OC4FE_Pos) /*!< 0x00000400 */
#define TIM_CCMR2_OC4FE     TIM_CCMR2_OC4FE_Msk           /*!<Output Compare 4 Fast enable    */
#define TIM_CCMR2_OC4PE_Pos (11U)
#define TIM_CCMR2_OC4PE_Msk (0x1U << TIM_CCMR2_OC4PE_Pos) /*!< 0x00000800 */
#define TIM_CCMR2_OC4PE     TIM_CCMR2_OC4PE_Msk           /*!<Output Compare 4 Preload enable */

#define TIM_CCMR2_OC4M_Pos  (12U)
#define TIM_CCMR2_OC4M_Msk  (0x7U << TIM_CCMR2_OC4M_Pos) /*!< 0x00007000 */
#define TIM_CCMR2_OC4M      TIM_CCMR2_OC4M_Msk           /*!<OC4M[2:0] bits (Output Compare 4 Mode) */
#define TIM_CCMR2_OC4M_0    (0x1U << TIM_CCMR2_OC4M_Pos) /*!< 0x1000 */
#define TIM_CCMR2_OC4M_1    (0x2U << TIM_CCMR2_OC4M_Pos) /*!< 0x2000 */
#define TIM_CCMR2_OC4M_2    (0x4U << TIM_CCMR2_OC4M_Pos) /*!< 0x4000 */

#define TIM_CCMR2_OC4CE_Pos (15U)
#define TIM_CCMR2_OC4CE_Msk (0x1U << TIM_CCMR2_OC4CE_Pos) /*!< 0x00008000 */
#define TIM_CCMR2_OC4CE     TIM_CCMR2_OC4CE_Msk           /*!<Output Compare 4 Clear Enable */

/*----------------------------------------------------------------------------*/

#define TIM_CCMR2_IC3PSC_Pos (2U)
#define TIM_CCMR2_IC3PSC_Msk (0x3U << TIM_CCMR2_IC3PSC_Pos) /*!< 0x0000000C */
#define TIM_CCMR2_IC3PSC     TIM_CCMR2_IC3PSC_Msk           /*!<IC3PSC[1:0] bits (Input Capture 3 Prescaler) */
#define TIM_CCMR2_IC3PSC_0   (0x1U << TIM_CCMR2_IC3PSC_Pos) /*!< 0x0004 */
#define TIM_CCMR2_IC3PSC_1   (0x2U << TIM_CCMR2_IC3PSC_Pos) /*!< 0x0008 */

#define TIM_CCMR2_IC3F_Pos   (4U)
#define TIM_CCMR2_IC3F_Msk   (0xFU << TIM_CCMR2_IC3F_Pos) /*!< 0x000000F0 */
#define TIM_CCMR2_IC3F       TIM_CCMR2_IC3F_Msk           /*!<IC3F[3:0] bits (Input Capture 3 Filter) */
#define TIM_CCMR2_IC3F_0     (0x1U << TIM_CCMR2_IC3F_Pos) /*!< 0x0010 */
#define TIM_CCMR2_IC3F_1     (0x2U << TIM_CCMR2_IC3F_Pos) /*!< 0x0020 */
#define TIM_CCMR2_IC3F_2     (0x4U << TIM_CCMR2_IC3F_Pos) /*!< 0x0040 */
#define TIM_CCMR2_IC3F_3     (0x8U << TIM_CCMR2_IC3F_Pos) /*!< 0x0080 */

#define TIM_CCMR2_IC4PSC_Pos (10U)
#define TIM_CCMR2_IC4PSC_Msk (0x3U << TIM_CCMR2_IC4PSC_Pos) /*!< 0x00000C00 */
#define TIM_CCMR2_IC4PSC     TIM_CCMR2_IC4PSC_Msk           /*!<IC4PSC[1:0] bits (Input Capture 4 Prescaler) */
#define TIM_CCMR2_IC4PSC_0   (0x1U << TIM_CCMR2_IC4PSC_Pos) /*!< 0x0400 */
#define TIM_CCMR2_IC4PSC_1   (0x2U << TIM_CCMR2_IC4PSC_Pos) /*!< 0x0800 */

#define TIM_CCMR2_IC4F_Pos   (12U)
#define TIM_CCMR2_IC4F_Msk   (0xFU << TIM_CCMR2_IC4F_Pos) /*!< 0x0000F000 */
#define TIM_CCMR2_IC4F       TIM_CCMR2_IC4F_Msk           /*!<IC4F[3:0] bits (Input Capture 4 Filter) */
#define TIM_CCMR2_IC4F_0     (0x1U << TIM_CCMR2_IC4F_Pos) /*!< 0x1000 */
#define TIM_CCMR2_IC4F_1     (0x2U << TIM_CCMR2_IC4F_Pos) /*!< 0x2000 */
#define TIM_CCMR2_IC4F_2     (0x4U << TIM_CCMR2_IC4F_Pos) /*!< 0x4000 */
#define TIM_CCMR2_IC4F_3     (0x8U << TIM_CCMR2_IC4F_Pos) /*!< 0x8000 */

/*******************  Bit definition for TIM_CCER register  *******************/
#define TIM_CCER_CC1E_Pos  (0U)
#define TIM_CCER_CC1E_Msk  (0x1U << TIM_CCER_CC1E_Pos) /*!< 0x00000001 */
#define TIM_CCER_CC1E      TIM_CCER_CC1E_Msk           /*!<Capture/Compare 1 output enable                 */
#define TIM_CCER_CC1P_Pos  (1U)
#define TIM_CCER_CC1P_Msk  (0x1U << TIM_CCER_CC1P_Pos) /*!< 0x00000002 */
#define TIM_CCER_CC1P      TIM_CCER_CC1P_Msk           /*!<Capture/Compare 1 output Polarity               */
#define TIM_CCER_CC1NE_Pos (2U)
#define TIM_CCER_CC1NE_Msk (0x1U << TIM_CCER_CC1NE_Pos) /*!< 0x00000004 */
#define TIM_CCER_CC1NE     TIM_CCER_CC1NE_Msk           /*!<Capture/Compare 1 Complementary output enable   */
#define TIM_CCER_CC1NP_Pos (3U)
#define TIM_CCER_CC1NP_Msk (0x1U << TIM_CCER_CC1NP_Pos) /*!< 0x00000008 */
#define TIM_CCER_CC1NP     TIM_CCER_CC1NP_Msk           /*!<Capture/Compare 1 Complementary output Polarity */
#define TIM_CCER_CC2E_Pos  (4U)
#define TIM_CCER_CC2E_Msk  (0x1U << TIM_CCER_CC2E_Pos) /*!< 0x00000010 */
#define TIM_CCER_CC2E      TIM_CCER_CC2E_Msk           /*!<Capture/Compare 2 output enable                 */
#define TIM_CCER_CC2P_Pos  (5U)
#define TIM_CCER_CC2P_Msk  (0x1U << TIM_CCER_CC2P_Pos) /*!< 0x00000020 */
#define TIM_CCER_CC2P      TIM_CCER_CC2P_Msk           /*!<Capture/Compare 2 output Polarity               */
#define TIM_CCER_CC2NE_Pos (6U)
#define TIM_CCER_CC2NE_Msk (0x1U << TIM_CCER_CC2NE_Pos) /*!< 0x00000040 */
#define TIM_CCER_CC2NE     TIM_CCER_CC2NE_Msk           /*!<Capture/Compare 2 Complementary output enable   */
#define TIM_CCER_CC2NP_Pos (7U)
#define TIM_CCER_CC2NP_Msk (0x1U << TIM_CCER_CC2NP_Pos) /*!< 0x00000080 */
#define TIM_CCER_CC2NP     TIM_CCER_CC2NP_Msk           /*!<Capture/Compare 2 Complementary output Polarity */
#define TIM_CCER_CC3E_Pos  (8U)
#define TIM_CCER_CC3E_Msk  (0x1U << TIM_CCER_CC3E_Pos) /*!< 0x00000100 */
#define TIM_CCER_CC3E      TIM_CCER_CC3E_Msk           /*!<Capture/Compare 3 output enable                 */
#define TIM_CCER_CC3P_Pos  (9U)
#define TIM_CCER_CC3P_Msk  (0x1U << TIM_CCER_CC3P_Pos) /*!< 0x00000200 */
#define TIM_CCER_CC3P      TIM_CCER_CC3P_Msk           /*!<Capture/Compare 3 output Polarity               */
#define TIM_CCER_CC3NE_Pos (10U)
#define TIM_CCER_CC3NE_Msk (0x1U << TIM_CCER_CC3NE_Pos) /*!< 0x00000400 */
#define TIM_CCER_CC3NE     TIM_CCER_CC3NE_Msk           /*!<Capture/Compare 3 Complementary output enable   */
#define TIM_CCER_CC3NP_Pos (11U)
#define TIM_CCER_CC3NP_Msk (0x1U << TIM_CCER_CC3NP_Pos) /*!< 0x00000800 */
#define TIM_CCER_CC3NP     TIM_CCER_CC3NP_Msk           /*!<Capture/Compare 3 Complementary output Polarity */
#define TIM_CCER_CC4E_Pos  (12U)
#define TIM_CCER_CC4E_Msk  (0x1U << TIM_CCER_CC4E_Pos) /*!< 0x00001000 */
#define TIM_CCER_CC4E      TIM_CCER_CC4E_Msk           /*!<Capture/Compare 4 output enable                 */
#define TIM_CCER_CC4P_Pos  (13U)
#define TIM_CCER_CC4P_Msk  (0x1U << TIM_CCER_CC4P_Pos) /*!< 0x00002000 */
#define TIM_CCER_CC4P      TIM_CCER_CC4P_Msk           /*!<Capture/Compare 4 output Polarity               */
#define TIM_CCER_CC4NP_Pos (15U)
#define TIM_CCER_CC4NP_Msk (0x1U << TIM_CCER_CC4NP_Pos) /*!< 0x00008000 */
#define TIM_CCER_CC4NP     TIM_CCER_CC4NP_Msk           /*!<Capture/Compare 4 Complementary output Polarity */

/*******************  Bit definition for TIM_CNT register  ********************/
#define TIM_CNT_CNT_Pos (0U)
#define TIM_CNT_CNT_Msk (0xFFFFFFFFU << TIM_CNT_CNT_Pos) /*!< 0xFFFFFFFF */
#define TIM_CNT_CNT     TIM_CNT_CNT_Msk                  /*!<Counter Value            */

/*******************  Bit definition for TIM_PSC register  ********************/
#define TIM_PSC_PSC_Pos (0U)
#define TIM_PSC_PSC_Msk (0xFFFFU << TIM_PSC_PSC_Pos) /*!< 0x0000FFFF */
#define TIM_PSC_PSC     TIM_PSC_PSC_Msk              /*!<Prescaler Value          */

/*******************  Bit definition for TIM_ARR register  ********************/
#define TIM_ARR_ARR_Pos (0U)
#define TIM_ARR_ARR_Msk (0xFFFFFFFFU << TIM_ARR_ARR_Pos) /*!< 0xFFFFFFFF */
#define TIM_ARR_ARR     TIM_ARR_ARR_Msk                  /*!<actual auto-reload Value */

/*******************  Bit definition for TIM_RCR register  ********************/
#define TIM_RCR_REP_Pos (0U)
#define TIM_RCR_REP_Msk (0xFFU << TIM_RCR_REP_Pos) /*!< 0x000000FF */
#define TIM_RCR_REP     TIM_RCR_REP_Msk            /*!<Repetition Counter Value */

/*******************  Bit definition for TIM_CCR1 register  *******************/
#define TIM_CCR1_CCR1_Pos (0U)
#define TIM_CCR1_CCR1_Msk (0xFFFFU << TIM_CCR1_CCR1_Pos) /*!< 0x0000FFFF */
#define TIM_CCR1_CCR1     TIM_CCR1_CCR1_Msk              /*!<Capture/Compare 1 Value  */

/*******************  Bit definition for TIM_CCR2 register  *******************/
#define TIM_CCR2_CCR2_Pos (0U)
#define TIM_CCR2_CCR2_Msk (0xFFFFU << TIM_CCR2_CCR2_Pos) /*!< 0x0000FFFF */
#define TIM_CCR2_CCR2     TIM_CCR2_CCR2_Msk              /*!<Capture/Compare 2 Value  */

/*******************  Bit definition for TIM_CCR3 register  *******************/
#define TIM_CCR3_CCR3_Pos (0U)
#define TIM_CCR3_CCR3_Msk (0xFFFFU << TIM_CCR3_CCR3_Pos) /*!< 0x0000FFFF */
#define TIM_CCR3_CCR3     TIM_CCR3_CCR3_Msk              /*!<Capture/Compare 3 Value  */

/*******************  Bit definition for TIM_CCR4 register  *******************/
#define TIM_CCR4_CCR4_Pos (0U)
#define TIM_CCR4_CCR4_Msk (0xFFFFU << TIM_CCR4_CCR4_Pos) /*!< 0x0000FFFF */
#define TIM_CCR4_CCR4     TIM_CCR4_CCR4_Msk              /*!<Capture/Compare 4 Value  */

/*******************  Bit definition for TIM_BDTR register  *******************/
#define TIM_BDTR_DTG_Pos  (0U)
#define TIM_BDTR_DTG_Msk  (0xFFU << TIM_BDTR_DTG_Pos) /*!< 0x000000FF */
#define TIM_BDTR_DTG      TIM_BDTR_DTG_Msk            /*!<DTG[0:7] bits (Dead-Time Generator set-up) */
#define TIM_BDTR_DTG_0    (0x01U << TIM_BDTR_DTG_Pos) /*!< 0x0001 */
#define TIM_BDTR_DTG_1    (0x02U << TIM_BDTR_DTG_Pos) /*!< 0x0002 */
#define TIM_BDTR_DTG_2    (0x04U << TIM_BDTR_DTG_Pos) /*!< 0x0004 */
#define TIM_BDTR_DTG_3    (0x08U << TIM_BDTR_DTG_Pos) /*!< 0x0008 */
#define TIM_BDTR_DTG_4    (0x10U << TIM_BDTR_DTG_Pos) /*!< 0x0010 */
#define TIM_BDTR_DTG_5    (0x20U << TIM_BDTR_DTG_Pos) /*!< 0x0020 */
#define TIM_BDTR_DTG_6    (0x40U << TIM_BDTR_DTG_Pos) /*!< 0x0040 */
#define TIM_BDTR_DTG_7    (0x80U << TIM_BDTR_DTG_Pos) /*!< 0x0080 */

#define TIM_BDTR_LOCK_Pos (8U)
#define TIM_BDTR_LOCK_Msk (0x3U << TIM_BDTR_LOCK_Pos) /*!< 0x00000300 */
#define TIM_BDTR_LOCK     TIM_BDTR_LOCK_Msk           /*!<LOCK[1:0] bits (Lock Configuration) */
#define TIM_BDTR_LOCK_0   (0x1U << TIM_BDTR_LOCK_Pos) /*!< 0x0100 */
#define TIM_BDTR_LOCK_1   (0x2U << TIM_BDTR_LOCK_Pos) /*!< 0x0200 */

#define TIM_BDTR_OSSI_Pos (10U)
#define TIM_BDTR_OSSI_Msk (0x1U << TIM_BDTR_OSSI_Pos) /*!< 0x00000400 */
#define TIM_BDTR_OSSI     TIM_BDTR_OSSI_Msk           /*!<Off-State Selection for Idle mode */
#define TIM_BDTR_OSSR_Pos (11U)
#define TIM_BDTR_OSSR_Msk (0x1U << TIM_BDTR_OSSR_Pos) /*!< 0x00000800 */
#define TIM_BDTR_OSSR     TIM_BDTR_OSSR_Msk           /*!<Off-State Selection for Run mode  */
#define TIM_BDTR_BKE_Pos  (12U)
#define TIM_BDTR_BKE_Msk  (0x1U << TIM_BDTR_BKE_Pos) /*!< 0x00001000 */
#define TIM_BDTR_BKE      TIM_BDTR_BKE_Msk           /*!<Break enable                      */
#define TIM_BDTR_BKP_Pos  (13U)
#define TIM_BDTR_BKP_Msk  (0x1U << TIM_BDTR_BKP_Pos) /*!< 0x00002000 */
#define TIM_BDTR_BKP      TIM_BDTR_BKP_Msk           /*!<Break Polarity                    */
#define TIM_BDTR_AOE_Pos  (14U)
#define TIM_BDTR_AOE_Msk  (0x1U << TIM_BDTR_AOE_Pos) /*!< 0x00004000 */
#define TIM_BDTR_AOE      TIM_BDTR_AOE_Msk           /*!<Automatic Output enable           */
#define TIM_BDTR_MOE_Pos  (15U)
#define TIM_BDTR_MOE_Msk  (0x1U << TIM_BDTR_MOE_Pos) /*!< 0x00008000 */
#define TIM_BDTR_MOE      TIM_BDTR_MOE_Msk           /*!<Main Output enable                */

/*******************  Bit definition for TIM_DCR register  ********************/
#define TIM_DCR_DBA_Pos (0U)
#define TIM_DCR_DBA_Msk (0x1FU << TIM_DCR_DBA_Pos) /*!< 0x0000001F */
#define TIM_DCR_DBA     TIM_DCR_DBA_Msk            /*!<DBA[4:0] bits (DMA Base Address) */
#define TIM_DCR_DBA_0   (0x01U << TIM_DCR_DBA_Pos) /*!< 0x0001 */
#define TIM_DCR_DBA_1   (0x02U << TIM_DCR_DBA_Pos) /*!< 0x0002 */
#define TIM_DCR_DBA_2   (0x04U << TIM_DCR_DBA_Pos) /*!< 0x0004 */
#define TIM_DCR_DBA_3   (0x08U << TIM_DCR_DBA_Pos) /*!< 0x0008 */
#define TIM_DCR_DBA_4   (0x10U << TIM_DCR_DBA_Pos) /*!< 0x0010 */

#define TIM_DCR_DBL_Pos (8U)
#define TIM_DCR_DBL_Msk (0x1FU << TIM_DCR_DBL_Pos) /*!< 0x00001F00 */
#define TIM_DCR_DBL     TIM_DCR_DBL_Msk            /*!<DBL[4:0] bits (DMA Burst Length) */
#define TIM_DCR_DBL_0   (0x01U << TIM_DCR_DBL_Pos) /*!< 0x0100 */
#define TIM_DCR_DBL_1   (0x02U << TIM_DCR_DBL_Pos) /*!< 0x0200 */
#define TIM_DCR_DBL_2   (0x04U << TIM_DCR_DBL_Pos) /*!< 0x0400 */
#define TIM_DCR_DBL_3   (0x08U << TIM_DCR_DBL_Pos) /*!< 0x0800 */
#define TIM_DCR_DBL_4   (0x10U << TIM_DCR_DBL_Pos) /*!< 0x1000 */

/*******************  Bit definition for TIM_DMAR register  *******************/
#define TIM_DMAR_DMAB_Pos (0U)
#define TIM_DMAR_DMAB_Msk (0xFFFFU << TIM_DMAR_DMAB_Pos) /*!< 0x0000FFFF */
#define TIM_DMAR_DMAB     TIM_DMAR_DMAB_Msk              /*!<DMA register for burst accesses                    */

/*******************  Bit definition for TIM_OR register  *********************/
#define TIM_OR_TI1_RMP_Pos  (0U)
#define TIM_OR_TI1_RMP_Msk  (0x3U << TIM_OR_TI1_RMP_Pos) /*!< 0x00000003 */
#define TIM_OR_TI1_RMP      TIM_OR_TI1_RMP_Msk           /*!< TI1_RMP[1:0] bits (TIM11 Input Capture 1 remap) */
#define TIM_OR_TI1_RMP_0    (0x1U << TIM_OR_TI1_RMP_Pos) /*!< 0x00000001 */
#define TIM_OR_TI1_RMP_1    (0x2U << TIM_OR_TI1_RMP_Pos) /*!< 0x00000002 */

#define TIM_OR_TI4_RMP_Pos  (6U)
#define TIM_OR_TI4_RMP_Msk  (0x3U << TIM_OR_TI4_RMP_Pos) /*!< 0x000000C0 */
#define TIM_OR_TI4_RMP      TIM_OR_TI4_RMP_Msk           /*!<TI4_RMP[1:0] bits (TIM5 Input 4 remap)             */
#define TIM_OR_TI4_RMP_0    (0x1U << TIM_OR_TI4_RMP_Pos) /*!< 0x0040 */
#define TIM_OR_TI4_RMP_1    (0x2U << TIM_OR_TI4_RMP_Pos) /*!< 0x0080 */
#define TIM_OR_ITR1_RMP_Pos (10U)
#define TIM_OR_ITR1_RMP_Msk (0x3U << TIM_OR_ITR1_RMP_Pos) /*!< 0x00000C00 */
#define TIM_OR_ITR1_RMP     TIM_OR_ITR1_RMP_Msk           /*!<ITR1_RMP[1:0] bits (TIM2 Internal trigger 1 remap) */
#define TIM_OR_ITR1_RMP_0   (0x1U << TIM_OR_ITR1_RMP_Pos) /*!< 0x0400 */
#define TIM_OR_ITR1_RMP_1   (0x2U << TIM_OR_ITR1_RMP_Pos) /*!< 0x0800 */


/******************************************************************************/
/*                                                                            */
/*         Universal Synchronous Asynchronous Receiver Transmitter            */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for USART_SR register  *******************/
#define USART_SR_PE_Pos   (0U)
#define USART_SR_PE_Msk   (0x1U << USART_SR_PE_Pos) /*!< 0x00000001 */
#define USART_SR_PE       USART_SR_PE_Msk           /*!<Parity Error                 */
#define USART_SR_FE_Pos   (1U)
#define USART_SR_FE_Msk   (0x1U << USART_SR_FE_Pos) /*!< 0x00000002 */
#define USART_SR_FE       USART_SR_FE_Msk           /*!<Framing Error                */
#define USART_SR_NE_Pos   (2U)
#define USART_SR_NE_Msk   (0x1U << USART_SR_NE_Pos) /*!< 0x00000004 */
#define USART_SR_NE       USART_SR_NE_Msk           /*!<Noise Error Flag             */
#define USART_SR_ORE_Pos  (3U)
#define USART_SR_ORE_Msk  (0x1U << USART_SR_ORE_Pos) /*!< 0x00000008 */
#define USART_SR_ORE      USART_SR_ORE_Msk           /*!<OverRun Error                */
#define USART_SR_IDLE_Pos (4U)
#define USART_SR_IDLE_Msk (0x1U << USART_SR_IDLE_Pos) /*!< 0x00000010 */
#define USART_SR_IDLE     USART_SR_IDLE_Msk           /*!<IDLE line detected           */
#define USART_SR_RXNE_Pos (5U)
#define USART_SR_RXNE_Msk (0x1U << USART_SR_RXNE_Pos) /*!< 0x00000020 */
#define USART_SR_RXNE     USART_SR_RXNE_Msk           /*!<Read Data Register Not Empty */
#define USART_SR_TC_Pos   (6U)
#define USART_SR_TC_Msk   (0x1U << USART_SR_TC_Pos) /*!< 0x00000040 */
#define USART_SR_TC       USART_SR_TC_Msk           /*!<Transmission Complete        */
#define USART_SR_TXE_Pos  (7U)
#define USART_SR_TXE_Msk  (0x1U << USART_SR_TXE_Pos) /*!< 0x00000080 */
#define USART_SR_TXE      USART_SR_TXE_Msk           /*!<Transmit Data Register Empty */
#define USART_SR_LBD_Pos  (8U)
#define USART_SR_LBD_Msk  (0x1U << USART_SR_LBD_Pos) /*!< 0x00000100 */
#define USART_SR_LBD      USART_SR_LBD_Msk           /*!<LIN Break Detection Flag     */
#define USART_SR_CTS_Pos  (9U)
#define USART_SR_CTS_Msk  (0x1U << USART_SR_CTS_Pos) /*!< 0x00000200 */
#define USART_SR_CTS      USART_SR_CTS_Msk           /*!<CTS Flag                     */

/*******************  Bit definition for USART_DR register  *******************/
#define USART_DR_DR_Pos (0U)
#define USART_DR_DR_Msk (0x1FFU << USART_DR_DR_Pos) /*!< 0x000001FF */
#define USART_DR_DR     USART_DR_DR_Msk             /*!<Data value */

/******************  Bit definition for USART_BRR register  *******************/
#define USART_BRR_DIV_Fraction_Pos (0U)
#define USART_BRR_DIV_Fraction_Msk (0xFU << USART_BRR_DIV_Fraction_Pos) /*!< 0x0000000F */
#define USART_BRR_DIV_Fraction     USART_BRR_DIV_Fraction_Msk           /*!<Fraction of USARTDIV */
#define USART_BRR_DIV_Mantissa_Pos (4U)
#define USART_BRR_DIV_Mantissa_Msk (0xFFFU << USART_BRR_DIV_Mantissa_Pos) /*!< 0x0000FFF0 */
#define USART_BRR_DIV_Mantissa     USART_BRR_DIV_Mantissa_Msk             /*!<Mantissa of USARTDIV */

/******************  Bit definition for USART_CR1 register  *******************/
#define USART_CR1_SBK_Pos    (0U)
#define USART_CR1_SBK_Msk    (0x1U << USART_CR1_SBK_Pos) /*!< 0x00000001 */
#define USART_CR1_SBK        USART_CR1_SBK_Msk           /*!<Send Break                             */
#define USART_CR1_RWU_Pos    (1U)
#define USART_CR1_RWU_Msk    (0x1U << USART_CR1_RWU_Pos) /*!< 0x00000002 */
#define USART_CR1_RWU        USART_CR1_RWU_Msk           /*!<Receiver wakeup                        */
#define USART_CR1_RE_Pos     (2U)
#define USART_CR1_RE_Msk     (0x1U << USART_CR1_RE_Pos) /*!< 0x00000004 */
#define USART_CR1_RE         USART_CR1_RE_Msk           /*!<Receiver Enable                        */
#define USART_CR1_TE_Pos     (3U)
#define USART_CR1_TE_Msk     (0x1U << USART_CR1_TE_Pos) /*!< 0x00000008 */
#define USART_CR1_TE         USART_CR1_TE_Msk           /*!<Transmitter Enable                     */
#define USART_CR1_IDLEIE_Pos (4U)
#define USART_CR1_IDLEIE_Msk (0x1U << USART_CR1_IDLEIE_Pos) /*!< 0x00000010 */
#define USART_CR1_IDLEIE     USART_CR1_IDLEIE_Msk           /*!<IDLE Interrupt Enable                  */
#define USART_CR1_RXNEIE_Pos (5U)
#define USART_CR1_RXNEIE_Msk (0x1U << USART_CR1_RXNEIE_Pos) /*!< 0x00000020 */
#define USART_CR1_RXNEIE     USART_CR1_RXNEIE_Msk           /*!<RXNE Interrupt Enable                  */
#define USART_CR1_TCIE_Pos   (6U)
#define USART_CR1_TCIE_Msk   (0x1U << USART_CR1_TCIE_Pos) /*!< 0x00000040 */
#define USART_CR1_TCIE       USART_CR1_TCIE_Msk           /*!<Transmission Complete Interrupt Enable */
#define USART_CR1_TXEIE_Pos  (7U)
#define USART_CR1_TXEIE_Msk  (0x1U << USART_CR1_TXEIE_Pos) /*!< 0x00000080 */
#define USART_CR1_TXEIE      USART_CR1_TXEIE_Msk           /*!<TXE Interrupt Enable                   */
#define USART_CR1_PEIE_Pos   (8U)
#define USART_CR1_PEIE_Msk   (0x1U << USART_CR1_PEIE_Pos) /*!< 0x00000100 */
#define USART_CR1_PEIE       USART_CR1_PEIE_Msk           /*!<PE Interrupt Enable                    */
#define USART_CR1_PS_Pos     (9U)
#define USART_CR1_PS_Msk     (0x1U << USART_CR1_PS_Pos) /*!< 0x00000200 */
#define USART_CR1_PS         USART_CR1_PS_Msk           /*!<Parity Selection                       */
#define USART_CR1_PCE_Pos    (10U)
#define USART_CR1_PCE_Msk    (0x1U << USART_CR1_PCE_Pos) /*!< 0x00000400 */
#define USART_CR1_PCE        USART_CR1_PCE_Msk           /*!<Parity Control Enable                  */
#define USART_CR1_WAKE_Pos   (11U)
#define USART_CR1_WAKE_Msk   (0x1U << USART_CR1_WAKE_Pos) /*!< 0x00000800 */
#define USART_CR1_WAKE       USART_CR1_WAKE_Msk           /*!<Wakeup method                          */
#define USART_CR1_M_Pos      (12U)
#define USART_CR1_M_Msk      (0x1U << USART_CR1_M_Pos) /*!< 0x00001000 */
#define USART_CR1_M          USART_CR1_M_Msk           /*!<Word length                            */
#define USART_CR1_UE_Pos     (13U)
#define USART_CR1_UE_Msk     (0x1U << USART_CR1_UE_Pos) /*!< 0x00002000 */
#define USART_CR1_UE         USART_CR1_UE_Msk           /*!<USART Enable                           */
#define USART_CR1_OVER8_Pos  (15U)
#define USART_CR1_OVER8_Msk  (0x1U << USART_CR1_OVER8_Pos) /*!< 0x00008000 */
#define USART_CR1_OVER8      USART_CR1_OVER8_Msk           /*!<USART Oversampling by 8 enable         */

/******************  Bit definition for USART_CR2 register  *******************/
#define USART_CR2_ADD_Pos   (0U)
#define USART_CR2_ADD_Msk   (0xFU << USART_CR2_ADD_Pos) /*!< 0x0000000F */
#define USART_CR2_ADD       USART_CR2_ADD_Msk           /*!<Address of the USART node            */
#define USART_CR2_LBDL_Pos  (5U)
#define USART_CR2_LBDL_Msk  (0x1U << USART_CR2_LBDL_Pos) /*!< 0x00000020 */
#define USART_CR2_LBDL      USART_CR2_LBDL_Msk           /*!<LIN Break Detection Length           */
#define USART_CR2_LBDIE_Pos (6U)
#define USART_CR2_LBDIE_Msk (0x1U << USART_CR2_LBDIE_Pos) /*!< 0x00000040 */
#define USART_CR2_LBDIE     USART_CR2_LBDIE_Msk           /*!<LIN Break Detection Interrupt Enable */
#define USART_CR2_LBCL_Pos  (8U)
#define USART_CR2_LBCL_Msk  (0x1U << USART_CR2_LBCL_Pos) /*!< 0x00000100 */
#define USART_CR2_LBCL      USART_CR2_LBCL_Msk           /*!<Last Bit Clock pulse                 */
#define USART_CR2_CPHA_Pos  (9U)
#define USART_CR2_CPHA_Msk  (0x1U << USART_CR2_CPHA_Pos) /*!< 0x00000200 */
#define USART_CR2_CPHA      USART_CR2_CPHA_Msk           /*!<Clock Phase                          */
#define USART_CR2_CPOL_Pos  (10U)
#define USART_CR2_CPOL_Msk  (0x1U << USART_CR2_CPOL_Pos) /*!< 0x00000400 */
#define USART_CR2_CPOL      USART_CR2_CPOL_Msk           /*!<Clock Polarity                       */
#define USART_CR2_CLKEN_Pos (11U)
#define USART_CR2_CLKEN_Msk (0x1U << USART_CR2_CLKEN_Pos) /*!< 0x00000800 */
#define USART_CR2_CLKEN     USART_CR2_CLKEN_Msk           /*!<Clock Enable                         */

#define USART_CR2_STOP_Pos  (12U)
#define USART_CR2_STOP_Msk  (0x3U << USART_CR2_STOP_Pos) /*!< 0x00003000 */
#define USART_CR2_STOP      USART_CR2_STOP_Msk           /*!<STOP[1:0] bits (STOP bits) */
#define USART_CR2_STOP_0    (0x1U << USART_CR2_STOP_Pos) /*!< 0x1000 */
#define USART_CR2_STOP_1    (0x2U << USART_CR2_STOP_Pos) /*!< 0x2000 */

#define USART_CR2_LINEN_Pos (14U)
#define USART_CR2_LINEN_Msk (0x1U << USART_CR2_LINEN_Pos) /*!< 0x00004000 */
#define USART_CR2_LINEN     USART_CR2_LINEN_Msk           /*!<LIN mode enable */

/******************  Bit definition for USART_CR3 register  *******************/
#define USART_CR3_EIE_Pos    (0U)
#define USART_CR3_EIE_Msk    (0x1U << USART_CR3_EIE_Pos) /*!< 0x00000001 */
#define USART_CR3_EIE        USART_CR3_EIE_Msk           /*!<Error Interrupt Enable      */
#define USART_CR3_IREN_Pos   (1U)
#define USART_CR3_IREN_Msk   (0x1U << USART_CR3_IREN_Pos) /*!< 0x00000002 */
#define USART_CR3_IREN       USART_CR3_IREN_Msk           /*!<IrDA mode Enable            */
#define USART_CR3_IRLP_Pos   (2U)
#define USART_CR3_IRLP_Msk   (0x1U << USART_CR3_IRLP_Pos) /*!< 0x00000004 */
#define USART_CR3_IRLP       USART_CR3_IRLP_Msk           /*!<IrDA Low-Power              */
#define USART_CR3_HDSEL_Pos  (3U)
#define USART_CR3_HDSEL_Msk  (0x1U << USART_CR3_HDSEL_Pos) /*!< 0x00000008 */
#define USART_CR3_HDSEL      USART_CR3_HDSEL_Msk           /*!<Half-Duplex Selection       */
#define USART_CR3_NACK_Pos   (4U)
#define USART_CR3_NACK_Msk   (0x1U << USART_CR3_NACK_Pos) /*!< 0x00000010 */
#define USART_CR3_NACK       USART_CR3_NACK_Msk           /*!<Smartcard NACK enable       */
#define USART_CR3_SCEN_Pos   (5U)
#define USART_CR3_SCEN_Msk   (0x1U << USART_CR3_SCEN_Pos) /*!< 0x00000020 */
#define USART_CR3_SCEN       USART_CR3_SCEN_Msk           /*!<Smartcard mode enable       */
#define USART_CR3_DMAR_Pos   (6U)
#define USART_CR3_DMAR_Msk   (0x1U << USART_CR3_DMAR_Pos) /*!< 0x00000040 */
#define USART_CR3_DMAR       USART_CR3_DMAR_Msk           /*!<DMA Enable Receiver         */
#define USART_CR3_DMAT_Pos   (7U)
#define USART_CR3_DMAT_Msk   (0x1U << USART_CR3_DMAT_Pos) /*!< 0x00000080 */
#define USART_CR3_DMAT       USART_CR3_DMAT_Msk           /*!<DMA Enable Transmitter      */
#define USART_CR3_RTSE_Pos   (8U)
#define USART_CR3_RTSE_Msk   (0x1U << USART_CR3_RTSE_Pos) /*!< 0x00000100 */
#define USART_CR3_RTSE       USART_CR3_RTSE_Msk           /*!<RTS Enable                  */
#define USART_CR3_CTSE_Pos   (9U)
#define USART_CR3_CTSE_Msk   (0x1U << USART_CR3_CTSE_Pos) /*!< 0x00000200 */
#define USART_CR3_CTSE       USART_CR3_CTSE_Msk           /*!<CTS Enable                  */
#define USART_CR3_CTSIE_Pos  (10U)
#define USART_CR3_CTSIE_Msk  (0x1U << USART_CR3_CTSIE_Pos) /*!< 0x00000400 */
#define USART_CR3_CTSIE      USART_CR3_CTSIE_Msk           /*!<CTS Interrupt Enable        */
#define USART_CR3_ONEBIT_Pos (11U)
#define USART_CR3_ONEBIT_Msk (0x1U << USART_CR3_ONEBIT_Pos) /*!< 0x00000800 */
#define USART_CR3_ONEBIT     USART_CR3_ONEBIT_Msk           /*!<USART One bit method enable */

/******************  Bit definition for USART_GTPR register  ******************/
#define USART_GTPR_PSC_Pos (0U)
#define USART_GTPR_PSC_Msk (0xFFU << USART_GTPR_PSC_Pos) /*!< 0x000000FF */
#define USART_GTPR_PSC     USART_GTPR_PSC_Msk            /*!<PSC[7:0] bits (Prescaler value) */
#define USART_GTPR_PSC_0   (0x01U << USART_GTPR_PSC_Pos) /*!< 0x0001 */
#define USART_GTPR_PSC_1   (0x02U << USART_GTPR_PSC_Pos) /*!< 0x0002 */
#define USART_GTPR_PSC_2   (0x04U << USART_GTPR_PSC_Pos) /*!< 0x0004 */
#define USART_GTPR_PSC_3   (0x08U << USART_GTPR_PSC_Pos) /*!< 0x0008 */
#define USART_GTPR_PSC_4   (0x10U << USART_GTPR_PSC_Pos) /*!< 0x0010 */
#define USART_GTPR_PSC_5   (0x20U << USART_GTPR_PSC_Pos) /*!< 0x0020 */
#define USART_GTPR_PSC_6   (0x40U << USART_GTPR_PSC_Pos) /*!< 0x0040 */
#define USART_GTPR_PSC_7   (0x80U << USART_GTPR_PSC_Pos) /*!< 0x0080 */

#define USART_GTPR_GT_Pos  (8U)
#define USART_GTPR_GT_Msk  (0xFFU << USART_GTPR_GT_Pos) /*!< 0x0000FF00 */
#define USART_GTPR_GT      USART_GTPR_GT_Msk            /*!<Guard time value */

/******************************************************************************/
/*                                                                            */
/*                            Window WATCHDOG                                 */
/*                                                                            */
/******************************************************************************/
/*******************  Bit definition for WWDG_CR register  ********************/
#define WWDG_CR_T_Pos    (0U)
#define WWDG_CR_T_Msk    (0x7FU << WWDG_CR_T_Pos) /*!< 0x0000007F */
#define WWDG_CR_T        WWDG_CR_T_Msk            /*!<T[6:0] bits (7-Bit counter (MSB to LSB)) */
#define WWDG_CR_T_0      (0x01U << WWDG_CR_T_Pos) /*!< 0x01 */
#define WWDG_CR_T_1      (0x02U << WWDG_CR_T_Pos) /*!< 0x02 */
#define WWDG_CR_T_2      (0x04U << WWDG_CR_T_Pos) /*!< 0x04 */
#define WWDG_CR_T_3      (0x08U << WWDG_CR_T_Pos) /*!< 0x08 */
#define WWDG_CR_T_4      (0x10U << WWDG_CR_T_Pos) /*!< 0x10 */
#define WWDG_CR_T_5      (0x20U << WWDG_CR_T_Pos) /*!< 0x20 */
#define WWDG_CR_T_6      (0x40U << WWDG_CR_T_Pos) /*!< 0x40 */
/* Legacy defines */
#define  WWDG_CR_T0      WWDG_CR_T_0
#define  WWDG_CR_T1      WWDG_CR_T_1
#define  WWDG_CR_T2      WWDG_CR_T_2
#define  WWDG_CR_T3      WWDG_CR_T_3
#define  WWDG_CR_T4      WWDG_CR_T_4
#define  WWDG_CR_T5      WWDG_CR_T_5
#define  WWDG_CR_T6      WWDG_CR_T_6

#define WWDG_CR_WDGA_Pos (7U)
#define WWDG_CR_WDGA_Msk (0x1U << WWDG_CR_WDGA_Pos) /*!< 0x00000080 */
#define WWDG_CR_WDGA     WWDG_CR_WDGA_Msk           /*!<Activation bit */

/*******************  Bit definition for WWDG_CFR register  *******************/
#define WWDG_CFR_W_Pos     (0U)
#define WWDG_CFR_W_Msk     (0x7FU << WWDG_CFR_W_Pos) /*!< 0x0000007F */
#define WWDG_CFR_W         WWDG_CFR_W_Msk            /*!<W[6:0] bits (7-bit window value) */
#define WWDG_CFR_W_0       (0x01U << WWDG_CFR_W_Pos) /*!< 0x0001 */
#define WWDG_CFR_W_1       (0x02U << WWDG_CFR_W_Pos) /*!< 0x0002 */
#define WWDG_CFR_W_2       (0x04U << WWDG_CFR_W_Pos) /*!< 0x0004 */
#define WWDG_CFR_W_3       (0x08U << WWDG_CFR_W_Pos) /*!< 0x0008 */
#define WWDG_CFR_W_4       (0x10U << WWDG_CFR_W_Pos) /*!< 0x0010 */
#define WWDG_CFR_W_5       (0x20U << WWDG_CFR_W_Pos) /*!< 0x0020 */
#define WWDG_CFR_W_6       (0x40U << WWDG_CFR_W_Pos) /*!< 0x0040 */
/* Legacy defines */
#define  WWDG_CFR_W0       WWDG_CFR_W_0
#define  WWDG_CFR_W1       WWDG_CFR_W_1
#define  WWDG_CFR_W2       WWDG_CFR_W_2
#define  WWDG_CFR_W3       WWDG_CFR_W_3
#define  WWDG_CFR_W4       WWDG_CFR_W_4
#define  WWDG_CFR_W5       WWDG_CFR_W_5
#define  WWDG_CFR_W6       WWDG_CFR_W_6

#define WWDG_CFR_WDGTB_Pos (7U)
#define WWDG_CFR_WDGTB_Msk (0x3U << WWDG_CFR_WDGTB_Pos) /*!< 0x00000180 */
#define WWDG_CFR_WDGTB     WWDG_CFR_WDGTB_Msk           /*!<WDGTB[1:0] bits (Timer Base) */
#define WWDG_CFR_WDGTB_0   (0x1U << WWDG_CFR_WDGTB_Pos) /*!< 0x0080 */
#define WWDG_CFR_WDGTB_1   (0x2U << WWDG_CFR_WDGTB_Pos) /*!< 0x0100 */
/* Legacy defines */
#define  WWDG_CFR_WDGTB0   WWDG_CFR_WDGTB_0
#define  WWDG_CFR_WDGTB1   WWDG_CFR_WDGTB_1

#define WWDG_CFR_EWI_Pos   (9U)
#define WWDG_CFR_EWI_Msk   (0x1U << WWDG_CFR_EWI_Pos) /*!< 0x00000200 */
#define WWDG_CFR_EWI       WWDG_CFR_EWI_Msk           /*!<Early Wakeup Interrupt */

/*******************  Bit definition for WWDG_SR register  ********************/
#define WWDG_SR_EWIF_Pos (0U)
#define WWDG_SR_EWIF_Msk (0x1U << WWDG_SR_EWIF_Pos) /*!< 0x00000001 */
#define WWDG_SR_EWIF     WWDG_SR_EWIF_Msk           /*!<Early Wakeup Interrupt Flag */


/******************************************************************************/
/*                                                                            */
/*                                DBG                                         */
/*                                                                            */
/******************************************************************************/
/********************  Bit definition for DBGMCU_IDCODE register  *************/
#define DBGMCU_IDCODE_DEV_ID_Pos (0U)
#define DBGMCU_IDCODE_DEV_ID_Msk (0xFFFU << DBGMCU_IDCODE_DEV_ID_Pos) /*!< 0x00000FFF */
#define DBGMCU_IDCODE_DEV_ID     DBGMCU_IDCODE_DEV_ID_Msk
#define DBGMCU_IDCODE_REV_ID_Pos (16U)
#define DBGMCU_IDCODE_REV_ID_Msk (0xFFFFU << DBGMCU_IDCODE_REV_ID_Pos) /*!< 0xFFFF0000 */
#define DBGMCU_IDCODE_REV_ID     DBGMCU_IDCODE_REV_ID_Msk

/********************  Bit definition for DBGMCU_CR register  *****************/
#define DBGMCU_CR_DBG_SLEEP_Pos   (0U)
#define DBGMCU_CR_DBG_SLEEP_Msk   (0x1U << DBGMCU_CR_DBG_SLEEP_Pos) /*!< 0x00000001 */
#define DBGMCU_CR_DBG_SLEEP       DBGMCU_CR_DBG_SLEEP_Msk
#define DBGMCU_CR_DBG_STOP_Pos    (1U)
#define DBGMCU_CR_DBG_STOP_Msk    (0x1U << DBGMCU_CR_DBG_STOP_Pos) /*!< 0x00000002 */
#define DBGMCU_CR_DBG_STOP        DBGMCU_CR_DBG_STOP_Msk
#define DBGMCU_CR_DBG_STANDBY_Pos (2U)
#define DBGMCU_CR_DBG_STANDBY_Msk (0x1U << DBGMCU_CR_DBG_STANDBY_Pos) /*!< 0x00000004 */
#define DBGMCU_CR_DBG_STANDBY     DBGMCU_CR_DBG_STANDBY_Msk
#define DBGMCU_CR_TRACE_IOEN_Pos  (5U)
#define DBGMCU_CR_TRACE_IOEN_Msk  (0x1U << DBGMCU_CR_TRACE_IOEN_Pos) /*!< 0x00000020 */
#define DBGMCU_CR_TRACE_IOEN      DBGMCU_CR_TRACE_IOEN_Msk

#define DBGMCU_CR_TRACE_MODE_Pos  (6U)
#define DBGMCU_CR_TRACE_MODE_Msk  (0x3U << DBGMCU_CR_TRACE_MODE_Pos) /*!< 0x000000C0 */
#define DBGMCU_CR_TRACE_MODE      DBGMCU_CR_TRACE_MODE_Msk
#define DBGMCU_CR_TRACE_MODE_0    (0x1U << DBGMCU_CR_TRACE_MODE_Pos) /*!< 0x00000040 */
#define DBGMCU_CR_TRACE_MODE_1    (0x2U << DBGMCU_CR_TRACE_MODE_Pos) /*!< 0x00000080 */

/********************  Bit definition for DBGMCU_APB1_FZ register  ************/
#define DBGMCU_APB1_FZ_DBG_TIM2_STOP_Pos          (0U)
#define DBGMCU_APB1_FZ_DBG_TIM2_STOP_Msk          (0x1U << DBGMCU_APB1_FZ_DBG_TIM2_STOP_Pos) /*!< 0x00000001 */
#define DBGMCU_APB1_FZ_DBG_TIM2_STOP              DBGMCU_APB1_FZ_DBG_TIM2_STOP_Msk
#define DBGMCU_APB1_FZ_DBG_TIM3_STOP_Pos          (1U)
#define DBGMCU_APB1_FZ_DBG_TIM3_STOP_Msk          (0x1U << DBGMCU_APB1_FZ_DBG_TIM3_STOP_Pos) /*!< 0x00000002 */
#define DBGMCU_APB1_FZ_DBG_TIM3_STOP              DBGMCU_APB1_FZ_DBG_TIM3_STOP_Msk
#define DBGMCU_APB1_FZ_DBG_TIM4_STOP_Pos          (2U)
#define DBGMCU_APB1_FZ_DBG_TIM4_STOP_Msk          (0x1U << DBGMCU_APB1_FZ_DBG_TIM4_STOP_Pos) /*!< 0x00000004 */
#define DBGMCU_APB1_FZ_DBG_TIM4_STOP              DBGMCU_APB1_FZ_DBG_TIM4_STOP_Msk
#define DBGMCU_APB1_FZ_DBG_TIM5_STOP_Pos          (3U)
#define DBGMCU_APB1_FZ_DBG_TIM5_STOP_Msk          (0x1U << DBGMCU_APB1_FZ_DBG_TIM5_STOP_Pos) /*!< 0x00000008 */
#define DBGMCU_APB1_FZ_DBG_TIM5_STOP              DBGMCU_APB1_FZ_DBG_TIM5_STOP_Msk
#define DBGMCU_APB1_FZ_DBG_TIM6_STOP_Pos          (4U)
#define DBGMCU_APB1_FZ_DBG_TIM6_STOP_Msk          (0x1U << DBGMCU_APB1_FZ_DBG_TIM6_STOP_Pos) /*!< 0x00000010 */
#define DBGMCU_APB1_FZ_DBG_TIM6_STOP              DBGMCU_APB1_FZ_DBG_TIM6_STOP_Msk
#define DBGMCU_APB1_FZ_DBG_TIM7_STOP_Pos          (5U)
#define DBGMCU_APB1_FZ_DBG_TIM7_STOP_Msk          (0x1U << DBGMCU_APB1_FZ_DBG_TIM7_STOP_Pos) /*!< 0x00000020 */
#define DBGMCU_APB1_FZ_DBG_TIM7_STOP              DBGMCU_APB1_FZ_DBG_TIM7_STOP_Msk
#define DBGMCU_APB1_FZ_DBG_TIM12_STOP_Pos         (6U)
#define DBGMCU_APB1_FZ_DBG_TIM12_STOP_Msk         (0x1U << DBGMCU_APB1_FZ_DBG_TIM12_STOP_Pos) /*!< 0x00000040 */
#define DBGMCU_APB1_FZ_DBG_TIM12_STOP             DBGMCU_APB1_FZ_DBG_TIM12_STOP_Msk
#define DBGMCU_APB1_FZ_DBG_TIM13_STOP_Pos         (7U)
#define DBGMCU_APB1_FZ_DBG_TIM13_STOP_Msk         (0x1U << DBGMCU_APB1_FZ_DBG_TIM13_STOP_Pos) /*!< 0x00000080 */
#define DBGMCU_APB1_FZ_DBG_TIM13_STOP             DBGMCU_APB1_FZ_DBG_TIM13_STOP_Msk
#define DBGMCU_APB1_FZ_DBG_TIM14_STOP_Pos         (8U)
#define DBGMCU_APB1_FZ_DBG_TIM14_STOP_Msk         (0x1U << DBGMCU_APB1_FZ_DBG_TIM14_STOP_Pos) /*!< 0x00000100 */
#define DBGMCU_APB1_FZ_DBG_TIM14_STOP             DBGMCU_APB1_FZ_DBG_TIM14_STOP_Msk
#define DBGMCU_APB1_FZ_DBG_RTC_STOP_Pos           (10U)
#define DBGMCU_APB1_FZ_DBG_RTC_STOP_Msk           (0x1U << DBGMCU_APB1_FZ_DBG_RTC_STOP_Pos) /*!< 0x00000400 */
#define DBGMCU_APB1_FZ_DBG_RTC_STOP               DBGMCU_APB1_FZ_DBG_RTC_STOP_Msk
#define DBGMCU_APB1_FZ_DBG_WWDG_STOP_Pos          (11U)
#define DBGMCU_APB1_FZ_DBG_WWDG_STOP_Msk          (0x1U << DBGMCU_APB1_FZ_DBG_WWDG_STOP_Pos) /*!< 0x00000800 */
#define DBGMCU_APB1_FZ_DBG_WWDG_STOP              DBGMCU_APB1_FZ_DBG_WWDG_STOP_Msk
#define DBGMCU_APB1_FZ_DBG_IWDG_STOP_Pos          (12U)
#define DBGMCU_APB1_FZ_DBG_IWDG_STOP_Msk          (0x1U << DBGMCU_APB1_FZ_DBG_IWDG_STOP_Pos) /*!< 0x00001000 */
#define DBGMCU_APB1_FZ_DBG_IWDG_STOP              DBGMCU_APB1_FZ_DBG_IWDG_STOP_Msk
#define DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT_Pos (21U)
#define DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT_Msk (0x1U << DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT_Pos) /*!< 0x00200000 */
#define DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT     DBGMCU_APB1_FZ_DBG_I2C1_SMBUS_TIMEOUT_Msk
#define DBGMCU_APB1_FZ_DBG_I2C2_SMBUS_TIMEOUT_Pos (22U)
#define DBGMCU_APB1_FZ_DBG_I2C2_SMBUS_TIMEOUT_Msk (0x1U << DBGMCU_APB1_FZ_DBG_I2C2_SMBUS_TIMEOUT_Pos) /*!< 0x00400000 */
#define DBGMCU_APB1_FZ_DBG_I2C2_SMBUS_TIMEOUT     DBGMCU_APB1_FZ_DBG_I2C2_SMBUS_TIMEOUT_Msk
#define DBGMCU_APB1_FZ_DBG_I2C3_SMBUS_TIMEOUT_Pos (23U)
#define DBGMCU_APB1_FZ_DBG_I2C3_SMBUS_TIMEOUT_Msk (0x1U << DBGMCU_APB1_FZ_DBG_I2C3_SMBUS_TIMEOUT_Pos) /*!< 0x00800000 */
#define DBGMCU_APB1_FZ_DBG_I2C3_SMBUS_TIMEOUT     DBGMCU_APB1_FZ_DBG_I2C3_SMBUS_TIMEOUT_Msk
#define DBGMCU_APB1_FZ_DBG_CAN1_STOP_Pos          (25U)
#define DBGMCU_APB1_FZ_DBG_CAN1_STOP_Msk          (0x1U << DBGMCU_APB1_FZ_DBG_CAN1_STOP_Pos) /*!< 0x02000000 */
#define DBGMCU_APB1_FZ_DBG_CAN1_STOP              DBGMCU_APB1_FZ_DBG_CAN1_STOP_Msk
#define DBGMCU_APB1_FZ_DBG_CAN2_STOP_Pos          (26U)
#define DBGMCU_APB1_FZ_DBG_CAN2_STOP_Msk          (0x1U << DBGMCU_APB1_FZ_DBG_CAN2_STOP_Pos) /*!< 0x04000000 */
#define DBGMCU_APB1_FZ_DBG_CAN2_STOP              DBGMCU_APB1_FZ_DBG_CAN2_STOP_Msk
/* Old IWDGSTOP bit definition, maintained for legacy purpose */
#define  DBGMCU_APB1_FZ_DBG_IWDEG_STOP            DBGMCU_APB1_FZ_DBG_IWDG_STOP

/********************  Bit definition for DBGMCU_APB2_FZ register  ************/
#define DBGMCU_APB2_FZ_DBG_TIM1_STOP_Pos  (0U)
#define DBGMCU_APB2_FZ_DBG_TIM1_STOP_Msk  (0x1U << DBGMCU_APB2_FZ_DBG_TIM1_STOP_Pos) /*!< 0x00000001 */
#define DBGMCU_APB2_FZ_DBG_TIM1_STOP      DBGMCU_APB2_FZ_DBG_TIM1_STOP_Msk
#define DBGMCU_APB2_FZ_DBG_TIM8_STOP_Pos  (1U)
#define DBGMCU_APB2_FZ_DBG_TIM8_STOP_Msk  (0x1U << DBGMCU_APB2_FZ_DBG_TIM8_STOP_Pos) /*!< 0x00000002 */
#define DBGMCU_APB2_FZ_DBG_TIM8_STOP      DBGMCU_APB2_FZ_DBG_TIM8_STOP_Msk
#define DBGMCU_APB2_FZ_DBG_TIM9_STOP_Pos  (16U)
#define DBGMCU_APB2_FZ_DBG_TIM9_STOP_Msk  (0x1U << DBGMCU_APB2_FZ_DBG_TIM9_STOP_Pos) /*!< 0x00010000 */
#define DBGMCU_APB2_FZ_DBG_TIM9_STOP      DBGMCU_APB2_FZ_DBG_TIM9_STOP_Msk
#define DBGMCU_APB2_FZ_DBG_TIM10_STOP_Pos (17U)
#define DBGMCU_APB2_FZ_DBG_TIM10_STOP_Msk (0x1U << DBGMCU_APB2_FZ_DBG_TIM10_STOP_Pos) /*!< 0x00020000 */
#define DBGMCU_APB2_FZ_DBG_TIM10_STOP     DBGMCU_APB2_FZ_DBG_TIM10_STOP_Msk
#define DBGMCU_APB2_FZ_DBG_TIM11_STOP_Pos (18U)
#define DBGMCU_APB2_FZ_DBG_TIM11_STOP_Msk (0x1U << DBGMCU_APB2_FZ_DBG_TIM11_STOP_Pos) /*!< 0x00040000 */
#define DBGMCU_APB2_FZ_DBG_TIM11_STOP     DBGMCU_APB2_FZ_DBG_TIM11_STOP_Msk

/******************************************************************************/
/*                                                                            */
/*                                       USB_OTG                              */
/*                                                                            */
/******************************************************************************/
/********************  Bit definition for USB_OTG_GOTGCTL register  ***********/
#define USB_OTG_GOTGCTL_SRQSCS_Pos  (0U)
#define USB_OTG_GOTGCTL_SRQSCS_Msk  (0x1U << USB_OTG_GOTGCTL_SRQSCS_Pos) /*!< 0x00000001 */
#define USB_OTG_GOTGCTL_SRQSCS      USB_OTG_GOTGCTL_SRQSCS_Msk           /*!< Session request success */
#define USB_OTG_GOTGCTL_SRQ_Pos     (1U)
#define USB_OTG_GOTGCTL_SRQ_Msk     (0x1U << USB_OTG_GOTGCTL_SRQ_Pos) /*!< 0x00000002 */
#define USB_OTG_GOTGCTL_SRQ         USB_OTG_GOTGCTL_SRQ_Msk           /*!< Session request */
#define USB_OTG_GOTGCTL_HNGSCS_Pos  (8U)
#define USB_OTG_GOTGCTL_HNGSCS_Msk  (0x1U << USB_OTG_GOTGCTL_HNGSCS_Pos) /*!< 0x00000100 */
#define USB_OTG_GOTGCTL_HNGSCS      USB_OTG_GOTGCTL_HNGSCS_Msk           /*!< Host set HNP enable */
#define USB_OTG_GOTGCTL_HNPRQ_Pos   (9U)
#define USB_OTG_GOTGCTL_HNPRQ_Msk   (0x1U << USB_OTG_GOTGCTL_HNPRQ_Pos) /*!< 0x00000200 */
#define USB_OTG_GOTGCTL_HNPRQ       USB_OTG_GOTGCTL_HNPRQ_Msk           /*!< HNP request */
#define USB_OTG_GOTGCTL_HSHNPEN_Pos (10U)
#define USB_OTG_GOTGCTL_HSHNPEN_Msk (0x1U << USB_OTG_GOTGCTL_HSHNPEN_Pos) /*!< 0x00000400 */
#define USB_OTG_GOTGCTL_HSHNPEN     USB_OTG_GOTGCTL_HSHNPEN_Msk           /*!< Host set HNP enable */
#define USB_OTG_GOTGCTL_DHNPEN_Pos  (11U)
#define USB_OTG_GOTGCTL_DHNPEN_Msk  (0x1U << USB_OTG_GOTGCTL_DHNPEN_Pos) /*!< 0x00000800 */
#define USB_OTG_GOTGCTL_DHNPEN      USB_OTG_GOTGCTL_DHNPEN_Msk           /*!< Device HNP enabled */
#define USB_OTG_GOTGCTL_CIDSTS_Pos  (16U)
#define USB_OTG_GOTGCTL_CIDSTS_Msk  (0x1U << USB_OTG_GOTGCTL_CIDSTS_Pos) /*!< 0x00010000 */
#define USB_OTG_GOTGCTL_CIDSTS      USB_OTG_GOTGCTL_CIDSTS_Msk           /*!< Connector ID status */
#define USB_OTG_GOTGCTL_DBCT_Pos    (17U)
#define USB_OTG_GOTGCTL_DBCT_Msk    (0x1U << USB_OTG_GOTGCTL_DBCT_Pos) /*!< 0x00020000 */
#define USB_OTG_GOTGCTL_DBCT        USB_OTG_GOTGCTL_DBCT_Msk           /*!< Long/short debounce time */
#define USB_OTG_GOTGCTL_ASVLD_Pos   (18U)
#define USB_OTG_GOTGCTL_ASVLD_Msk   (0x1U << USB_OTG_GOTGCTL_ASVLD_Pos) /*!< 0x00040000 */
#define USB_OTG_GOTGCTL_ASVLD       USB_OTG_GOTGCTL_ASVLD_Msk           /*!< A-session valid  */
#define USB_OTG_GOTGCTL_BSVLD_Pos   (19U)
#define USB_OTG_GOTGCTL_BSVLD_Msk   (0x1U << USB_OTG_GOTGCTL_BSVLD_Pos) /*!< 0x00080000 */
#define USB_OTG_GOTGCTL_BSVLD       USB_OTG_GOTGCTL_BSVLD_Msk           /*!< B-session valid */

/********************  Bit definition forUSB_OTG_HCFG register  ********************/

#define USB_OTG_HCFG_FSLSPCS_Pos (0U)
#define USB_OTG_HCFG_FSLSPCS_Msk (0x3U << USB_OTG_HCFG_FSLSPCS_Pos) /*!< 0x00000003 */
#define USB_OTG_HCFG_FSLSPCS     USB_OTG_HCFG_FSLSPCS_Msk           /*!< FS/LS PHY clock select  */
#define USB_OTG_HCFG_FSLSPCS_0   (0x1U << USB_OTG_HCFG_FSLSPCS_Pos) /*!< 0x00000001 */
#define USB_OTG_HCFG_FSLSPCS_1   (0x2U << USB_OTG_HCFG_FSLSPCS_Pos) /*!< 0x00000002 */
#define USB_OTG_HCFG_FSLSS_Pos   (2U)
#define USB_OTG_HCFG_FSLSS_Msk   (0x1U << USB_OTG_HCFG_FSLSS_Pos) /*!< 0x00000004 */
#define USB_OTG_HCFG_FSLSS       USB_OTG_HCFG_FSLSS_Msk           /*!< FS- and LS-only support */

/********************  Bit definition for USB_OTG_DCFG register  ********************/

#define USB_OTG_DCFG_DSPD_Pos      (0U)
#define USB_OTG_DCFG_DSPD_Msk      (0x3U << USB_OTG_DCFG_DSPD_Pos) /*!< 0x00000003 */
#define USB_OTG_DCFG_DSPD          USB_OTG_DCFG_DSPD_Msk           /*!< Device speed */
#define USB_OTG_DCFG_DSPD_0        (0x1U << USB_OTG_DCFG_DSPD_Pos) /*!< 0x00000001 */
#define USB_OTG_DCFG_DSPD_1        (0x2U << USB_OTG_DCFG_DSPD_Pos) /*!< 0x00000002 */
#define USB_OTG_DCFG_NZLSOHSK_Pos  (2U)
#define USB_OTG_DCFG_NZLSOHSK_Msk  (0x1U << USB_OTG_DCFG_NZLSOHSK_Pos) /*!< 0x00000004 */
#define USB_OTG_DCFG_NZLSOHSK      USB_OTG_DCFG_NZLSOHSK_Msk           /*!< Nonzero-length status OUT handshake */

#define USB_OTG_DCFG_DAD_Pos       (4U)
#define USB_OTG_DCFG_DAD_Msk       (0x7FU << USB_OTG_DCFG_DAD_Pos) /*!< 0x000007F0 */
#define USB_OTG_DCFG_DAD           USB_OTG_DCFG_DAD_Msk            /*!< Device address */
#define USB_OTG_DCFG_DAD_0         (0x01U << USB_OTG_DCFG_DAD_Pos) /*!< 0x00000010 */
#define USB_OTG_DCFG_DAD_1         (0x02U << USB_OTG_DCFG_DAD_Pos) /*!< 0x00000020 */
#define USB_OTG_DCFG_DAD_2         (0x04U << USB_OTG_DCFG_DAD_Pos) /*!< 0x00000040 */
#define USB_OTG_DCFG_DAD_3         (0x08U << USB_OTG_DCFG_DAD_Pos) /*!< 0x00000080 */
#define USB_OTG_DCFG_DAD_4         (0x10U << USB_OTG_DCFG_DAD_Pos) /*!< 0x00000100 */
#define USB_OTG_DCFG_DAD_5         (0x20U << USB_OTG_DCFG_DAD_Pos) /*!< 0x00000200 */
#define USB_OTG_DCFG_DAD_6         (0x40U << USB_OTG_DCFG_DAD_Pos) /*!< 0x00000400 */

#define USB_OTG_DCFG_PFIVL_Pos     (11U)
#define USB_OTG_DCFG_PFIVL_Msk     (0x3U << USB_OTG_DCFG_PFIVL_Pos) /*!< 0x00001800 */
#define USB_OTG_DCFG_PFIVL         USB_OTG_DCFG_PFIVL_Msk           /*!< Periodic (micro)frame interval */
#define USB_OTG_DCFG_PFIVL_0       (0x1U << USB_OTG_DCFG_PFIVL_Pos) /*!< 0x00000800 */
#define USB_OTG_DCFG_PFIVL_1       (0x2U << USB_OTG_DCFG_PFIVL_Pos) /*!< 0x00001000 */

#define USB_OTG_DCFG_PERSCHIVL_Pos (24U)
#define USB_OTG_DCFG_PERSCHIVL_Msk (0x3U << USB_OTG_DCFG_PERSCHIVL_Pos) /*!< 0x03000000 */
#define USB_OTG_DCFG_PERSCHIVL     USB_OTG_DCFG_PERSCHIVL_Msk           /*!< Periodic scheduling interval */
#define USB_OTG_DCFG_PERSCHIVL_0   (0x1U << USB_OTG_DCFG_PERSCHIVL_Pos) /*!< 0x01000000 */
#define USB_OTG_DCFG_PERSCHIVL_1   (0x2U << USB_OTG_DCFG_PERSCHIVL_Pos) /*!< 0x02000000 */

/********************  Bit definition for USB_OTG_PCGCR register  ********************/
#define USB_OTG_PCGCR_STPPCLK_Pos  (0U)
#define USB_OTG_PCGCR_STPPCLK_Msk  (0x1U << USB_OTG_PCGCR_STPPCLK_Pos) /*!< 0x00000001 */
#define USB_OTG_PCGCR_STPPCLK      USB_OTG_PCGCR_STPPCLK_Msk           /*!< Stop PHY clock */
#define USB_OTG_PCGCR_GATEHCLK_Pos (1U)
#define USB_OTG_PCGCR_GATEHCLK_Msk (0x1U << USB_OTG_PCGCR_GATEHCLK_Pos) /*!< 0x00000002 */
#define USB_OTG_PCGCR_GATEHCLK     USB_OTG_PCGCR_GATEHCLK_Msk           /*!< Gate HCLK */
#define USB_OTG_PCGCR_PHYSUSP_Pos  (4U)
#define USB_OTG_PCGCR_PHYSUSP_Msk  (0x1U << USB_OTG_PCGCR_PHYSUSP_Pos) /*!< 0x00000010 */
#define USB_OTG_PCGCR_PHYSUSP      USB_OTG_PCGCR_PHYSUSP_Msk           /*!< PHY suspended */

/********************  Bit definition for USB_OTG_GOTGINT register  ********************/
#define USB_OTG_GOTGINT_SEDET_Pos   (2U)
#define USB_OTG_GOTGINT_SEDET_Msk   (0x1U << USB_OTG_GOTGINT_SEDET_Pos) /*!< 0x00000004 */
#define USB_OTG_GOTGINT_SEDET       USB_OTG_GOTGINT_SEDET_Msk           /*!< Session end detected                   */
#define USB_OTG_GOTGINT_SRSSCHG_Pos (8U)
#define USB_OTG_GOTGINT_SRSSCHG_Msk (0x1U << USB_OTG_GOTGINT_SRSSCHG_Pos) /*!< 0x00000100 */
#define USB_OTG_GOTGINT_SRSSCHG     USB_OTG_GOTGINT_SRSSCHG_Msk           /*!< Session request success status change  */
#define USB_OTG_GOTGINT_HNSSCHG_Pos (9U)
#define USB_OTG_GOTGINT_HNSSCHG_Msk (0x1U << USB_OTG_GOTGINT_HNSSCHG_Pos) /*!< 0x00000200 */
#define USB_OTG_GOTGINT_HNSSCHG     USB_OTG_GOTGINT_HNSSCHG_Msk           /*!< Host negotiation success status change */
#define USB_OTG_GOTGINT_HNGDET_Pos  (17U)
#define USB_OTG_GOTGINT_HNGDET_Msk  (0x1U << USB_OTG_GOTGINT_HNGDET_Pos) /*!< 0x00020000 */
#define USB_OTG_GOTGINT_HNGDET      USB_OTG_GOTGINT_HNGDET_Msk           /*!< Host negotiation detected              */
#define USB_OTG_GOTGINT_ADTOCHG_Pos (18U)
#define USB_OTG_GOTGINT_ADTOCHG_Msk (0x1U << USB_OTG_GOTGINT_ADTOCHG_Pos) /*!< 0x00040000 */
#define USB_OTG_GOTGINT_ADTOCHG     USB_OTG_GOTGINT_ADTOCHG_Msk           /*!< A-device timeout change                */
#define USB_OTG_GOTGINT_DBCDNE_Pos  (19U)
#define USB_OTG_GOTGINT_DBCDNE_Msk  (0x1U << USB_OTG_GOTGINT_DBCDNE_Pos) /*!< 0x00080000 */
#define USB_OTG_GOTGINT_DBCDNE      USB_OTG_GOTGINT_DBCDNE_Msk           /*!< Debounce done                          */

/********************  Bit definition for USB_OTG_DCTL register  ********************/
#define USB_OTG_DCTL_RWUSIG_Pos   (0U)
#define USB_OTG_DCTL_RWUSIG_Msk   (0x1U << USB_OTG_DCTL_RWUSIG_Pos) /*!< 0x00000001 */
#define USB_OTG_DCTL_RWUSIG       USB_OTG_DCTL_RWUSIG_Msk           /*!< Remote wakeup signaling */
#define USB_OTG_DCTL_SDIS_Pos     (1U)
#define USB_OTG_DCTL_SDIS_Msk     (0x1U << USB_OTG_DCTL_SDIS_Pos) /*!< 0x00000002 */
#define USB_OTG_DCTL_SDIS         USB_OTG_DCTL_SDIS_Msk           /*!< Soft disconnect         */
#define USB_OTG_DCTL_GINSTS_Pos   (2U)
#define USB_OTG_DCTL_GINSTS_Msk   (0x1U << USB_OTG_DCTL_GINSTS_Pos) /*!< 0x00000004 */
#define USB_OTG_DCTL_GINSTS       USB_OTG_DCTL_GINSTS_Msk           /*!< Global IN NAK status    */
#define USB_OTG_DCTL_GONSTS_Pos   (3U)
#define USB_OTG_DCTL_GONSTS_Msk   (0x1U << USB_OTG_DCTL_GONSTS_Pos) /*!< 0x00000008 */
#define USB_OTG_DCTL_GONSTS       USB_OTG_DCTL_GONSTS_Msk           /*!< Global OUT NAK status   */

#define USB_OTG_DCTL_TCTL_Pos     (4U)
#define USB_OTG_DCTL_TCTL_Msk     (0x7U << USB_OTG_DCTL_TCTL_Pos) /*!< 0x00000070 */
#define USB_OTG_DCTL_TCTL         USB_OTG_DCTL_TCTL_Msk           /*!< Test control */
#define USB_OTG_DCTL_TCTL_0       (0x1U << USB_OTG_DCTL_TCTL_Pos) /*!< 0x00000010 */
#define USB_OTG_DCTL_TCTL_1       (0x2U << USB_OTG_DCTL_TCTL_Pos) /*!< 0x00000020 */
#define USB_OTG_DCTL_TCTL_2       (0x4U << USB_OTG_DCTL_TCTL_Pos) /*!< 0x00000040 */
#define USB_OTG_DCTL_SGINAK_Pos   (7U)
#define USB_OTG_DCTL_SGINAK_Msk   (0x1U << USB_OTG_DCTL_SGINAK_Pos) /*!< 0x00000080 */
#define USB_OTG_DCTL_SGINAK       USB_OTG_DCTL_SGINAK_Msk           /*!< Set global IN NAK         */
#define USB_OTG_DCTL_CGINAK_Pos   (8U)
#define USB_OTG_DCTL_CGINAK_Msk   (0x1U << USB_OTG_DCTL_CGINAK_Pos) /*!< 0x00000100 */
#define USB_OTG_DCTL_CGINAK       USB_OTG_DCTL_CGINAK_Msk           /*!< Clear global IN NAK       */
#define USB_OTG_DCTL_SGONAK_Pos   (9U)
#define USB_OTG_DCTL_SGONAK_Msk   (0x1U << USB_OTG_DCTL_SGONAK_Pos) /*!< 0x00000200 */
#define USB_OTG_DCTL_SGONAK       USB_OTG_DCTL_SGONAK_Msk           /*!< Set global OUT NAK        */
#define USB_OTG_DCTL_CGONAK_Pos   (10U)
#define USB_OTG_DCTL_CGONAK_Msk   (0x1U << USB_OTG_DCTL_CGONAK_Pos) /*!< 0x00000400 */
#define USB_OTG_DCTL_CGONAK       USB_OTG_DCTL_CGONAK_Msk           /*!< Clear global OUT NAK      */
#define USB_OTG_DCTL_POPRGDNE_Pos (11U)
#define USB_OTG_DCTL_POPRGDNE_Msk (0x1U << USB_OTG_DCTL_POPRGDNE_Pos) /*!< 0x00000800 */
#define USB_OTG_DCTL_POPRGDNE     USB_OTG_DCTL_POPRGDNE_Msk           /*!< Power-on programming done */

/********************  Bit definition for USB_OTG_HFIR register  ********************/
#define USB_OTG_HFIR_FRIVL_Pos (0U)
#define USB_OTG_HFIR_FRIVL_Msk (0xFFFFU << USB_OTG_HFIR_FRIVL_Pos) /*!< 0x0000FFFF */
#define USB_OTG_HFIR_FRIVL     USB_OTG_HFIR_FRIVL_Msk              /*!< Frame interval */

/********************  Bit definition for USB_OTG_HFNUM register  ********************/
#define USB_OTG_HFNUM_FRNUM_Pos (0U)
#define USB_OTG_HFNUM_FRNUM_Msk (0xFFFFU << USB_OTG_HFNUM_FRNUM_Pos) /*!< 0x0000FFFF */
#define USB_OTG_HFNUM_FRNUM     USB_OTG_HFNUM_FRNUM_Msk              /*!< Frame number         */
#define USB_OTG_HFNUM_FTREM_Pos (16U)
#define USB_OTG_HFNUM_FTREM_Msk (0xFFFFU << USB_OTG_HFNUM_FTREM_Pos) /*!< 0xFFFF0000 */
#define USB_OTG_HFNUM_FTREM     USB_OTG_HFNUM_FTREM_Msk              /*!< Frame time remaining */

/********************  Bit definition for USB_OTG_DSTS register  ********************/
#define USB_OTG_DSTS_SUSPSTS_Pos (0U)
#define USB_OTG_DSTS_SUSPSTS_Msk (0x1U << USB_OTG_DSTS_SUSPSTS_Pos) /*!< 0x00000001 */
#define USB_OTG_DSTS_SUSPSTS     USB_OTG_DSTS_SUSPSTS_Msk           /*!< Suspend status   */

#define USB_OTG_DSTS_ENUMSPD_Pos (1U)
#define USB_OTG_DSTS_ENUMSPD_Msk (0x3U << USB_OTG_DSTS_ENUMSPD_Pos) /*!< 0x00000006 */
#define USB_OTG_DSTS_ENUMSPD     USB_OTG_DSTS_ENUMSPD_Msk           /*!< Enumerated speed */
#define USB_OTG_DSTS_ENUMSPD_0   (0x1U << USB_OTG_DSTS_ENUMSPD_Pos) /*!< 0x00000002 */
#define USB_OTG_DSTS_ENUMSPD_1   (0x2U << USB_OTG_DSTS_ENUMSPD_Pos) /*!< 0x00000004 */
#define USB_OTG_DSTS_EERR_Pos    (3U)
#define USB_OTG_DSTS_EERR_Msk    (0x1U << USB_OTG_DSTS_EERR_Pos) /*!< 0x00000008 */
#define USB_OTG_DSTS_EERR        USB_OTG_DSTS_EERR_Msk           /*!< Erratic error     */
#define USB_OTG_DSTS_FNSOF_Pos   (8U)
#define USB_OTG_DSTS_FNSOF_Msk   (0x3FFFU << USB_OTG_DSTS_FNSOF_Pos) /*!< 0x003FFF00 */
#define USB_OTG_DSTS_FNSOF       USB_OTG_DSTS_FNSOF_Msk              /*!< Frame number of the received SOF */

/********************  Bit definition for USB_OTG_GAHBCFG register  ********************/
#define USB_OTG_GAHBCFG_GINT_Pos     (0U)
#define USB_OTG_GAHBCFG_GINT_Msk     (0x1U << USB_OTG_GAHBCFG_GINT_Pos) /*!< 0x00000001 */
#define USB_OTG_GAHBCFG_GINT         USB_OTG_GAHBCFG_GINT_Msk           /*!< Global interrupt mask */
#define USB_OTG_GAHBCFG_HBSTLEN_Pos  (1U)
#define USB_OTG_GAHBCFG_HBSTLEN_Msk  (0xFU << USB_OTG_GAHBCFG_HBSTLEN_Pos) /*!< 0x0000001E */
#define USB_OTG_GAHBCFG_HBSTLEN      USB_OTG_GAHBCFG_HBSTLEN_Msk           /*!< Burst length/type */
#define USB_OTG_GAHBCFG_HBSTLEN_0    (0x0U << USB_OTG_GAHBCFG_HBSTLEN_Pos) /*!< Single */
#define USB_OTG_GAHBCFG_HBSTLEN_1    (0x1U << USB_OTG_GAHBCFG_HBSTLEN_Pos) /*!< INCR */
#define USB_OTG_GAHBCFG_HBSTLEN_2    (0x3U << USB_OTG_GAHBCFG_HBSTLEN_Pos) /*!< INCR4 */
#define USB_OTG_GAHBCFG_HBSTLEN_3    (0x5U << USB_OTG_GAHBCFG_HBSTLEN_Pos) /*!< INCR8 */
#define USB_OTG_GAHBCFG_HBSTLEN_4    (0x7U << USB_OTG_GAHBCFG_HBSTLEN_Pos) /*!< INCR16 */
#define USB_OTG_GAHBCFG_DMAEN_Pos    (5U)
#define USB_OTG_GAHBCFG_DMAEN_Msk    (0x1U << USB_OTG_GAHBCFG_DMAEN_Pos) /*!< 0x00000020 */
#define USB_OTG_GAHBCFG_DMAEN        USB_OTG_GAHBCFG_DMAEN_Msk           /*!< DMA enable */
#define USB_OTG_GAHBCFG_TXFELVL_Pos  (7U)
#define USB_OTG_GAHBCFG_TXFELVL_Msk  (0x1U << USB_OTG_GAHBCFG_TXFELVL_Pos) /*!< 0x00000080 */
#define USB_OTG_GAHBCFG_TXFELVL      USB_OTG_GAHBCFG_TXFELVL_Msk           /*!< TxFIFO empty level */
#define USB_OTG_GAHBCFG_PTXFELVL_Pos (8U)
#define USB_OTG_GAHBCFG_PTXFELVL_Msk (0x1U << USB_OTG_GAHBCFG_PTXFELVL_Pos) /*!< 0x00000100 */
#define USB_OTG_GAHBCFG_PTXFELVL     USB_OTG_GAHBCFG_PTXFELVL_Msk           /*!< Periodic TxFIFO empty level */

/********************  Bit definition for USB_OTG_GUSBCFG register  ********************/

#define USB_OTG_GUSBCFG_TOCAL_Pos      (0U)
#define USB_OTG_GUSBCFG_TOCAL_Msk      (0x7U << USB_OTG_GUSBCFG_TOCAL_Pos) /*!< 0x00000007 */
#define USB_OTG_GUSBCFG_TOCAL          USB_OTG_GUSBCFG_TOCAL_Msk           /*!< FS timeout calibration */
#define USB_OTG_GUSBCFG_TOCAL_0        (0x1U << USB_OTG_GUSBCFG_TOCAL_Pos) /*!< 0x00000001 */
#define USB_OTG_GUSBCFG_TOCAL_1        (0x2U << USB_OTG_GUSBCFG_TOCAL_Pos) /*!< 0x00000002 */
#define USB_OTG_GUSBCFG_TOCAL_2        (0x4U << USB_OTG_GUSBCFG_TOCAL_Pos) /*!< 0x00000004 */
#define USB_OTG_GUSBCFG_PHYSEL_Pos     (6U)
#define USB_OTG_GUSBCFG_PHYSEL_Msk     (0x1U << USB_OTG_GUSBCFG_PHYSEL_Pos) /*!< 0x00000040 */
#define USB_OTG_GUSBCFG_PHYSEL         USB_OTG_GUSBCFG_PHYSEL_Msk           /*!< USB 2.0 high-speed ULPI PHY or USB 1.1 full-speed serial transceiver select */
#define USB_OTG_GUSBCFG_SRPCAP_Pos     (8U)
#define USB_OTG_GUSBCFG_SRPCAP_Msk     (0x1U << USB_OTG_GUSBCFG_SRPCAP_Pos) /*!< 0x00000100 */
#define USB_OTG_GUSBCFG_SRPCAP         USB_OTG_GUSBCFG_SRPCAP_Msk           /*!< SRP-capable */
#define USB_OTG_GUSBCFG_HNPCAP_Pos     (9U)
#define USB_OTG_GUSBCFG_HNPCAP_Msk     (0x1U << USB_OTG_GUSBCFG_HNPCAP_Pos) /*!< 0x00000200 */
#define USB_OTG_GUSBCFG_HNPCAP         USB_OTG_GUSBCFG_HNPCAP_Msk           /*!< HNP-capable */
#define USB_OTG_GUSBCFG_TRDT_Pos       (10U)
#define USB_OTG_GUSBCFG_TRDT_Msk       (0xFU << USB_OTG_GUSBCFG_TRDT_Pos) /*!< 0x00003C00 */
#define USB_OTG_GUSBCFG_TRDT           USB_OTG_GUSBCFG_TRDT_Msk           /*!< USB turnaround time */
#define USB_OTG_GUSBCFG_TRDT_0         (0x1U << USB_OTG_GUSBCFG_TRDT_Pos) /*!< 0x00000400 */
#define USB_OTG_GUSBCFG_TRDT_1         (0x2U << USB_OTG_GUSBCFG_TRDT_Pos) /*!< 0x00000800 */
#define USB_OTG_GUSBCFG_TRDT_2         (0x4U << USB_OTG_GUSBCFG_TRDT_Pos) /*!< 0x00001000 */
#define USB_OTG_GUSBCFG_TRDT_3         (0x8U << USB_OTG_GUSBCFG_TRDT_Pos) /*!< 0x00002000 */
#define USB_OTG_GUSBCFG_PHYLPCS_Pos    (15U)
#define USB_OTG_GUSBCFG_PHYLPCS_Msk    (0x1U << USB_OTG_GUSBCFG_PHYLPCS_Pos) /*!< 0x00008000 */
#define USB_OTG_GUSBCFG_PHYLPCS        USB_OTG_GUSBCFG_PHYLPCS_Msk           /*!< PHY Low-power clock select */
#define USB_OTG_GUSBCFG_ULPIFSLS_Pos   (17U)
#define USB_OTG_GUSBCFG_ULPIFSLS_Msk   (0x1U << USB_OTG_GUSBCFG_ULPIFSLS_Pos) /*!< 0x00020000 */
#define USB_OTG_GUSBCFG_ULPIFSLS       USB_OTG_GUSBCFG_ULPIFSLS_Msk           /*!< ULPI FS/LS select               */
#define USB_OTG_GUSBCFG_ULPIAR_Pos     (18U)
#define USB_OTG_GUSBCFG_ULPIAR_Msk     (0x1U << USB_OTG_GUSBCFG_ULPIAR_Pos) /*!< 0x00040000 */
#define USB_OTG_GUSBCFG_ULPIAR         USB_OTG_GUSBCFG_ULPIAR_Msk           /*!< ULPI Auto-resume                */
#define USB_OTG_GUSBCFG_ULPICSM_Pos    (19U)
#define USB_OTG_GUSBCFG_ULPICSM_Msk    (0x1U << USB_OTG_GUSBCFG_ULPICSM_Pos) /*!< 0x00080000 */
#define USB_OTG_GUSBCFG_ULPICSM        USB_OTG_GUSBCFG_ULPICSM_Msk           /*!< ULPI Clock SuspendM             */
#define USB_OTG_GUSBCFG_ULPIEVBUSD_Pos (20U)
#define USB_OTG_GUSBCFG_ULPIEVBUSD_Msk (0x1U << USB_OTG_GUSBCFG_ULPIEVBUSD_Pos) /*!< 0x00100000 */
#define USB_OTG_GUSBCFG_ULPIEVBUSD     USB_OTG_GUSBCFG_ULPIEVBUSD_Msk           /*!< ULPI External VBUS Drive        */
#define USB_OTG_GUSBCFG_ULPIEVBUSI_Pos (21U)
#define USB_OTG_GUSBCFG_ULPIEVBUSI_Msk (0x1U << USB_OTG_GUSBCFG_ULPIEVBUSI_Pos) /*!< 0x00200000 */
#define USB_OTG_GUSBCFG_ULPIEVBUSI     USB_OTG_GUSBCFG_ULPIEVBUSI_Msk           /*!< ULPI external VBUS indicator    */
#define USB_OTG_GUSBCFG_TSDPS_Pos      (22U)
#define USB_OTG_GUSBCFG_TSDPS_Msk      (0x1U << USB_OTG_GUSBCFG_TSDPS_Pos) /*!< 0x00400000 */
#define USB_OTG_GUSBCFG_TSDPS          USB_OTG_GUSBCFG_TSDPS_Msk           /*!< TermSel DLine pulsing selection */
#define USB_OTG_GUSBCFG_PCCI_Pos       (23U)
#define USB_OTG_GUSBCFG_PCCI_Msk       (0x1U << USB_OTG_GUSBCFG_PCCI_Pos) /*!< 0x00800000 */
#define USB_OTG_GUSBCFG_PCCI           USB_OTG_GUSBCFG_PCCI_Msk           /*!< Indicator complement            */
#define USB_OTG_GUSBCFG_PTCI_Pos       (24U)
#define USB_OTG_GUSBCFG_PTCI_Msk       (0x1U << USB_OTG_GUSBCFG_PTCI_Pos) /*!< 0x01000000 */
#define USB_OTG_GUSBCFG_PTCI           USB_OTG_GUSBCFG_PTCI_Msk           /*!< Indicator pass through          */
#define USB_OTG_GUSBCFG_ULPIIPD_Pos    (25U)
#define USB_OTG_GUSBCFG_ULPIIPD_Msk    (0x1U << USB_OTG_GUSBCFG_ULPIIPD_Pos) /*!< 0x02000000 */
#define USB_OTG_GUSBCFG_ULPIIPD        USB_OTG_GUSBCFG_ULPIIPD_Msk           /*!< ULPI interface protect disable  */
#define USB_OTG_GUSBCFG_FHMOD_Pos      (29U)
#define USB_OTG_GUSBCFG_FHMOD_Msk      (0x1U << USB_OTG_GUSBCFG_FHMOD_Pos) /*!< 0x20000000 */
#define USB_OTG_GUSBCFG_FHMOD          USB_OTG_GUSBCFG_FHMOD_Msk           /*!< Forced host mode                */
#define USB_OTG_GUSBCFG_FDMOD_Pos      (30U)
#define USB_OTG_GUSBCFG_FDMOD_Msk      (0x1U << USB_OTG_GUSBCFG_FDMOD_Pos) /*!< 0x40000000 */
#define USB_OTG_GUSBCFG_FDMOD          USB_OTG_GUSBCFG_FDMOD_Msk           /*!< Forced peripheral mode          */
#define USB_OTG_GUSBCFG_CTXPKT_Pos     (31U)
#define USB_OTG_GUSBCFG_CTXPKT_Msk     (0x1U << USB_OTG_GUSBCFG_CTXPKT_Pos) /*!< 0x80000000 */
#define USB_OTG_GUSBCFG_CTXPKT         USB_OTG_GUSBCFG_CTXPKT_Msk           /*!< Corrupt Tx packet               */

/********************  Bit definition for USB_OTG_GRSTCTL register  ********************/
#define USB_OTG_GRSTCTL_CSRST_Pos   (0U)
#define USB_OTG_GRSTCTL_CSRST_Msk   (0x1U << USB_OTG_GRSTCTL_CSRST_Pos) /*!< 0x00000001 */
#define USB_OTG_GRSTCTL_CSRST       USB_OTG_GRSTCTL_CSRST_Msk           /*!< Core soft reset          */
#define USB_OTG_GRSTCTL_HSRST_Pos   (1U)
#define USB_OTG_GRSTCTL_HSRST_Msk   (0x1U << USB_OTG_GRSTCTL_HSRST_Pos) /*!< 0x00000002 */
#define USB_OTG_GRSTCTL_HSRST       USB_OTG_GRSTCTL_HSRST_Msk           /*!< HCLK soft reset          */
#define USB_OTG_GRSTCTL_FCRST_Pos   (2U)
#define USB_OTG_GRSTCTL_FCRST_Msk   (0x1U << USB_OTG_GRSTCTL_FCRST_Pos) /*!< 0x00000004 */
#define USB_OTG_GRSTCTL_FCRST       USB_OTG_GRSTCTL_FCRST_Msk           /*!< Host frame counter reset */
#define USB_OTG_GRSTCTL_RXFFLSH_Pos (4U)
#define USB_OTG_GRSTCTL_RXFFLSH_Msk (0x1U << USB_OTG_GRSTCTL_RXFFLSH_Pos) /*!< 0x00000010 */
#define USB_OTG_GRSTCTL_RXFFLSH     USB_OTG_GRSTCTL_RXFFLSH_Msk           /*!< RxFIFO flush             */
#define USB_OTG_GRSTCTL_TXFFLSH_Pos (5U)
#define USB_OTG_GRSTCTL_TXFFLSH_Msk (0x1U << USB_OTG_GRSTCTL_TXFFLSH_Pos) /*!< 0x00000020 */
#define USB_OTG_GRSTCTL_TXFFLSH     USB_OTG_GRSTCTL_TXFFLSH_Msk           /*!< TxFIFO flush             */


#define USB_OTG_GRSTCTL_TXFNUM_Pos (6U)
#define USB_OTG_GRSTCTL_TXFNUM_Msk (0x1FU << USB_OTG_GRSTCTL_TXFNUM_Pos) /*!< 0x000007C0 */
#define USB_OTG_GRSTCTL_TXFNUM     USB_OTG_GRSTCTL_TXFNUM_Msk            /*!< TxFIFO number */
#define USB_OTG_GRSTCTL_TXFNUM_0   (0x01U << USB_OTG_GRSTCTL_TXFNUM_Pos) /*!< 0x00000040 */
#define USB_OTG_GRSTCTL_TXFNUM_1   (0x02U << USB_OTG_GRSTCTL_TXFNUM_Pos) /*!< 0x00000080 */
#define USB_OTG_GRSTCTL_TXFNUM_2   (0x04U << USB_OTG_GRSTCTL_TXFNUM_Pos) /*!< 0x00000100 */
#define USB_OTG_GRSTCTL_TXFNUM_3   (0x08U << USB_OTG_GRSTCTL_TXFNUM_Pos) /*!< 0x00000200 */
#define USB_OTG_GRSTCTL_TXFNUM_4   (0x10U << USB_OTG_GRSTCTL_TXFNUM_Pos) /*!< 0x00000400 */
#define USB_OTG_GRSTCTL_DMAREQ_Pos (30U)
#define USB_OTG_GRSTCTL_DMAREQ_Msk (0x1U << USB_OTG_GRSTCTL_DMAREQ_Pos) /*!< 0x40000000 */
#define USB_OTG_GRSTCTL_DMAREQ     USB_OTG_GRSTCTL_DMAREQ_Msk           /*!< DMA request signal */
#define USB_OTG_GRSTCTL_AHBIDL_Pos (31U)
#define USB_OTG_GRSTCTL_AHBIDL_Msk (0x1U << USB_OTG_GRSTCTL_AHBIDL_Pos) /*!< 0x80000000 */
#define USB_OTG_GRSTCTL_AHBIDL     USB_OTG_GRSTCTL_AHBIDL_Msk           /*!< AHB master idle */

/********************  Bit definition for USB_OTG_DIEPMSK register  ********************/
#define USB_OTG_DIEPMSK_XFRCM_Pos     (0U)
#define USB_OTG_DIEPMSK_XFRCM_Msk     (0x1U << USB_OTG_DIEPMSK_XFRCM_Pos) /*!< 0x00000001 */
#define USB_OTG_DIEPMSK_XFRCM         USB_OTG_DIEPMSK_XFRCM_Msk           /*!< Transfer completed interrupt mask                 */
#define USB_OTG_DIEPMSK_EPDM_Pos      (1U)
#define USB_OTG_DIEPMSK_EPDM_Msk      (0x1U << USB_OTG_DIEPMSK_EPDM_Pos) /*!< 0x00000002 */
#define USB_OTG_DIEPMSK_EPDM          USB_OTG_DIEPMSK_EPDM_Msk           /*!< Endpoint disabled interrupt mask                  */
#define USB_OTG_DIEPMSK_TOM_Pos       (3U)
#define USB_OTG_DIEPMSK_TOM_Msk       (0x1U << USB_OTG_DIEPMSK_TOM_Pos) /*!< 0x00000008 */
#define USB_OTG_DIEPMSK_TOM           USB_OTG_DIEPMSK_TOM_Msk           /*!< Timeout condition mask (nonisochronous endpoints) */
#define USB_OTG_DIEPMSK_ITTXFEMSK_Pos (4U)
#define USB_OTG_DIEPMSK_ITTXFEMSK_Msk (0x1U << USB_OTG_DIEPMSK_ITTXFEMSK_Pos) /*!< 0x00000010 */
#define USB_OTG_DIEPMSK_ITTXFEMSK     USB_OTG_DIEPMSK_ITTXFEMSK_Msk           /*!< IN token received when TxFIFO empty mask          */
#define USB_OTG_DIEPMSK_INEPNMM_Pos   (5U)
#define USB_OTG_DIEPMSK_INEPNMM_Msk   (0x1U << USB_OTG_DIEPMSK_INEPNMM_Pos) /*!< 0x00000020 */
#define USB_OTG_DIEPMSK_INEPNMM       USB_OTG_DIEPMSK_INEPNMM_Msk           /*!< IN token received with EP mismatch mask           */
#define USB_OTG_DIEPMSK_INEPNEM_Pos   (6U)
#define USB_OTG_DIEPMSK_INEPNEM_Msk   (0x1U << USB_OTG_DIEPMSK_INEPNEM_Pos) /*!< 0x00000040 */
#define USB_OTG_DIEPMSK_INEPNEM       USB_OTG_DIEPMSK_INEPNEM_Msk           /*!< IN endpoint NAK effective mask                    */
#define USB_OTG_DIEPMSK_TXFURM_Pos    (8U)
#define USB_OTG_DIEPMSK_TXFURM_Msk    (0x1U << USB_OTG_DIEPMSK_TXFURM_Pos) /*!< 0x00000100 */
#define USB_OTG_DIEPMSK_TXFURM        USB_OTG_DIEPMSK_TXFURM_Msk           /*!< FIFO underrun mask                                */
#define USB_OTG_DIEPMSK_BIM_Pos       (9U)
#define USB_OTG_DIEPMSK_BIM_Msk       (0x1U << USB_OTG_DIEPMSK_BIM_Pos) /*!< 0x00000200 */
#define USB_OTG_DIEPMSK_BIM           USB_OTG_DIEPMSK_BIM_Msk           /*!< BNA interrupt mask                                */

/********************  Bit definition for USB_OTG_HPTXSTS register  ********************/
#define USB_OTG_HPTXSTS_PTXFSAVL_Pos (0U)
#define USB_OTG_HPTXSTS_PTXFSAVL_Msk (0xFFFFU << USB_OTG_HPTXSTS_PTXFSAVL_Pos) /*!< 0x0000FFFF */
#define USB_OTG_HPTXSTS_PTXFSAVL     USB_OTG_HPTXSTS_PTXFSAVL_Msk              /*!< Periodic transmit data FIFO space available     */
#define USB_OTG_HPTXSTS_PTXQSAV_Pos  (16U)
#define USB_OTG_HPTXSTS_PTXQSAV_Msk  (0xFFU << USB_OTG_HPTXSTS_PTXQSAV_Pos) /*!< 0x00FF0000 */
#define USB_OTG_HPTXSTS_PTXQSAV      USB_OTG_HPTXSTS_PTXQSAV_Msk            /*!< Periodic transmit request queue space available */
#define USB_OTG_HPTXSTS_PTXQSAV_0    (0x01U << USB_OTG_HPTXSTS_PTXQSAV_Pos) /*!< 0x00010000 */
#define USB_OTG_HPTXSTS_PTXQSAV_1    (0x02U << USB_OTG_HPTXSTS_PTXQSAV_Pos) /*!< 0x00020000 */
#define USB_OTG_HPTXSTS_PTXQSAV_2    (0x04U << USB_OTG_HPTXSTS_PTXQSAV_Pos) /*!< 0x00040000 */
#define USB_OTG_HPTXSTS_PTXQSAV_3    (0x08U << USB_OTG_HPTXSTS_PTXQSAV_Pos) /*!< 0x00080000 */
#define USB_OTG_HPTXSTS_PTXQSAV_4    (0x10U << USB_OTG_HPTXSTS_PTXQSAV_Pos) /*!< 0x00100000 */
#define USB_OTG_HPTXSTS_PTXQSAV_5    (0x20U << USB_OTG_HPTXSTS_PTXQSAV_Pos) /*!< 0x00200000 */
#define USB_OTG_HPTXSTS_PTXQSAV_6    (0x40U << USB_OTG_HPTXSTS_PTXQSAV_Pos) /*!< 0x00400000 */
#define USB_OTG_HPTXSTS_PTXQSAV_7    (0x80U << USB_OTG_HPTXSTS_PTXQSAV_Pos) /*!< 0x00800000 */

#define USB_OTG_HPTXSTS_PTXQTOP_Pos  (24U)
#define USB_OTG_HPTXSTS_PTXQTOP_Msk  (0xFFU << USB_OTG_HPTXSTS_PTXQTOP_Pos) /*!< 0xFF000000 */
#define USB_OTG_HPTXSTS_PTXQTOP      USB_OTG_HPTXSTS_PTXQTOP_Msk            /*!< Top of the periodic transmit request queue */
#define USB_OTG_HPTXSTS_PTXQTOP_0    (0x01U << USB_OTG_HPTXSTS_PTXQTOP_Pos) /*!< 0x01000000 */
#define USB_OTG_HPTXSTS_PTXQTOP_1    (0x02U << USB_OTG_HPTXSTS_PTXQTOP_Pos) /*!< 0x02000000 */
#define USB_OTG_HPTXSTS_PTXQTOP_2    (0x04U << USB_OTG_HPTXSTS_PTXQTOP_Pos) /*!< 0x04000000 */
#define USB_OTG_HPTXSTS_PTXQTOP_3    (0x08U << USB_OTG_HPTXSTS_PTXQTOP_Pos) /*!< 0x08000000 */
#define USB_OTG_HPTXSTS_PTXQTOP_4    (0x10U << USB_OTG_HPTXSTS_PTXQTOP_Pos) /*!< 0x10000000 */
#define USB_OTG_HPTXSTS_PTXQTOP_5    (0x20U << USB_OTG_HPTXSTS_PTXQTOP_Pos) /*!< 0x20000000 */
#define USB_OTG_HPTXSTS_PTXQTOP_6    (0x40U << USB_OTG_HPTXSTS_PTXQTOP_Pos) /*!< 0x40000000 */
#define USB_OTG_HPTXSTS_PTXQTOP_7    (0x80U << USB_OTG_HPTXSTS_PTXQTOP_Pos) /*!< 0x80000000 */

/********************  Bit definition for USB_OTG_HAINT register  ********************/
#define USB_OTG_HAINT_HAINT_Pos (0U)
#define USB_OTG_HAINT_HAINT_Msk (0xFFFFU << USB_OTG_HAINT_HAINT_Pos) /*!< 0x0000FFFF */
#define USB_OTG_HAINT_HAINT     USB_OTG_HAINT_HAINT_Msk              /*!< Channel interrupts */

/********************  Bit definition for USB_OTG_DOEPMSK register  ********************/
#define USB_OTG_DOEPMSK_XFRCM_Pos   (0U)
#define USB_OTG_DOEPMSK_XFRCM_Msk   (0x1U << USB_OTG_DOEPMSK_XFRCM_Pos) /*!< 0x00000001 */
#define USB_OTG_DOEPMSK_XFRCM       USB_OTG_DOEPMSK_XFRCM_Msk           /*!< Transfer completed interrupt mask */
#define USB_OTG_DOEPMSK_EPDM_Pos    (1U)
#define USB_OTG_DOEPMSK_EPDM_Msk    (0x1U << USB_OTG_DOEPMSK_EPDM_Pos) /*!< 0x00000002 */
#define USB_OTG_DOEPMSK_EPDM        USB_OTG_DOEPMSK_EPDM_Msk           /*!< Endpoint disabled interrupt mask               */
#define USB_OTG_DOEPMSK_STUPM_Pos   (3U)
#define USB_OTG_DOEPMSK_STUPM_Msk   (0x1U << USB_OTG_DOEPMSK_STUPM_Pos) /*!< 0x00000008 */
#define USB_OTG_DOEPMSK_STUPM       USB_OTG_DOEPMSK_STUPM_Msk           /*!< SETUP phase done mask                          */
#define USB_OTG_DOEPMSK_OTEPDM_Pos  (4U)
#define USB_OTG_DOEPMSK_OTEPDM_Msk  (0x1U << USB_OTG_DOEPMSK_OTEPDM_Pos) /*!< 0x00000010 */
#define USB_OTG_DOEPMSK_OTEPDM      USB_OTG_DOEPMSK_OTEPDM_Msk           /*!< OUT token received when endpoint disabled mask */
#define USB_OTG_DOEPMSK_B2BSTUP_Pos (6U)
#define USB_OTG_DOEPMSK_B2BSTUP_Msk (0x1U << USB_OTG_DOEPMSK_B2BSTUP_Pos) /*!< 0x00000040 */
#define USB_OTG_DOEPMSK_B2BSTUP     USB_OTG_DOEPMSK_B2BSTUP_Msk           /*!< Back-to-back SETUP packets received mask */
#define USB_OTG_DOEPMSK_OPEM_Pos    (8U)
#define USB_OTG_DOEPMSK_OPEM_Msk    (0x1U << USB_OTG_DOEPMSK_OPEM_Pos) /*!< 0x00000100 */
#define USB_OTG_DOEPMSK_OPEM        USB_OTG_DOEPMSK_OPEM_Msk           /*!< OUT packet error mask                          */
#define USB_OTG_DOEPMSK_BOIM_Pos    (9U)
#define USB_OTG_DOEPMSK_BOIM_Msk    (0x1U << USB_OTG_DOEPMSK_BOIM_Pos) /*!< 0x00000200 */
#define USB_OTG_DOEPMSK_BOIM        USB_OTG_DOEPMSK_BOIM_Msk           /*!< BNA interrupt mask                             */

/********************  Bit definition for USB_OTG_GINTSTS register  ********************/
#define USB_OTG_GINTSTS_CMOD_Pos              (0U)
#define USB_OTG_GINTSTS_CMOD_Msk              (0x1U << USB_OTG_GINTSTS_CMOD_Pos) /*!< 0x00000001 */
#define USB_OTG_GINTSTS_CMOD                  USB_OTG_GINTSTS_CMOD_Msk           /*!< Current mode of operation                      */
#define USB_OTG_GINTSTS_MMIS_Pos              (1U)
#define USB_OTG_GINTSTS_MMIS_Msk              (0x1U << USB_OTG_GINTSTS_MMIS_Pos) /*!< 0x00000002 */
#define USB_OTG_GINTSTS_MMIS                  USB_OTG_GINTSTS_MMIS_Msk           /*!< Mode mismatch interrupt                        */
#define USB_OTG_GINTSTS_OTGINT_Pos            (2U)
#define USB_OTG_GINTSTS_OTGINT_Msk            (0x1U << USB_OTG_GINTSTS_OTGINT_Pos) /*!< 0x00000004 */
#define USB_OTG_GINTSTS_OTGINT                USB_OTG_GINTSTS_OTGINT_Msk           /*!< OTG interrupt                                  */
#define USB_OTG_GINTSTS_SOF_Pos               (3U)
#define USB_OTG_GINTSTS_SOF_Msk               (0x1U << USB_OTG_GINTSTS_SOF_Pos) /*!< 0x00000008 */
#define USB_OTG_GINTSTS_SOF                   USB_OTG_GINTSTS_SOF_Msk           /*!< Start of frame                                 */
#define USB_OTG_GINTSTS_RXFLVL_Pos            (4U)
#define USB_OTG_GINTSTS_RXFLVL_Msk            (0x1U << USB_OTG_GINTSTS_RXFLVL_Pos) /*!< 0x00000010 */
#define USB_OTG_GINTSTS_RXFLVL                USB_OTG_GINTSTS_RXFLVL_Msk           /*!< RxFIFO nonempty                                */
#define USB_OTG_GINTSTS_NPTXFE_Pos            (5U)
#define USB_OTG_GINTSTS_NPTXFE_Msk            (0x1U << USB_OTG_GINTSTS_NPTXFE_Pos) /*!< 0x00000020 */
#define USB_OTG_GINTSTS_NPTXFE                USB_OTG_GINTSTS_NPTXFE_Msk           /*!< Nonperiodic TxFIFO empty                       */
#define USB_OTG_GINTSTS_GINAKEFF_Pos          (6U)
#define USB_OTG_GINTSTS_GINAKEFF_Msk          (0x1U << USB_OTG_GINTSTS_GINAKEFF_Pos) /*!< 0x00000040 */
#define USB_OTG_GINTSTS_GINAKEFF              USB_OTG_GINTSTS_GINAKEFF_Msk           /*!< Global IN nonperiodic NAK effective            */
#define USB_OTG_GINTSTS_BOUTNAKEFF_Pos        (7U)
#define USB_OTG_GINTSTS_BOUTNAKEFF_Msk        (0x1U << USB_OTG_GINTSTS_BOUTNAKEFF_Pos) /*!< 0x00000080 */
#define USB_OTG_GINTSTS_BOUTNAKEFF            USB_OTG_GINTSTS_BOUTNAKEFF_Msk           /*!< Global OUT NAK effective                       */
#define USB_OTG_GINTSTS_ESUSP_Pos             (10U)
#define USB_OTG_GINTSTS_ESUSP_Msk             (0x1U << USB_OTG_GINTSTS_ESUSP_Pos) /*!< 0x00000400 */
#define USB_OTG_GINTSTS_ESUSP                 USB_OTG_GINTSTS_ESUSP_Msk           /*!< Early suspend                                  */
#define USB_OTG_GINTSTS_USBSUSP_Pos           (11U)
#define USB_OTG_GINTSTS_USBSUSP_Msk           (0x1U << USB_OTG_GINTSTS_USBSUSP_Pos) /*!< 0x00000800 */
#define USB_OTG_GINTSTS_USBSUSP               USB_OTG_GINTSTS_USBSUSP_Msk           /*!< USB suspend                                    */
#define USB_OTG_GINTSTS_USBRST_Pos            (12U)
#define USB_OTG_GINTSTS_USBRST_Msk            (0x1U << USB_OTG_GINTSTS_USBRST_Pos) /*!< 0x00001000 */
#define USB_OTG_GINTSTS_USBRST                USB_OTG_GINTSTS_USBRST_Msk           /*!< USB reset                                      */
#define USB_OTG_GINTSTS_ENUMDNE_Pos           (13U)
#define USB_OTG_GINTSTS_ENUMDNE_Msk           (0x1U << USB_OTG_GINTSTS_ENUMDNE_Pos) /*!< 0x00002000 */
#define USB_OTG_GINTSTS_ENUMDNE               USB_OTG_GINTSTS_ENUMDNE_Msk           /*!< Enumeration done                               */
#define USB_OTG_GINTSTS_ISOODRP_Pos           (14U)
#define USB_OTG_GINTSTS_ISOODRP_Msk           (0x1U << USB_OTG_GINTSTS_ISOODRP_Pos) /*!< 0x00004000 */
#define USB_OTG_GINTSTS_ISOODRP               USB_OTG_GINTSTS_ISOODRP_Msk           /*!< Isochronous OUT packet dropped interrupt       */
#define USB_OTG_GINTSTS_EOPF_Pos              (15U)
#define USB_OTG_GINTSTS_EOPF_Msk              (0x1U << USB_OTG_GINTSTS_EOPF_Pos) /*!< 0x00008000 */
#define USB_OTG_GINTSTS_EOPF                  USB_OTG_GINTSTS_EOPF_Msk           /*!< End of periodic frame interrupt                */
#define USB_OTG_GINTSTS_IEPINT_Pos            (18U)
#define USB_OTG_GINTSTS_IEPINT_Msk            (0x1U << USB_OTG_GINTSTS_IEPINT_Pos) /*!< 0x00040000 */
#define USB_OTG_GINTSTS_IEPINT                USB_OTG_GINTSTS_IEPINT_Msk           /*!< IN endpoint interrupt                          */
#define USB_OTG_GINTSTS_OEPINT_Pos            (19U)
#define USB_OTG_GINTSTS_OEPINT_Msk            (0x1U << USB_OTG_GINTSTS_OEPINT_Pos) /*!< 0x00080000 */
#define USB_OTG_GINTSTS_OEPINT                USB_OTG_GINTSTS_OEPINT_Msk           /*!< OUT endpoint interrupt                         */
#define USB_OTG_GINTSTS_IISOIXFR_Pos          (20U)
#define USB_OTG_GINTSTS_IISOIXFR_Msk          (0x1U << USB_OTG_GINTSTS_IISOIXFR_Pos) /*!< 0x00100000 */
#define USB_OTG_GINTSTS_IISOIXFR              USB_OTG_GINTSTS_IISOIXFR_Msk           /*!< Incomplete isochronous IN transfer             */
#define USB_OTG_GINTSTS_PXFR_INCOMPISOOUT_Pos (21U)
#define USB_OTG_GINTSTS_PXFR_INCOMPISOOUT_Msk (0x1U << USB_OTG_GINTSTS_PXFR_INCOMPISOOUT_Pos) /*!< 0x00200000 */
#define USB_OTG_GINTSTS_PXFR_INCOMPISOOUT     USB_OTG_GINTSTS_PXFR_INCOMPISOOUT_Msk           /*!< Incomplete periodic transfer                   */
#define USB_OTG_GINTSTS_DATAFSUSP_Pos         (22U)
#define USB_OTG_GINTSTS_DATAFSUSP_Msk         (0x1U << USB_OTG_GINTSTS_DATAFSUSP_Pos) /*!< 0x00400000 */
#define USB_OTG_GINTSTS_DATAFSUSP             USB_OTG_GINTSTS_DATAFSUSP_Msk           /*!< Data fetch suspended                           */
#define USB_OTG_GINTSTS_HPRTINT_Pos           (24U)
#define USB_OTG_GINTSTS_HPRTINT_Msk           (0x1U << USB_OTG_GINTSTS_HPRTINT_Pos) /*!< 0x01000000 */
#define USB_OTG_GINTSTS_HPRTINT               USB_OTG_GINTSTS_HPRTINT_Msk           /*!< Host port interrupt                            */
#define USB_OTG_GINTSTS_HCINT_Pos             (25U)
#define USB_OTG_GINTSTS_HCINT_Msk             (0x1U << USB_OTG_GINTSTS_HCINT_Pos) /*!< 0x02000000 */
#define USB_OTG_GINTSTS_HCINT                 USB_OTG_GINTSTS_HCINT_Msk           /*!< Host channels interrupt                        */
#define USB_OTG_GINTSTS_PTXFE_Pos             (26U)
#define USB_OTG_GINTSTS_PTXFE_Msk             (0x1U << USB_OTG_GINTSTS_PTXFE_Pos) /*!< 0x04000000 */
#define USB_OTG_GINTSTS_PTXFE                 USB_OTG_GINTSTS_PTXFE_Msk           /*!< Periodic TxFIFO empty                          */
#define USB_OTG_GINTSTS_CIDSCHG_Pos           (28U)
#define USB_OTG_GINTSTS_CIDSCHG_Msk           (0x1U << USB_OTG_GINTSTS_CIDSCHG_Pos) /*!< 0x10000000 */
#define USB_OTG_GINTSTS_CIDSCHG               USB_OTG_GINTSTS_CIDSCHG_Msk           /*!< Connector ID status change                     */
#define USB_OTG_GINTSTS_DISCINT_Pos           (29U)
#define USB_OTG_GINTSTS_DISCINT_Msk           (0x1U << USB_OTG_GINTSTS_DISCINT_Pos) /*!< 0x20000000 */
#define USB_OTG_GINTSTS_DISCINT               USB_OTG_GINTSTS_DISCINT_Msk           /*!< Disconnect detected interrupt                  */
#define USB_OTG_GINTSTS_SRQINT_Pos            (30U)
#define USB_OTG_GINTSTS_SRQINT_Msk            (0x1U << USB_OTG_GINTSTS_SRQINT_Pos) /*!< 0x40000000 */
#define USB_OTG_GINTSTS_SRQINT                USB_OTG_GINTSTS_SRQINT_Msk           /*!< Session request/new session detected interrupt */
#define USB_OTG_GINTSTS_WKUINT_Pos            (31U)
#define USB_OTG_GINTSTS_WKUINT_Msk            (0x1U << USB_OTG_GINTSTS_WKUINT_Pos) /*!< 0x80000000 */
#define USB_OTG_GINTSTS_WKUINT                USB_OTG_GINTSTS_WKUINT_Msk           /*!< Resume/remote wakeup detected interrupt        */

/********************  Bit definition for USB_OTG_GINTMSK register  ********************/
#define USB_OTG_GINTMSK_MMISM_Pos           (1U)
#define USB_OTG_GINTMSK_MMISM_Msk           (0x1U << USB_OTG_GINTMSK_MMISM_Pos) /*!< 0x00000002 */
#define USB_OTG_GINTMSK_MMISM               USB_OTG_GINTMSK_MMISM_Msk           /*!< Mode mismatch interrupt mask                        */
#define USB_OTG_GINTMSK_OTGINT_Pos          (2U)
#define USB_OTG_GINTMSK_OTGINT_Msk          (0x1U << USB_OTG_GINTMSK_OTGINT_Pos) /*!< 0x00000004 */
#define USB_OTG_GINTMSK_OTGINT              USB_OTG_GINTMSK_OTGINT_Msk           /*!< OTG interrupt mask                                  */
#define USB_OTG_GINTMSK_SOFM_Pos            (3U)
#define USB_OTG_GINTMSK_SOFM_Msk            (0x1U << USB_OTG_GINTMSK_SOFM_Pos) /*!< 0x00000008 */
#define USB_OTG_GINTMSK_SOFM                USB_OTG_GINTMSK_SOFM_Msk           /*!< Start of frame mask                                 */
#define USB_OTG_GINTMSK_RXFLVLM_Pos         (4U)
#define USB_OTG_GINTMSK_RXFLVLM_Msk         (0x1U << USB_OTG_GINTMSK_RXFLVLM_Pos) /*!< 0x00000010 */
#define USB_OTG_GINTMSK_RXFLVLM             USB_OTG_GINTMSK_RXFLVLM_Msk           /*!< Receive FIFO nonempty mask                          */
#define USB_OTG_GINTMSK_NPTXFEM_Pos         (5U)
#define USB_OTG_GINTMSK_NPTXFEM_Msk         (0x1U << USB_OTG_GINTMSK_NPTXFEM_Pos) /*!< 0x00000020 */
#define USB_OTG_GINTMSK_NPTXFEM             USB_OTG_GINTMSK_NPTXFEM_Msk           /*!< Nonperiodic TxFIFO empty mask                       */
#define USB_OTG_GINTMSK_GINAKEFFM_Pos       (6U)
#define USB_OTG_GINTMSK_GINAKEFFM_Msk       (0x1U << USB_OTG_GINTMSK_GINAKEFFM_Pos) /*!< 0x00000040 */
#define USB_OTG_GINTMSK_GINAKEFFM           USB_OTG_GINTMSK_GINAKEFFM_Msk           /*!< Global nonperiodic IN NAK effective mask            */
#define USB_OTG_GINTMSK_GONAKEFFM_Pos       (7U)
#define USB_OTG_GINTMSK_GONAKEFFM_Msk       (0x1U << USB_OTG_GINTMSK_GONAKEFFM_Pos) /*!< 0x00000080 */
#define USB_OTG_GINTMSK_GONAKEFFM           USB_OTG_GINTMSK_GONAKEFFM_Msk           /*!< Global OUT NAK effective mask                       */
#define USB_OTG_GINTMSK_ESUSPM_Pos          (10U)
#define USB_OTG_GINTMSK_ESUSPM_Msk          (0x1U << USB_OTG_GINTMSK_ESUSPM_Pos) /*!< 0x00000400 */
#define USB_OTG_GINTMSK_ESUSPM              USB_OTG_GINTMSK_ESUSPM_Msk           /*!< Early suspend mask                                  */
#define USB_OTG_GINTMSK_USBSUSPM_Pos        (11U)
#define USB_OTG_GINTMSK_USBSUSPM_Msk        (0x1U << USB_OTG_GINTMSK_USBSUSPM_Pos) /*!< 0x00000800 */
#define USB_OTG_GINTMSK_USBSUSPM            USB_OTG_GINTMSK_USBSUSPM_Msk           /*!< USB suspend mask                                    */
#define USB_OTG_GINTMSK_USBRST_Pos          (12U)
#define USB_OTG_GINTMSK_USBRST_Msk          (0x1U << USB_OTG_GINTMSK_USBRST_Pos) /*!< 0x00001000 */
#define USB_OTG_GINTMSK_USBRST              USB_OTG_GINTMSK_USBRST_Msk           /*!< USB reset mask                                      */
#define USB_OTG_GINTMSK_ENUMDNEM_Pos        (13U)
#define USB_OTG_GINTMSK_ENUMDNEM_Msk        (0x1U << USB_OTG_GINTMSK_ENUMDNEM_Pos) /*!< 0x00002000 */
#define USB_OTG_GINTMSK_ENUMDNEM            USB_OTG_GINTMSK_ENUMDNEM_Msk           /*!< Enumeration done mask                               */
#define USB_OTG_GINTMSK_ISOODRPM_Pos        (14U)
#define USB_OTG_GINTMSK_ISOODRPM_Msk        (0x1U << USB_OTG_GINTMSK_ISOODRPM_Pos) /*!< 0x00004000 */
#define USB_OTG_GINTMSK_ISOODRPM            USB_OTG_GINTMSK_ISOODRPM_Msk           /*!< Isochronous OUT packet dropped interrupt mask       */
#define USB_OTG_GINTMSK_EOPFM_Pos           (15U)
#define USB_OTG_GINTMSK_EOPFM_Msk           (0x1U << USB_OTG_GINTMSK_EOPFM_Pos) /*!< 0x00008000 */
#define USB_OTG_GINTMSK_EOPFM               USB_OTG_GINTMSK_EOPFM_Msk           /*!< End of periodic frame interrupt mask                */
#define USB_OTG_GINTMSK_EPMISM_Pos          (17U)
#define USB_OTG_GINTMSK_EPMISM_Msk          (0x1U << USB_OTG_GINTMSK_EPMISM_Pos) /*!< 0x00020000 */
#define USB_OTG_GINTMSK_EPMISM              USB_OTG_GINTMSK_EPMISM_Msk           /*!< Endpoint mismatch interrupt mask                    */
#define USB_OTG_GINTMSK_IEPINT_Pos          (18U)
#define USB_OTG_GINTMSK_IEPINT_Msk          (0x1U << USB_OTG_GINTMSK_IEPINT_Pos) /*!< 0x00040000 */
#define USB_OTG_GINTMSK_IEPINT              USB_OTG_GINTMSK_IEPINT_Msk           /*!< IN endpoints interrupt mask                         */
#define USB_OTG_GINTMSK_OEPINT_Pos          (19U)
#define USB_OTG_GINTMSK_OEPINT_Msk          (0x1U << USB_OTG_GINTMSK_OEPINT_Pos) /*!< 0x00080000 */
#define USB_OTG_GINTMSK_OEPINT              USB_OTG_GINTMSK_OEPINT_Msk           /*!< OUT endpoints interrupt mask                        */
#define USB_OTG_GINTMSK_IISOIXFRM_Pos       (20U)
#define USB_OTG_GINTMSK_IISOIXFRM_Msk       (0x1U << USB_OTG_GINTMSK_IISOIXFRM_Pos) /*!< 0x00100000 */
#define USB_OTG_GINTMSK_IISOIXFRM           USB_OTG_GINTMSK_IISOIXFRM_Msk           /*!< Incomplete isochronous IN transfer mask             */
#define USB_OTG_GINTMSK_PXFRM_IISOOXFRM_Pos (21U)
#define USB_OTG_GINTMSK_PXFRM_IISOOXFRM_Msk (0x1U << USB_OTG_GINTMSK_PXFRM_IISOOXFRM_Pos) /*!< 0x00200000 */
#define USB_OTG_GINTMSK_PXFRM_IISOOXFRM     USB_OTG_GINTMSK_PXFRM_IISOOXFRM_Msk           /*!< Incomplete periodic transfer mask                   */
#define USB_OTG_GINTMSK_FSUSPM_Pos          (22U)
#define USB_OTG_GINTMSK_FSUSPM_Msk          (0x1U << USB_OTG_GINTMSK_FSUSPM_Pos) /*!< 0x00400000 */
#define USB_OTG_GINTMSK_FSUSPM              USB_OTG_GINTMSK_FSUSPM_Msk           /*!< Data fetch suspended mask                           */
#define USB_OTG_GINTMSK_PRTIM_Pos           (24U)
#define USB_OTG_GINTMSK_PRTIM_Msk           (0x1U << USB_OTG_GINTMSK_PRTIM_Pos) /*!< 0x01000000 */
#define USB_OTG_GINTMSK_PRTIM               USB_OTG_GINTMSK_PRTIM_Msk           /*!< Host port interrupt mask                            */
#define USB_OTG_GINTMSK_HCIM_Pos            (25U)
#define USB_OTG_GINTMSK_HCIM_Msk            (0x1U << USB_OTG_GINTMSK_HCIM_Pos) /*!< 0x02000000 */
#define USB_OTG_GINTMSK_HCIM                USB_OTG_GINTMSK_HCIM_Msk           /*!< Host channels interrupt mask                        */
#define USB_OTG_GINTMSK_PTXFEM_Pos          (26U)
#define USB_OTG_GINTMSK_PTXFEM_Msk          (0x1U << USB_OTG_GINTMSK_PTXFEM_Pos) /*!< 0x04000000 */
#define USB_OTG_GINTMSK_PTXFEM              USB_OTG_GINTMSK_PTXFEM_Msk           /*!< Periodic TxFIFO empty mask                          */
#define USB_OTG_GINTMSK_CIDSCHGM_Pos        (28U)
#define USB_OTG_GINTMSK_CIDSCHGM_Msk        (0x1U << USB_OTG_GINTMSK_CIDSCHGM_Pos) /*!< 0x10000000 */
#define USB_OTG_GINTMSK_CIDSCHGM            USB_OTG_GINTMSK_CIDSCHGM_Msk           /*!< Connector ID status change mask                     */
#define USB_OTG_GINTMSK_DISCINT_Pos         (29U)
#define USB_OTG_GINTMSK_DISCINT_Msk         (0x1U << USB_OTG_GINTMSK_DISCINT_Pos) /*!< 0x20000000 */
#define USB_OTG_GINTMSK_DISCINT             USB_OTG_GINTMSK_DISCINT_Msk           /*!< Disconnect detected interrupt mask                  */
#define USB_OTG_GINTMSK_SRQIM_Pos           (30U)
#define USB_OTG_GINTMSK_SRQIM_Msk           (0x1U << USB_OTG_GINTMSK_SRQIM_Pos) /*!< 0x40000000 */
#define USB_OTG_GINTMSK_SRQIM               USB_OTG_GINTMSK_SRQIM_Msk           /*!< Session request/new session detected interrupt mask */
#define USB_OTG_GINTMSK_WUIM_Pos            (31U)
#define USB_OTG_GINTMSK_WUIM_Msk            (0x1U << USB_OTG_GINTMSK_WUIM_Pos) /*!< 0x80000000 */
#define USB_OTG_GINTMSK_WUIM                USB_OTG_GINTMSK_WUIM_Msk           /*!< Resume/remote wakeup detected interrupt mask        */

/********************  Bit definition for USB_OTG_DAINT register  ********************/
#define USB_OTG_DAINT_IEPINT_Pos (0U)
#define USB_OTG_DAINT_IEPINT_Msk (0xFFFFU << USB_OTG_DAINT_IEPINT_Pos) /*!< 0x0000FFFF */
#define USB_OTG_DAINT_IEPINT     USB_OTG_DAINT_IEPINT_Msk              /*!< IN endpoint interrupt bits  */
#define USB_OTG_DAINT_OEPINT_Pos (16U)
#define USB_OTG_DAINT_OEPINT_Msk (0xFFFFU << USB_OTG_DAINT_OEPINT_Pos) /*!< 0xFFFF0000 */
#define USB_OTG_DAINT_OEPINT     USB_OTG_DAINT_OEPINT_Msk              /*!< OUT endpoint interrupt bits */

/********************  Bit definition for USB_OTG_HAINTMSK register  ********************/
#define USB_OTG_HAINTMSK_HAINTM_Pos (0U)
#define USB_OTG_HAINTMSK_HAINTM_Msk (0xFFFFU << USB_OTG_HAINTMSK_HAINTM_Pos) /*!< 0x0000FFFF */
#define USB_OTG_HAINTMSK_HAINTM     USB_OTG_HAINTMSK_HAINTM_Msk              /*!< Channel interrupt mask */

/********************  Bit definition for USB_OTG_GRXSTSP register  ********************/
#define USB_OTG_GRXSTSP_EPNUM_Pos  (0U)
#define USB_OTG_GRXSTSP_EPNUM_Msk  (0xFU << USB_OTG_GRXSTSP_EPNUM_Pos) /*!< 0x0000000F */
#define USB_OTG_GRXSTSP_EPNUM      USB_OTG_GRXSTSP_EPNUM_Msk           /*!< IN EP interrupt mask bits  */
#define USB_OTG_GRXSTSP_BCNT_Pos   (4U)
#define USB_OTG_GRXSTSP_BCNT_Msk   (0x7FFU << USB_OTG_GRXSTSP_BCNT_Pos) /*!< 0x00007FF0 */
#define USB_OTG_GRXSTSP_BCNT       USB_OTG_GRXSTSP_BCNT_Msk             /*!< OUT EP interrupt mask bits */
#define USB_OTG_GRXSTSP_DPID_Pos   (15U)
#define USB_OTG_GRXSTSP_DPID_Msk   (0x3U << USB_OTG_GRXSTSP_DPID_Pos) /*!< 0x00018000 */
#define USB_OTG_GRXSTSP_DPID       USB_OTG_GRXSTSP_DPID_Msk           /*!< OUT EP interrupt mask bits */
#define USB_OTG_GRXSTSP_PKTSTS_Pos (17U)
#define USB_OTG_GRXSTSP_PKTSTS_Msk (0xFU << USB_OTG_GRXSTSP_PKTSTS_Pos) /*!< 0x001E0000 */
#define USB_OTG_GRXSTSP_PKTSTS     USB_OTG_GRXSTSP_PKTSTS_Msk           /*!< OUT EP interrupt mask bits */

/********************  Bit definition for USB_OTG_DAINTMSK register  ********************/
#define USB_OTG_DAINTMSK_IEPM_Pos (0U)
#define USB_OTG_DAINTMSK_IEPM_Msk (0xFFFFU << USB_OTG_DAINTMSK_IEPM_Pos) /*!< 0x0000FFFF */
#define USB_OTG_DAINTMSK_IEPM     USB_OTG_DAINTMSK_IEPM_Msk              /*!< IN EP interrupt mask bits */
#define USB_OTG_DAINTMSK_OEPM_Pos (16U)
#define USB_OTG_DAINTMSK_OEPM_Msk (0xFFFFU << USB_OTG_DAINTMSK_OEPM_Pos) /*!< 0xFFFF0000 */
#define USB_OTG_DAINTMSK_OEPM     USB_OTG_DAINTMSK_OEPM_Msk              /*!< OUT EP interrupt mask bits */

/********************  Bit definition for USB_OTG_GRXFSIZ register  ********************/
#define USB_OTG_GRXFSIZ_RXFD_Pos (0U)
#define USB_OTG_GRXFSIZ_RXFD_Msk (0xFFFFU << USB_OTG_GRXFSIZ_RXFD_Pos) /*!< 0x0000FFFF */
#define USB_OTG_GRXFSIZ_RXFD     USB_OTG_GRXFSIZ_RXFD_Msk              /*!< RxFIFO depth */

/********************  Bit definition for USB_OTG_DVBUSDIS register  ********************/
#define USB_OTG_DVBUSDIS_VBUSDT_Pos (0U)
#define USB_OTG_DVBUSDIS_VBUSDT_Msk (0xFFFFU << USB_OTG_DVBUSDIS_VBUSDT_Pos) /*!< 0x0000FFFF */
#define USB_OTG_DVBUSDIS_VBUSDT     USB_OTG_DVBUSDIS_VBUSDT_Msk              /*!< Device VBUS discharge time */

/********************  Bit definition for OTG register  ********************/
#define USB_OTG_NPTXFSA_Pos (0U)
#define USB_OTG_NPTXFSA_Msk (0xFFFFU << USB_OTG_NPTXFSA_Pos) /*!< 0x0000FFFF */
#define USB_OTG_NPTXFSA     USB_OTG_NPTXFSA_Msk              /*!< Nonperiodic transmit RAM start address */
#define USB_OTG_NPTXFD_Pos  (16U)
#define USB_OTG_NPTXFD_Msk  (0xFFFFU << USB_OTG_NPTXFD_Pos) /*!< 0xFFFF0000 */
#define USB_OTG_NPTXFD      USB_OTG_NPTXFD_Msk              /*!< Nonperiodic TxFIFO depth               */
#define USB_OTG_TX0FSA_Pos  (0U)
#define USB_OTG_TX0FSA_Msk  (0xFFFFU << USB_OTG_TX0FSA_Pos) /*!< 0x0000FFFF */
#define USB_OTG_TX0FSA      USB_OTG_TX0FSA_Msk              /*!< Endpoint 0 transmit RAM start address  */
#define USB_OTG_TX0FD_Pos   (16U)
#define USB_OTG_TX0FD_Msk   (0xFFFFU << USB_OTG_TX0FD_Pos) /*!< 0xFFFF0000 */
#define USB_OTG_TX0FD       USB_OTG_TX0FD_Msk              /*!< Endpoint 0 TxFIFO depth                */

/********************  Bit definition forUSB_OTG_DVBUSPULSE register  ********************/
#define USB_OTG_DVBUSPULSE_DVBUSP_Pos (0U)
#define USB_OTG_DVBUSPULSE_DVBUSP_Msk (0xFFFU << USB_OTG_DVBUSPULSE_DVBUSP_Pos) /*!< 0x00000FFF */
#define USB_OTG_DVBUSPULSE_DVBUSP     USB_OTG_DVBUSPULSE_DVBUSP_Msk             /*!< Device VBUS pulsing time */

/********************  Bit definition for USB_OTG_GNPTXSTS register  ********************/
#define USB_OTG_GNPTXSTS_NPTXFSAV_Pos (0U)
#define USB_OTG_GNPTXSTS_NPTXFSAV_Msk (0xFFFFU << USB_OTG_GNPTXSTS_NPTXFSAV_Pos) /*!< 0x0000FFFF */
#define USB_OTG_GNPTXSTS_NPTXFSAV     USB_OTG_GNPTXSTS_NPTXFSAV_Msk              /*!< Nonperiodic TxFIFO space available */

#define USB_OTG_GNPTXSTS_NPTQXSAV_Pos (16U)
#define USB_OTG_GNPTXSTS_NPTQXSAV_Msk (0xFFU << USB_OTG_GNPTXSTS_NPTQXSAV_Pos) /*!< 0x00FF0000 */
#define USB_OTG_GNPTXSTS_NPTQXSAV     USB_OTG_GNPTXSTS_NPTQXSAV_Msk            /*!< Nonperiodic transmit request queue space available */
#define USB_OTG_GNPTXSTS_NPTQXSAV_0   (0x01U << USB_OTG_GNPTXSTS_NPTQXSAV_Pos) /*!< 0x00010000 */
#define USB_OTG_GNPTXSTS_NPTQXSAV_1   (0x02U << USB_OTG_GNPTXSTS_NPTQXSAV_Pos) /*!< 0x00020000 */
#define USB_OTG_GNPTXSTS_NPTQXSAV_2   (0x04U << USB_OTG_GNPTXSTS_NPTQXSAV_Pos) /*!< 0x00040000 */
#define USB_OTG_GNPTXSTS_NPTQXSAV_3   (0x08U << USB_OTG_GNPTXSTS_NPTQXSAV_Pos) /*!< 0x00080000 */
#define USB_OTG_GNPTXSTS_NPTQXSAV_4   (0x10U << USB_OTG_GNPTXSTS_NPTQXSAV_Pos) /*!< 0x00100000 */
#define USB_OTG_GNPTXSTS_NPTQXSAV_5   (0x20U << USB_OTG_GNPTXSTS_NPTQXSAV_Pos) /*!< 0x00200000 */
#define USB_OTG_GNPTXSTS_NPTQXSAV_6   (0x40U << USB_OTG_GNPTXSTS_NPTQXSAV_Pos) /*!< 0x00400000 */
#define USB_OTG_GNPTXSTS_NPTQXSAV_7   (0x80U << USB_OTG_GNPTXSTS_NPTQXSAV_Pos) /*!< 0x00800000 */

#define USB_OTG_GNPTXSTS_NPTXQTOP_Pos (24U)
#define USB_OTG_GNPTXSTS_NPTXQTOP_Msk (0x7FU << USB_OTG_GNPTXSTS_NPTXQTOP_Pos) /*!< 0x7F000000 */
#define USB_OTG_GNPTXSTS_NPTXQTOP     USB_OTG_GNPTXSTS_NPTXQTOP_Msk            /*!< Top of the nonperiodic transmit request queue */
#define USB_OTG_GNPTXSTS_NPTXQTOP_0   (0x01U << USB_OTG_GNPTXSTS_NPTXQTOP_Pos) /*!< 0x01000000 */
#define USB_OTG_GNPTXSTS_NPTXQTOP_1   (0x02U << USB_OTG_GNPTXSTS_NPTXQTOP_Pos) /*!< 0x02000000 */
#define USB_OTG_GNPTXSTS_NPTXQTOP_2   (0x04U << USB_OTG_GNPTXSTS_NPTXQTOP_Pos) /*!< 0x04000000 */
#define USB_OTG_GNPTXSTS_NPTXQTOP_3   (0x08U << USB_OTG_GNPTXSTS_NPTXQTOP_Pos) /*!< 0x08000000 */
#define USB_OTG_GNPTXSTS_NPTXQTOP_4   (0x10U << USB_OTG_GNPTXSTS_NPTXQTOP_Pos) /*!< 0x10000000 */
#define USB_OTG_GNPTXSTS_NPTXQTOP_5   (0x20U << USB_OTG_GNPTXSTS_NPTXQTOP_Pos) /*!< 0x20000000 */
#define USB_OTG_GNPTXSTS_NPTXQTOP_6   (0x40U << USB_OTG_GNPTXSTS_NPTXQTOP_Pos) /*!< 0x40000000 */

/********************  Bit definition for USB_OTG_DTHRCTL register  ********************/
#define USB_OTG_DTHRCTL_NONISOTHREN_Pos (0U)
#define USB_OTG_DTHRCTL_NONISOTHREN_Msk (0x1U << USB_OTG_DTHRCTL_NONISOTHREN_Pos) /*!< 0x00000001 */
#define USB_OTG_DTHRCTL_NONISOTHREN     USB_OTG_DTHRCTL_NONISOTHREN_Msk           /*!< Nonisochronous IN endpoints threshold enable */
#define USB_OTG_DTHRCTL_ISOTHREN_Pos    (1U)
#define USB_OTG_DTHRCTL_ISOTHREN_Msk    (0x1U << USB_OTG_DTHRCTL_ISOTHREN_Pos) /*!< 0x00000002 */
#define USB_OTG_DTHRCTL_ISOTHREN        USB_OTG_DTHRCTL_ISOTHREN_Msk           /*!< ISO IN endpoint threshold enable */

#define USB_OTG_DTHRCTL_TXTHRLEN_Pos    (2U)
#define USB_OTG_DTHRCTL_TXTHRLEN_Msk    (0x1FFU << USB_OTG_DTHRCTL_TXTHRLEN_Pos) /*!< 0x000007FC */
#define USB_OTG_DTHRCTL_TXTHRLEN        USB_OTG_DTHRCTL_TXTHRLEN_Msk             /*!< Transmit threshold length */
#define USB_OTG_DTHRCTL_TXTHRLEN_0      (0x001U << USB_OTG_DTHRCTL_TXTHRLEN_Pos) /*!< 0x00000004 */
#define USB_OTG_DTHRCTL_TXTHRLEN_1      (0x002U << USB_OTG_DTHRCTL_TXTHRLEN_Pos) /*!< 0x00000008 */
#define USB_OTG_DTHRCTL_TXTHRLEN_2      (0x004U << USB_OTG_DTHRCTL_TXTHRLEN_Pos) /*!< 0x00000010 */
#define USB_OTG_DTHRCTL_TXTHRLEN_3      (0x008U << USB_OTG_DTHRCTL_TXTHRLEN_Pos) /*!< 0x00000020 */
#define USB_OTG_DTHRCTL_TXTHRLEN_4      (0x010U << USB_OTG_DTHRCTL_TXTHRLEN_Pos) /*!< 0x00000040 */
#define USB_OTG_DTHRCTL_TXTHRLEN_5      (0x020U << USB_OTG_DTHRCTL_TXTHRLEN_Pos) /*!< 0x00000080 */
#define USB_OTG_DTHRCTL_TXTHRLEN_6      (0x040U << USB_OTG_DTHRCTL_TXTHRLEN_Pos) /*!< 0x00000100 */
#define USB_OTG_DTHRCTL_TXTHRLEN_7      (0x080U << USB_OTG_DTHRCTL_TXTHRLEN_Pos) /*!< 0x00000200 */
#define USB_OTG_DTHRCTL_TXTHRLEN_8      (0x100U << USB_OTG_DTHRCTL_TXTHRLEN_Pos) /*!< 0x00000400 */
#define USB_OTG_DTHRCTL_RXTHREN_Pos     (16U)
#define USB_OTG_DTHRCTL_RXTHREN_Msk     (0x1U << USB_OTG_DTHRCTL_RXTHREN_Pos) /*!< 0x00010000 */
#define USB_OTG_DTHRCTL_RXTHREN         USB_OTG_DTHRCTL_RXTHREN_Msk           /*!< Receive threshold enable */

#define USB_OTG_DTHRCTL_RXTHRLEN_Pos    (17U)
#define USB_OTG_DTHRCTL_RXTHRLEN_Msk    (0x1FFU << USB_OTG_DTHRCTL_RXTHRLEN_Pos) /*!< 0x03FE0000 */
#define USB_OTG_DTHRCTL_RXTHRLEN        USB_OTG_DTHRCTL_RXTHRLEN_Msk             /*!< Receive threshold length */
#define USB_OTG_DTHRCTL_RXTHRLEN_0      (0x001U << USB_OTG_DTHRCTL_RXTHRLEN_Pos) /*!< 0x00020000 */
#define USB_OTG_DTHRCTL_RXTHRLEN_1      (0x002U << USB_OTG_DTHRCTL_RXTHRLEN_Pos) /*!< 0x00040000 */
#define USB_OTG_DTHRCTL_RXTHRLEN_2      (0x004U << USB_OTG_DTHRCTL_RXTHRLEN_Pos) /*!< 0x00080000 */
#define USB_OTG_DTHRCTL_RXTHRLEN_3      (0x008U << USB_OTG_DTHRCTL_RXTHRLEN_Pos) /*!< 0x00100000 */
#define USB_OTG_DTHRCTL_RXTHRLEN_4      (0x010U << USB_OTG_DTHRCTL_RXTHRLEN_Pos) /*!< 0x00200000 */
#define USB_OTG_DTHRCTL_RXTHRLEN_5      (0x020U << USB_OTG_DTHRCTL_RXTHRLEN_Pos) /*!< 0x00400000 */
#define USB_OTG_DTHRCTL_RXTHRLEN_6      (0x040U << USB_OTG_DTHRCTL_RXTHRLEN_Pos) /*!< 0x00800000 */
#define USB_OTG_DTHRCTL_RXTHRLEN_7      (0x080U << USB_OTG_DTHRCTL_RXTHRLEN_Pos) /*!< 0x01000000 */
#define USB_OTG_DTHRCTL_RXTHRLEN_8      (0x100U << USB_OTG_DTHRCTL_RXTHRLEN_Pos) /*!< 0x02000000 */
#define USB_OTG_DTHRCTL_ARPEN_Pos       (27U)
#define USB_OTG_DTHRCTL_ARPEN_Msk       (0x1U << USB_OTG_DTHRCTL_ARPEN_Pos) /*!< 0x08000000 */
#define USB_OTG_DTHRCTL_ARPEN           USB_OTG_DTHRCTL_ARPEN_Msk           /*!< Arbiter parking enable */

/********************  Bit definition for USB_OTG_DIEPEMPMSK register  ********************/
#define USB_OTG_DIEPEMPMSK_INEPTXFEM_Pos (0U)
#define USB_OTG_DIEPEMPMSK_INEPTXFEM_Msk (0xFFFFU << USB_OTG_DIEPEMPMSK_INEPTXFEM_Pos) /*!< 0x0000FFFF */
#define USB_OTG_DIEPEMPMSK_INEPTXFEM     USB_OTG_DIEPEMPMSK_INEPTXFEM_Msk              /*!< IN EP Tx FIFO empty interrupt mask bits */

/********************  Bit definition for USB_OTG_DEACHINT register  ********************/
#define USB_OTG_DEACHINT_IEP1INT_Pos (1U)
#define USB_OTG_DEACHINT_IEP1INT_Msk (0x1U << USB_OTG_DEACHINT_IEP1INT_Pos) /*!< 0x00000002 */
#define USB_OTG_DEACHINT_IEP1INT     USB_OTG_DEACHINT_IEP1INT_Msk           /*!< IN endpoint 1interrupt bit   */
#define USB_OTG_DEACHINT_OEP1INT_Pos (17U)
#define USB_OTG_DEACHINT_OEP1INT_Msk (0x1U << USB_OTG_DEACHINT_OEP1INT_Pos) /*!< 0x00020000 */
#define USB_OTG_DEACHINT_OEP1INT     USB_OTG_DEACHINT_OEP1INT_Msk           /*!< OUT endpoint 1 interrupt bit */

/********************  Bit definition for USB_OTG_GCCFG register  ********************/
#define USB_OTG_GCCFG_PWRDWN_Pos     (16U)
#define USB_OTG_GCCFG_PWRDWN_Msk     (0x1U << USB_OTG_GCCFG_PWRDWN_Pos) /*!< 0x00010000 */
#define USB_OTG_GCCFG_PWRDWN         USB_OTG_GCCFG_PWRDWN_Msk           /*!< Power down */
#define USB_OTG_GCCFG_I2CPADEN_Pos   (17U)
#define USB_OTG_GCCFG_I2CPADEN_Msk   (0x1U << USB_OTG_GCCFG_I2CPADEN_Pos) /*!< 0x00020000 */
#define USB_OTG_GCCFG_I2CPADEN       USB_OTG_GCCFG_I2CPADEN_Msk           /*!< Enable I2C bus connection for the external I2C PHY interface*/
#define USB_OTG_GCCFG_VBUSASEN_Pos   (18U)
#define USB_OTG_GCCFG_VBUSASEN_Msk   (0x1U << USB_OTG_GCCFG_VBUSASEN_Pos) /*!< 0x00040000 */
#define USB_OTG_GCCFG_VBUSASEN       USB_OTG_GCCFG_VBUSASEN_Msk           /*!< Enable the VBUS sensing device */
#define USB_OTG_GCCFG_VBUSBSEN_Pos   (19U)
#define USB_OTG_GCCFG_VBUSBSEN_Msk   (0x1U << USB_OTG_GCCFG_VBUSBSEN_Pos) /*!< 0x00080000 */
#define USB_OTG_GCCFG_VBUSBSEN       USB_OTG_GCCFG_VBUSBSEN_Msk           /*!< Enable the VBUS sensing device */
#define USB_OTG_GCCFG_SOFOUTEN_Pos   (20U)
#define USB_OTG_GCCFG_SOFOUTEN_Msk   (0x1U << USB_OTG_GCCFG_SOFOUTEN_Pos) /*!< 0x00100000 */
#define USB_OTG_GCCFG_SOFOUTEN       USB_OTG_GCCFG_SOFOUTEN_Msk           /*!< SOF output enable */
#define USB_OTG_GCCFG_NOVBUSSENS_Pos (21U)
#define USB_OTG_GCCFG_NOVBUSSENS_Msk (0x1U << USB_OTG_GCCFG_NOVBUSSENS_Pos) /*!< 0x00200000 */
#define USB_OTG_GCCFG_NOVBUSSENS     USB_OTG_GCCFG_NOVBUSSENS_Msk           /*!< VBUS sensing disable option*/

/********************  Bit definition forUSB_OTG_DEACHINTMSK register  ********************/
#define USB_OTG_DEACHINTMSK_IEP1INTM_Pos (1U)
#define USB_OTG_DEACHINTMSK_IEP1INTM_Msk (0x1U << USB_OTG_DEACHINTMSK_IEP1INTM_Pos) /*!< 0x00000002 */
#define USB_OTG_DEACHINTMSK_IEP1INTM     USB_OTG_DEACHINTMSK_IEP1INTM_Msk           /*!< IN Endpoint 1 interrupt mask bit  */
#define USB_OTG_DEACHINTMSK_OEP1INTM_Pos (17U)
#define USB_OTG_DEACHINTMSK_OEP1INTM_Msk (0x1U << USB_OTG_DEACHINTMSK_OEP1INTM_Pos) /*!< 0x00020000 */
#define USB_OTG_DEACHINTMSK_OEP1INTM     USB_OTG_DEACHINTMSK_OEP1INTM_Msk           /*!< OUT Endpoint 1 interrupt mask bit */

/********************  Bit definition for USB_OTG_CID register  ********************/
#define USB_OTG_CID_PRODUCT_ID_Pos (0U)
#define USB_OTG_CID_PRODUCT_ID_Msk (0xFFFFFFFFU << USB_OTG_CID_PRODUCT_ID_Pos) /*!< 0xFFFFFFFF */
#define USB_OTG_CID_PRODUCT_ID     USB_OTG_CID_PRODUCT_ID_Msk                  /*!< Product ID field */

/********************  Bit definition for USB_OTG_DIEPEACHMSK1 register  ********************/
#define USB_OTG_DIEPEACHMSK1_XFRCM_Pos     (0U)
#define USB_OTG_DIEPEACHMSK1_XFRCM_Msk     (0x1U << USB_OTG_DIEPEACHMSK1_XFRCM_Pos) /*!< 0x00000001 */
#define USB_OTG_DIEPEACHMSK1_XFRCM         USB_OTG_DIEPEACHMSK1_XFRCM_Msk           /*!< Transfer completed interrupt mask                 */
#define USB_OTG_DIEPEACHMSK1_EPDM_Pos      (1U)
#define USB_OTG_DIEPEACHMSK1_EPDM_Msk      (0x1U << USB_OTG_DIEPEACHMSK1_EPDM_Pos) /*!< 0x00000002 */
#define USB_OTG_DIEPEACHMSK1_EPDM          USB_OTG_DIEPEACHMSK1_EPDM_Msk           /*!< Endpoint disabled interrupt mask                  */
#define USB_OTG_DIEPEACHMSK1_TOM_Pos       (3U)
#define USB_OTG_DIEPEACHMSK1_TOM_Msk       (0x1U << USB_OTG_DIEPEACHMSK1_TOM_Pos) /*!< 0x00000008 */
#define USB_OTG_DIEPEACHMSK1_TOM           USB_OTG_DIEPEACHMSK1_TOM_Msk           /*!< Timeout condition mask (nonisochronous endpoints) */
#define USB_OTG_DIEPEACHMSK1_ITTXFEMSK_Pos (4U)
#define USB_OTG_DIEPEACHMSK1_ITTXFEMSK_Msk (0x1U << USB_OTG_DIEPEACHMSK1_ITTXFEMSK_Pos) /*!< 0x00000010 */
#define USB_OTG_DIEPEACHMSK1_ITTXFEMSK     USB_OTG_DIEPEACHMSK1_ITTXFEMSK_Msk           /*!< IN token received when TxFIFO empty mask          */
#define USB_OTG_DIEPEACHMSK1_INEPNMM_Pos   (5U)
#define USB_OTG_DIEPEACHMSK1_INEPNMM_Msk   (0x1U << USB_OTG_DIEPEACHMSK1_INEPNMM_Pos) /*!< 0x00000020 */
#define USB_OTG_DIEPEACHMSK1_INEPNMM       USB_OTG_DIEPEACHMSK1_INEPNMM_Msk           /*!< IN token received with EP mismatch mask           */
#define USB_OTG_DIEPEACHMSK1_INEPNEM_Pos   (6U)
#define USB_OTG_DIEPEACHMSK1_INEPNEM_Msk   (0x1U << USB_OTG_DIEPEACHMSK1_INEPNEM_Pos) /*!< 0x00000040 */
#define USB_OTG_DIEPEACHMSK1_INEPNEM       USB_OTG_DIEPEACHMSK1_INEPNEM_Msk           /*!< IN endpoint NAK effective mask                    */
#define USB_OTG_DIEPEACHMSK1_TXFURM_Pos    (8U)
#define USB_OTG_DIEPEACHMSK1_TXFURM_Msk    (0x1U << USB_OTG_DIEPEACHMSK1_TXFURM_Pos) /*!< 0x00000100 */
#define USB_OTG_DIEPEACHMSK1_TXFURM        USB_OTG_DIEPEACHMSK1_TXFURM_Msk           /*!< FIFO underrun mask                                */
#define USB_OTG_DIEPEACHMSK1_BIM_Pos       (9U)
#define USB_OTG_DIEPEACHMSK1_BIM_Msk       (0x1U << USB_OTG_DIEPEACHMSK1_BIM_Pos) /*!< 0x00000200 */
#define USB_OTG_DIEPEACHMSK1_BIM           USB_OTG_DIEPEACHMSK1_BIM_Msk           /*!< BNA interrupt mask                                */
#define USB_OTG_DIEPEACHMSK1_NAKM_Pos      (13U)
#define USB_OTG_DIEPEACHMSK1_NAKM_Msk      (0x1U << USB_OTG_DIEPEACHMSK1_NAKM_Pos) /*!< 0x00002000 */
#define USB_OTG_DIEPEACHMSK1_NAKM          USB_OTG_DIEPEACHMSK1_NAKM_Msk           /*!< NAK interrupt mask                                */

/********************  Bit definition for USB_OTG_HPRT register  ********************/
#define USB_OTG_HPRT_PCSTS_Pos   (0U)
#define USB_OTG_HPRT_PCSTS_Msk   (0x1U << USB_OTG_HPRT_PCSTS_Pos) /*!< 0x00000001 */
#define USB_OTG_HPRT_PCSTS       USB_OTG_HPRT_PCSTS_Msk           /*!< Port connect status        */
#define USB_OTG_HPRT_PCDET_Pos   (1U)
#define USB_OTG_HPRT_PCDET_Msk   (0x1U << USB_OTG_HPRT_PCDET_Pos) /*!< 0x00000002 */
#define USB_OTG_HPRT_PCDET       USB_OTG_HPRT_PCDET_Msk           /*!< Port connect detected      */
#define USB_OTG_HPRT_PENA_Pos    (2U)
#define USB_OTG_HPRT_PENA_Msk    (0x1U << USB_OTG_HPRT_PENA_Pos) /*!< 0x00000004 */
#define USB_OTG_HPRT_PENA        USB_OTG_HPRT_PENA_Msk           /*!< Port enable                */
#define USB_OTG_HPRT_PENCHNG_Pos (3U)
#define USB_OTG_HPRT_PENCHNG_Msk (0x1U << USB_OTG_HPRT_PENCHNG_Pos) /*!< 0x00000008 */
#define USB_OTG_HPRT_PENCHNG     USB_OTG_HPRT_PENCHNG_Msk           /*!< Port enable/disable change */
#define USB_OTG_HPRT_POCA_Pos    (4U)
#define USB_OTG_HPRT_POCA_Msk    (0x1U << USB_OTG_HPRT_POCA_Pos) /*!< 0x00000010 */
#define USB_OTG_HPRT_POCA        USB_OTG_HPRT_POCA_Msk           /*!< Port overcurrent active    */
#define USB_OTG_HPRT_POCCHNG_Pos (5U)
#define USB_OTG_HPRT_POCCHNG_Msk (0x1U << USB_OTG_HPRT_POCCHNG_Pos) /*!< 0x00000020 */
#define USB_OTG_HPRT_POCCHNG     USB_OTG_HPRT_POCCHNG_Msk           /*!< Port overcurrent change    */
#define USB_OTG_HPRT_PRES_Pos    (6U)
#define USB_OTG_HPRT_PRES_Msk    (0x1U << USB_OTG_HPRT_PRES_Pos) /*!< 0x00000040 */
#define USB_OTG_HPRT_PRES        USB_OTG_HPRT_PRES_Msk           /*!< Port resume                */
#define USB_OTG_HPRT_PSUSP_Pos   (7U)
#define USB_OTG_HPRT_PSUSP_Msk   (0x1U << USB_OTG_HPRT_PSUSP_Pos) /*!< 0x00000080 */
#define USB_OTG_HPRT_PSUSP       USB_OTG_HPRT_PSUSP_Msk           /*!< Port suspend               */
#define USB_OTG_HPRT_PRST_Pos    (8U)
#define USB_OTG_HPRT_PRST_Msk    (0x1U << USB_OTG_HPRT_PRST_Pos) /*!< 0x00000100 */
#define USB_OTG_HPRT_PRST        USB_OTG_HPRT_PRST_Msk           /*!< Port reset                 */

#define USB_OTG_HPRT_PLSTS_Pos   (10U)
#define USB_OTG_HPRT_PLSTS_Msk   (0x3U << USB_OTG_HPRT_PLSTS_Pos) /*!< 0x00000C00 */
#define USB_OTG_HPRT_PLSTS       USB_OTG_HPRT_PLSTS_Msk           /*!< Port line status           */
#define USB_OTG_HPRT_PLSTS_0     (0x1U << USB_OTG_HPRT_PLSTS_Pos) /*!< 0x00000400 */
#define USB_OTG_HPRT_PLSTS_1     (0x2U << USB_OTG_HPRT_PLSTS_Pos) /*!< 0x00000800 */
#define USB_OTG_HPRT_PPWR_Pos    (12U)
#define USB_OTG_HPRT_PPWR_Msk    (0x1U << USB_OTG_HPRT_PPWR_Pos) /*!< 0x00001000 */
#define USB_OTG_HPRT_PPWR        USB_OTG_HPRT_PPWR_Msk           /*!< Port power                 */

#define USB_OTG_HPRT_PTCTL_Pos   (13U)
#define USB_OTG_HPRT_PTCTL_Msk   (0xFU << USB_OTG_HPRT_PTCTL_Pos) /*!< 0x0001E000 */
#define USB_OTG_HPRT_PTCTL       USB_OTG_HPRT_PTCTL_Msk           /*!< Port test control          */
#define USB_OTG_HPRT_PTCTL_0     (0x1U << USB_OTG_HPRT_PTCTL_Pos) /*!< 0x00002000 */
#define USB_OTG_HPRT_PTCTL_1     (0x2U << USB_OTG_HPRT_PTCTL_Pos) /*!< 0x00004000 */
#define USB_OTG_HPRT_PTCTL_2     (0x4U << USB_OTG_HPRT_PTCTL_Pos) /*!< 0x00008000 */
#define USB_OTG_HPRT_PTCTL_3     (0x8U << USB_OTG_HPRT_PTCTL_Pos) /*!< 0x00010000 */

#define USB_OTG_HPRT_PSPD_Pos    (17U)
#define USB_OTG_HPRT_PSPD_Msk    (0x3U << USB_OTG_HPRT_PSPD_Pos) /*!< 0x00060000 */
#define USB_OTG_HPRT_PSPD        USB_OTG_HPRT_PSPD_Msk           /*!< Port speed                 */
#define USB_OTG_HPRT_PSPD_0      (0x1U << USB_OTG_HPRT_PSPD_Pos) /*!< 0x00020000 */
#define USB_OTG_HPRT_PSPD_1      (0x2U << USB_OTG_HPRT_PSPD_Pos) /*!< 0x00040000 */

/********************  Bit definition for USB_OTG_DOEPEACHMSK1 register  ********************/
#define USB_OTG_DOEPEACHMSK1_XFRCM_Pos     (0U)
#define USB_OTG_DOEPEACHMSK1_XFRCM_Msk     (0x1U << USB_OTG_DOEPEACHMSK1_XFRCM_Pos) /*!< 0x00000001 */
#define USB_OTG_DOEPEACHMSK1_XFRCM         USB_OTG_DOEPEACHMSK1_XFRCM_Msk           /*!< Transfer completed interrupt mask         */
#define USB_OTG_DOEPEACHMSK1_EPDM_Pos      (1U)
#define USB_OTG_DOEPEACHMSK1_EPDM_Msk      (0x1U << USB_OTG_DOEPEACHMSK1_EPDM_Pos) /*!< 0x00000002 */
#define USB_OTG_DOEPEACHMSK1_EPDM          USB_OTG_DOEPEACHMSK1_EPDM_Msk           /*!< Endpoint disabled interrupt mask          */
#define USB_OTG_DOEPEACHMSK1_TOM_Pos       (3U)
#define USB_OTG_DOEPEACHMSK1_TOM_Msk       (0x1U << USB_OTG_DOEPEACHMSK1_TOM_Pos) /*!< 0x00000008 */
#define USB_OTG_DOEPEACHMSK1_TOM           USB_OTG_DOEPEACHMSK1_TOM_Msk           /*!< Timeout condition mask                    */
#define USB_OTG_DOEPEACHMSK1_ITTXFEMSK_Pos (4U)
#define USB_OTG_DOEPEACHMSK1_ITTXFEMSK_Msk (0x1U << USB_OTG_DOEPEACHMSK1_ITTXFEMSK_Pos) /*!< 0x00000010 */
#define USB_OTG_DOEPEACHMSK1_ITTXFEMSK     USB_OTG_DOEPEACHMSK1_ITTXFEMSK_Msk           /*!< IN token received when TxFIFO empty mask  */
#define USB_OTG_DOEPEACHMSK1_INEPNMM_Pos   (5U)
#define USB_OTG_DOEPEACHMSK1_INEPNMM_Msk   (0x1U << USB_OTG_DOEPEACHMSK1_INEPNMM_Pos) /*!< 0x00000020 */
#define USB_OTG_DOEPEACHMSK1_INEPNMM       USB_OTG_DOEPEACHMSK1_INEPNMM_Msk           /*!< IN token received with EP mismatch mask   */
#define USB_OTG_DOEPEACHMSK1_INEPNEM_Pos   (6U)
#define USB_OTG_DOEPEACHMSK1_INEPNEM_Msk   (0x1U << USB_OTG_DOEPEACHMSK1_INEPNEM_Pos) /*!< 0x00000040 */
#define USB_OTG_DOEPEACHMSK1_INEPNEM       USB_OTG_DOEPEACHMSK1_INEPNEM_Msk           /*!< IN endpoint NAK effective mask            */
#define USB_OTG_DOEPEACHMSK1_TXFURM_Pos    (8U)
#define USB_OTG_DOEPEACHMSK1_TXFURM_Msk    (0x1U << USB_OTG_DOEPEACHMSK1_TXFURM_Pos) /*!< 0x00000100 */
#define USB_OTG_DOEPEACHMSK1_TXFURM        USB_OTG_DOEPEACHMSK1_TXFURM_Msk           /*!< OUT packet error mask                     */
#define USB_OTG_DOEPEACHMSK1_BIM_Pos       (9U)
#define USB_OTG_DOEPEACHMSK1_BIM_Msk       (0x1U << USB_OTG_DOEPEACHMSK1_BIM_Pos) /*!< 0x00000200 */
#define USB_OTG_DOEPEACHMSK1_BIM           USB_OTG_DOEPEACHMSK1_BIM_Msk           /*!< BNA interrupt mask                        */
#define USB_OTG_DOEPEACHMSK1_BERRM_Pos     (12U)
#define USB_OTG_DOEPEACHMSK1_BERRM_Msk     (0x1U << USB_OTG_DOEPEACHMSK1_BERRM_Pos) /*!< 0x00001000 */
#define USB_OTG_DOEPEACHMSK1_BERRM         USB_OTG_DOEPEACHMSK1_BERRM_Msk           /*!< Bubble error interrupt mask               */
#define USB_OTG_DOEPEACHMSK1_NAKM_Pos      (13U)
#define USB_OTG_DOEPEACHMSK1_NAKM_Msk      (0x1U << USB_OTG_DOEPEACHMSK1_NAKM_Pos) /*!< 0x00002000 */
#define USB_OTG_DOEPEACHMSK1_NAKM          USB_OTG_DOEPEACHMSK1_NAKM_Msk           /*!< NAK interrupt mask                        */
#define USB_OTG_DOEPEACHMSK1_NYETM_Pos     (14U)
#define USB_OTG_DOEPEACHMSK1_NYETM_Msk     (0x1U << USB_OTG_DOEPEACHMSK1_NYETM_Pos) /*!< 0x00004000 */
#define USB_OTG_DOEPEACHMSK1_NYETM         USB_OTG_DOEPEACHMSK1_NYETM_Msk           /*!< NYET interrupt mask                       */

/********************  Bit definition for USB_OTG_HPTXFSIZ register  ********************/
#define USB_OTG_HPTXFSIZ_PTXSA_Pos (0U)
#define USB_OTG_HPTXFSIZ_PTXSA_Msk (0xFFFFU << USB_OTG_HPTXFSIZ_PTXSA_Pos) /*!< 0x0000FFFF */
#define USB_OTG_HPTXFSIZ_PTXSA     USB_OTG_HPTXFSIZ_PTXSA_Msk              /*!< Host periodic TxFIFO start address            */
#define USB_OTG_HPTXFSIZ_PTXFD_Pos (16U)
#define USB_OTG_HPTXFSIZ_PTXFD_Msk (0xFFFFU << USB_OTG_HPTXFSIZ_PTXFD_Pos) /*!< 0xFFFF0000 */
#define USB_OTG_HPTXFSIZ_PTXFD     USB_OTG_HPTXFSIZ_PTXFD_Msk              /*!< Host periodic TxFIFO depth                    */

/********************  Bit definition for USB_OTG_DIEPCTL register  ********************/
#define USB_OTG_DIEPCTL_MPSIZ_Pos          (0U)
#define USB_OTG_DIEPCTL_MPSIZ_Msk          (0x7FFU << USB_OTG_DIEPCTL_MPSIZ_Pos) /*!< 0x000007FF */
#define USB_OTG_DIEPCTL_MPSIZ              USB_OTG_DIEPCTL_MPSIZ_Msk             /*!< Maximum packet size              */
#define USB_OTG_DIEPCTL_USBAEP_Pos         (15U)
#define USB_OTG_DIEPCTL_USBAEP_Msk         (0x1U << USB_OTG_DIEPCTL_USBAEP_Pos) /*!< 0x00008000 */
#define USB_OTG_DIEPCTL_USBAEP             USB_OTG_DIEPCTL_USBAEP_Msk           /*!< USB active endpoint              */
#define USB_OTG_DIEPCTL_EONUM_DPID_Pos     (16U)
#define USB_OTG_DIEPCTL_EONUM_DPID_Msk     (0x1U << USB_OTG_DIEPCTL_EONUM_DPID_Pos) /*!< 0x00010000 */
#define USB_OTG_DIEPCTL_EONUM_DPID         USB_OTG_DIEPCTL_EONUM_DPID_Msk           /*!< Even/odd frame                   */
#define USB_OTG_DIEPCTL_NAKSTS_Pos         (17U)
#define USB_OTG_DIEPCTL_NAKSTS_Msk         (0x1U << USB_OTG_DIEPCTL_NAKSTS_Pos) /*!< 0x00020000 */
#define USB_OTG_DIEPCTL_NAKSTS             USB_OTG_DIEPCTL_NAKSTS_Msk           /*!< NAK status                       */

#define USB_OTG_DIEPCTL_EPTYP_Pos          (18U)
#define USB_OTG_DIEPCTL_EPTYP_Msk          (0x3U << USB_OTG_DIEPCTL_EPTYP_Pos) /*!< 0x000C0000 */
#define USB_OTG_DIEPCTL_EPTYP              USB_OTG_DIEPCTL_EPTYP_Msk           /*!< Endpoint type                    */
#define USB_OTG_DIEPCTL_EPTYP_0            (0x1U << USB_OTG_DIEPCTL_EPTYP_Pos) /*!< 0x00040000 */
#define USB_OTG_DIEPCTL_EPTYP_1            (0x2U << USB_OTG_DIEPCTL_EPTYP_Pos) /*!< 0x00080000 */
#define USB_OTG_DIEPCTL_STALL_Pos          (21U)
#define USB_OTG_DIEPCTL_STALL_Msk          (0x1U << USB_OTG_DIEPCTL_STALL_Pos) /*!< 0x00200000 */
#define USB_OTG_DIEPCTL_STALL              USB_OTG_DIEPCTL_STALL_Msk           /*!< STALL handshake                  */

#define USB_OTG_DIEPCTL_TXFNUM_Pos         (22U)
#define USB_OTG_DIEPCTL_TXFNUM_Msk         (0xFU << USB_OTG_DIEPCTL_TXFNUM_Pos) /*!< 0x03C00000 */
#define USB_OTG_DIEPCTL_TXFNUM             USB_OTG_DIEPCTL_TXFNUM_Msk           /*!< TxFIFO number                    */
#define USB_OTG_DIEPCTL_TXFNUM_0           (0x1U << USB_OTG_DIEPCTL_TXFNUM_Pos) /*!< 0x00400000 */
#define USB_OTG_DIEPCTL_TXFNUM_1           (0x2U << USB_OTG_DIEPCTL_TXFNUM_Pos) /*!< 0x00800000 */
#define USB_OTG_DIEPCTL_TXFNUM_2           (0x4U << USB_OTG_DIEPCTL_TXFNUM_Pos) /*!< 0x01000000 */
#define USB_OTG_DIEPCTL_TXFNUM_3           (0x8U << USB_OTG_DIEPCTL_TXFNUM_Pos) /*!< 0x02000000 */
#define USB_OTG_DIEPCTL_CNAK_Pos           (26U)
#define USB_OTG_DIEPCTL_CNAK_Msk           (0x1U << USB_OTG_DIEPCTL_CNAK_Pos) /*!< 0x04000000 */
#define USB_OTG_DIEPCTL_CNAK               USB_OTG_DIEPCTL_CNAK_Msk           /*!< Clear NAK                        */
#define USB_OTG_DIEPCTL_SNAK_Pos           (27U)
#define USB_OTG_DIEPCTL_SNAK_Msk           (0x1U << USB_OTG_DIEPCTL_SNAK_Pos) /*!< 0x08000000 */
#define USB_OTG_DIEPCTL_SNAK               USB_OTG_DIEPCTL_SNAK_Msk           /*!< Set NAK */
#define USB_OTG_DIEPCTL_SD0PID_SEVNFRM_Pos (28U)
#define USB_OTG_DIEPCTL_SD0PID_SEVNFRM_Msk (0x1U << USB_OTG_DIEPCTL_SD0PID_SEVNFRM_Pos) /*!< 0x10000000 */
#define USB_OTG_DIEPCTL_SD0PID_SEVNFRM     USB_OTG_DIEPCTL_SD0PID_SEVNFRM_Msk           /*!< Set DATA0 PID                    */
#define USB_OTG_DIEPCTL_SODDFRM_Pos        (29U)
#define USB_OTG_DIEPCTL_SODDFRM_Msk        (0x1U << USB_OTG_DIEPCTL_SODDFRM_Pos) /*!< 0x20000000 */
#define USB_OTG_DIEPCTL_SODDFRM            USB_OTG_DIEPCTL_SODDFRM_Msk           /*!< Set odd frame                    */
#define USB_OTG_DIEPCTL_EPDIS_Pos          (30U)
#define USB_OTG_DIEPCTL_EPDIS_Msk          (0x1U << USB_OTG_DIEPCTL_EPDIS_Pos) /*!< 0x40000000 */
#define USB_OTG_DIEPCTL_EPDIS              USB_OTG_DIEPCTL_EPDIS_Msk           /*!< Endpoint disable                 */
#define USB_OTG_DIEPCTL_EPENA_Pos          (31U)
#define USB_OTG_DIEPCTL_EPENA_Msk          (0x1U << USB_OTG_DIEPCTL_EPENA_Pos) /*!< 0x80000000 */
#define USB_OTG_DIEPCTL_EPENA              USB_OTG_DIEPCTL_EPENA_Msk           /*!< Endpoint enable                  */

/********************  Bit definition for USB_OTG_HCCHAR register  ********************/
#define USB_OTG_HCCHAR_MPSIZ_Pos  (0U)
#define USB_OTG_HCCHAR_MPSIZ_Msk  (0x7FFU << USB_OTG_HCCHAR_MPSIZ_Pos) /*!< 0x000007FF */
#define USB_OTG_HCCHAR_MPSIZ      USB_OTG_HCCHAR_MPSIZ_Msk             /*!< Maximum packet size */

#define USB_OTG_HCCHAR_EPNUM_Pos  (11U)
#define USB_OTG_HCCHAR_EPNUM_Msk  (0xFU << USB_OTG_HCCHAR_EPNUM_Pos) /*!< 0x00007800 */
#define USB_OTG_HCCHAR_EPNUM      USB_OTG_HCCHAR_EPNUM_Msk           /*!< Endpoint number */
#define USB_OTG_HCCHAR_EPNUM_0    (0x1U << USB_OTG_HCCHAR_EPNUM_Pos) /*!< 0x00000800 */
#define USB_OTG_HCCHAR_EPNUM_1    (0x2U << USB_OTG_HCCHAR_EPNUM_Pos) /*!< 0x00001000 */
#define USB_OTG_HCCHAR_EPNUM_2    (0x4U << USB_OTG_HCCHAR_EPNUM_Pos) /*!< 0x00002000 */
#define USB_OTG_HCCHAR_EPNUM_3    (0x8U << USB_OTG_HCCHAR_EPNUM_Pos) /*!< 0x00004000 */
#define USB_OTG_HCCHAR_EPDIR_Pos  (15U)
#define USB_OTG_HCCHAR_EPDIR_Msk  (0x1U << USB_OTG_HCCHAR_EPDIR_Pos) /*!< 0x00008000 */
#define USB_OTG_HCCHAR_EPDIR      USB_OTG_HCCHAR_EPDIR_Msk           /*!< Endpoint direction */
#define USB_OTG_HCCHAR_LSDEV_Pos  (17U)
#define USB_OTG_HCCHAR_LSDEV_Msk  (0x1U << USB_OTG_HCCHAR_LSDEV_Pos) /*!< 0x00020000 */
#define USB_OTG_HCCHAR_LSDEV      USB_OTG_HCCHAR_LSDEV_Msk           /*!< Low-speed device */

#define USB_OTG_HCCHAR_EPTYP_Pos  (18U)
#define USB_OTG_HCCHAR_EPTYP_Msk  (0x3U << USB_OTG_HCCHAR_EPTYP_Pos) /*!< 0x000C0000 */
#define USB_OTG_HCCHAR_EPTYP      USB_OTG_HCCHAR_EPTYP_Msk           /*!< Endpoint type */
#define USB_OTG_HCCHAR_EPTYP_0    (0x1U << USB_OTG_HCCHAR_EPTYP_Pos) /*!< 0x00040000 */
#define USB_OTG_HCCHAR_EPTYP_1    (0x2U << USB_OTG_HCCHAR_EPTYP_Pos) /*!< 0x00080000 */

#define USB_OTG_HCCHAR_MC_Pos     (20U)
#define USB_OTG_HCCHAR_MC_Msk     (0x3U << USB_OTG_HCCHAR_MC_Pos) /*!< 0x00300000 */
#define USB_OTG_HCCHAR_MC         USB_OTG_HCCHAR_MC_Msk           /*!< Multi Count (MC) / Error Count (EC) */
#define USB_OTG_HCCHAR_MC_0       (0x1U << USB_OTG_HCCHAR_MC_Pos) /*!< 0x00100000 */
#define USB_OTG_HCCHAR_MC_1       (0x2U << USB_OTG_HCCHAR_MC_Pos) /*!< 0x00200000 */

#define USB_OTG_HCCHAR_DAD_Pos    (22U)
#define USB_OTG_HCCHAR_DAD_Msk    (0x7FU << USB_OTG_HCCHAR_DAD_Pos) /*!< 0x1FC00000 */
#define USB_OTG_HCCHAR_DAD        USB_OTG_HCCHAR_DAD_Msk            /*!< Device address */
#define USB_OTG_HCCHAR_DAD_0      (0x01U << USB_OTG_HCCHAR_DAD_Pos) /*!< 0x00400000 */
#define USB_OTG_HCCHAR_DAD_1      (0x02U << USB_OTG_HCCHAR_DAD_Pos) /*!< 0x00800000 */
#define USB_OTG_HCCHAR_DAD_2      (0x04U << USB_OTG_HCCHAR_DAD_Pos) /*!< 0x01000000 */
#define USB_OTG_HCCHAR_DAD_3      (0x08U << USB_OTG_HCCHAR_DAD_Pos) /*!< 0x02000000 */
#define USB_OTG_HCCHAR_DAD_4      (0x10U << USB_OTG_HCCHAR_DAD_Pos) /*!< 0x04000000 */
#define USB_OTG_HCCHAR_DAD_5      (0x20U << USB_OTG_HCCHAR_DAD_Pos) /*!< 0x08000000 */
#define USB_OTG_HCCHAR_DAD_6      (0x40U << USB_OTG_HCCHAR_DAD_Pos) /*!< 0x10000000 */
#define USB_OTG_HCCHAR_ODDFRM_Pos (29U)
#define USB_OTG_HCCHAR_ODDFRM_Msk (0x1U << USB_OTG_HCCHAR_ODDFRM_Pos) /*!< 0x20000000 */
#define USB_OTG_HCCHAR_ODDFRM     USB_OTG_HCCHAR_ODDFRM_Msk           /*!< Odd frame */
#define USB_OTG_HCCHAR_CHDIS_Pos  (30U)
#define USB_OTG_HCCHAR_CHDIS_Msk  (0x1U << USB_OTG_HCCHAR_CHDIS_Pos) /*!< 0x40000000 */
#define USB_OTG_HCCHAR_CHDIS      USB_OTG_HCCHAR_CHDIS_Msk           /*!< Channel disable */
#define USB_OTG_HCCHAR_CHENA_Pos  (31U)
#define USB_OTG_HCCHAR_CHENA_Msk  (0x1U << USB_OTG_HCCHAR_CHENA_Pos) /*!< 0x80000000 */
#define USB_OTG_HCCHAR_CHENA      USB_OTG_HCCHAR_CHENA_Msk           /*!< Channel enable */

/********************  Bit definition for USB_OTG_HCSPLT register  ********************/

#define USB_OTG_HCSPLT_PRTADDR_Pos   (0U)
#define USB_OTG_HCSPLT_PRTADDR_Msk   (0x7FU << USB_OTG_HCSPLT_PRTADDR_Pos) /*!< 0x0000007F */
#define USB_OTG_HCSPLT_PRTADDR       USB_OTG_HCSPLT_PRTADDR_Msk            /*!< Port address */
#define USB_OTG_HCSPLT_PRTADDR_0     (0x01U << USB_OTG_HCSPLT_PRTADDR_Pos) /*!< 0x00000001 */
#define USB_OTG_HCSPLT_PRTADDR_1     (0x02U << USB_OTG_HCSPLT_PRTADDR_Pos) /*!< 0x00000002 */
#define USB_OTG_HCSPLT_PRTADDR_2     (0x04U << USB_OTG_HCSPLT_PRTADDR_Pos) /*!< 0x00000004 */
#define USB_OTG_HCSPLT_PRTADDR_3     (0x08U << USB_OTG_HCSPLT_PRTADDR_Pos) /*!< 0x00000008 */
#define USB_OTG_HCSPLT_PRTADDR_4     (0x10U << USB_OTG_HCSPLT_PRTADDR_Pos) /*!< 0x00000010 */
#define USB_OTG_HCSPLT_PRTADDR_5     (0x20U << USB_OTG_HCSPLT_PRTADDR_Pos) /*!< 0x00000020 */
#define USB_OTG_HCSPLT_PRTADDR_6     (0x40U << USB_OTG_HCSPLT_PRTADDR_Pos) /*!< 0x00000040 */

#define USB_OTG_HCSPLT_HUBADDR_Pos   (7U)
#define USB_OTG_HCSPLT_HUBADDR_Msk   (0x7FU << USB_OTG_HCSPLT_HUBADDR_Pos) /*!< 0x00003F80 */
#define USB_OTG_HCSPLT_HUBADDR       USB_OTG_HCSPLT_HUBADDR_Msk            /*!< Hub address */
#define USB_OTG_HCSPLT_HUBADDR_0     (0x01U << USB_OTG_HCSPLT_HUBADDR_Pos) /*!< 0x00000080 */
#define USB_OTG_HCSPLT_HUBADDR_1     (0x02U << USB_OTG_HCSPLT_HUBADDR_Pos) /*!< 0x00000100 */
#define USB_OTG_HCSPLT_HUBADDR_2     (0x04U << USB_OTG_HCSPLT_HUBADDR_Pos) /*!< 0x00000200 */
#define USB_OTG_HCSPLT_HUBADDR_3     (0x08U << USB_OTG_HCSPLT_HUBADDR_Pos) /*!< 0x00000400 */
#define USB_OTG_HCSPLT_HUBADDR_4     (0x10U << USB_OTG_HCSPLT_HUBADDR_Pos) /*!< 0x00000800 */
#define USB_OTG_HCSPLT_HUBADDR_5     (0x20U << USB_OTG_HCSPLT_HUBADDR_Pos) /*!< 0x00001000 */
#define USB_OTG_HCSPLT_HUBADDR_6     (0x40U << USB_OTG_HCSPLT_HUBADDR_Pos) /*!< 0x00002000 */

#define USB_OTG_HCSPLT_XACTPOS_Pos   (14U)
#define USB_OTG_HCSPLT_XACTPOS_Msk   (0x3U << USB_OTG_HCSPLT_XACTPOS_Pos) /*!< 0x0000C000 */
#define USB_OTG_HCSPLT_XACTPOS       USB_OTG_HCSPLT_XACTPOS_Msk           /*!< XACTPOS */
#define USB_OTG_HCSPLT_XACTPOS_0     (0x1U << USB_OTG_HCSPLT_XACTPOS_Pos) /*!< 0x00004000 */
#define USB_OTG_HCSPLT_XACTPOS_1     (0x2U << USB_OTG_HCSPLT_XACTPOS_Pos) /*!< 0x00008000 */
#define USB_OTG_HCSPLT_COMPLSPLT_Pos (16U)
#define USB_OTG_HCSPLT_COMPLSPLT_Msk (0x1U << USB_OTG_HCSPLT_COMPLSPLT_Pos) /*!< 0x00010000 */
#define USB_OTG_HCSPLT_COMPLSPLT     USB_OTG_HCSPLT_COMPLSPLT_Msk           /*!< Do complete split */
#define USB_OTG_HCSPLT_SPLITEN_Pos   (31U)
#define USB_OTG_HCSPLT_SPLITEN_Msk   (0x1U << USB_OTG_HCSPLT_SPLITEN_Pos) /*!< 0x80000000 */
#define USB_OTG_HCSPLT_SPLITEN       USB_OTG_HCSPLT_SPLITEN_Msk           /*!< Split enable */

/********************  Bit definition for USB_OTG_HCINT register  ********************/
#define USB_OTG_HCINT_XFRC_Pos   (0U)
#define USB_OTG_HCINT_XFRC_Msk   (0x1U << USB_OTG_HCINT_XFRC_Pos) /*!< 0x00000001 */
#define USB_OTG_HCINT_XFRC       USB_OTG_HCINT_XFRC_Msk           /*!< Transfer completed */
#define USB_OTG_HCINT_CHH_Pos    (1U)
#define USB_OTG_HCINT_CHH_Msk    (0x1U << USB_OTG_HCINT_CHH_Pos) /*!< 0x00000002 */
#define USB_OTG_HCINT_CHH        USB_OTG_HCINT_CHH_Msk           /*!< Channel halted */
#define USB_OTG_HCINT_AHBERR_Pos (2U)
#define USB_OTG_HCINT_AHBERR_Msk (0x1U << USB_OTG_HCINT_AHBERR_Pos) /*!< 0x00000004 */
#define USB_OTG_HCINT_AHBERR     USB_OTG_HCINT_AHBERR_Msk           /*!< AHB error */
#define USB_OTG_HCINT_STALL_Pos  (3U)
#define USB_OTG_HCINT_STALL_Msk  (0x1U << USB_OTG_HCINT_STALL_Pos) /*!< 0x00000008 */
#define USB_OTG_HCINT_STALL      USB_OTG_HCINT_STALL_Msk           /*!< STALL response received interrupt */
#define USB_OTG_HCINT_NAK_Pos    (4U)
#define USB_OTG_HCINT_NAK_Msk    (0x1U << USB_OTG_HCINT_NAK_Pos) /*!< 0x00000010 */
#define USB_OTG_HCINT_NAK        USB_OTG_HCINT_NAK_Msk           /*!< NAK response received interrupt */
#define USB_OTG_HCINT_ACK_Pos    (5U)
#define USB_OTG_HCINT_ACK_Msk    (0x1U << USB_OTG_HCINT_ACK_Pos) /*!< 0x00000020 */
#define USB_OTG_HCINT_ACK        USB_OTG_HCINT_ACK_Msk           /*!< ACK response received/transmitted interrupt */
#define USB_OTG_HCINT_NYET_Pos   (6U)
#define USB_OTG_HCINT_NYET_Msk   (0x1U << USB_OTG_HCINT_NYET_Pos) /*!< 0x00000040 */
#define USB_OTG_HCINT_NYET       USB_OTG_HCINT_NYET_Msk           /*!< Response received interrupt */
#define USB_OTG_HCINT_TXERR_Pos  (7U)
#define USB_OTG_HCINT_TXERR_Msk  (0x1U << USB_OTG_HCINT_TXERR_Pos) /*!< 0x00000080 */
#define USB_OTG_HCINT_TXERR      USB_OTG_HCINT_TXERR_Msk           /*!< Transaction error */
#define USB_OTG_HCINT_BBERR_Pos  (8U)
#define USB_OTG_HCINT_BBERR_Msk  (0x1U << USB_OTG_HCINT_BBERR_Pos) /*!< 0x00000100 */
#define USB_OTG_HCINT_BBERR      USB_OTG_HCINT_BBERR_Msk           /*!< Babble error */
#define USB_OTG_HCINT_FRMOR_Pos  (9U)
#define USB_OTG_HCINT_FRMOR_Msk  (0x1U << USB_OTG_HCINT_FRMOR_Pos) /*!< 0x00000200 */
#define USB_OTG_HCINT_FRMOR      USB_OTG_HCINT_FRMOR_Msk           /*!< Frame overrun */
#define USB_OTG_HCINT_DTERR_Pos  (10U)
#define USB_OTG_HCINT_DTERR_Msk  (0x1U << USB_OTG_HCINT_DTERR_Pos) /*!< 0x00000400 */
#define USB_OTG_HCINT_DTERR      USB_OTG_HCINT_DTERR_Msk           /*!< Data toggle error */

/********************  Bit definition for USB_OTG_DIEPINT register  ********************/
#define USB_OTG_DIEPINT_XFRC_Pos       (0U)
#define USB_OTG_DIEPINT_XFRC_Msk       (0x1U << USB_OTG_DIEPINT_XFRC_Pos) /*!< 0x00000001 */
#define USB_OTG_DIEPINT_XFRC           USB_OTG_DIEPINT_XFRC_Msk           /*!< Transfer completed interrupt */
#define USB_OTG_DIEPINT_EPDISD_Pos     (1U)
#define USB_OTG_DIEPINT_EPDISD_Msk     (0x1U << USB_OTG_DIEPINT_EPDISD_Pos) /*!< 0x00000002 */
#define USB_OTG_DIEPINT_EPDISD         USB_OTG_DIEPINT_EPDISD_Msk           /*!< Endpoint disabled interrupt */
#define USB_OTG_DIEPINT_TOC_Pos        (3U)
#define USB_OTG_DIEPINT_TOC_Msk        (0x1U << USB_OTG_DIEPINT_TOC_Pos) /*!< 0x00000008 */
#define USB_OTG_DIEPINT_TOC            USB_OTG_DIEPINT_TOC_Msk           /*!< Timeout condition */
#define USB_OTG_DIEPINT_ITTXFE_Pos     (4U)
#define USB_OTG_DIEPINT_ITTXFE_Msk     (0x1U << USB_OTG_DIEPINT_ITTXFE_Pos) /*!< 0x00000010 */
#define USB_OTG_DIEPINT_ITTXFE         USB_OTG_DIEPINT_ITTXFE_Msk           /*!< IN token received when TxFIFO is empty */
#define USB_OTG_DIEPINT_INEPNE_Pos     (6U)
#define USB_OTG_DIEPINT_INEPNE_Msk     (0x1U << USB_OTG_DIEPINT_INEPNE_Pos) /*!< 0x00000040 */
#define USB_OTG_DIEPINT_INEPNE         USB_OTG_DIEPINT_INEPNE_Msk           /*!< IN endpoint NAK effective */
#define USB_OTG_DIEPINT_TXFE_Pos       (7U)
#define USB_OTG_DIEPINT_TXFE_Msk       (0x1U << USB_OTG_DIEPINT_TXFE_Pos) /*!< 0x00000080 */
#define USB_OTG_DIEPINT_TXFE           USB_OTG_DIEPINT_TXFE_Msk           /*!< Transmit FIFO empty */
#define USB_OTG_DIEPINT_TXFIFOUDRN_Pos (8U)
#define USB_OTG_DIEPINT_TXFIFOUDRN_Msk (0x1U << USB_OTG_DIEPINT_TXFIFOUDRN_Pos) /*!< 0x00000100 */
#define USB_OTG_DIEPINT_TXFIFOUDRN     USB_OTG_DIEPINT_TXFIFOUDRN_Msk           /*!< Transmit Fifo Underrun */
#define USB_OTG_DIEPINT_BNA_Pos        (9U)
#define USB_OTG_DIEPINT_BNA_Msk        (0x1U << USB_OTG_DIEPINT_BNA_Pos) /*!< 0x00000200 */
#define USB_OTG_DIEPINT_BNA            USB_OTG_DIEPINT_BNA_Msk           /*!< Buffer not available interrupt */
#define USB_OTG_DIEPINT_PKTDRPSTS_Pos  (11U)
#define USB_OTG_DIEPINT_PKTDRPSTS_Msk  (0x1U << USB_OTG_DIEPINT_PKTDRPSTS_Pos) /*!< 0x00000800 */
#define USB_OTG_DIEPINT_PKTDRPSTS      USB_OTG_DIEPINT_PKTDRPSTS_Msk           /*!< Packet dropped status */
#define USB_OTG_DIEPINT_BERR_Pos       (12U)
#define USB_OTG_DIEPINT_BERR_Msk       (0x1U << USB_OTG_DIEPINT_BERR_Pos) /*!< 0x00001000 */
#define USB_OTG_DIEPINT_BERR           USB_OTG_DIEPINT_BERR_Msk           /*!< Babble error interrupt */
#define USB_OTG_DIEPINT_NAK_Pos        (13U)
#define USB_OTG_DIEPINT_NAK_Msk        (0x1U << USB_OTG_DIEPINT_NAK_Pos) /*!< 0x00002000 */
#define USB_OTG_DIEPINT_NAK            USB_OTG_DIEPINT_NAK_Msk           /*!< NAK interrupt */

/********************  Bit definition forUSB_OTG_HCINTMSK register  ********************/
#define USB_OTG_HCINTMSK_XFRCM_Pos  (0U)
#define USB_OTG_HCINTMSK_XFRCM_Msk  (0x1U << USB_OTG_HCINTMSK_XFRCM_Pos) /*!< 0x00000001 */
#define USB_OTG_HCINTMSK_XFRCM      USB_OTG_HCINTMSK_XFRCM_Msk           /*!< Transfer completed mask */
#define USB_OTG_HCINTMSK_CHHM_Pos   (1U)
#define USB_OTG_HCINTMSK_CHHM_Msk   (0x1U << USB_OTG_HCINTMSK_CHHM_Pos) /*!< 0x00000002 */
#define USB_OTG_HCINTMSK_CHHM       USB_OTG_HCINTMSK_CHHM_Msk           /*!< Channel halted mask */
#define USB_OTG_HCINTMSK_AHBERR_Pos (2U)
#define USB_OTG_HCINTMSK_AHBERR_Msk (0x1U << USB_OTG_HCINTMSK_AHBERR_Pos) /*!< 0x00000004 */
#define USB_OTG_HCINTMSK_AHBERR     USB_OTG_HCINTMSK_AHBERR_Msk           /*!< AHB error */
#define USB_OTG_HCINTMSK_STALLM_Pos (3U)
#define USB_OTG_HCINTMSK_STALLM_Msk (0x1U << USB_OTG_HCINTMSK_STALLM_Pos) /*!< 0x00000008 */
#define USB_OTG_HCINTMSK_STALLM     USB_OTG_HCINTMSK_STALLM_Msk           /*!< STALL response received interrupt mask */
#define USB_OTG_HCINTMSK_NAKM_Pos   (4U)
#define USB_OTG_HCINTMSK_NAKM_Msk   (0x1U << USB_OTG_HCINTMSK_NAKM_Pos) /*!< 0x00000010 */
#define USB_OTG_HCINTMSK_NAKM       USB_OTG_HCINTMSK_NAKM_Msk           /*!< NAK response received interrupt mask */
#define USB_OTG_HCINTMSK_ACKM_Pos   (5U)
#define USB_OTG_HCINTMSK_ACKM_Msk   (0x1U << USB_OTG_HCINTMSK_ACKM_Pos) /*!< 0x00000020 */
#define USB_OTG_HCINTMSK_ACKM       USB_OTG_HCINTMSK_ACKM_Msk           /*!< ACK response received/transmitted interrupt mask */
#define USB_OTG_HCINTMSK_NYET_Pos   (6U)
#define USB_OTG_HCINTMSK_NYET_Msk   (0x1U << USB_OTG_HCINTMSK_NYET_Pos) /*!< 0x00000040 */
#define USB_OTG_HCINTMSK_NYET       USB_OTG_HCINTMSK_NYET_Msk           /*!< response received interrupt mask */
#define USB_OTG_HCINTMSK_TXERRM_Pos (7U)
#define USB_OTG_HCINTMSK_TXERRM_Msk (0x1U << USB_OTG_HCINTMSK_TXERRM_Pos) /*!< 0x00000080 */
#define USB_OTG_HCINTMSK_TXERRM     USB_OTG_HCINTMSK_TXERRM_Msk           /*!< Transaction error mask */
#define USB_OTG_HCINTMSK_BBERRM_Pos (8U)
#define USB_OTG_HCINTMSK_BBERRM_Msk (0x1U << USB_OTG_HCINTMSK_BBERRM_Pos) /*!< 0x00000100 */
#define USB_OTG_HCINTMSK_BBERRM     USB_OTG_HCINTMSK_BBERRM_Msk           /*!< Babble error mask */
#define USB_OTG_HCINTMSK_FRMORM_Pos (9U)
#define USB_OTG_HCINTMSK_FRMORM_Msk (0x1U << USB_OTG_HCINTMSK_FRMORM_Pos) /*!< 0x00000200 */
#define USB_OTG_HCINTMSK_FRMORM     USB_OTG_HCINTMSK_FRMORM_Msk           /*!< Frame overrun mask */
#define USB_OTG_HCINTMSK_DTERRM_Pos (10U)
#define USB_OTG_HCINTMSK_DTERRM_Msk (0x1U << USB_OTG_HCINTMSK_DTERRM_Pos) /*!< 0x00000400 */
#define USB_OTG_HCINTMSK_DTERRM     USB_OTG_HCINTMSK_DTERRM_Msk           /*!< Data toggle error mask */

/********************  Bit definition for USB_OTG_DIEPTSIZ register  ********************/

#define USB_OTG_DIEPTSIZ_XFRSIZ_Pos (0U)
#define USB_OTG_DIEPTSIZ_XFRSIZ_Msk (0x7FFFFU << USB_OTG_DIEPTSIZ_XFRSIZ_Pos) /*!< 0x0007FFFF */
#define USB_OTG_DIEPTSIZ_XFRSIZ     USB_OTG_DIEPTSIZ_XFRSIZ_Msk               /*!< Transfer size */
#define USB_OTG_DIEPTSIZ_PKTCNT_Pos (19U)
#define USB_OTG_DIEPTSIZ_PKTCNT_Msk (0x3FFU << USB_OTG_DIEPTSIZ_PKTCNT_Pos) /*!< 0x1FF80000 */
#define USB_OTG_DIEPTSIZ_PKTCNT     USB_OTG_DIEPTSIZ_PKTCNT_Msk             /*!< Packet count */
#define USB_OTG_DIEPTSIZ_MULCNT_Pos (29U)
#define USB_OTG_DIEPTSIZ_MULCNT_Msk (0x3U << USB_OTG_DIEPTSIZ_MULCNT_Pos) /*!< 0x60000000 */
#define USB_OTG_DIEPTSIZ_MULCNT     USB_OTG_DIEPTSIZ_MULCNT_Msk           /*!< Packet count */
/********************  Bit definition for USB_OTG_HCTSIZ register  ********************/
#define USB_OTG_HCTSIZ_XFRSIZ_Pos   (0U)
#define USB_OTG_HCTSIZ_XFRSIZ_Msk   (0x7FFFFU << USB_OTG_HCTSIZ_XFRSIZ_Pos) /*!< 0x0007FFFF */
#define USB_OTG_HCTSIZ_XFRSIZ       USB_OTG_HCTSIZ_XFRSIZ_Msk               /*!< Transfer size */
#define USB_OTG_HCTSIZ_PKTCNT_Pos   (19U)
#define USB_OTG_HCTSIZ_PKTCNT_Msk   (0x3FFU << USB_OTG_HCTSIZ_PKTCNT_Pos) /*!< 0x1FF80000 */
#define USB_OTG_HCTSIZ_PKTCNT       USB_OTG_HCTSIZ_PKTCNT_Msk             /*!< Packet count */
#define USB_OTG_HCTSIZ_DOPING_Pos   (31U)
#define USB_OTG_HCTSIZ_DOPING_Msk   (0x1U << USB_OTG_HCTSIZ_DOPING_Pos) /*!< 0x80000000 */
#define USB_OTG_HCTSIZ_DOPING       USB_OTG_HCTSIZ_DOPING_Msk           /*!< Do PING */
#define USB_OTG_HCTSIZ_DPID_Pos     (29U)
#define USB_OTG_HCTSIZ_DPID_Msk     (0x3U << USB_OTG_HCTSIZ_DPID_Pos) /*!< 0x60000000 */
#define USB_OTG_HCTSIZ_DPID         USB_OTG_HCTSIZ_DPID_Msk           /*!< Data PID */
#define USB_OTG_HCTSIZ_DPID_0       (0x1U << USB_OTG_HCTSIZ_DPID_Pos) /*!< 0x20000000 */
#define USB_OTG_HCTSIZ_DPID_1       (0x2U << USB_OTG_HCTSIZ_DPID_Pos) /*!< 0x40000000 */

/********************  Bit definition for USB_OTG_DIEPDMA register  ********************/
#define USB_OTG_DIEPDMA_DMAADDR_Pos (0U)
#define USB_OTG_DIEPDMA_DMAADDR_Msk (0xFFFFFFFFU << USB_OTG_DIEPDMA_DMAADDR_Pos) /*!< 0xFFFFFFFF */
#define USB_OTG_DIEPDMA_DMAADDR     USB_OTG_DIEPDMA_DMAADDR_Msk                  /*!< DMA address */

/********************  Bit definition for USB_OTG_HCDMA register  ********************/
#define USB_OTG_HCDMA_DMAADDR_Pos (0U)
#define USB_OTG_HCDMA_DMAADDR_Msk (0xFFFFFFFFU << USB_OTG_HCDMA_DMAADDR_Pos) /*!< 0xFFFFFFFF */
#define USB_OTG_HCDMA_DMAADDR     USB_OTG_HCDMA_DMAADDR_Msk                  /*!< DMA address */

/********************  Bit definition for USB_OTG_DTXFSTS register  ********************/
#define USB_OTG_DTXFSTS_INEPTFSAV_Pos (0U)
#define USB_OTG_DTXFSTS_INEPTFSAV_Msk (0xFFFFU << USB_OTG_DTXFSTS_INEPTFSAV_Pos) /*!< 0x0000FFFF */
#define USB_OTG_DTXFSTS_INEPTFSAV     USB_OTG_DTXFSTS_INEPTFSAV_Msk              /*!< IN endpoint TxFIFO space available */

/********************  Bit definition for USB_OTG_DIEPTXF register  ********************/
#define USB_OTG_DIEPTXF_INEPTXSA_Pos (0U)
#define USB_OTG_DIEPTXF_INEPTXSA_Msk (0xFFFFU << USB_OTG_DIEPTXF_INEPTXSA_Pos) /*!< 0x0000FFFF */
#define USB_OTG_DIEPTXF_INEPTXSA     USB_OTG_DIEPTXF_INEPTXSA_Msk              /*!< IN endpoint FIFOx transmit RAM start address */
#define USB_OTG_DIEPTXF_INEPTXFD_Pos (16U)
#define USB_OTG_DIEPTXF_INEPTXFD_Msk (0xFFFFU << USB_OTG_DIEPTXF_INEPTXFD_Pos) /*!< 0xFFFF0000 */
#define USB_OTG_DIEPTXF_INEPTXFD     USB_OTG_DIEPTXF_INEPTXFD_Msk              /*!< IN endpoint TxFIFO depth */

/********************  Bit definition for USB_OTG_DOEPCTL register  ********************/

#define USB_OTG_DOEPCTL_MPSIZ_Pos          (0U)
#define USB_OTG_DOEPCTL_MPSIZ_Msk          (0x7FFU << USB_OTG_DOEPCTL_MPSIZ_Pos) /*!< 0x000007FF */
#define USB_OTG_DOEPCTL_MPSIZ              USB_OTG_DOEPCTL_MPSIZ_Msk             /*!< Maximum packet size */          /*!<Bit 1 */
#define USB_OTG_DOEPCTL_USBAEP_Pos         (15U)
#define USB_OTG_DOEPCTL_USBAEP_Msk         (0x1U << USB_OTG_DOEPCTL_USBAEP_Pos) /*!< 0x00008000 */
#define USB_OTG_DOEPCTL_USBAEP             USB_OTG_DOEPCTL_USBAEP_Msk           /*!< USB active endpoint */
#define USB_OTG_DOEPCTL_NAKSTS_Pos         (17U)
#define USB_OTG_DOEPCTL_NAKSTS_Msk         (0x1U << USB_OTG_DOEPCTL_NAKSTS_Pos) /*!< 0x00020000 */
#define USB_OTG_DOEPCTL_NAKSTS             USB_OTG_DOEPCTL_NAKSTS_Msk           /*!< NAK status */
#define USB_OTG_DOEPCTL_SD0PID_SEVNFRM_Pos (28U)
#define USB_OTG_DOEPCTL_SD0PID_SEVNFRM_Msk (0x1U << USB_OTG_DOEPCTL_SD0PID_SEVNFRM_Pos) /*!< 0x10000000 */
#define USB_OTG_DOEPCTL_SD0PID_SEVNFRM     USB_OTG_DOEPCTL_SD0PID_SEVNFRM_Msk           /*!< Set DATA0 PID */
#define USB_OTG_DOEPCTL_SODDFRM_Pos        (29U)
#define USB_OTG_DOEPCTL_SODDFRM_Msk        (0x1U << USB_OTG_DOEPCTL_SODDFRM_Pos) /*!< 0x20000000 */
#define USB_OTG_DOEPCTL_SODDFRM            USB_OTG_DOEPCTL_SODDFRM_Msk           /*!< Set odd frame */
#define USB_OTG_DOEPCTL_EPTYP_Pos          (18U)
#define USB_OTG_DOEPCTL_EPTYP_Msk          (0x3U << USB_OTG_DOEPCTL_EPTYP_Pos) /*!< 0x000C0000 */
#define USB_OTG_DOEPCTL_EPTYP              USB_OTG_DOEPCTL_EPTYP_Msk           /*!< Endpoint type */
#define USB_OTG_DOEPCTL_EPTYP_0            (0x1U << USB_OTG_DOEPCTL_EPTYP_Pos) /*!< 0x00040000 */
#define USB_OTG_DOEPCTL_EPTYP_1            (0x2U << USB_OTG_DOEPCTL_EPTYP_Pos) /*!< 0x00080000 */
#define USB_OTG_DOEPCTL_SNPM_Pos           (20U)
#define USB_OTG_DOEPCTL_SNPM_Msk           (0x1U << USB_OTG_DOEPCTL_SNPM_Pos) /*!< 0x00100000 */
#define USB_OTG_DOEPCTL_SNPM               USB_OTG_DOEPCTL_SNPM_Msk           /*!< Snoop mode */
#define USB_OTG_DOEPCTL_STALL_Pos          (21U)
#define USB_OTG_DOEPCTL_STALL_Msk          (0x1U << USB_OTG_DOEPCTL_STALL_Pos) /*!< 0x00200000 */
#define USB_OTG_DOEPCTL_STALL              USB_OTG_DOEPCTL_STALL_Msk           /*!< STALL handshake */
#define USB_OTG_DOEPCTL_CNAK_Pos           (26U)
#define USB_OTG_DOEPCTL_CNAK_Msk           (0x1U << USB_OTG_DOEPCTL_CNAK_Pos) /*!< 0x04000000 */
#define USB_OTG_DOEPCTL_CNAK               USB_OTG_DOEPCTL_CNAK_Msk           /*!< Clear NAK */
#define USB_OTG_DOEPCTL_SNAK_Pos           (27U)
#define USB_OTG_DOEPCTL_SNAK_Msk           (0x1U << USB_OTG_DOEPCTL_SNAK_Pos) /*!< 0x08000000 */
#define USB_OTG_DOEPCTL_SNAK               USB_OTG_DOEPCTL_SNAK_Msk           /*!< Set NAK */
#define USB_OTG_DOEPCTL_EPDIS_Pos          (30U)
#define USB_OTG_DOEPCTL_EPDIS_Msk          (0x1U << USB_OTG_DOEPCTL_EPDIS_Pos) /*!< 0x40000000 */
#define USB_OTG_DOEPCTL_EPDIS              USB_OTG_DOEPCTL_EPDIS_Msk           /*!< Endpoint disable */
#define USB_OTG_DOEPCTL_EPENA_Pos          (31U)
#define USB_OTG_DOEPCTL_EPENA_Msk          (0x1U << USB_OTG_DOEPCTL_EPENA_Pos) /*!< 0x80000000 */
#define USB_OTG_DOEPCTL_EPENA              USB_OTG_DOEPCTL_EPENA_Msk           /*!< Endpoint enable */

/********************  Bit definition for USB_OTG_DOEPINT register  ********************/
#define USB_OTG_DOEPINT_XFRC_Pos    (0U)
#define USB_OTG_DOEPINT_XFRC_Msk    (0x1U << USB_OTG_DOEPINT_XFRC_Pos) /*!< 0x00000001 */
#define USB_OTG_DOEPINT_XFRC        USB_OTG_DOEPINT_XFRC_Msk           /*!< Transfer completed interrupt */
#define USB_OTG_DOEPINT_EPDISD_Pos  (1U)
#define USB_OTG_DOEPINT_EPDISD_Msk  (0x1U << USB_OTG_DOEPINT_EPDISD_Pos) /*!< 0x00000002 */
#define USB_OTG_DOEPINT_EPDISD      USB_OTG_DOEPINT_EPDISD_Msk           /*!< Endpoint disabled interrupt */
#define USB_OTG_DOEPINT_STUP_Pos    (3U)
#define USB_OTG_DOEPINT_STUP_Msk    (0x1U << USB_OTG_DOEPINT_STUP_Pos) /*!< 0x00000008 */
#define USB_OTG_DOEPINT_STUP        USB_OTG_DOEPINT_STUP_Msk           /*!< SETUP phase done */
#define USB_OTG_DOEPINT_OTEPDIS_Pos (4U)
#define USB_OTG_DOEPINT_OTEPDIS_Msk (0x1U << USB_OTG_DOEPINT_OTEPDIS_Pos) /*!< 0x00000010 */
#define USB_OTG_DOEPINT_OTEPDIS     USB_OTG_DOEPINT_OTEPDIS_Msk           /*!< OUT token received when endpoint disabled */
#define USB_OTG_DOEPINT_B2BSTUP_Pos (6U)
#define USB_OTG_DOEPINT_B2BSTUP_Msk (0x1U << USB_OTG_DOEPINT_B2BSTUP_Pos) /*!< 0x00000040 */
#define USB_OTG_DOEPINT_B2BSTUP     USB_OTG_DOEPINT_B2BSTUP_Msk           /*!< Back-to-back SETUP packets received */
#define USB_OTG_DOEPINT_NYET_Pos    (14U)
#define USB_OTG_DOEPINT_NYET_Msk    (0x1U << USB_OTG_DOEPINT_NYET_Pos) /*!< 0x00004000 */
#define USB_OTG_DOEPINT_NYET        USB_OTG_DOEPINT_NYET_Msk           /*!< NYET interrupt */

/********************  Bit definition for USB_OTG_DOEPTSIZ register  ********************/

#define USB_OTG_DOEPTSIZ_XFRSIZ_Pos  (0U)
#define USB_OTG_DOEPTSIZ_XFRSIZ_Msk  (0x7FFFFU << USB_OTG_DOEPTSIZ_XFRSIZ_Pos) /*!< 0x0007FFFF */
#define USB_OTG_DOEPTSIZ_XFRSIZ      USB_OTG_DOEPTSIZ_XFRSIZ_Msk               /*!< Transfer size */
#define USB_OTG_DOEPTSIZ_PKTCNT_Pos  (19U)
#define USB_OTG_DOEPTSIZ_PKTCNT_Msk  (0x3FFU << USB_OTG_DOEPTSIZ_PKTCNT_Pos) /*!< 0x1FF80000 */
#define USB_OTG_DOEPTSIZ_PKTCNT      USB_OTG_DOEPTSIZ_PKTCNT_Msk             /*!< Packet count */

#define USB_OTG_DOEPTSIZ_STUPCNT_Pos (29U)
#define USB_OTG_DOEPTSIZ_STUPCNT_Msk (0x3U << USB_OTG_DOEPTSIZ_STUPCNT_Pos) /*!< 0x60000000 */
#define USB_OTG_DOEPTSIZ_STUPCNT     USB_OTG_DOEPTSIZ_STUPCNT_Msk           /*!< SETUP packet count */
#define USB_OTG_DOEPTSIZ_STUPCNT_0   (0x1U << USB_OTG_DOEPTSIZ_STUPCNT_Pos) /*!< 0x20000000 */
#define USB_OTG_DOEPTSIZ_STUPCNT_1   (0x2U << USB_OTG_DOEPTSIZ_STUPCNT_Pos) /*!< 0x40000000 */

/********************  Bit definition for PCGCCTL register  ********************/
#define USB_OTG_PCGCCTL_STOPCLK_Pos (0U)
#define USB_OTG_PCGCCTL_STOPCLK_Msk (0x1U << USB_OTG_PCGCCTL_STOPCLK_Pos) /*!< 0x00000001 */
#define USB_OTG_PCGCCTL_STOPCLK     USB_OTG_PCGCCTL_STOPCLK_Msk           /*!< SETUP packet count */
#define USB_OTG_PCGCCTL_GATECLK_Pos (1U)
#define USB_OTG_PCGCCTL_GATECLK_Msk (0x1U << USB_OTG_PCGCCTL_GATECLK_Pos) /*!< 0x00000002 */
#define USB_OTG_PCGCCTL_GATECLK     USB_OTG_PCGCCTL_GATECLK_Msk           /*!<Bit 0 */
#define USB_OTG_PCGCCTL_PHYSUSP_Pos (4U)
#define USB_OTG_PCGCCTL_PHYSUSP_Msk (0x1U << USB_OTG_PCGCCTL_PHYSUSP_Pos) /*!< 0x00000010 */
#define USB_OTG_PCGCCTL_PHYSUSP     USB_OTG_PCGCCTL_PHYSUSP_Msk           /*!<Bit 1 */

/* Legacy define */
/********************  Bit definition for OTG register  ********************/
#define USB_OTG_CHNUM_Pos  (0U)
#define USB_OTG_CHNUM_Msk  (0xFU << USB_OTG_CHNUM_Pos) /*!< 0x0000000F */
#define USB_OTG_CHNUM      USB_OTG_CHNUM_Msk           /*!< Channel number */
#define USB_OTG_CHNUM_0    (0x1U << USB_OTG_CHNUM_Pos) /*!< 0x00000001 */
#define USB_OTG_CHNUM_1    (0x2U << USB_OTG_CHNUM_Pos) /*!< 0x00000002 */
#define USB_OTG_CHNUM_2    (0x4U << USB_OTG_CHNUM_Pos) /*!< 0x00000004 */
#define USB_OTG_CHNUM_3    (0x8U << USB_OTG_CHNUM_Pos) /*!< 0x00000008 */
#define USB_OTG_BCNT_Pos   (4U)
#define USB_OTG_BCNT_Msk   (0x7FFU << USB_OTG_BCNT_Pos) /*!< 0x00007FF0 */
#define USB_OTG_BCNT       USB_OTG_BCNT_Msk             /*!< Byte count */

#define USB_OTG_DPID_Pos   (15U)
#define USB_OTG_DPID_Msk   (0x3U << USB_OTG_DPID_Pos) /*!< 0x00018000 */
#define USB_OTG_DPID       USB_OTG_DPID_Msk           /*!< Data PID */
#define USB_OTG_DPID_0     (0x1U << USB_OTG_DPID_Pos) /*!< 0x00008000 */
#define USB_OTG_DPID_1     (0x2U << USB_OTG_DPID_Pos) /*!< 0x00010000 */

#define USB_OTG_PKTSTS_Pos (17U)
#define USB_OTG_PKTSTS_Msk (0xFU << USB_OTG_PKTSTS_Pos) /*!< 0x001E0000 */
#define USB_OTG_PKTSTS     USB_OTG_PKTSTS_Msk           /*!< Packet status */
#define USB_OTG_PKTSTS_0   (0x1U << USB_OTG_PKTSTS_Pos) /*!< 0x00020000 */
#define USB_OTG_PKTSTS_1   (0x2U << USB_OTG_PKTSTS_Pos) /*!< 0x00040000 */
#define USB_OTG_PKTSTS_2   (0x4U << USB_OTG_PKTSTS_Pos) /*!< 0x00080000 */
#define USB_OTG_PKTSTS_3   (0x8U << USB_OTG_PKTSTS_Pos) /*!< 0x00100000 */

#define USB_OTG_EPNUM_Pos  (0U)
#define USB_OTG_EPNUM_Msk  (0xFU << USB_OTG_EPNUM_Pos) /*!< 0x0000000F */
#define USB_OTG_EPNUM      USB_OTG_EPNUM_Msk           /*!< Endpoint number */
#define USB_OTG_EPNUM_0    (0x1U << USB_OTG_EPNUM_Pos) /*!< 0x00000001 */
#define USB_OTG_EPNUM_1    (0x2U << USB_OTG_EPNUM_Pos) /*!< 0x00000002 */
#define USB_OTG_EPNUM_2    (0x4U << USB_OTG_EPNUM_Pos) /*!< 0x00000004 */
#define USB_OTG_EPNUM_3    (0x8U << USB_OTG_EPNUM_Pos) /*!< 0x00000008 */

#define USB_OTG_FRMNUM_Pos (21U)
#define USB_OTG_FRMNUM_Msk (0xFU << USB_OTG_FRMNUM_Pos) /*!< 0x01E00000 */
#define USB_OTG_FRMNUM     USB_OTG_FRMNUM_Msk           /*!< Frame number */
#define USB_OTG_FRMNUM_0   (0x1U << USB_OTG_FRMNUM_Pos) /*!< 0x00200000 */
#define USB_OTG_FRMNUM_1   (0x2U << USB_OTG_FRMNUM_Pos) /*!< 0x00400000 */
#define USB_OTG_FRMNUM_2   (0x4U << USB_OTG_FRMNUM_Pos) /*!< 0x00800000 */
#define USB_OTG_FRMNUM_3   (0x8U << USB_OTG_FRMNUM_Pos) /*!< 0x01000000 */

/**
 * @}
 */

/**
 * @}
 */

/** @addtogroup Exported_macros
 * @{
 */

/******************************* ADC Instances ********************************/
#define IS_ADC_ALL_INSTANCE(INSTANCE) \
    (((INSTANCE) == ADC1) || \
      ((INSTANCE) == ADC2) || \
      ((INSTANCE) == ADC3))

#define IS_ADC_MULTIMODE_MASTER_INSTANCE(INSTANCE) ((INSTANCE) == ADC1)

#define IS_ADC_COMMON_INSTANCE(INSTANCE)           ((INSTANCE) == ADC123_COMMON)

/******************************* CAN Instances ********************************/
#define IS_CAN_ALL_INSTANCE(INSTANCE) \
    (((INSTANCE) == CAN1) || \
      ((INSTANCE) == CAN2))
/******************************* CRC Instances ********************************/
#define IS_CRC_ALL_INSTANCE(INSTANCE) ((INSTANCE) == CRC)

/******************************* DAC Instances ********************************/
#define IS_DAC_ALL_INSTANCE(INSTANCE) ((INSTANCE) == DAC1)


/******************************** DMA Instances *******************************/
#define IS_DMA_STREAM_ALL_INSTANCE(INSTANCE) \
    (((INSTANCE) == DMA1_Stream0) || \
      ((INSTANCE) == DMA1_Stream1) || \
      ((INSTANCE) == DMA1_Stream2) || \
      ((INSTANCE) == DMA1_Stream3) || \
      ((INSTANCE) == DMA1_Stream4) || \
      ((INSTANCE) == DMA1_Stream5) || \
      ((INSTANCE) == DMA1_Stream6) || \
      ((INSTANCE) == DMA1_Stream7) || \
      ((INSTANCE) == DMA2_Stream0) || \
      ((INSTANCE) == DMA2_Stream1) || \
      ((INSTANCE) == DMA2_Stream2) || \
      ((INSTANCE) == DMA2_Stream3) || \
      ((INSTANCE) == DMA2_Stream4) || \
      ((INSTANCE) == DMA2_Stream5) || \
      ((INSTANCE) == DMA2_Stream6) || \
      ((INSTANCE) == DMA2_Stream7))

/******************************* GPIO Instances *******************************/
#define IS_GPIO_ALL_INSTANCE(INSTANCE) \
    (((INSTANCE) == GPIOA) || \
      ((INSTANCE) == GPIOB) || \
      ((INSTANCE) == GPIOC) || \
      ((INSTANCE) == GPIOD) || \
      ((INSTANCE) == GPIOE) || \
      ((INSTANCE) == GPIOF) || \
      ((INSTANCE) == GPIOG) || \
      ((INSTANCE) == GPIOH) || \
      ((INSTANCE) == GPIOI))

/******************************** I2C Instances *******************************/
#define IS_I2C_ALL_INSTANCE(INSTANCE) \
    (((INSTANCE) == I2C1) || \
      ((INSTANCE) == I2C2) || \
      ((INSTANCE) == I2C3))

/******************************* SMBUS Instances ******************************/
#define IS_SMBUS_ALL_INSTANCE IS_I2C_ALL_INSTANCE

/******************************** I2S Instances *******************************/

#define IS_I2S_ALL_INSTANCE(INSTANCE) \
    (((INSTANCE) == SPI2) || \
      ((INSTANCE) == SPI3))

/*************************** I2S Extended Instances ***************************/
#define IS_I2S_EXT_ALL_INSTANCE(INSTANCE) \
    (((INSTANCE) == I2S2ext) || \
      ((INSTANCE) == I2S3ext))
/* Legacy Defines */
#define IS_I2S_ALL_INSTANCE_EXT IS_I2S_EXT_ALL_INSTANCE

/******************************* RNG Instances ********************************/
#define IS_RNG_ALL_INSTANCE(INSTANCE) ((INSTANCE) == RNG)

/****************************** RTC Instances *********************************/
#define IS_RTC_ALL_INSTANCE(INSTANCE) ((INSTANCE) == RTC)


/******************************** SPI Instances *******************************/
#define IS_SPI_ALL_INSTANCE(INSTANCE) \
    (((INSTANCE) == SPI1) || \
      ((INSTANCE) == SPI2) || \
      ((INSTANCE) == SPI3))


/****************** TIM Instances : All supported instances *******************/
#define IS_TIM_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM6) || \
      ((INSTANCE) == TIM7) || \
      ((INSTANCE) == TIM8) || \
      ((INSTANCE) == TIM9) || \
      ((INSTANCE) == TIM10) || \
      ((INSTANCE) == TIM11) || \
      ((INSTANCE) == TIM12) || \
      ((INSTANCE) == TIM13) || \
      ((INSTANCE) == TIM14))

/************* TIM Instances : at least 1 capture/compare channel *************/
#define IS_TIM_CC1_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM8) || \
      ((INSTANCE) == TIM9) || \
      ((INSTANCE) == TIM10) || \
      ((INSTANCE) == TIM11) || \
      ((INSTANCE) == TIM12) || \
      ((INSTANCE) == TIM13) || \
      ((INSTANCE) == TIM14))

/************ TIM Instances : at least 2 capture/compare channels *************/
#define IS_TIM_CC2_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM8) || \
      ((INSTANCE) == TIM9) || \
      ((INSTANCE) == TIM12))

/************ TIM Instances : at least 3 capture/compare channels *************/
#define IS_TIM_CC3_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM8))

/************ TIM Instances : at least 4 capture/compare channels *************/
#define IS_TIM_CC4_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM8))

/******************** TIM Instances : Advanced-control timers *****************/
#define IS_TIM_ADVANCED_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM8))

/******************* TIM Instances : Timer input XOR function *****************/
#define IS_TIM_XOR_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM8))

/****************** TIM Instances : DMA requests generation (UDE) *************/
#define IS_TIM_DMA_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM6) || \
      ((INSTANCE) == TIM7) || \
      ((INSTANCE) == TIM8))

/************ TIM Instances : DMA requests generation (CCxDE) *****************/
#define IS_TIM_DMA_CC_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM8))

/************ TIM Instances : DMA requests generation (COMDE) *****************/
#define IS_TIM_CCDMA_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM8))

/******************** TIM Instances : DMA burst feature ***********************/
#define IS_TIM_DMABURST_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM8))

/****** TIM Instances : master mode available (TIMx_CR2.MMS available )********/
#define IS_TIM_MASTER_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM6) || \
      ((INSTANCE) == TIM7) || \
      ((INSTANCE) == TIM8))

/*********** TIM Instances : Slave mode available (TIMx_SMCR available )*******/
#define IS_TIM_SLAVE_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM8) || \
      ((INSTANCE) == TIM9) || \
      ((INSTANCE) == TIM12))

/********************** TIM Instances : 32 bit Counter ************************/
#define IS_TIM_32B_COUNTER_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM5))

/***************** TIM Instances : external trigger input availabe ************/
#define IS_TIM_ETR_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM8))

/****************** TIM Instances : remapping capability **********************/
#define IS_TIM_REMAP_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM11))

/******************* TIM Instances : output(s) available **********************/
#define IS_TIM_CCX_INSTANCE(INSTANCE, CHANNEL) \
    ((((INSTANCE) == TIM1) &&                  \
          (((CHANNEL) == TIM_CHANNEL_1) ||          \
              ((CHANNEL) == TIM_CHANNEL_2) ||          \
              ((CHANNEL) == TIM_CHANNEL_3) ||          \
              ((CHANNEL) == TIM_CHANNEL_4)))           \
      ||                                         \
      (((INSTANCE) == TIM2) &&                   \
          (((CHANNEL) == TIM_CHANNEL_1) ||          \
              ((CHANNEL) == TIM_CHANNEL_2) ||          \
              ((CHANNEL) == TIM_CHANNEL_3) ||          \
              ((CHANNEL) == TIM_CHANNEL_4)))           \
      ||                                         \
      (((INSTANCE) == TIM3) &&                   \
          (((CHANNEL) == TIM_CHANNEL_1) ||          \
              ((CHANNEL) == TIM_CHANNEL_2) ||          \
              ((CHANNEL) == TIM_CHANNEL_3) ||          \
              ((CHANNEL) == TIM_CHANNEL_4)))           \
      ||                                         \
      (((INSTANCE) == TIM4) &&                   \
          (((CHANNEL) == TIM_CHANNEL_1) ||          \
              ((CHANNEL) == TIM_CHANNEL_2) ||          \
              ((CHANNEL) == TIM_CHANNEL_3) ||          \
              ((CHANNEL) == TIM_CHANNEL_4)))           \
      ||                                         \
      (((INSTANCE) == TIM5) &&                   \
          (((CHANNEL) == TIM_CHANNEL_1) ||          \
              ((CHANNEL) == TIM_CHANNEL_2) ||          \
              ((CHANNEL) == TIM_CHANNEL_3) ||          \
              ((CHANNEL) == TIM_CHANNEL_4)))           \
      ||                                         \
      (((INSTANCE) == TIM8) &&                   \
          (((CHANNEL) == TIM_CHANNEL_1) ||          \
              ((CHANNEL) == TIM_CHANNEL_2) ||          \
              ((CHANNEL) == TIM_CHANNEL_3) ||          \
              ((CHANNEL) == TIM_CHANNEL_4)))           \
      ||                                         \
      (((INSTANCE) == TIM9) &&                   \
          (((CHANNEL) == TIM_CHANNEL_1) ||          \
              ((CHANNEL) == TIM_CHANNEL_2)))           \
      ||                                         \
      (((INSTANCE) == TIM10) &&                  \
          (((CHANNEL) == TIM_CHANNEL_1)))           \
      ||                                         \
      (((INSTANCE) == TIM11) &&                  \
          (((CHANNEL) == TIM_CHANNEL_1)))           \
      ||                                         \
      (((INSTANCE) == TIM12) &&                  \
          (((CHANNEL) == TIM_CHANNEL_1) ||          \
              ((CHANNEL) == TIM_CHANNEL_2)))           \
      ||                                         \
      (((INSTANCE) == TIM13) &&                  \
          (((CHANNEL) == TIM_CHANNEL_1)))           \
      ||                                         \
      (((INSTANCE) == TIM14) &&                  \
          (((CHANNEL) == TIM_CHANNEL_1))))

/************ TIM Instances : complementary output(s) available ***************/
#define IS_TIM_CCXN_INSTANCE(INSTANCE, CHANNEL) \
    ((((INSTANCE) == TIM1) &&                    \
          (((CHANNEL) == TIM_CHANNEL_1) ||           \
              ((CHANNEL) == TIM_CHANNEL_2) ||           \
              ((CHANNEL) == TIM_CHANNEL_3)))            \
      ||                                          \
      (((INSTANCE) == TIM8) &&                    \
          (((CHANNEL) == TIM_CHANNEL_1) ||           \
              ((CHANNEL) == TIM_CHANNEL_2) ||           \
              ((CHANNEL) == TIM_CHANNEL_3))))

/****************** TIM Instances : supporting counting mode selection ********/
#define IS_TIM_COUNTER_MODE_SELECT_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM8))

/****************** TIM Instances : supporting clock division *****************/
#define IS_TIM_CLOCK_DIVISION_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM8) || \
      ((INSTANCE) == TIM9) || \
      ((INSTANCE) == TIM10) || \
      ((INSTANCE) == TIM11) || \
      ((INSTANCE) == TIM12) || \
      ((INSTANCE) == TIM13) || \
      ((INSTANCE) == TIM14))

/****************** TIM Instances : supporting commutation event generation ***/
#define IS_TIM_COMMUTATION_EVENT_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM8))


/****************** TIM Instances : supporting OCxREF clear *******************/
#define IS_TIM_OCXREF_CLEAR_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM8))

/****** TIM Instances : supporting external clock mode 1 for ETRF input *******/
#define IS_TIM_CLOCKSOURCE_ETRMODE1_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM8) || \
      ((INSTANCE) == TIM9) || \
      ((INSTANCE) == TIM12))

/****** TIM Instances : supporting external clock mode 2 for ETRF input *******/
#define IS_TIM_CLOCKSOURCE_ETRMODE2_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM8))

/****************** TIM Instances : supporting repetition counter *************/
#define IS_TIM_REPETITION_COUNTER_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM8))

/****************** TIM Instances : supporting encoder interface **************/
#define IS_TIM_ENCODER_INTERFACE_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM8) || \
      ((INSTANCE) == TIM9) || \
      ((INSTANCE) == TIM12))
/****************** TIM Instances : supporting Hall sensor interface **********/
#define IS_TIM_HALL_SENSOR_INTERFACE_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM2) || \
      ((INSTANCE) == TIM3) || \
      ((INSTANCE) == TIM4) || \
      ((INSTANCE) == TIM5) || \
      ((INSTANCE) == TIM8))
/****************** TIM Instances : supporting the break function *************/
#define IS_TIM_BREAK_INSTANCE(INSTANCE) \
    (((INSTANCE) == TIM1) || \
      ((INSTANCE) == TIM8))

/******************** USART Instances : Synchronous mode **********************/
#define IS_USART_INSTANCE(INSTANCE) \
    (((INSTANCE) == USART1) || \
      ((INSTANCE) == USART2) || \
      ((INSTANCE) == USART3) || \
      ((INSTANCE) == USART6))

/******************** UART Instances : Half-Duplex mode **********************/
#define IS_UART_HALFDUPLEX_INSTANCE(INSTANCE) \
    (((INSTANCE) == USART1) || \
      ((INSTANCE) == USART2) || \
      ((INSTANCE) == USART3) || \
      ((INSTANCE) == UART4) || \
      ((INSTANCE) == UART5) || \
      ((INSTANCE) == USART6))

/* Legacy defines */
#define IS_UART_INSTANCE IS_UART_HALFDUPLEX_INSTANCE

/****************** UART Instances : Hardware Flow control ********************/
#define IS_UART_HWFLOW_INSTANCE(INSTANCE) \
    (((INSTANCE) == USART1) || \
      ((INSTANCE) == USART2) || \
      ((INSTANCE) == USART3) || \
      ((INSTANCE) == USART6))
/******************** UART Instances : LIN mode **********************/
#define IS_UART_LIN_INSTANCE IS_UART_HALFDUPLEX_INSTANCE

/********************* UART Instances : Smart card mode ***********************/
#define IS_SMARTCARD_INSTANCE(INSTANCE) \
    (((INSTANCE) == USART1) || \
      ((INSTANCE) == USART2) || \
      ((INSTANCE) == USART3) || \
      ((INSTANCE) == USART6))

/*********************** UART Instances : IRDA mode ***************************/
#define IS_IRDA_INSTANCE(INSTANCE) \
    (((INSTANCE) == USART1) || \
      ((INSTANCE) == USART2) || \
      ((INSTANCE) == USART3) || \
      ((INSTANCE) == UART4) || \
      ((INSTANCE) == UART5) || \
      ((INSTANCE) == USART6))


/*********************** PCD Instances ****************************************/
#define IS_PCD_ALL_INSTANCE(INSTANCE) \
    (((INSTANCE) == USB_OTG_FS) || \
      ((INSTANCE) == USB_OTG_HS))

/*********************** HCD Instances ****************************************/
#define IS_HCD_ALL_INSTANCE(INSTANCE) \
    (((INSTANCE) == USB_OTG_FS) || \
      ((INSTANCE) == USB_OTG_HS))

/****************************** SDIO Instances ********************************/
#define IS_SDIO_ALL_INSTANCE(INSTANCE) ((INSTANCE) == SDIO)

/****************************** IWDG Instances ********************************/
#define IS_IWDG_ALL_INSTANCE(INSTANCE) ((INSTANCE) == IWDG)

/****************************** WWDG Instances ********************************/
#define IS_WWDG_ALL_INSTANCE(INSTANCE) ((INSTANCE) == WWDG)

/****************************** USB Exported Constants ************************/
#define USB_OTG_FS_HOST_MAX_CHANNEL_NBR 8U
#define USB_OTG_FS_MAX_IN_ENDPOINTS     4U    /* Including EP0 */
#define USB_OTG_FS_MAX_OUT_ENDPOINTS    4U    /* Including EP0 */
#define USB_OTG_FS_TOTAL_FIFO_SIZE      1280U /* in Bytes */

/*
 * @brief Specific devices reset values definitions
 */
#define RCC_PLLCFGR_RST_VALUE           0x24003010U
#define RCC_PLLI2SCFGR_RST_VALUE        0x20003000U

#define RCC_MAX_FREQUENCY               168000000U        /*!< Max frequency of family in Hz*/
#define RCC_MAX_FREQUENCY_SCALE1        RCC_MAX_FREQUENCY /*!< Maximum frequency for system clock at power scale1, in Hz */
#define RCC_MAX_FREQUENCY_SCALE2        144000000U        /*!< Maximum frequency for system clock at power scale2, in Hz */
#define RCC_PLLVCO_OUTPUT_MIN           100000000U        /*!< Frequency min for PLLVCO output, in Hz */
#define RCC_PLLVCO_INPUT_MIN            950000U           /*!< Frequency min for PLLVCO input, in Hz  */
#define RCC_PLLVCO_INPUT_MAX            2100000U          /*!< Frequency max for PLLVCO input, in Hz  */
#define RCC_PLLVCO_OUTPUT_MAX           432000000U        /*!< Frequency max for PLLVCO output, in Hz */

#define RCC_PLLN_MIN_VALUE              50U
#define RCC_PLLN_MAX_VALUE              432U

#define FLASH_SCALE1_LATENCY1_FREQ      30000000U  /*!< HCLK frequency to set FLASH latency 1 in power scale 1  */
#define FLASH_SCALE1_LATENCY2_FREQ      60000000U  /*!< HCLK frequency to set FLASH latency 2 in power scale 1  */
#define FLASH_SCALE1_LATENCY3_FREQ      90000000U  /*!< HCLK frequency to set FLASH latency 3 in power scale 1  */
#define FLASH_SCALE1_LATENCY4_FREQ      120000000U /*!< HCLK frequency to set FLASH latency 4 in power scale 1  */
#define FLASH_SCALE1_LATENCY5_FREQ      150000000U /*!< HCLK frequency to set FLASH latency 5 in power scale 1  */

#define FLASH_SCALE2_LATENCY1_FREQ      30000000U /*!< HCLK frequency to set FLASH latency 1 in power scale 2  */
#define FLASH_SCALE2_LATENCY2_FREQ      60000000U /*!< HCLK frequency to set FLASH latency 2 in power scale 2  */
#define FLASH_SCALE2_LATENCY3_FREQ      90000000U /*!< HCLK frequency to set FLASH latency 3 in power scale 2  */
#define FLASH_SCALE2_LATENCY4_FREQ      12000000U /*!< HCLK frequency to set FLASH latency 4 in power scale 2  */

#define USB_OTG_HS_HOST_MAX_CHANNEL_NBR 12U
#define USB_OTG_HS_MAX_IN_ENDPOINTS     6U    /* Including EP0 */
#define USB_OTG_HS_MAX_OUT_ENDPOINTS    6U    /* Including EP0 */
#define USB_OTG_HS_TOTAL_FIFO_SIZE      4096U /* in Bytes */
/******************************************************************************/
/*  For a painless codes migration between the STM32F4xx device product       */
/*  lines, the aliases defined below are put in place to overcome the         */
/*  differences in the interrupt handlers and IRQn definitions.               */
/*  No need to update developed interrupt code when moving across             */
/*  product lines within the same STM32F4 Family                              */
/******************************************************************************/
/* Aliases for __IRQn */
#define FMC_IRQn FSMC_IRQn

/* Aliases for __IRQHandler */
#define FMC_IRQHandler FSMC_IRQHandler

/**
 * @}
 */

/**
 * @}
 */

/**
 * @}
 */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __STM32F415xx_H */


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
