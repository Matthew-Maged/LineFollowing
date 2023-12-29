/******************************************************************/
/*****************    Author: Matthew Maged    ********************/
/*****************    Layer: APP               ********************/
/*****************    SWC:   LINE_FOLLOWING    ********************/
/*****************    Version: 1.00            ********************/
/******************************************************************/
/******************************************************************/

#include "STD_TYPES.h"

#include "DIO_interface.h"

#include "IR_interface.h"
#include "DCM_interface.h"

#include "APP_interface.h"
#include "APP_private.h"
#include "APP_config.h"

void APP_voidMoveForward(void)
{
    DCM_voidRotateCcw(APP_RIGHT_MOTOR_PORT, APP_RIGHT_MOTOR_PIN1, APP_RIGHT_MOTOR_PIN2);
    DCM_voidRotateCcw(APP_LEFT_MOTOR_PORT, APP_LEFT_MOTOR_PIN1, APP_LEFT_MOTOR_PIN2);
}

void APP_voidTurnRight(void)
{
    DCM_voidRotateCcw(APP_LEFT_MOTOR_PORT, APP_LEFT_MOTOR_PIN1, APP_LEFT_MOTOR_PIN2);
    DCM_voidStop(APP_RIGHT_MOTOR_PORT, APP_RIGHT_MOTOR_PIN1, APP_RIGHT_MOTOR_PIN2);
}

void APP_voidTurnLeft(void)
{
    DCM_voidRotateCcw(APP_RIGHT_MOTOR_PORT, APP_RIGHT_MOTOR_PIN1, APP_RIGHT_MOTOR_PIN2);
    DCM_voidStop(APP_LEFT_MOTOR_PORT, APP_LEFT_MOTOR_PIN1, APP_LEFT_MOTOR_PIN2);
}

void APP_voidStop(void)
{
    DCM_voidStop(APP_RIGHT_MOTOR_PORT, APP_RIGHT_MOTOR_PIN1, APP_RIGHT_MOTOR_PIN2);
    DCM_voidStop(APP_LEFT_MOTOR_PORT, APP_LEFT_MOTOR_PIN1, APP_LEFT_MOTOR_PIN2);
}

u8 APP_u8GetRightIRState(void)
{
    u8 Local_u8Status = 0;
    IR_u8GetStatus(APP_RIGHT_IR_PORT, APP_RIGHT_IR_PIN, &Local_u8Status);
    return Local_u8Status;
}

u8 APP_u8GetLeftIRState(void)
{
    u8 Local_u8Status = 0;
    IR_u8GetStatus(APP_LEFT_IR_PORT, APP_LEFT_IR_PIN, &Local_u8Status);
    return Local_u8Status;
}
