/***************************************************************************************************************************
 *  FILE DESCRIPTION
 *  ----------------------------------------------------------------------------------------------------------------------*/
/**        \file Blink.c
 *        \brief
 *
 *      \details
 *
 *
 **************************************************************************************************************************/
 
/***************************************************************************************************************************
 *  INCLUDES
 **************************************************************************************************************************/
#include "Std_Types.h"
#include "Blink.h"

/***************************************************************************************************************************
 *  LOCAL MACROS CONSTANT\FUNCTION
 **************************************************************************************************************************/
 
/***************************************************************************************************************************
 *  LOCAL DATA
 **************************************************************************************************************************/
static SysTick_ValueType timeOn = 0;
static SysTick_ValueType timeOff = 0;
 
/***************************************************************************************************************************
 *  GLOBAL DATA
 **************************************************************************************************************************/
extern SysTick_ValueType overflowVal;

 /**************************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **************************************************************************************************************************/
 
/***************************************************************************************************************************
 *  LOCAL FUNCTIONS
 **************************************************************************************************************************/

/***************************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **************************************************************************************************************************/
 
 
/***************************************************************************************
 * \Syntax          : Std_ReturnType FunctionName(AnyType parameterName)
 * \Description     : Describe this service
 *
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : parameterName   Parameter Description
 * \Parameters (out): None
 * \Return value    : Std_ReturnType  E_OK
 *                                    E_NOT_OK
 ***************************************************************************************/
void Blink_Init()
{
		uint8 timeOnSet = STD_LOW;
		uint8 timeOffSet = STD_LOW;
	
		Button_LevelType Button_1_State_Previous = BUTTON_ON;
		Button_LevelType Button_2_State_Previous = BUTTON_ON;
	
		while(Button_ReadChannel(BUTTON_1_CH) == BUTTON_OFF);
	
		do
		{
				Button_LevelType Button_2_State_Current = Button_ReadChannel(BUTTON_2_CH);
				if(Button_2_State_Current == BUTTON_ON && Button_2_State_Previous == BUTTON_OFF)
				{
						if(timeOn < SYSTICK_MAX_VAL)
						{
								timeOn += BUTTON_INC_VAL;
						}
						else
						{
								timeOn = SYSTICK_MAX_VAL;
						}
				}
				Button_2_State_Previous = Button_2_State_Current;
				
				Button_LevelType Button_1_State_Current = Button_ReadChannel(BUTTON_1_CH);
				if(Button_1_State_Current == BUTTON_ON && Button_1_State_Previous == BUTTON_OFF)
				{
						timeOnSet = STD_HIGH;
				}
				Button_1_State_Previous = Button_1_State_Current;
		}
		while(timeOnSet == STD_LOW);
		
		do
		{
				Button_LevelType Button_2_State_Current = Button_ReadChannel(BUTTON_2_CH);
				if(Button_2_State_Current == BUTTON_ON && Button_2_State_Previous == BUTTON_OFF)
				{
						if(timeOff < SYSTICK_MAX_VAL)
						{
								timeOff += BUTTON_INC_VAL;
						}
						else
						{
								timeOff = SYSTICK_MAX_VAL;
						}
				}
				Button_2_State_Previous = Button_2_State_Current;
				
				Button_LevelType Button_1_State_Current = Button_ReadChannel(BUTTON_1_CH);
				if(Button_1_State_Current == BUTTON_ON && Button_1_State_Previous == BUTTON_OFF)
				{
						timeOffSet = STD_HIGH;
				}
				Button_1_State_Previous = Button_1_State_Current;
		}
		while(timeOffSet == STD_LOW);
		
		SysTick_StartTimer(timeOn);
}

void LED_Blink()
{
    LED_LevelType level = LED_ReadChannel(LED_CH);
    //SysTick_StopTimer();
	  if(level == LED_OFF)
		{
				if(overflowVal == 0)
				{
						LED_WriteChannel(LED_CH, LED_ON);
				}
				SysTick_StartTimer(timeOn);
		}
		else if(level == LED_ON)
		{
				if(overflowVal == 0)
				{
						LED_WriteChannel(LED_CH, LED_OFF);
				}
				SysTick_StartTimer(timeOff);
		}
}
 
/****************************************************************************************
 *  END OF FILE: Blink.c
 ***************************************************************************************/
 