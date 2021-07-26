/*
 * I2C_SLAVE.c
 *
 * Created: 7/17/2021 1:37:21 PM
 * Author : DELLL
 */ 

#include "../MCAL/I2C/I2C.h"


int main(void)
{
	uint8_t add=21;
	uint8_t c;
	DDRB_R=0xFF;
        TWI_SlaveInit(add);

		TWI_SlaveReadMatch();

		TWI_SlaveRead(&c);
		PORTB_R=c;
		TWI_SlaveWriteMatch();
		TWI_SlaveWriteData('C');
		
    while (1) 
    {
    }
}

