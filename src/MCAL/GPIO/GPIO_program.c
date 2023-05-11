/*
 * GPIO_program.c
 *
 *  Created on: May 11, 2023
 *      Author: Omar Elwy
 */

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATHS.h"

#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_cfg.h"


/*this function is to initialize any pin to be an output pin*/
void GPIO_voidInitOutputPin(u8 Copy_u8PortID , u8 Copy_u8PinID , u8 Copy_u8PinType , u8 Copy_u8PinSpeed)
{
	switch(Copy_u8PortID)
	{
	case GPIO_PORTA :
		/*Set Direction of the pin to be output
		 * Bit Masking */
		GPIOA -> MODER &=~ (0b11<<(Copy_u8PinID*2));
		GPIOA -> MODER |=  (0b01<<(Copy_u8PinID*2));

		/*Set Speed Of pin
		 * Bit Masking */
		GPIOA -> OSPEEDR &=~ (0b11<<(Copy_u8PinID*2));
		GPIOA -> OSPEEDR |=  (Copy_u8PinSpeed<<(Copy_u8PinID*2));

		/*Set Type of output pin*/
		WRT_BIT(GPIOA -> OTYPER , Copy_u8PinID , Copy_u8PinType);
		break ;

	case GPIO_PORTB :
		/*Set Direction of the pin to be output
		 * Bit Masking */
		GPIOB -> MODER &=~ (0b11<<(Copy_u8PinID*2));
		GPIOB -> MODER |=  (0b01<<(Copy_u8PinID*2));

		/*Set Speed Of pin
		 * Bit Masking */
		GPIOB -> OSPEEDR &=~ (0b11<<(Copy_u8PinID*2));
		GPIOB -> OSPEEDR |=  (Copy_u8PinSpeed<<(Copy_u8PinID*2));

		/*Set Type of output pin*/
		WRT_BIT(GPIOB -> OTYPER , Copy_u8PinID , Copy_u8PinType);
		break ;

	case GPIO_PORTC :
		/*Set Direction of the pin to be output
		 * Bit Masking */
		GPIOC -> MODER &=~ (0b11<<(Copy_u8PinID*2));
		GPIOC -> MODER |=  (0b01<<(Copy_u8PinID*2));

		/*Set Speed Of pin
		 * Bit Masking */
		GPIOC -> OSPEEDR &=~ (0b11<<(Copy_u8PinID*2));
		GPIOC -> OSPEEDR |=  (Copy_u8PinSpeed<<(Copy_u8PinID*2));

		/*Set Type of output pin*/
		WRT_BIT(GPIOC -> OTYPER , Copy_u8PinID , Copy_u8PinType);
		break ;
	}
}


/*this function is to initialize any pin to be an input pin*/
void GPIO_voidInitInputPin(u8 Copy_u8PortID , u8 Copy_u8PinID , u8 Copy_u8PullMode)
{

}

/*This function is to set the value of any output pin[High - Low]*/
void GPIO_voidSetOutpinValue(u8 Copy_u8PortID , u8 Copy_u8PinID , u8 Copy_u8Value)
{
	switch (Copy_u8PortID)
	{
		case GPIO_PORTA:
			WRT_BIT(GPIOA -> ODR , Copy_u8PinID , Copy_u8Value);
			break;
		case GPIO_PORTB:
			WRT_BIT(GPIOB -> ODR , Copy_u8PinID , Copy_u8Value);
			break;
		case GPIO_PORTC:
			WRT_BIT(GPIOC -> ODR , Copy_u8PinID , Copy_u8Value);
			break;
	}
}

/*This function is to get the value of any pin*/
u8 GPIO_u8GetInputPinValue(u8 Copy_u8PortID , u8 Copy_u8PinID)
{

}
