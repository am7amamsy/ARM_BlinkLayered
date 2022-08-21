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
#include "IntCtrl_Lcfg.h"

/***************************************************************************************************************************
 *  LOCAL MACROS CONSTANT\FUNCTION
 **************************************************************************************************************************/
 
/***************************************************************************************************************************
 *  LOCAL DATA
 **************************************************************************************************************************/
const struct IntCtrl_InterruptConfig
{
	uint8 groupAndSubgroup;
	uint8 basePriority;
	uint8 interruptTypeAndState[NUMBER_OF_INTERRUPTS][3];
}IntCtrl_InterruptConfig = {INTERRUPT_1_GRPS_8_SUBS, INTERRUPT_BASEPRI_NONE,
														{{MEMORY_MANAGEMENT, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {BUS_FAULT, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {USAGE_FAULT, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {SV_CALL, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {DEBUG_MONITOR, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {PENDSV, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {SYSTICK, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {GPIO_PORT_A, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {GPIO_PORT_B, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {GPIO_PORT_C, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {GPIO_PORT_D, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {GPIO_PORT_E, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {UART0, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {UART1, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {SSI0, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {I2C0, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {PWM0_FAULT, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {PWM0_GENERATOR_0, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {PWM0_GENERATOR_1, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {PWM0_GENERATOR_2, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {QEI0, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {ADC0_SEQUENCE_0, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {ADC0_SEQUENCE_1, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {ADC0_SEQUENCE_2, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {ADC0_SEQUENCE_3, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {WATCHDOG_TIMERS_0AND1, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER1632_0A, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER1632_0B, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER1632_1A, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER1632_1B, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER1632_2A, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER1632_2B, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {ANALOG_COMPARATOR_0, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {ANALOG_COMPARATOR_1, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {SYSTEM_CONTROL, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {FLASH_MEMORY_AND_EEPROM_CONTROL, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {GPIO_PORT_F, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {UART2, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {SSI1, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER1632_3A, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER1632_3B, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {I2C1, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {QEI1, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {CAN0, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {CAN1, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {HIBERNATION_MODULE, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {USB, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {PWM_GENERATOR_3, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {uMDA_SOFTWARE, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {uMDA_ERROR, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {ADC1_SEQUENCE_0, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {ADC1_SEQUENCE_1, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {ADC1_SEQUENCE_2, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {ADC1_SEQUENCE_3, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {SSI2, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {SSI3, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {UART3, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {UART4, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {UART5, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {UART6, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {UART7, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {BUS_FAULT, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {I2C2, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {I2C3, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER1632_4A, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER1632_4B, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER1632_5A, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER1632_5B, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER3264_0A, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER3264_0B, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER3264_1A, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER3264_1B, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER3264_2A, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER3264_2B, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER3264_3A, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER3264_3B, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER3264_4A, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER3264_4B, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER3264_5A, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {TIMER3264_5B, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {SYSTEM_EXCEPTION, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {PWM1_GENERATOR_0, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {PWM1_GENERATOR_1, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {PWM1_GENERATOR_2, STD_OFF, GRP_0_SUB_0_PRI_XXX},
														 {PWM1_GENERATOR_3, STD_OFF, GRP_0_SUB_0_PRI_XXX}}
														};

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
 * \Syntax          : uint8 GetGroupPriorityPoint(void)
 * \Description     : This function is to get the binary point of group and subgroup priorities
 *										to be set to the APINT register
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): -	the group priority field number
 * \Return value    : - INTERRUPT_8_GRPS_1_SUBS
												INTERRUPT_4_GRPS_2_SUBS
												INTERRUPT_2_GRPS_4_SUBS
												INTERRUPT_1_GRPS_8_SUBS
 ***************************************************************************************/
uint8 GetGroupPriorityPoint(void)
{ 
	return INTERRUPT_1_GRPS_8_SUBS;
}

/***************************************************************************************
 * \Syntax          : uint32 GetBasePriorityValue(void)
 * \Description     : This function is to get the value of the interrupt group with the base priority
 *										to be set to the BASEPRI special register
 * \Sync\Async      : Synchronous
 * \Reentrancy      : Non Reentrant
 * \Parameters (in) : None
 * \Parameters (out): - the base priority interrupt group value
 * \Return value    : -  INTERRUPT_BASEPRI_NONE
												 INTERRUPT_BASEPRI_1
												 INTERRUPT_BASEPRI_2
												 INTERRUPT_BASEPRI_3
												 INTERRUPT_BASEPRI_4
												 INTERRUPT_BASEPRI_5
												 INTERRUPT_BASEPRI_6
												 INTERRUPT_BASEPRI_7	
 ***************************************************************************************/
RegisterType GetBasePriorityValue(void)
{
	return (INTERRUPT_BASEPRI_NONE << INTERRUPT_BASEPRI_START_BIT);
}

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
void SetBasePriorityValue(RegisterType basePriorityValue)
{
		__asm(" LDR R0, %[in]" : : [in] "g" (basePriorityValue));
		__asm(" MSR BASEPRI, R0");
}

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
void SetGroupPriority(void)
{
	uint8 i = 0;
	for(; i < NUMBER_OF_INTERRUPTS; i++)
  {
		switch(IntCtrl_InterruptConfig.interruptTypeAndState[i][0])
		{
			case MEMORY_MANAGEMENT:
				SYSPRI1.B.MEM = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case BUS_FAULT:
				SYSPRI1.B.BUS = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case USAGE_FAULT:
				SYSPRI1.B.USAGE = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case SV_CALL:
				SYSPRI2.B.SVC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case DEBUG_MONITOR:
				SYSPRI3.B.DEBUG = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case PENDSV:
				SYSPRI3.B.PENDSV = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case SYSTICK:
				SYSPRI3.B.TICK = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case GPIO_PORT_A:
				PRI0.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case GPIO_PORT_B:
				PRI0.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case GPIO_PORT_C:
				PRI0.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case GPIO_PORT_D:
				PRI0.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case GPIO_PORT_E:
				PRI1.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case UART0:
				PRI1.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case UART1:
				PRI1.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case SSI0:
				PRI1.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case I2C0:
				PRI2.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case PWM0_FAULT:
				PRI2.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case PWM0_GENERATOR_0:
				PRI2.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case PWM0_GENERATOR_1:
				PRI2.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case PWM0_GENERATOR_2:
				PRI3.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case QEI0:
				PRI3.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case ADC0_SEQUENCE_0:
				PRI3.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case ADC0_SEQUENCE_1:
				PRI3.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case ADC0_SEQUENCE_2:
				PRI4.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case ADC0_SEQUENCE_3:
				PRI4.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case WATCHDOG_TIMERS_0AND1:
				PRI4.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER1632_0A:
				PRI4.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER1632_0B:
				PRI5.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER1632_1A:
				PRI5.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER1632_1B:
				PRI5.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER1632_2A:
				PRI5.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER1632_2B:
				PRI6.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case ANALOG_COMPARATOR_0:
				PRI6.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case ANALOG_COMPARATOR_1:
				PRI6.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case SYSTEM_CONTROL:
				PRI7.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case FLASH_MEMORY_AND_EEPROM_CONTROL:
				PRI7.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case GPIO_PORT_F:
				PRI7.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case UART2:
				PRI8.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case SSI1:
				PRI8.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER1632_3A:
				PRI8.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER1632_3B:
				PRI9.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case I2C1:
				PRI9.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case QEI1:
				PRI9.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case CAN0:
				PRI9.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case CAN1:
				PRI10.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case HIBERNATION_MODULE:
				PRI10.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case USB:
				PRI11.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case PWM_GENERATOR_3:
				PRI11.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case uMDA_SOFTWARE:
				PRI11.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case uMDA_ERROR:
				PRI11.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case ADC1_SEQUENCE_0:
				PRI12.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case ADC1_SEQUENCE_1:
				PRI12.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case ADC1_SEQUENCE_2:
				PRI12.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case ADC1_SEQUENCE_3:
				PRI12.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case SSI2:
				PRI14.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case SSI3:
				PRI14.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case UART3:
				PRI14.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case UART4:
				PRI15.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case UART5:
				PRI15.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case UART6:
				PRI15.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case UART7:
				PRI15.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case I2C2:
				PRI17.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case I2C3:
				PRI17.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER1632_4A:
				PRI17.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER1632_4B:
				PRI17.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER1632_5A:
				PRI23.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER1632_5B:
				PRI23.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER3264_0A:
				PRI23.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER3264_0B:
				PRI23.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER3264_1A:
				PRI24.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER3264_1B:
					PRI24.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER3264_2A:
				PRI24.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER3264_2B:
				PRI24.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER3264_3A:
				PRI25.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER3264_3B:
				PRI25.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER3264_4A:
				PRI25.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER3264_4B:
				PRI25.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER3264_5A:
				PRI26.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case TIMER3264_5B:
				PRI26.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case SYSTEM_EXCEPTION:
				PRI26.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case PWM1_GENERATOR_0:
				PRI33.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case PWM1_GENERATOR_1:
				PRI33.B.INTD = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case PWM1_GENERATOR_2:
				PRI34.B.INTA = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case PWM1_GENERATOR_3:
				PRI34.B.INTB = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
				break;
			case PWM1_FAULT:
				PRI34.B.INTC = IntCtrl_InterruptConfig.interruptTypeAndState[i][2];
		}
	}
}

void ClearInterruptGates(void)
{
	/*TODO: Enable FAULTMASK register*/
	__asm(" LDR R1, 0x00");
	__asm(" MSR FAULTMASK, R1");
	
	/*TODO: Enable PRIMASK register*/
	__asm(" LDR R2, 0x00");
	__asm(" MSR PRIMASK, R2");
}

void EnablePrivilegedMode(void)
{
	/*TODO: Enable supervisor call*/
	__asm(" SVC #0");
	
	/*TODO: Handle supervisor call*/
	/*TODO: Change to privileged mode in CONTROL register*/
}

void SCB_ExceptionEnable(void)
{
	
}

void NVIC_InterruptEnable(void)
{
	uint8 i = 0;
	for(; i < NUMBER_OF_INTERRUPTS; i++)
  {
		if((IntCtrl_InterruptConfig.interruptTypeAndState[i][0] - NUMBER_OF_SYSTEM_EXCEPTIONS) >= 0 &&
			 (IntCtrl_InterruptConfig.interruptTypeAndState[i][0] - NUMBER_OF_SYSTEM_EXCEPTIONS) <= 31)
		{
			if(IntCtrl_InterruptConfig.interruptTypeAndState[i][1] == STD_ON)
				EN0 |= (1 << IntCtrl_InterruptConfig.interruptTypeAndState[i][0]);
			else
				DIS0 |= (1 << IntCtrl_InterruptConfig.interruptTypeAndState[i][0]);
		}
		else if((IntCtrl_InterruptConfig.interruptTypeAndState[i][0] - NUMBER_OF_SYSTEM_EXCEPTIONS) >= 32 &&
			      (IntCtrl_InterruptConfig.interruptTypeAndState[i][0] - NUMBER_OF_SYSTEM_EXCEPTIONS) <= 63)
		{
			if(IntCtrl_InterruptConfig.interruptTypeAndState[i][1] == STD_ON)
				EN1 |= (1 << IntCtrl_InterruptConfig.interruptTypeAndState[i][0]);
			else
				DIS1 |= (1 << IntCtrl_InterruptConfig.interruptTypeAndState[i][0]);
		}
		else if((IntCtrl_InterruptConfig.interruptTypeAndState[i][0] - NUMBER_OF_SYSTEM_EXCEPTIONS) >= 64 &&
			      (IntCtrl_InterruptConfig.interruptTypeAndState[i][0] - NUMBER_OF_SYSTEM_EXCEPTIONS) <= 95)
		{
			if(IntCtrl_InterruptConfig.interruptTypeAndState[i][1] == STD_ON)
				EN2 |= (1 << IntCtrl_InterruptConfig.interruptTypeAndState[i][0]);
			else
				DIS2 |= (1 << IntCtrl_InterruptConfig.interruptTypeAndState[i][0]);
		}
		else if((IntCtrl_InterruptConfig.interruptTypeAndState[i][0] - NUMBER_OF_SYSTEM_EXCEPTIONS) >= 96 &&
			      (IntCtrl_InterruptConfig.interruptTypeAndState[i][0] - NUMBER_OF_SYSTEM_EXCEPTIONS) <= 127)
		{
			if(IntCtrl_InterruptConfig.interruptTypeAndState[i][1] == STD_ON)
				EN3 |= (1 << IntCtrl_InterruptConfig.interruptTypeAndState[i][0]);
			else
				DIS3 |= (1 << IntCtrl_InterruptConfig.interruptTypeAndState[i][0]);
		}
		else if((IntCtrl_InterruptConfig.interruptTypeAndState[i][0] - NUMBER_OF_SYSTEM_EXCEPTIONS) >= 128 &&
			      (IntCtrl_InterruptConfig.interruptTypeAndState[i][0] - NUMBER_OF_SYSTEM_EXCEPTIONS) <= 138)
		{
			if(IntCtrl_InterruptConfig.interruptTypeAndState[i][1] == STD_ON)
				EN4 |= (1 << IntCtrl_InterruptConfig.interruptTypeAndState[i][0]);
			else
				DIS4 |= (1 << IntCtrl_InterruptConfig.interruptTypeAndState[i][0]);
		}
	}
}

/****************************************************************************************
 *  END OF FILE: IntCtrl_Lcfg.c
 ***************************************************************************************/
 