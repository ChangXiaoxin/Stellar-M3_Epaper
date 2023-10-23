#include "hw_uart.h"

#include "board.h"
#include <ti/drivers/uart/UARTCC26XX.h>

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

static UART_Handle UARTHandle;
static UART_Params UARTparams;

static void Uart_ReadCallback(UART_Handle handle, void *rxBuf, size_t size)
{ 
}

static void Uart_WriteCallback(UART_Handle handle, void *txBuf, size_t size)
{
}

void HWUART_Init()
{
  
  UART_init();                                      //锟斤拷始锟斤拷模锟斤拷拇锟斤拷诠锟斤拷锟�
  UART_Params_init(&UARTparams);                    //锟斤拷始锟斤拷锟斤拷锟节诧拷锟斤拷
  UARTparams.baudRate = 115200;                     //锟斤拷锟节诧拷锟斤拷锟斤拷115200
  UARTparams.dataLength = UART_LEN_8;               //锟斤拷锟斤拷锟斤拷锟斤拷位8
  UARTparams.stopBits = UART_STOP_ONE;              //锟斤拷锟斤拷停止位1
  UARTparams.readDataMode = UART_DATA_BINARY;       //锟斤拷锟节斤拷锟斤拷锟斤拷锟捷诧拷锟斤拷锟斤拷锟斤拷
  UARTparams.writeDataMode = UART_DATA_TEXT;        //锟斤拷锟节凤拷锟斤拷锟斤拷锟捷诧拷锟斤拷锟斤拷锟斤拷
  UARTparams.readMode = UART_MODE_CALLBACK;         //锟斤拷锟斤拷锟届步锟斤拷
  UARTparams.writeMode = UART_MODE_BLOCKING;        //   
  UARTparams.readEcho = UART_ECHO_OFF;              //锟斤拷锟节诧拷锟斤拷锟斤拷
  UARTparams.readReturnMode = UART_RETURN_NEWLINE;  //锟斤拷锟斤拷锟秸碉拷锟斤拷锟叫凤拷时锟斤拷锟截碉拷
  UARTparams.readCallback = Uart_ReadCallback;      //
  UARTparams.writeCallback = Uart_WriteCallback;    //
  
  UARTHandle = UART_open(Board_UART0, &UARTparams); //锟津开达拷锟斤拷通锟斤拷
 // UART_control(UARTHandle, UARTCC26XX_RETURN_PARTIAL_ENABLE,  NULL);   //锟斤拷锟斤拷锟斤拷锟秸诧拷锟街回碉拷
  
}

void HWUART_Printf(const char* format, ...)
{
  va_list arg;
  va_start(arg,format);
  uint8_t buf[108];
  uint16_t len;
  len = vsprintf((char*)buf, format, arg);
  UART_write(UARTHandle, buf, len);
}
