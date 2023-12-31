/*
 * Copyright (c) 2016-2017, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/** ============================================================================
 *  @file       CC2640R2_STELLAR_M3.h
 *
 *  @brief      CC2640R2 LaunchPad Board Specific header file.
 *
 *  This file is responsible for setting up the board specific items for the
 *  CC2640R2_STELLAR_M3 board.
 *
 *  This board file is made for the 7x7 mm QFN package, to convert this board
 *  file to use for other smaller device packages please refer to the table
 *  below which lists the max IOID values supported by each package. All other
 *  unused pins should be set to IOID_UNUSED.
 *
 *  Furthermore the board file is also used
 *  to define a symbol that configures the RF front end and bias.
 *  See the comments below for more information.
 *  For an in depth tutorial on how to create a custom board file, please refer
 *  to the section "Running the SDK on Custom Boards" with in the Software
 *  Developer's Guide.
 *
 *  Refer to the datasheet for all the package options and IO descriptions:
 *  http://www.ti.com/lit/ds/symlink/cc2640r2f.pdf
 *
 *  +-----------------------+------------------+-----------------------+
 *  |     Package Option    |  Total GPIO Pins |   MAX IOID            |
 *  +=======================+==================+=======================+
 *  |     7x7 mm QFN        |     31           |   IOID_30             |
 *  +-----------------------+------------------+-----------------------+
 *  |     5x5 mm QFN        |     15           |   IOID_14             |
 *  +-----------------------+------------------+-----------------------+
 *  |     4x4 mm QFN        |     10           |   IOID_9              |
 *  +-----------------------+------------------+-----------------------+
 *  |     2.7 x 2.7 mm WCSP |     14           |   IOID_13             |
 *  +-----------------------+------------------+-----------------------+
 *  ============================================================================
 */
#ifndef __CC2640R2_STELLAR_M3_BOARD_H__
#define __CC2640R2_STELLAR_M3_BOARD_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes */
#include <ti/drivers/PIN.h>
#include <ti/devices/cc26x0r2/driverlib/ioc.h>

/* Externs */
extern const PIN_Config BoardGpioInitTable[];

/* Defines */
#ifndef CC2640R2_STELLAR_M3
  #define CC2640R2_STELLAR_M3
#endif /* CC2640R2_STELLAR_M3 */

#define Board_EXCLUDE_NVS_INTERNAL_FLASH
/*
 *  ============================================================================
 *  RF Front End and Bias configuration symbols for TI reference designs and
 *  kits. This symbol sets the RF Front End configuration in ble_user_config.h
 *  and selects the appropriate PA table in ble_user_config.c.
 *  Other configurations can be used by editing these files.
 *
 *  Define only one symbol:
 *  CC2650EM_7ID    - Differential RF and internal biasing
                      (default for CC2640R2 LaunchPad)
 *  CC2650EM_5XD    � Differential RF and external biasing
 *  CC2650EM_4XS    � Single-ended RF on RF-P and external biasing
 *  CC2640R2DK_CXS  - WCSP: Single-ended RF on RF-N and external biasing
 *                    (Note that the WCSP is only tested and characterized for
 *                     single ended configuration, and it has a WCSP-specific
 *                     PA table)
 *
 *  Note: CC2650EM_xxx reference designs apply to all CC26xx devices.
 *  ==========================================================================
 */
#define CC2650EM_7ID

/* Mapping of pins to board signals using general board aliases
 *      <board signal alias>                  <pin mapping>
 */

/* Analog Capable DIOs */
#define CC2640R2_STELLAR_M3_DIO23_ANALOG          IOID_23
#define CC2640R2_STELLAR_M3_DIO24_ANALOG          IOID_24
#define CC2640R2_STELLAR_M3_DIO25_ANALOG          IOID_25
#define CC2640R2_STELLAR_M3_DIO26_ANALOG          IOID_26
#define CC2640R2_STELLAR_M3_DIO27_ANALOG          IOID_27
#define CC2640R2_STELLAR_M3_DIO28_ANALOG          IOID_28
#define CC2640R2_STELLAR_M3_DIO29_ANALOG          IOID_29
#define CC2640R2_STELLAR_M3_DIO30_ANALOG          IOID_30

