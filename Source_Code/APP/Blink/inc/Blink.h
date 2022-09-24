/***************************************************************************************************************************
 *  FILE DESCRIPTION
 *  ----------------------------------------------------------------------------------------------------------------------*/
/**        File: Blink.h
 *       Module: Blink
 *
 *  Description: A header file for the LED blink application
 *
 *
 **************************************************************************************************************************/
#ifndef Blink_H
#define Blink_H

/***************************************************************************************************************************
 *  INCLUDES
 **************************************************************************************************************************/
#include "SysTick.h"
#include "Button.h"
#include "LED.h"

/***************************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
**************************************************************************************************************************/
#define SYSTICK_MAX_VAL	250000
#define SYSTICK_MIN_VAL	0

#define BUTTON_INC_VAL	500

/***************************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **************************************************************************************************************************/
 

/***************************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **************************************************************************************************************************/ 

/***************************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **************************************************************************************************************************/
 

/***************************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
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
void Blink_Init(void);
void LED_Blink(void);

#endif  /* Blink_H */
 
/****************************************************************************************
 *  END OF FILE: Blink.h
 ***************************************************************************************/
 