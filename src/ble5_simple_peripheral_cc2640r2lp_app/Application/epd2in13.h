
#ifndef EPD_2IN13_H
#define EPD_2IN13_H

#include <stdint.h>
#include "board.h"

// Display resolution
#define EPD_2IN13_WIDTH       104
#define EPD_2IN13_HEIGHT      212

#define EPD_DC_PIN              Board_E_INK_DC
#define EPD_CS_PIN              Board_E_INK_CS
#define EPD_RST_PIN             Board_E_INK_RST
#define EPD_BUSY_PIN            Board_E_INK_BUSY
#define EPD_POWER_PIN           Board_E_INK_POWER       // low active

#define EPD_2IN13_FULL			0
#define EPD_2IN13_PART			1

void epd_hw_init();

void EPD_2IN13_Init();
void EPD_2IN13_Clear(void);
void EPD_2IN13_Display(const uint8_t *Image);
void EPD_2IN13_PrepareBlkRAM(void);
void EPD_2IN13_PrepareRedRAM(void);
void EPD_2IN13_WriteRAM(const uint8_t *buf, const int len);
void EPD_2IN13_UpdateDisplay(void);
void HwUARTPrintf(const char *str);
void Util_delay_ms(uint16_t t);
/**
 * GPIO read and write
**/
#define DEV_Digital_Write(_pin, _value) PIN_setOutputValue(GPIOHandle, _pin, _value)
#define DEV_Digital_Read(_pin) PIN_getInputValue(_pin)

/**
 * delay x ms
**/
#define DEV_Delay_ms(__xms) Util_delay_ms(__xms);

// void EPD_2IN13_DisplayPart(UBYTE *Image);
// void EPD_2IN13_DisplayPartBaseImage(UBYTE *Image);

void EPD_2IN13_Sleep(void);

#endif