/* Digital IOs */
#define CC2640R2_STELLAR_M3_DIO0                  IOID_0
#define CC2640R2_STELLAR_M3_DIO1_RFSW             IOID_1
#define CC2640R2_STELLAR_M3_DIO12                 IOID_12
#define CC2640R2_STELLAR_M3_DIO15                 IOID_15
#define CC2640R2_STELLAR_M3_DIO16_TDO             IOID_16
#define CC2640R2_STELLAR_M3_DIO17_TDI             IOID_17
#define CC2640R2_STELLAR_M3_DIO21                 IOID_21
#define CC2640R2_STELLAR_M3_DIO22                 IOID_22

/* Discrete Inputs */
#define CC2640R2_STELLAR_M3_PIN_BTN1              IOID_15
#define CC2640R2_STELLAR_M3_PIN_BTN2              IOID_14

/* GPIO */
#define CC2640R2_STELLAR_M3_GPIO_LED_ON           1
#define CC2640R2_STELLAR_M3_GPIO_LED_OFF          0

/* I2C */
#define CC2640R2_STELLAR_M3_I2C0_SCL0             IOID_4
#define CC2640R2_STELLAR_M3_I2C0_SDA0             IOID_5

// /* I2S */
// #define CC2640R2_STELLAR_M3_I2S_ADO               IOID_0
// #define CC2640R2_STELLAR_M3_I2S_ADI               IOID_1
// #define CC2640R2_STELLAR_M3_I2S_BCLK              IOID_30
// #define CC2640R2_STELLAR_M3_I2S_MCLK              PIN_UNASSIGNED
// #define CC2640R2_STELLAR_M3_I2S_WCLK              IOID_29

/* E-Ink (DEPG0213RHS75AF1CP|SSD1675B) */
#define CC2640R2_STELLAR_M3_E_INK_DC               IOID_11 /* Data/Command control */
#define CC2640R2_STELLAR_M3_E_INK_CS               IOID_12 /* SPI chip select */
#define CC2640R2_STELLAR_M3_E_INK_CK               IOID_18 /* SPI clock */
#define CC2640R2_STELLAR_M3_E_INK_SDA              IOID_19 /* SPI data */
#define CC2640R2_STELLAR_M3_E_INK_RST              IOID_10 /* Reset signal */
#define CC2640R2_STELLAR_M3_E_INK_BUSY             IOID_9  /* Busy state output */
#define CC2640R2_STELLAR_M3_E_INK_POWER            IOID_20 /* E-Ink power control */
#define CC2640R2_STELLAR_M3_E_INK_CS_ON            1
#define CC2640R2_STELLAR_M3_E_INK_CS_OFF           0
#define CC2640R2_STELLAR_M3_E_INK_POWER_ON         1
#define CC2640R2_STELLAR_M3_E_INK_POWER_OFF        0
#define CC2640R2_STELLAR_M3_E_INK_SPI              CC2640R2_STELLAR_M3_SPI0

/* LCD (430BOOST - Sharp96 Rev 1.1) */
#define CC2640R2_STELLAR_M3_LCD_CS                IOID_24 /* SPI chip select */
#define CC2640R2_STELLAR_M3_LCD_EXTCOMIN          IOID_12 /* External COM inversion */
#define CC2640R2_STELLAR_M3_LCD_ENABLE            IOID_22 /* LCD enable */
#define CC2640R2_STELLAR_M3_LCD_POWER             IOID_23 /* LCD power control */
#define CC2640R2_STELLAR_M3_LCD_CS_ON             1
#define CC2640R2_STELLAR_M3_LCD_CS_OFF            0

/* LEDs */
#define CC2640R2_STELLAR_M3_PIN_LED_ON            0
#define CC2640R2_STELLAR_M3_PIN_LED_OFF           1
#define CC2640R2_STELLAR_M3_PIN_RLED              IOID_6
#define CC2640R2_STELLAR_M3_PIN_GLED              IOID_7
#define CC2640R2_STELLAR_M3_PIN_BLUE              IOID_0

