/*
 * I2C_testcases.h
 *
 * Created: 8/8/2021 12:55:26 AM
 *  Author: DELLL
 */ 


#ifndef I2C_TESTCASES_H_
#define I2C_TESTCASES_H_

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MANIPULATE.h"
#include "../../LIB/Register.h"
#include "../../LIB/Register_Cont.h"
#include "../UART/UART.h"
#include "I2C_Cfg.h"

void TWI_MasterInit_test(void);
void TWI_StartCondition_test(void);
void TWI_StopCondition_test(void);

void TWI_WriteToAddress_test(uint8_t address);
void TWI_ReadFromAddress_test(uint8_t address);

void TWI_WriteData_test(uint8_t data);
void TWI_ReadData_test(uint8_t* pu8data);

void TWI_SlaveInit_test(uint8_t addr);
void TWI_SlaveReadMatch_test(void);
void TWI_SlaveRead_test(uint8_t* pu8data);
void TWI_SlaveWriteMatch_test(void);
void TWI_SlaveWriteData_test(uint8_t data);

void TWI_RepeatedStart(void);

#endif /* I2C_TESTCASES_H_ */