#ifndef GESTURE_H_
#define GESTURE_H_

#include "stm32f3xx_hal.h"
#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



I2C_HandleTypeDef HandleI2C; /* HandleI2C pointer for I2C Type Def */
UART_HandleTypeDef HandleUART; /*  */
UART_HandleTypeDef huart3;


void GESTURE_Actions(void); /* Sets action flags for gestures */

void initializeRegisters(void); /* Initializes sensors registers */
static uint8_t gestureInit(void); /* Initialize gesture */
static uint8_t registerWrite(uint8_t address, uint8_t cmd); /* Write to addressed register */
static uint8_t registerRead(uint8_t address, uint8_t qty, uint8_t data[]); /* Read data from addressed register */


typedef enum
{
	Bank0 = 0, /* Some of the registers are set in bank 0 */
 	Bank1 = 1, /* Registers are set in bank 1 */
} BankSet_t;



#endif /* GESTSENS_H_ */