/* PWM Outputs */
#define CC2640R2_STELLAR_M3_PWMPIN0               CC2640R2_STELLAR_M3_PIN_RLED
#define CC2640R2_STELLAR_M3_PWMPIN1               CC2640R2_STELLAR_M3_PIN_GLED
#define CC2640R2_STELLAR_M3_PWMPIN2               CC2640R2_STELLAR_M3_PIN_BLUE
#define CC2640R2_STELLAR_M3_PWMPIN3               PIN_UNASSIGNED
#define CC2640R2_STELLAR_M3_PWMPIN4               PIN_UNASSIGNED
#define CC2640R2_STELLAR_M3_PWMPIN5               PIN_UNASSIGNED
#define CC2640R2_STELLAR_M3_PWMPIN6               PIN_UNASSIGNED
#define CC2640R2_STELLAR_M3_PWMPIN7               PIN_UNASSIGNED

/* SPI */
#define CC2640R2_STELLAR_M3_SPI_FLASH_CS          IOID_17
#define CC2640R2_STELLAR_M3_FLASH_CS_ON           0
#define CC2640R2_STELLAR_M3_FLASH_CS_OFF          1

/* SPI Board */
#define CC2640R2_STELLAR_M3_SPI0_MISO             IOID_8                           /* Unused */
#define CC2640R2_STELLAR_M3_SPI0_MOSI             CC2640R2_STELLAR_M3_E_INK_SDA    /* E-Ink SPI SDA */
#define CC2640R2_STELLAR_M3_SPI0_CLK              CC2640R2_STELLAR_M3_E_INK_CK     /* E-Ink SPI CLK */
#define CC2640R2_STELLAR_M3_SPI0_CSN              PIN_UNASSIGNED
#define CC2640R2_STELLAR_M3_SPI1_MISO             PIN_UNASSIGNED
#define CC2640R2_STELLAR_M3_SPI1_MOSI             PIN_UNASSIGNED
#define CC2640R2_STELLAR_M3_SPI1_CLK              PIN_UNASSIGNED
#define CC2640R2_STELLAR_M3_SPI1_CSN              PIN_UNASSIGNED

/* UART Board */
#define CC2640R2_STELLAR_M3_UART_RX               IOID_2          /* RXD */
#define CC2640R2_STELLAR_M3_UART_TX               IOID_3          /* TXD */
// #define CC2640R2_STELLAR_M3_UART_CTS              IOID_19         /* CTS */
// #define CC2640R2_STELLAR_M3_UART_RTS              IOID_18         /* RTS */

/*!
 *  @brief  Initialize the general board specific settings
 *
 *  This function initializes the general board specific settings.
 */
void CC2640R2_STELLAR_M3_initGeneral(void);

/*!
 *  @brief  Turn off the external flash on LaunchPads
 *
 */
void CC2640R2_STELLAR_M3_shutDownExtFlash(void);

/*!
 *  @brief  Wake up the external flash present on the board files
 *
 *  This function toggles the chip select for the amount of time needed
 *  to wake the chip up.
 */
void CC2640R2_STELLAR_M3_wakeUpExtFlash(void);

/*!
 *  @def    CC2640R2_STELLAR_M3_ADCBufName
 *  @brief  Enum of ADCs
 */
typedef enum CC2640R2_STELLAR_M3_ADCBufName {
    CC2640R2_STELLAR_M3_ADCBUF0 = 0,

    CC2640R2_STELLAR_M3_ADCBUFCOUNT
} CC2640R2_STELLAR_M3_ADCBufName;

// /*!
//  *  @def    CC2640R2_STELLAR_M3_ADCBuf0SourceName
//  *  @brief  Enum of ADCBuf channels
//  */
// typedef enum CC2640R2_STELLAR_M3_ADCBuf0ChannelName {
//     CC2640R2_STELLAR_M3_ADCBUF0CHANNEL0 = 0,
//     CC2640R2_STELLAR_M3_ADCBUF0CHANNEL1,
//     CC2640R2_STELLAR_M3_ADCBUF0CHANNEL2,
//     CC2640R2_STELLAR_M3_ADCBUF0CHANNEL3,
//     CC2640R2_STELLAR_M3_ADCBUF0CHANNEL4,
//     CC2640R2_STELLAR_M3_ADCBUF0CHANNEL5,
//     CC2640R2_STELLAR_M3_ADCBUF0CHANNEL6,
//     CC2640R2_STELLAR_M3_ADCBUF0CHANNEL7,
//     CC2640R2_STELLAR_M3_ADCBUF0CHANNELVDDS,
//     CC2640R2_STELLAR_M3_ADCBUF0CHANNELDCOUPL,
//     CC2640R2_STELLAR_M3_ADCBUF0CHANNELVSS,

