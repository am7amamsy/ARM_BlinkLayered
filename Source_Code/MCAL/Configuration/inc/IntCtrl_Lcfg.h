/***************************************************************************************************************************
 *  FILE DESCRIPTION
 *  ----------------------------------------------------------------------------------------------------------------------*/
/**        File: IntCtrl_Lcfg.h
 *       Module: IntCtrl_Lcfg
 *
 *  Description: Header file for linking configurations of IntCtrl driver
 *
 *
 **************************************************************************************************************************/
#ifndef IntCtrl_Lcfg_H
#define IntCtrl_Lcfg_H

/***************************************************************************************************************************
 *  INCLUDES
 **************************************************************************************************************************/
#include "Std_Types.h"
#include "Mcu_Hw.h"
#include "IntCtrl_Cfg.h"

/***************************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **************************************************************************************************************************/
#define INTERRUPT_8_GRPS_1_SUBS 0
#define INTERRUPT_4_GRPS_2_SUBS 5
#define INTERRUPT_2_GRPS_4_SUBS 6
#define INTERRUPT_1_GRPS_8_SUBS 7

#define INTERRUPT_BASEPRI_NONE 0
#define INTERRUPT_BASEPRI_0	   1
#define INTERRUPT_BASEPRI_1	   2
#define INTERRUPT_BASEPRI_2    3
#define INTERRUPT_BASEPRI_3    4
#define INTERRUPT_BASEPRI_4    5
#define INTERRUPT_BASEPRI_5    6
#define INTERRUPT_BASEPRI_6    7

#define GRP_0_SUB_0_PRI_XXX	0
#define GRP_1_SUB_0_PRI_XXX	1
#define GRP_2_SUB_0_PRI_XXX	2
#define GRP_3_SUB_0_PRI_XXX	3
#define GRP_4_SUB_0_PRI_XXX	4
#define GRP_5_SUB_0_PRI_XXX	5
#define GRP_6_SUB_0_PRI_XXX	6
#define GRP_7_SUB_0_PRI_XXX	7

#define GRP_0_SUB_0_PRI_XXY	0
#define GRP_0_SUB_1_PRI_XXY	1
#define GRP_1_SUB_0_PRI_XXY	2
#define GRP_1_SUB_1_PRI_XXY	3
#define GRP_2_SUB_0_PRI_XXY	4
#define GRP_2_SUB_1_PRI_XXY	5
#define GRP_3_SUB_0_PRI_XXY	6
#define GRP_3_SUB_1_PRI_XXY	7

#define GRP_0_SUB_0_PRI_XYY	0
#define GRP_0_SUB_1_PRI_XYY	1
#define GRP_0_SUB_2_PRI_XYY	2
#define GRP_0_SUB_3_PRI_XYY	3
#define GRP_1_SUB_0_PRI_XYY	4
#define GRP_1_SUB_1_PRI_XYY	5
#define GRP_1_SUB_2_PRI_XYY	6
#define GRP_1_SUB_3_PRI_XYY	7

#define GRP_0_SUB_0_PRI_YYY	0
#define GRP_0_SUB_1_PRI_YYY	1
#define GRP_0_SUB_2_PRI_YYY	2
#define GRP_0_SUB_3_PRI_YYY	3
#define GRP_0_SUB_4_PRI_YYY	4
#define GRP_0_SUB_5_PRI_YYY	5
#define GRP_0_SUB_6_PRI_YYY	6
#define GRP_0_SUB_7_PRI_YYY	7

#define STD_OFF 0
#define STD_ON  1

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
* \Syntax          : uint8 GetGroupPriorityPoint(void)
* \Description     : This function is to get the binary point of group and subgroup priorities
*					 to be set to the APINT register
* \Sync\Async      : Synchronous
* \Reentrancy      : Non Reentrant
* \Parameters (in) : None
* \Parameters (out): - the group priority field number
* \Return value    : -  INTERRUPT_8_GRPS_1_SUBS
						INTERRUPT_4_GRPS_2_SUBS
						INTERRUPT_2_GRPS_4_SUBS
						INTERRUPT_1_GRPS_8_SUBS
 ***************************************************************************************/
uint8 GetGroupPriorityPoint(void);

/***************************************************************************************
 * \Syntax          : uint32 GetBasePriorityValue(void)
 * \Description     : This function is to get the value of the interrupt group with the base priority
 *										to be set to the BASEPRI special register
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): - the base priority interrupt group value
 * \Return value    : - INTERRUPT_BASEPRI_NONE
						INTERRUPT_BASEPRI_1
						INTERRUPT_BASEPRI_2
						INTERRUPT_BASEPRI_3
						INTERRUPT_BASEPRI_4
						INTERRUPT_BASEPRI_5
						INTERRUPT_BASEPRI_6
						INTERRUPT_BASEPRI_7	
 ***************************************************************************************/
RegisterType GetBasePriorityValue(void);

/***************************************************************************************
 * \Syntax          : void SetBasePriorityValue(uint32 basePriorityValue)
 * \Description     : This function is to set the value of the interrupt group with the base priority
 *										to a general purpose register then to the BASEPRI special register
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : basePriorityValue
 * \Parameters (out): None
 * \Return value    : None	
 ***************************************************************************************/
void SetBasePriorityValue(RegisterType basePriorityValue);

/***************************************************************************************
 * \Syntax          : void SetGroupPriority(void)
 * \Description     : This function is to write the group/subgroup priorities of the interrupts
											int the system to the NVIC_PRIn and SCB_SYSPRIn registers
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): None
 * \Return value    : None	
 ***************************************************************************************/
void SetGroupPriority(void);

void ClearInterruptGates(void);

void SCB_ExceptionEnable(void);

void NVIC_InterruptEnable(void);

#endif  /* IntCtrl_Lcfg_H */
 
/****************************************************************************************
 *  END OF FILE: IntCtrl_Lcfg.h
 ***************************************************************************************/
 