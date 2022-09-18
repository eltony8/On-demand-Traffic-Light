/*
 * led.c
 *
 * Created: 9/6/2022 4:12:15 PM
 *  Author: Mostafa
 */ 
#include "led.h"
void LED_init(uint8_t ledPort , uint8_t ledPin)
{
	DIO_init(ledPort,ledPin,OUT);
}

void LED_on(uint8_t ledPort , uint8_t ledPin)
{
	DIO_write(ledPort , ledPin , HIGH);
}
void LED_off(uint8_t ledPort , uint8_t ledPin)
{
	DIO_write(ledPort , ledPin , LOW);
}
void LED_toggle(uint8_t ledPort , uint8_t ledPin)
{
	DIO_toggle(ledPort , ledPin);
}
void led_plink(uint8_t port)
{
	switch(port)
	{
		case 0 :
		PORTA ^= (1<<1);

		Delay_s(1);
		PORTA ^= (1<<1);

		Delay_s(1);
		PORTA ^= (1<<1);

		Delay_s(1);
		PORTA ^= (1<<1);

		Delay_s(1);
		PORTA ^= (1<<1);

		Delay_s(1);
		PORTA ^= (1<<1);
		break;
		case 1 :
		PORTB ^= (1<<1);

		Delay_s(1);
		PORTB ^= (1<<1);

		Delay_s(1);
		PORTB ^= (1<<1);

		Delay_s(1);
		PORTB ^= (1<<1);

		Delay_s(1);
		PORTB ^= (1<<1);

		Delay_s(1);
		PORTB ^= (1<<1);

		break;
	}

}
void DoubleLedPlink(void)
{
	PORTA ^= (1<<1);
	PORTB ^= (1<<1);

	Delay_s(1);
	PORTA ^= (1<<1);
	PORTB ^= (1<<1);

	Delay_s(1);
	PORTA ^= (1<<1);
	PORTB ^= (1<<1);

	Delay_s(1);
	PORTA ^= (1<<1);
	PORTB ^= (1<<1);

	Delay_s(1);
	PORTA ^= (1<<1);
	PORTB ^= (1<<1);

	Delay_s(1);
	PORTA ^= (1<<1);
	PORTB ^= (1<<1);

}