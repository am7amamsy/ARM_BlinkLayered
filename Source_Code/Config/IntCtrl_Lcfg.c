/***************************************************************************************************************************
 *  FILE DESCRIPTION
 *  ----------------------------------------------------------------------------------------------------------------------*/
/**        \file IntCtrl_Lcfg.c
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
#include "IntCtrl_Cfg.h"

/***************************************************************************************************************************
 *  LOCAL MACROS CONSTANT\FUNCTION
 **************************************************************************************************************************/
 
/***************************************************************************************************************************
 *  LOCAL DATA
 **************************************************************************************************************************/
unsigned char interruptArr[4] = {MEMORY_MANAGEMENT, GPIO_PORT_A, PMW0_GENERATOR_0, TIMER1632_0A};
unsigned char groupPriorityArr[4] = {0, 1, 0, 0};
unsigned char subgroupPriorityArr[4] = {0, 0, 0, 1};
 
/***************************************************************************************************************************
 *  GLOBAL DATA
 **************************************************************************************************************************/
 
 /**************************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **************************************************************************************************************************/
 
/***************************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **************************************************************************************************************************/
 
/***************************************************************************************************************************
 *  LOCAL FUNCTIONS
 **************************************************************************************************************************/
/***************************************************************************************
 * \Syntax          : unsigned char GetMaximumElement(unsigned char arr[])
 * \Description     : This function is to get the maximum priority number of groups or subgroups
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : arr[]				   			the array of group or subgroup priority numbers
 * \Parameters (out): maximumElement			the maximum group or subgroup priority number
 * \Return value    : maximumElement  		from 0 to 7
 ***************************************************************************************/
unsigned char GetMaximumElement(unsigned char arr[])
{
	unsigned char maximumElement = 0;
	
	uint8 i = 0;
	for(i = 0; arr[i] != '\0'; i++)
	{
		if(arr[i] > maximumElement && arr[i] <= 7)
			maximumElement = arr[i];
	}
	
	return maximumElement;
}
/***************************************************************************************
 * \Syntax          : unsigned char GetGroupPriorityPoint(void)
 * \Description     : This function is to get the binary point of group and subgroup priorities
 *										to be set to the APINT register
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): groupPriorityPoint	the group priority field number
 * \Return value    : groupPriorityPoint  XXX.
 *                                    		XX.Y
																					X.YY
																					.YYY
 ***************************************************************************************/
unsigned char GetGroupPriorityPoint(void)
{
	unsigned char groupPriorityPoint = XXX;
	
	unsigned char groupNumber = GetMaximumElement(groupPriorityArr) + 1;
	unsigned char subgroupNumber = GetMaximumElement(subgroupPriorityArr) + 1;
	
	if((groupNumber >= 1 && groupNumber <= 8) && (subgroupNumber == 1))
		groupPriorityPoint = XXX;
	else if((groupNumber >= 1 && groupNumber <=4) && (subgroupNumber == 1 || subgroupNumber == 2))
		groupPriorityPoint = XXY;
	else if((groupNumber >= 1 && groupNumber <= 2) && (subgroupNumber >= 1 && subgroupNumber <= 4))
		groupPriorityPoint = XYY;
	else if((groupNumber == 1) && (subgroupNumber >= 1 && subgroupNumber <= 8))
		groupPriorityPoint = YYY;
	 
	return groupPriorityPoint;
}
 
/****************************************************************************************
 *  END OF FILE: IntCtrl_Lcfg.c
 ***************************************************************************************/
 