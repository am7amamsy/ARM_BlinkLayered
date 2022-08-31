/***************************************************************************************************************************
 *  FILE DESCRIPTION
 *  ----------------------------------------------------------------------------------------------------------------------*/
/**        \file IntCtrl.c
 *        \brief Nested Vector Interrupt Controller Driver
 *
 *      \details The driver configures all MCU interrupts priority into groups and subgroups
 *               and enables NVIC interrupt gate for peripehrals
 *
 **************************************************************************************************************************/
 
/***************************************************************************************************************************
 *  INCLUDES
 **************************************************************************************************************************/
#include "Std_Types.h"
#include "IntCtrl.h"
#include "Mcu_Hw.h"

/***************************************************************************************************************************
 *  LOCAL MACROS CONSTANT\FUNCTION
 **************************************************************************************************************************/
 
/***************************************************************************************************************************
 *  LOCAL DATA
 **************************************************************************************************************************/
 
/***************************************************************************************************************************
 *  GLOBAL DATA
 **************************************************************************************************************************/
 
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
 * \Syntax          : void IntCtrl_Init(void)
 * \Description     : Initialize NVIC\SCB module by parsing the configuration
 *                    into NVIC\SCB registers
 * 
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : None
 ***************************************************************************************/
void IntCtrl_Init(void)
{
    /*TODO: Configure grouping\subgrouping system in APINT register in SCB*/
		EnablePrivilegedMode();
		APINT.B.VECTKEY  = APINT_KEY;										//Write the register key to the VECTKEY field
		APINT.B.PRIGROUP = GetGroupPriorityPoint();			//Split the group priority from subpriority
		
	  /*TODO: Assign the base priority group of the system in the BASEPRI special register*/
    RegisterType basePriorityValue = GetBasePriorityValue();
		SetBasePriorityValue(basePriorityValue);
		
		/*TODO: Assign group\subgroup priority in NVIC_PRIx NVIC and SCB_SYSPRIx Registers*/
		SetGroupPriority();


	  /*TODO: Enable/Disable interrupts and exceptions based on user configuration in
            NVIC_ENx and SCB_Sys registers*/
	  ClearInterruptGates();
		SCB_ExceptionEnable();
		NVIC_InterruptEnable();
}
 
/****************************************************************************************
 *  END OF FILE: IntCtrl.c
 ***************************************************************************************/
 