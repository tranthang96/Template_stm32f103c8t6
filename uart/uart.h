#ifndef __UART_H__
#define __UART_H__


#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>
#include <libopencm3/stm32/usart.h>

void uart_init(void);
//void init_uart(void);
//extern void uart_init(void);
//void uart_puts(uint8_t *str);
extern void uart_puts(char *string);
extern void uart_putln(char *string);

void abc(void);
#endif /*__UART_H_*/