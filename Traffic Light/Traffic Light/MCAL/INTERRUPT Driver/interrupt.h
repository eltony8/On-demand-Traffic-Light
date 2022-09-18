/*
 * interrupt.h
 *
 * Created: 9/7/2022 11:20:45 PM
 *  Author: Mostafa
 */ 


#ifndef INTERRUPT_H_
#define INTERRUPT_H_
#include "../../Utilities/register.h"

#define INT0   6
#define INT1   7
#define INT2   5

#define ISC00    0
#define ISC01    1
#define ISC10    2
#define ISC11    3
#define ISC2     6

void INT0_Init(void);




#endif /* INTERRUPT_H_ */