/******************************************************************/
/*****************    Author: Matthew Maged    ********************/
/*****************    Layer: APP               ********************/
/*****************    SWC:   LINE_FOLLOWING    ********************/
/*****************    Version: 1.00            ********************/
/******************************************************************/
/******************************************************************/


#ifndef APP_LINE_FOLLOWING_APP_H_
#define APP_LINE_FOLLOWING_APP_H_

void APP_voidMoveForward(void);

void APP_voidTurnRight(void);

void APP_voidTurnLeft(void);

void APP_voidStop(void);

u8 APP_u8GetRightIRState(void);

u8 APP_u8GetLeftIRState(void);

#endif