//     CC2640R2_STELLAR_M3_ADCBUF0CHANNELCOUNT
// } CC2640R2_STELLAR_M3_ADCBuf0ChannelName;

// /*!
//  *  @def    CC2640R2_STELLAR_M3_ADCName
//  *  @brief  Enum of ADCs
//  */
// typedef enum CC2640R2_STELLAR_M3_ADCName {
//     CC2640R2_STELLAR_M3_ADC0 = 0,
//     CC2640R2_STELLAR_M3_ADC1,
//     CC2640R2_STELLAR_M3_ADC2,
//     CC2640R2_STELLAR_M3_ADC3,
//     CC2640R2_STELLAR_M3_ADC4,
//     CC2640R2_STELLAR_M3_ADC5,
//     CC2640R2_STELLAR_M3_ADC6,
//     CC2640R2_STELLAR_M3_ADC7,
//     CC2640R2_STELLAR_M3_ADCDCOUPL,
//     CC2640R2_STELLAR_M3_ADCVSS,
//     CC2640R2_STELLAR_M3_ADCVDDS,

//     CC2640R2_STELLAR_M3_ADCCOUNT
// } CC2640R2_STELLAR_M3_ADCName;

/*!
 *  @def    CC2640R2_STELLAR_M3_CryptoName
 *  @brief  Enum of Crypto names
 */
typedef enum CC2640R2_STELLAR_M3_CryptoName {
    CC2640R2_STELLAR_M3_CRYPTO0 = 0,

    CC2640R2_STELLAR_M3_CRYPTOCOUNT
} CC2640R2_STELLAR_M3_CryptoName;

/*!
 *  @def    CC2640R2_STELLAR_M3_AESCCMName
 *  @brief  Enum of AESCCM names
 */
typedef enum CC2640R2_STELLAR_M3_AESCCMName {
    CC2640R2_STELLAR_M3_AESCCM0 = 0,

    CC2640R2_STELLAR_M3_AESCCMCOUNT
} CC2640R2_STELLAR_M3_AESCCMName;

/*!
 *  @def    CC2640R2_STELLAR_M3_AESGCMName
 *  @brief  Enum of AESGCM names
 */
typedef enum CC2640R2_STELLAR_M3_AESGCMName {
    CC2640R2_STELLAR_M3_AESGCM0 = 0,

    CC2640R2_STELLAR_M3_AESGCMCOUNT
} CC2640R2_STELLAR_M3_AESGCMName;

/*!
 *  @def    CC2640R2_STELLAR_M3_AESCBCName
 *  @brief  Enum of AESCBC names
 */
typedef enum CC2640R2_STELLAR_M3_AESCBCName {
    CC2640R2_STELLAR_M3_AESCBC0 = 0,

    CC2640R2_STELLAR_M3_AESCBCCOUNT
} CC2640R2_STELLAR_M3_AESCBCName;

/*!
 *  @def    CC2640R2_STELLAR_M3_AESCTRName
 *  @brief  Enum of AESCTR names
 */
typedef enum CC2640R2_STELLAR_M3_AESCTRName {
    CC2640R2_STELLAR_M3_AESCTR0 = 0,

    CC2640R2_STELLAR_M3_AESCTRCOUNT
} CC2640R2_STELLAR_M3_AESCTRName;

/*!
 *  @def    CC2640R2_STELLAR_M3_AESECBName
 *  @brief  Enum of AESECB names
 */
