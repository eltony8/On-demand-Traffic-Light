/*
 * button.h
 *
 * Created: 9/6/2022 4:19:56 PM
 *  Author: Mostafa
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/DIO Driver/dio.h"
#define BUTTON1_PORT PORT_D
#define BUTTON1_PIN PIN2

#define LOW 0
#define HIGH 1

//initialize
void BUTTON_init(uint8_t buttonPort , uint8_t buttonPin);

//button read
void BUTTON_read(uint8_t buttonPort , uint8_t buttonPin , uint8_t *value);





#endif /* BUTTON_H_ */