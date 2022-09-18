/*
 * application.h
 *
 * Created: 9/6/2022 4:09:24 PM
 *  Author: Mostafa
 */ 


#ifndef APPLICATION_H_
#define APPLICATION_H_
#include "../MCAL/TIMER Driver/timer.h"
#include "../MCAL/INTERRUPT Driver/interrupt.h"
#include "../ECUAL/BUTTON Driver/button.h"
#include "../ECUAL/LED Driver/led.h"

#define PORTA_ID 0
#define PORTB_ID 1
#define PORTC_ID 2
#define PORTD_ID 3

extern uint8_t buttonState;
extern uint8_t mode;
void appInit();
void appStart();




#endif /* APPLICATION_H_ */