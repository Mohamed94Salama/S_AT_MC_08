/*
 * I2C_testcases.c
 *
 * Created: 8/8/2021 12:55:09 AM
 *  Author: DELLL
 */ 

#include "I2C_testcases.h"

void TWI_MasterInit_test(void)
{
	uint8_t res=TWI_MasterInit();
	if(res==E_OK)
	{
		UART_SendString("PASS");
		UART_SendData('\r');
	}else if(res==E_ERROR)
	{
		UART_SendString("FAILED");
		UART_SendData('\r');		
	}
}

void TWI_StartCondition_test(void)
{
	uint8_t res=TWI_StartCondition();
	if(res==E_OK)
	{
		UART_SendString("PASS");
		UART_SendData('\r');
	}else if(res==E_ERROR)
	{
		UART_SendString("FAILED");
		UART_SendData('\r');
	}	
}

void TWI_StopCondition_test(void)
{
	uint8_t res=TWI_StopCondition();
	if(res==E_OK)
	{
		UART_SendString("PASS");
		UART_SendData('\r');
	}else if(res==E_ERROR)
	{
		UART_SendString("FAILED");
		UART_SendData('\r');
	}	
}

void TWI_WriteToAddress_test(uint8_t address)
{
	uint8_t res=TWI_WriteToAddress(address);
	if(res==E_OK)
	{
		UART_SendString("PASS");
		UART_SendData('\r');
	}else if(res==E_ERROR)
	{
		UART_SendString("FAILED");
		UART_SendData('\r');
	}	
}

void TWI_ReadFromAddress_test(uint8_t address)
{
	uint8_t res=TWI_ReadFromAddress(address);
	if(res==E_OK)
	{
		UART_SendString("PASS");
		UART_SendData('\r');
	}else if(res==E_ERROR)
	{
		UART_SendString("FAILED");
		UART_SendData('\r');
	}	
}

void TWI_WriteData_test(uint8_t data)
{
	uint8_t res=TWI_WriteData(data);
	if(res==E_OK)
	{
		UART_SendString("PASS");
		UART_SendData('\r');
	}else if(res==E_ERROR)
	{
		UART_SendString("FAILED");
		UART_SendData('\r');
	}	
}

void TWI_ReadData_test(uint8_t* pu8data)
{
	uint8_t res=TWI_ReadData(pu8data);
	if(res==E_OK)
	{
		UART_SendString("PASS");
		UART_SendData('\r');
	}else if(res==E_ERROR)
	{
		UART_SendString("FAILED");
		UART_SendData('\r');
	}	
}

void TWI_SlaveInit_test(uint8_t addr)
{
	uint8_t res=TWI_SlaveInit(addr);
	if(res==E_OK)
	{
		UART_SendString("PASS");
		UART_SendData('\r');
	}else if(res==E_ERROR)
	{
		UART_SendString("FAILED");
		UART_SendData('\r');
	}	
}

void TWI_SlaveReadMatch_test(void)
{
	uint8_t res=TWI_SlaveReadMatch();
	if(res==E_OK)
	{
		UART_SendString("PASS");
		UART_SendData('\r');
	}else if(res==E_ERROR)
	{
		UART_SendString("FAILED");
		UART_SendData('\r');
	}	
}

void TWI_SlaveRead_test(uint8_t* pu8data)
{
	uint8_t res=TWI_SlaveRead(pu8data);
	if(res==E_OK)
	{
		UART_SendString("PASS");
		UART_SendData('\r');
	}else if(res==E_ERROR)
	{
		UART_SendString("FAILED");
		UART_SendData('\r');
	}	
}

void TWI_SlaveWriteMatch_test(void)
{
	uint8_t res=TWI_SlaveWriteMatch();
	if(res==E_OK)
	{
		UART_SendString("PASS");
		UART_SendData('\r');
	}else if(res==E_ERROR)
	{
		UART_SendString("FAILED");
		UART_SendData('\r');
	}	
}

void TWI_SlaveWriteData_test(uint8_t data)
{
	uint8_t res=TWI_SlaveWriteData(data);
	if(res==E_OK)
	{
		UART_SendString("PASS");
		UART_SendData('\r');
	}else if(res==E_ERROR)
	{
		UART_SendString("FAILED");
		UART_SendData('\r');
	}	
}