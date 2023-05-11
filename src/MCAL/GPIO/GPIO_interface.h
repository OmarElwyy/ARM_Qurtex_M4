/*
 * GPIO_interface.h
 *
 *  Created on: May 11, 2023
 *      Author: Omar Elwy
 */

#ifndef MCAL_GPIO_GPIO_INTERFACE_H_
#define MCAL_GPIO_GPIO_INTERFACE_H_

/*Microcontroller port*/
#define GPIO_PORTA					1
#define GPIO_PORTB					2
#define GPIO_PORTC					3

/*Output Pin Type*/
#define GPIO_PUSH_PULL				0
#define GPIO_OPEN_DRAIN				1

/*Output Pin speed*/
#define GPIO_LOW_SPEED				0
#define GPIO_MED_SPEED				1
#define GPIO_HIGH_SPEED				2
#define GPIO_VERY_HIGH_SPEED		3

/*Output pin value*/
#define GPIO_OUTPUT_HIGH			1
#define GPIO_OUTPUT_LOW				0


/*this function is to initialize any pin to be an output pin*/
void GPIO_voidInitOutputPin(u8 Copy_u8PortID , u8 Copy_u8PinID
						, u8 Copy_u8PinType , u8 Copy_u8PinSpeed);

/*this function is to initialize any pin to be an input pin*/
void GPIO_voidInitInputPin(u8 Copy_u8PortID , u8 Copy_u8PinID
						, u8 Copy_u8PullMode);

/*This function is to set the value of any output pin[High - Low]*/
void GPIO_voidSetOutpinValue(u8 Copy_u8PortID , u8 Copy_u8PinID
						, u8 Copy_u8Value);

/*This function is to get the value of any pin*/
u8 GPIO_u8GetInputPinValue(u8 Copy_u8PortID , u8 Copy_u8PinID);

#endif /* MCAL_GPIO_GPIO_INTERFACE_H_ */
