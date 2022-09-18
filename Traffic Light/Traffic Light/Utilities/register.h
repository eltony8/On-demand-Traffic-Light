/*
 * register.h
 *
 * Created: 9/6/2022 4:32:44 PM
 *  Author: Mostafa
 */ 


#ifndef REGISTER_H_
#define REGISTER_H_
#include "std_types.h"
/**********************************************/
//DIO REGISTERS
/*********************************************/
//PORTA REGISTER
#define PORTA *((volatile uint8_t*)0x3B)//8-bit register
#define DDRA *((volatile uint8_t*)0x3A)//8-bit register
#define PINA *((volatile uint8_t*)0x39)//8-bit register

//PORTB REGISTER
#define PORTB *((volatile uint8_t*)0x38)//8-bit register
#define DDRB *((volatile uint8_t*)0x37)//8-bit register
#define PINB *((volatile uint8_t*)0x36)//8-bit register

//PORTC REGISTER
#define PORTC *((volatile uint8_t*)0x35)//8-bit register
#define DDRC *((volatile uint8_t*)0x34)//8-bit register
#define PINC *((volatile uint8_t*)0x33)//8-bit register

//PORTD REGISTER
#define PORTD *((volatile uint8_t*)0x32)//8-bit register
#define DDRD *((volatile uint8_t*)0x31)//8-bit register
#define PIND *((volatile uint8_t*)0x30)//8-bit register

/**********************************************/
//TIMER REGISTERS
/*********************************************/

#define TCCR0 *((volatile uint8_t*)0x53)//8-bit register
#define TCNT0 *((volatile uint8_t*)0x52)//8-bit register
#define TIFR *((volatile uint8_t*)0x58)//8-bit register
#define TIMSK *((volatile uint8_t*)0x59)//8-bit register
#define SREG *((volatile uint8_t*)0x5F)//8-bit register

/********************************************************************************************************/
/*************EXTERNAL INTERRUPT*******************/
#define MCUCR	*((volatile uint8_t*)0x55)
#define MCUCSR	*((volatile uint8_t*)0x54)
#define GICR	*((volatile uint8_t*)0x5B)
#define GIFR	*((volatile uint8_t*)0x5A)
/*********************************************************************************************************/



/******************INTERRUPT*********************/




#define ISR(VECTOR,...) \
void VECTOR(void) __attribute__((signal))__VA_ARGS__;\
void VECTOR(void)
#define sei() __asm__ __volatile__ ("sei" ::)
#define cli() __asm__ __volatile__ ("cli" ::)

/*****************vector table *****************/
#define INT0_vect			 __vector_1 	//	External Interrupt Request 0
#define INT1_vect 			 __vector_2 	//External Interrupt Request 1
#define INT2_vect 			 __vector_3 	//External Interrupt Request 2
#define TIMER2_COMP_vect 	 __vector_4 	//	Timer/Counter2 Compare Match
#define TIMER2_OVF_vect 	 __vector_5 	//	Timer/Counter2 Overflow
#define TIMER1_CAPT_vect 	 __vector_6 	//	Timer/Counter1 Capture Event
#define TIMER1_COMPA_vect 	 __vector_7 	//Timer/Counter1 Compare Match A
#define TIMER1_COMPB_vect 	 __vector_8 	//Timer/Counter1 Compare Match B
#define TIMER1_OVF_vect 	 __vector_9 	//	Timer/Counter1 Overflow
#define TIMER0_COMP_vect 	 __vector_10	//Timer/Counter0 Compare Match
#define TIMER0_OVF_vect 	 __vector_11	//	Timer/Counter0 Overflow
#define SPI_vect 			 __vector_12	//Serial Transfer Complete
#define RXC_vect 			 __vector_13	//	USART, Rx Complete
#define UDRE_vect 			 __vector_14	//USART Data Register Empty
#define TXC_vect 			 __vector_15	//	USART, Tx Complete
#define ADC_vect 			 __vector_16	//ADC Conversion Complete
#define EE_RDY_vect 		 __vector_17	//	EEPROM Ready
#define ANA_COMP_vect 		 __vector_18	//Analog Comparator
#define TWI_vect 			 __vector_19    //Two-wire Serial Interface
#define SPM_RDY_vect 	 	 __vector_20    // Store Program Memory Ready
/************************************************************************************************************/

#endif /* REGISTER_H_ */