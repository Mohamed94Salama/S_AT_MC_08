/*
 * I2C_DRIVER.c
 *
 * Created: 7/17/2021 1:37:21 PM
 * Author : DELLL
 */ 

#include "../MCAL/I2C/I2C.h"

uint8_t add=21;
uint8_t read=1;
uint8_t write=0;
int main(void)
{
	
    TWI_MasterInit();

	TWI_StartCondition();
	TWI_WriteToAddress(add<<1);
	TWI_WriteData('B');
	
	uint8_t c;
	DDRB_R=0xFF;
	TWI_RepeatedStart();
	
	TWI_ReadFromAddress((add<<1)|1);
	
	TWI_ReadData(&c);
	PORTB_R = c;
	TWI_StopCondition();
	
	
    while (1) 
    {
    }
}

