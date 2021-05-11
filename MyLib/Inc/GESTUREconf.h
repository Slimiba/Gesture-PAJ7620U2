/*
 * GESTUREconf.h
 *
 *  Created on: May 6, 2021
 *      Author: 1
 */

#ifndef INC_GESTURECONF_H_
#define INC_GESTURECONF_H_

#define GESTURE_ADDRESS_I2C (0x73) /* I2C Address ID */

/* Register bank select R/W*/
#define GESTURE_REG_BANK_SEL (0xEF)

/* Bank 0 register, setting the address (R-Read, W-Write)
#define GESTURE_ADDR_PARTID_L (0x00)
#define GESTURE_ADDR_PARTID_H (0x01)
#define GESTURE_ADDR_VERSIONID (0x02) */
#define GESTURE_ADDR_SUSPEND_ENL (0x03) /* R */
#define GESTURE_ADDR_GEST_DETECT_INT1 (0x41) /* R/W */
#define GESTURE_ADDR_GEST_DETECT_INT2 (0x42) /* R/W */
#define GESTURE_ADDR_GEST_DETECT_INTFLAG1 (0x43) /* R */
#define GESTURE_ADDR_GEST_DETECT_INTFLAG2 (0x44) /* R */
#define GESTURE_ADDR_STATE_INDIC (0x45) /* R */
#define GESTURE_ADDR_PS_HIGH_THRESH (0x69) /* R/W */
#define GESTURE_ADDR_PS_LOW_THRESH (0x6A) /* R/W */
#define GESTURE_ADDR_PS_APPROACH_STATE (0x6B) /* R */
#define GESTURE_ADDR_PS_DATA (0x6C) /* R */

#define GESTURE_BANK0 0x00 /* Define Value for Bank 0 */

/* Bank 1 Registers, setting the address */
#define GESTURE_ADDR_IDLE_S1_STEP1 (0x67) /* R/W */
#define GESTURE_ADDR_IDLE_S1_STEP2 (0X68) /* R/W */
#define GESTURE_ADDR_IDLE_S2_STEP1 (0x69) /* R/W */
#define GESTURE_ADDR_IDLE_S2_STEP2 (0x6A) /* R/W */
#define GESTURE_ADDR_OP_TO_S1_STEP1 (0x6B) /* R/W */
#define GESTURE_ADDR_OP_TO_S1_STEP2 (0x6C) /* R/W */
#define GESTURE_ADDR_OP_TO_S2_STEP1 (0x6D) /* R/W */
#define GESTURE_ADDR_OP_TO_S2_STEP2 (0x6E) /* R/W */
#define GESTURE_ADDR_OP_ENABLE (0x72) /* R/W */
#define GESTURE_ADDR_PS_GAIN (0x44) /* R/W */

#define GESTURE_BANK1 0x01 /* Define Value for Bank 1 */


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
#define GestureDown GESTURE_Value(1,2)
#define GestureUp GESTURE_Value(1,3)
#define GestureForward GESTURE_Value(1,4)
#define GestureBackwards GESTURE_Value(1,5)
#define GestureCW GESTURE_Value(1,6)
#define GestureACW GESTURE_Value(1,7)
/* #define GestureNone GESTURE_Value(1,8) */

#define initialRegister (sizeof(RegisterArray)/sizeof(RegisterArray[0]))



#endif /* INC_GESTURECONF_H_ */
