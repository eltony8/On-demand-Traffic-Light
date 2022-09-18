/*
 * timer.h
 *
 * Created: 9/7/2022 4:15:09 PM
 *  Author: Mostafa
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include "../../Utilities/register.h"
#include "../../Utilities/std_types.h"

#define CS00   0
#define CS01   1
#define CS02   2
#define FOC0   7
#define TOIE0  0
#define TOV0   0 
void Timer0_Delay(void);
void Delay_s(uint8_t number);




#endif /* TIMER_H_ */