typedef enum CC2640R2_STELLAR_M3_AESECBName {
    CC2640R2_STELLAR_M3_AESECB0 = 0,

    CC2640R2_STELLAR_M3_AESECBCOUNT
} CC2640R2_STELLAR_M3_AESECBName;

/*!
 *  @def    CC2640R2_STELLAR_M3_AESCTRDRBGName
 *  @brief  Enum of AESCTRDRBG names
 */
typedef enum CC2640R2_STELLAR_M3_AESCTRDRBGName {
    CC2640R2_STELLAR_M3_AESCTRDRBG0 = 0,

    CC2640R2_STELLAR_M3_AESCTRDRBGCOUNT
} CC2640R2_STELLAR_M3_AESCTRDRBGName;

// /*!
//  *  @def    CC2640R2_STELLAR_M3_GPIOName
//  *  @brief  Enum of GPIO names
//  */
// typedef enum CC2640R2_STELLAR_M3_GPIOName {
//     CC2640R2_STELLAR_M3_GPIO_S1 = 0,
//     CC2640R2_STELLAR_M3_GPIO_S2,
//     CC2640R2_STELLAR_M3_SPI_MASTER_READY,
//     CC2640R2_STELLAR_M3_SPI_SLAVE_READY,
//     CC2640R2_STELLAR_M3_GPIO_LED_GREEN,
//     CC2640R2_STELLAR_M3_GPIO_LED_RED,
//     CC2640R2_STELLAR_M3_GPIO_TMP116_EN,
//     CC2640R2_STELLAR_M3_GPIO_SPI_FLASH_CS,
//     CC2640R2_STELLAR_M3_SDSPI_CS,
//     CC2640R2_STELLAR_M3_GPIO_LCD_CS,
//     CC2640R2_STELLAR_M3_GPIO_LCD_POWER,
//     CC2640R2_STELLAR_M3_GPIO_LCD_ENABLE,
//     CC2640R2_STELLAR_M3_GPIOCOUNT
// } CC2640R2_STELLAR_M3_GPIOName;

/*!
 *  @def    CC2640R2_STELLAR_M3_GPTimerName
 *  @brief  Enum of GPTimer parts
 */
typedef enum CC2640R2_STELLAR_M3_GPTimerName {
    CC2640R2_STELLAR_M3_GPTIMER0A = 0,
    CC2640R2_STELLAR_M3_GPTIMER0B,
    CC2640R2_STELLAR_M3_GPTIMER1A,
    // CC2640R2_STELLAR_M3_GPTIMER1B,
    // CC2640R2_STELLAR_M3_GPTIMER2A,
    // CC2640R2_STELLAR_M3_GPTIMER2B,
    // CC2640R2_STELLAR_M3_GPTIMER3A,
    // CC2640R2_STELLAR_M3_GPTIMER3B,

    CC2640R2_STELLAR_M3_GPTIMERPARTSCOUNT
} CC2640R2_STELLAR_M3_GPTimerName;

/*!
 *  @def    CC2640R2_STELLAR_M3_GPTimers
 *  @brief  Enum of GPTimers
 */
typedef enum CC2640R2_STELLAR_M3_GPTimers {
    CC2640R2_STELLAR_M3_GPTIMER0 = 0,
    CC2640R2_STELLAR_M3_GPTIMER1,
    CC2640R2_STELLAR_M3_GPTIMER2,
    CC2640R2_STELLAR_M3_GPTIMER3,

    CC2640R2_STELLAR_M3_GPTIMERCOUNT
} CC2640R2_STELLAR_M3_GPTimers;

// /*!
//  *  @def    CC2640R2_STELLAR_M3_I2CName
//  *  @brief  Enum of I2C names
//  */
// typedef enum CC2640R2_STELLAR_M3_I2CName {
//     CC2640R2_STELLAR_M3_I2C0 = 0,

//     CC2640R2_STELLAR_M3_I2CCOUNT
// } CC2640R2_STELLAR_M3_I2CName;

// /*!
//  *  @def    CC2640R2_STELLAR_M3_I2SName
//  *  @brief  Enum of I2S names
//  */
// typedef enum CC2640R2_STELLAR_M3_I2SName {
//     CC2640R2_STELLAR_M3_I2S0 = 0,

