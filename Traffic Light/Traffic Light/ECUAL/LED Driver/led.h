/*
 * led.h
 *
 * Created: 9/6/2022 4:12:30 PM
 *  Author: Mostafa
 */ 


#ifndef LED_H_
#define LED_H_
#include "../../MCAL/DIO Driver/dio.h"
#include "../../MCAL/TIMER Driver/timer.h"
void LED_init(uint8_t ledPort , uint8_t ledPin);
void LED_on(uint8_t ledPort , uint8_t ledPin);
void LED_off(uint8_t ledPort , uint8_t ledPin);
void LED_toggle(uint8_t ledPort , uint8_t ledPin);
void led_plink(uint8_t port);
void DoubleLedPlink(void);



#endif /* LED_H_ */