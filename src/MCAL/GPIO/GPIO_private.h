/*
 * GPIO_private.h
 *
 *  Created on: May 11, 2023
 *      Author: Omar Elwy
 */

#ifndef MCAL_GPIO_GPIO_PRIVATE_H_
#define MCAL_GPIO_GPIO_PRIVATE_H_


typedef struct
{
	u32 MODER		; //This Register is to set The Mode of any pin
	u32 OTYPER		; //This Register is to set the Type of Output[PP/OD]
	u32 OSPEEDR		; //This Register is to set the Speed of output pins
	u32 PUPDR		; //This Register is to select Whether pull up or pull down input
	u32 IDR			; //This Register is to get the Value of input pin
	u32 ODR			; //This Register is to set the Value of output pins
}GPIO_REG_t;

/*Pointer to Struct*/
#define GPIOA			((volatile GPIO_REG_t*)(0x40020000))
#define GPIOB			((volatile GPIO_REG_t*)(0x40020400))
#define GPIOC			((volatile GPIO_REG_t*)(0x40020800))

#endif /* MCAL_GPIO_GPIO_PRIVATE_H_ */
