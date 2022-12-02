/*
 * main.c
 *
 *  Created on: Nov 19, 2022
 *      Author: MSAEED99
 */


// Libraries
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include <util/delay.h>

// MCAL
#include "DIO_interface.h"
#include "WDT_interface.h"


void main(void)
{
	// Set LED pin as output
	DIO_voidSetPinDirection(DIO_u8PORTA, DIO_u8PIN0, DIO_u8PIN_OUTPUT);

	// Turn on LED
	DIO_voidSetPinValue(DIO_u8PORTA, DIO_u8PIN0, DIO_u8PIN_HIGH);
	_delay_ms(1000);

	// Turn off LED
	DIO_voidSetPinValue(DIO_u8PORTA, DIO_u8PIN0, DIO_u8PIN_LOW);

	// Enable Watch Dog Timer
	WDT_voidEnable();

	// Reset MCU after 1 second (Pre-scaler = 6, maps to timeout = 1 second)
	WDT_voidSleep(6);

	while(1);
}