//     CC2640R2_STELLAR_M3_I2SCOUNT
// } CC2640R2_STELLAR_M3_I2SName;

/*!
 *  @def    CC2640R2_STELLAR_M3_NVSName
 *  @brief  Enum of NVS names
 */
typedef enum CC2640R2_STELLAR_M3_NVSName {
#ifndef Board_EXCLUDE_NVS_INTERNAL_FLASH
    CC2640R2_STELLAR_M3_NVSCC26XX0 = 0,
#endif
#ifndef Board_EXCLUDE_NVS_EXTERNAL_FLASH
    CC2640R2_STELLAR_M3_NVSSPI25X0,
#endif

    CC2640R2_STELLAR_M3_NVSCOUNT
} CC2640R2_STELLAR_M3_NVSName;

/*!
 *  @def    CC2640R2_STELLAR_M3_PWM
 *  @brief  Enum of PWM outputs
 */
typedef enum CC2640R2_STELLAR_M3_PWMName {
    CC2640R2_STELLAR_M3_PWM0 = 0,
    CC2640R2_STELLAR_M3_PWM1,
    CC2640R2_STELLAR_M3_PWM2,
    // CC2640R2_STELLAR_M3_PWM3,
    // CC2640R2_STELLAR_M3_PWM4,
    // CC2640R2_STELLAR_M3_PWM5,
    // CC2640R2_STELLAR_M3_PWM6,
    // CC2640R2_STELLAR_M3_PWM7,

    CC2640R2_STELLAR_M3_PWMCOUNT
} CC2640R2_STELLAR_M3_PWMName;

/*!
 *  @def    CC2640R2_STELLAR_M3_SDName
 *  @brief  Enum of SD names
 */
typedef enum CC2640R2_STELLAR_M3_SDName {
    CC2640R2_STELLAR_M3_SDSPI0 = 0,

    CC2640R2_STELLAR_M3_SDCOUNT
} CC2640R2_STELLAR_M3_SDName;

/*!
 *  @def    CC2640R2_STELLAR_M3_SPIName
 *  @brief  Enum of SPI names
 */
typedef enum CC2640R2_STELLAR_M3_SPIName {
    CC2640R2_STELLAR_M3_SPI0 = 0,
    // CC2640R2_STELLAR_M3_SPI1,

    CC2640R2_STELLAR_M3_SPICOUNT
} CC2640R2_STELLAR_M3_SPIName;

/*!
 *  @def    CC2640R2_STELLAR_M3_UARTName
 *  @brief  Enum of UARTs
 */
typedef enum CC2640R2_STELLAR_M3_UARTName {
    CC2640R2_STELLAR_M3_UART0 = 0,

    CC2640R2_STELLAR_M3_UARTCOUNT
} CC2640R2_STELLAR_M3_UARTName;

/*!
 *  @def    CC2640R2_STELLAR_M3_UDMAName
 *  @brief  Enum of DMA buffers
 */
typedef enum CC2640R2_STELLAR_M3_UDMAName {
    CC2640R2_STELLAR_M3_UDMA0 = 0,

    CC2640R2_STELLAR_M3_UDMACOUNT
} CC2640R2_STELLAR_M3_UDMAName;

/*!
 *  @def    CC2640R2_STELLAR_M3_WatchdogName
 *  @brief  Enum of Watchdogs
 */
typedef enum CC2640R2_STELLAR_M3_WatchdogName {
    CC2640R2_STELLAR_M3_WATCHDOG0 = 0,

    CC2640R2_STELLAR_M3_WATCHDOGCOUNT
} CC2640R2_STELLAR_M3_WatchdogName;

/*!
 *  @def    CC2650_LAUNCHXL_TRNGName
 *  @brief  Enum of TRNG names on the board
 */
typedef enum CC2640R2_STELLAR_M3_TRNGName {
    CC2640R2_STELLAR_M3_TRNG0 = 0,
    CC2640R2_STELLAR_M3_TRNGCOUNT
} CC2640R2_STELLAR_M3_TRNGName;

#ifdef __cplusplus
}
#endif

#endif /* __CC2640R2_STELLAR_M3_BOARD_H__ */
