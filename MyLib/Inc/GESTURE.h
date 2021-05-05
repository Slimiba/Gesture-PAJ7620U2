#ifndef GESTURE_H_
#define GESTURE_H_

#include "stm32f3xx_hal.h"
#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define GESTURE_ADDRESS_I2C (0x73) /* I2C Address ID */

/* Register bank select R/W*/
#define GESTURE_REG_BANK_SEL (0xEF)

/* Bank 0 register, setting the address (R-Read, W-Write)
#define GESTURE_ADDR_PARTID_L (0x00)
#define GESTURE_ADDR_PARTID_H (0x01)
#define GESTURE_ADDR_VERSIONID (0x02) */
#define GESTURE_ADDR_SUSPEND_ENL (0x03) /* R */
#define GESTURE_ADDR_INT1 (0x41) /* R/W */
#define GESTURE_ADDR_INT2 (0x42) /* R/W */
#define GESTURE_ADDR_INTFLAG1 (0x43) /* R/W */
#define GESTURE_ADDR_INTFLAG2 (0x44) /* R/W */
#define GESTURE_ADDR_SLEEPMODE (0x45) /* R */
#define GESTURE_ADDR_PROX_H (0x69) /* R/W */
#define GESTURE_ADDR_PROX_L (0x6A) /* R/W */
#define GESTURE_ADDR_PROX_STATE (0x6B) /* R */
#define GESTURE_ADDR_PROX_AVG (0x6C) /* R */

#define GESTURE_BANK0 0 /* Define Value for Bank 0 */

/* Bank 1 Registers, setting the address */
#define GESTURE_ADDR_IDLE_SLEEP1_1 (0x67) /* R/W */
#define GESTURE_ADDR_IDLE_SLEEP1_2 (0X68) /* R/W */
#define GESTURE_ADDR_IDLE_SLEEP2_1 (0x69) /* R/W */
#define GESTURE_ADDR_IDLE_SLEEP2_2 (0x6A) /* R/W */
#define GESTURE_ADDR_OBJ_T1_1 (0x6B) /* R/W */
#define GESTURE_ADDR_OBJ_T1_2 (0x6C) /* R/W */
#define GESTURE_ADDR_OBJ_T2_1 (0x6D) /* R/W */
#define GESTURE_ADDR_OBJ_T2_2 (0x6E) /* R/W */
#define GESTURE_ADDR_TG_ENABLE (0x72) /* R/W */
#define GESTURE_ADDR_GAIN_PS (0x44) /* R/W */

#define GESTURE_BANK1 1 /* Define Value for Bank 1 */


#define GESTURE_ENABLE 0x01 /* Enable address operations */
#define GESTURE_DISABLE 0x00 /* Disable */

#define GESTURE_I2C_SUSPEND 0x00 /* Address suspend CMD */
#define GESTURE_I2C_WAKEUP 0x01

#define GEST_REACT_T 400 /* Gesture reaction time has to be less than gesture entry time for forward/backwards movement */
#define GEST_ENTR_T 600 /* Both can be adjusted to needs */
#define GEST_QUIT_T 1000


#define GESTURE_Value(Value, maskbit) (Value << maskbit)

#define GestureRight GESTURE_Value(1,0)
#define GestureLeft GESTURE_Value(1,1)
#define GestureUp GESTURE_Value(1,2)
#define GestureDown GESTURE_Value(1,3)
#define GestureCW GESTURE_Value(1,4)
#define GestureACW GESTURE_Value(1,5)
#define GestureForward GESTURE_Value(1,6)
#define GestureBackwards GESTURE_Value(1,7)
/* #define GestureNone GESTURE_Value(1,8) */

#define InitialRegister (sizeof(RegisterArray)/sizeof(RegisterArray[0]))

I2C_HandleTypeDef *HandleI2C; /* HandleI2C pointer for I2C Type Def */
UART_HandleTypeDef HandleUART; /* */

void GESTURE_Actions(void); /* Sets action flags for gestures */

void initializeRegisters(void); /* Initializes sensors registers */
uint8_t gestureInit(void); /* Initialize gesture */
uint8_t registerWrite(uint8_t address, uint8_t cmd); /* Write to address register */
uint8_t registerRead(uint8_t address, uint8_t qty, uint8_t data[]); /* Read data from addressed register */


typedef enum
{
	Bank0 = 0, /* Some of the registers are set in bank 0 */
 	Bank1 = 1, /* Registers are set in bank 1 */
} BankSet_t;



#endif /* GESTSENS_H_ */
