/*
 * interrupt.c
 *
 * Created: 9/7/2022 11:20:29 PM
 *  Author: Mostafa
 */

#include "interrupt.h"
uint8_t mode;
void INT0_Init(void)
{
	SREG  &= ~(1<<7);
	GICR |=(1<<INT0);
	MCUCR = (1<<ISC00) | (1<<ISC01);   // Trigger INT0 with the raising edge
	SREG  |= (1<<7);
}
ISR(INT0_vect)
{
	mode = 0;
}
