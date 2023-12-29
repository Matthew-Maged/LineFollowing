#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "PORT_interface.h"
#include "TIMER0_interface.h"
#include "TIMER2_interface.h"

#include "DCM_interface.h"
#include "IR_interface.h"

#include "APP_interface.h"

void main(void)
{
	PORT_voidInit();
	TIMER0_voidInit();
	TIMER2_voidInit();
	while (1)
	{
		if ((APP_u8GetRightIRState() == IR_OBJ_DETECTED) && (APP_u8GetLeftIRState() == IR_OBJ_DETECTED))
		{
			APP_voidMoveForward();
		}
		else if ((APP_u8GetRightIRState() == IR_OBJ_DETECTED) && (APP_u8GetLeftIRState() == IR_OBJ_NOT_DETECTED))
		{
			APP_voidTurnLeft();
		}
		else if ((APP_u8GetRightIRState() == IR_OBJ_NOT_DETECTED) && (APP_u8GetLeftIRState() == IR_OBJ_DETECTED))
		{
			APP_voidTurnRight();
		}
		else if ((APP_u8GetRightIRState() == IR_OBJ_NOT_DETECTED) && (APP_u8GetLeftIRState() == IR_OBJ_NOT_DETECTED))
		{
			APP_voidStop();
		}
	}
}
