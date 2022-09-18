/*
 * button.c
 *
 * Created: 9/6/2022 4:19:40 PM
 *  Author: Mostafa
 */ 
#include "button.h"
void BUTTON_init(uint8_t buttonPort , uint8_t buttonPin)
{
	DIO_init(buttonPort , buttonPin , IN);
}

void BUTTON_read(uint8_t buttonPort , uint8_t buttonPin , uint8_t *value)
{
	DIO_read(buttonPort , buttonPin , value);
}