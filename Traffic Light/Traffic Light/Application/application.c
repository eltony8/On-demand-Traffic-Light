/*
 * application.c
 *
 * Created: 9/6/2022 4:09:05 PM
 *  Author: Mostafa
 */ 
#include "application.h"
//initialize mode   1 for normal mode     0 for pedestrian mode
uint8_t mode = 1;
void appInit()
{
	//initialize car leds 
	LED_init(PORT_A , PIN0);   //initialize green led car
	LED_init(PORT_A , PIN1);   //initialize yellow led car
	LED_init(PORT_A , PIN2);   //initialize red led car
	LED_init(PORT_B , PIN0);   //initialize green led pedestrian
	LED_init(PORT_B , PIN1);   //initialize yellow led pedestrian
	LED_init(PORT_B , PIN2);   //initialize red led pedestrian

	PORTA = 0; // leds car off
	PORTB = 0; // led pedestrian off

	BUTTON_init(PORT_D , PIN2);	// initialize button on PD2 
	
    
	INT0_Init(); //initialize interrupt INT0 


}
void appStart()
{
	while (1)
	{
		// Normal Mode
		//if INT0 occurred pedestrian mode will on
		if(mode == 1) //check if interrupt  not occurred
		{
            while(PIND & (1<<2));
				if(mode == 1) //check if interrupt not occurred
				{
					PORTB = 0; // pedestrian leds is off
					PORTA = 0x01; //car's green led is on
					Delay_s(5); // wait for 5 seconds
				}

				if(mode == 1) //check if interrupt not occurred
				{
					PORTA = 0x02; //car's yellow led is on
					led_plink(PORTA_ID); //plink yellow led each 1s
				}

				if(mode == 1) //check if interrupt not occurred
				{
					PORTA = 0x04; //car's red led is on
					Delay_s(5);// wait for 5 seconds
				}
		}
		//Pedestrian Mode
		else
		{
			//if button pressed when car's led is green
			if(PINA & (1<<0))
			{
				PORTA =0; // cars leds is off
				LED_on(PORT_B , PIN2); //pedestrian's led red is on
				DoubleLedPlink(); //plink both yellow leds in car and pedestrian
				PORTB = 0x01; //pedestrian's led green is on
				LED_on(PORT_A , PIN2); //car's led red is on
				Delay_s(5); // wait for 5 seconds
				LED_off(PORT_A , PIN2); //car's led red is off
				DoubleLedPlink(); //plink both yellow leds in car and pedestrian
				PORTB = 0x04; //pedestrian's led red is on
				PORTA = 0x01; //car's led green is on
				Delay_s(5); // wait for 5 seconds
				mode = 1; //return to normal mode
			}
			//if button pressed when car's led is yellow
			else if(PINA & (1<<1))
			{
				PORTA =0; // cars leds is off
				LED_on(PORT_B , PIN2); //pedestrian's led red is on
				DoubleLedPlink(); //plink both yellow leds in car and pedestrian
				PORTB = 0x01; //pedestrian's led green is on
				LED_on(PORT_A , PIN2); //car's led red is on
				Delay_s(5); // wait for 5 seconds
				LED_off(PORT_A , PIN2); //car's led red is off
				DoubleLedPlink(); //plink both yellow leds in car and pedestrian
				PORTB = 0x04; //pedestrian's led red is on
				PORTA = 0x01; //car's led green is on
				Delay_s(5); // wait for 5 seconds
				mode = 1; //return to normal mode
			}
			//if button pressed when car's led is red
			else if(PINA & (1<<2))
			{
				LED_on(PORT_B , PIN0); //pedestrian's led green is on
				LED_on(PORT_A , PIN2); //car's led red is on
				Delay_s(5); // wait for 5 seconds
				mode = 1; //return to normal mode
			}
		}
	}


}
