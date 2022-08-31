/***************************************************************************************************************************
 *  FILE DESCRIPTION
 *  ----------------------------------------------------------------------------------------------------------------------*/
/**        File: IntCtrl_Cfg.h
 *       Module: -
 *
 *  Description: Header file for pre-compile configurations of IntCtrl driver
 *
 *
 **************************************************************************************************************************/
#ifndef INTCTRL_CFG_H
#define INTCTRL_CFG_H

/***************************************************************************************************************************
 *  INCLUDES
 **************************************************************************************************************************/
#include "Std_Types.h"

/***************************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **************************************************************************************************************************/
#define APINT_KEY 0x05FA
#define INTERRUPT_BASEPRI_START_BIT 5U

#define NUMBER_OF_INTERRUPTS 85U
#define NUMBER_OF_SYSTEM_EXCEPTIONS 15U

/***************************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **************************************************************************************************************************/
 
/***************************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **************************************************************************************************************************/

/***************************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURESERVED
 **************************************************************************************************************************/
typedef uint32 RegisterType;

typedef enum
{
    STACK_TOP,
    RESET,
    NON_MASKABLE_INTERRUPT,
    HARD_FAULT,
    MEMORY_MANAGEMENT,
    BUS_FAULT,
    USAGE_FAULT,
    RESERVED_0,
    RESERVED_1,
    RESERVED_2,
    RESERVED_3,
    SV_CALL,
    DEBUG_MONITOR,
    RESERVED_4,
    PENDSV,
    SYSTICK,
    GPIO_PORT_A,
    GPIO_PORT_B,
    GPIO_PORT_C,
    GPIO_PORT_D,
    GPIO_PORT_E,
    UART0,
    UART1,
    SSI0,
    I2C0,
    PWM0_FAULT,
    PWM0_GENERATOR_0,
    PWM0_GENERATOR_1,
    PWM0_GENERATOR_2,
    QEI0,
    ADC0_SEQUENCE_0,
    ADC0_SEQUENCE_1,
    ADC0_SEQUENCE_2,
    ADC0_SEQUENCE_3,
    WATCHDOG_TIMERS_0AND1,
    TIMER1632_0A,
    TIMER1632_0B,
    TIMER1632_1A,
    TIMER1632_1B,
    TIMER1632_2A,
    TIMER1632_2B,
    ANALOG_COMPARATOR_0,
    ANALOG_COMPARATOR_1,
    RESERVED_5,
    SYSTEM_CONTROL,
    FLASH_MEMORY_AND_EEPROM_CONTROL,
    GPIO_PORT_F,
    RESERVED_6,
    RESERVED_7,
    UART2,
    SSI1,
    TIMER1632_3A,
    TIMER1632_3B,
    I2C1,
    QEI1,
    CAN0,
    CAN1,
    RESERVED_8,
    RESERVED_9,
    HIBERNATION_MODULE,
    USB,
    PWM_GENERATOR_3,
    uMDA_SOFTWARE,
    uMDA_ERROR,
    ADC1_SEQUENCE_0,
    ADC1_SEQUENCE_1,
    ADC1_SEQUENCE_2,
    ADC1_SEQUENCE_3,
    RESERVED_10,
    RESERVED_11,
    RESERVED_12,
    RESERVED_13,
    RESERVED_14,
    SSI2,
    SSI3,
    UART3,
    UART4,
    UART5,
    UART6,
    UART7,
    RESERVED_15,
    RESERVED_16,
    RESERVED_17,
    RESERVED_18,
    I2C2,
    I2C3,
    TIMER1632_4A,
    TIMER1632_4B,
    RESERVED_19,
    RESERVED_20,
    RESERVED_21,
    RESERVED_22,
    RESERVED_23,
    RESERVED_24,
    RESERVED_25,
    RESERVED_26,
    RESERVED_27,
    RESERVED_28,
    RESERVED_29,
    RESERVED_30,
    RESERVED_31,
    RESERVED_32,
    RESERVED_33,
    RESERVED_34,
    RESERVED_35,
    RESERVED_36,
    RESERVED_37,
    RESERVED_38,
    TIMER1632_5A,
    TIMER1632_5B,
    TIMER3264_0A,
    TIMER3264_0B,
    TIMER3264_1A,
    TIMER3264_1B,
    TIMER3264_2A,
    TIMER3264_2B,
    TIMER3264_3A,
    TIMER3264_3B,
    TIMER3264_4A,
    TIMER3264_4B,
    TIMER3264_5A,
    TIMER3264_5B,
    SYSTEM_EXCEPTION,
    RESERVED_39,
    RESERVED_40,
    RESERVED_41,
    RESERVED_42,
    RESERVED_43,
    RESERVED_44,
    RESERVED_45,
    RESERVED_46,
    RESERVED_47,
    RESERVED_48,
    RESERVED_49,
    RESERVED_50,
    RESERVED_51,
    RESERVED_52,
    RESERVED_53,
    RESERVED_54,
    RESERVED_55,
    RESERVED_56,
    RESERVED_57,
    RESERVED_58,
    RESERVED_59,
    RESERVED_60,
    RESERVED_61,
    RESERVED_62,
    RESERVED_63,
    RESERVED_64,
    RESERVED_65,
    PWM1_GENERATOR_0,
    PWM1_GENERATOR_1,
    PWM1_GENERATOR_2,
    PWM1_GENERATOR_3,
    PWM1_FAULT,
}IntCtrl_InterruptType;

#endif  /* INTCTRL_CFG_H */
 
/****************************************************************************************
 *  END OF FILE: IntCtrl_Cfg.h
 ***************************************************************************************/
 