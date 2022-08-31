/***************************************************************************************************************************
 *  FILE DESCRIPTION
 *  ----------------------------------------------------------------------------------------------------------------------*/
/**        File: Mcu_Hw.h
 *       Module: Mcu_Hw
 *
 *  Description: Header file for register definition
 *
 *
 **************************************************************************************************************************/
#ifndef MCU_HW_H
#define MCU_HW_H

/***************************************************************************************************************************
 *  INCLUDES
 **************************************************************************************************************************/
#include "Std_Types.h"

/***************************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **************************************************************************************************************************/
typedef struct
{
    uint32 TAMR     :2;
    uint32 TACMR    :1;
    uint32 TAAMS    :1;
    uint32 TACDIR   :1;
    uint32 TAMIE    :1;
    uint32 TAWOT    :1;
    uint32 TASNAPS  :1;
    uint32 TAILD    :1;
    uint32 TAPWMIE  :1;
    uint32 TAMRSU   :1;
    uint32 TAPLO    :1;
}GPTMTAMR_BF;

typedef union
{
    uint32 R;
    GPTMTAMR_BF B;
}GPTMTAMR_TAG;

typedef struct
{
    uint32 TAEN     :1;
    uint32 TASTALL  :1;
    uint32 TAEVENT  :2;
    uint32 RTCEN    :1;
    uint32 TAOTE    :1;
    uint32 TAPWML   :1;
    uint32          :1;
    uint32 TBEN     :1;
    uint32 TBSTALL  :1;
    uint32 TBEVENT  :2;
    uint32          :1;
    uint32 TBOTE    :1;
    uint32 TBPWML   :1;
    uint32          :1;
    uint32          :16;
}GPTMCTL_BF;

typedef union
{
    uint32 R;
    GPTMCTL_BF B;
}GPTMCTL_TAG;

typedef struct
{
    uint32 TATOIM   :1;
    uint32 CAMIM    :1;
    uint32 CAEIM    :1;
    uint32 RTCIM    :1;
    uint32 TAMIM    :1;
    uint32          :3;
    uint32 TBTOIM   :1;
    uint32 CBMIM    :1;
    uint32 CBEIM    :1;
    uint32 TBMIM    :1;
    uint32          :4;
    uint32 WUEIM    :1;
    uint32          :15;
}GPTMIMR_BF;

typedef union
{
    uint32 R;
    GPTMIMR_BF B;
}GPTMIMR_TAG;

typedef struct
{
    uint32 ENABLE   :1;
    uint32 INTEN    :1;
    uint32 CLK_SRC  :1;
    uint32          :13;
    uint32 COUNT    :1;
    uint32          :15;
}STCTRL_BF;

typedef union
{
    uint32 R;
    STCTRL_BF B;
}STCTRL_TAG;

typedef struct
{
    uint32      :5;
    uint32 INTA :3;
    uint32      :5;
    uint32 INTB :3;
    uint32      :5;
    uint32 INTC :3;
    uint32      :5;
    uint32 INTD :3;
}PRIn_BF;

typedef union
{
    uint32 R;
    PRIn_BF B;
}PRIn_TAG;

typedef struct
{
    uint32 VECTRESET  :1;
    uint32 VECTCLRACT :1;
    uint32 SYSRESREQ  :1;
    uint32            :5;
    uint32 PRIGROUP   :3;
    uint32            :4;
    uint32 ENDIANESS  :1;
    uint32 VECTKEY    :16;
}APINT_BF;

typedef union
{
    uint32 R;
    APINT_BF B;
}APINT_TAG;

typedef struct
{
    uint32       :5;
    uint32 MEM   :3;
    uint32       :5;
    uint32 BUS   :3;
    uint32       :5;
    uint32 USAGE :3;
    uint32       :8;
}SYSPRI1_BF;

typedef union
{
    uint32 R;
    SYSPRI1_BF B;
}SYSPRI1_TAG;

typedef struct
{
    uint32     :29;
    uint32 SVC :3;
}SYSPRI2_BF;

typedef union
{
    uint32 R;
    SYSPRI2_BF B;
}SYSPRI2_TAG;

typedef struct
{
    uint32        :5;
    uint32 DEBUG  :3;
    uint32        :13;
    uint32 PENDSV :3;
    uint32        :5;
    uint32 TICK   :3;
}SYSPRI3_BF;

typedef union
{
    uint32 R;
    SYSPRI3_BF B;
}SYSPRI3_TAG;

typedef struct
{
    uint32 MEMA   :1;
    uint32 BUSA   :1;
    uint32        :1;
    uint32 USGA   :1;
    uint32        :3;
    uint32 SVCA   :1;
    uint32 MON    :1;
    uint32        :1;
    uint32 PNDSV  :1;
    uint32 TICK   :1;
    uint32 USAGEP :1;
    uint32 MEMP   :1;
    uint32 BUSP   :1;
    uint32 SVC    :1;
    uint32 MEM    :1;
    uint32 BUS    :1;
    uint32 USAGE  :1;
    uint32        :13;
}SYSHNDCTRL_BF;

typedef union
{
    uint32 R;
    SYSHNDCTRL_BF B;
}SYSHNDCTRL_TAG;



/***************************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **************************************************************************************************************************/
/************************************************GPIO Registers*******************************************************/
#define CORTEXM4_PORTA_APB_BASE_ADDRESS  0x40004000
#define CORTEXM4_PORTB_APB_BASE_ADDRESS  0x40005000
#define CORTEXM4_PORTC_APB_BASE_ADDRESS  0x40006000
#define CORTEXM4_PORTD_APB_BASE_ADDRESS  0x40007000
#define CORTEXM4_PORTE_APB_BASE_ADDRESS  0x40024000
#define CORTEXM4_PORTF_APB_BASE_ADDRESS  0x40025000

#define BIT_BAND_BASE_ADDRESS            0x40000000
#define BIT_BAND_ALIAS_BASE_ADDRESS      0x42000000

#define GPIODATA_OFFSET 0x000
#define GPIODIR_OFFSET  0x400

#define PORTA_FULL_GPIODATA         (*((volatile uint32*)(CORTEXM4_PORTA_APB_BASE_ADDRESS + GPIODATA_OFFSET + 0x3FC)))
#define PORTB_FULL_GPIODATA         (*((volatile uint32*)(CORTEXM4_PORTB_APB_BASE_ADDRESS + GPIODATA_OFFSET + 0x3FC)))
#define PORTC_FULL_GPIODATA         (*((volatile uint32*)(CORTEXM4_PORTC_APB_BASE_ADDRESS + GPIODATA_OFFSET + 0x3FC)))
#define PORTD_FULL_GPIODATA         (*((volatile uint32*)(CORTEXM4_PORTD_APB_BASE_ADDRESS + GPIODATA_OFFSET + 0x3FC)))
#define PORTE_FULL_GPIODATA         (*((volatile uint32*)(CORTEXM4_PORTC_APB_BASE_ADDRESS + GPIODATA_OFFSET + 0x3FC)))
#define PORTF_FULL_GPIODATA         (*((volatile uint32*)(CORTEXM4_PORTC_APB_BASE_ADDRESS + GPIODATA_OFFSET + 0x3FC)))

#define PORTA_CHANNEL(BIT_NUMBER)   (*((volatile uint32*)(BIT_BAND_ALIAS_BASE_ADDRESS + ((CORTEXM4_PORTA_APB_BASE_ADDRESS + 0x3FC - BIT_BAND_BASE_ADDRESS) * 32) + (BIT_NUMBER * 4))))
#define PORTB_CHANNEL(BIT_NUMBER)   (*((volatile uint32*)(BIT_BAND_ALIAS_BASE_ADDRESS + ((CORTEXM4_PORTB_APB_BASE_ADDRESS + 0x3FC - BIT_BAND_BASE_ADDRESS) * 32) + (BIT_NUMBER * 4))))
#define PORTC_CHANNEL(BIT_NUMBER)   (*((volatile uint32*)(BIT_BAND_ALIAS_BASE_ADDRESS + ((CORTEXM4_PORTC_APB_BASE_ADDRESS + 0x3FC - BIT_BAND_BASE_ADDRESS) * 32) + (BIT_NUMBER * 4))))
#define PORTD_CHANNEL(BIT_NUMBER)   (*((volatile uint32*)(BIT_BAND_ALIAS_BASE_ADDRESS + ((CORTEXM4_PORTD_APB_BASE_ADDRESS + 0x3FC - BIT_BAND_BASE_ADDRESS) * 32) + (BIT_NUMBER * 4))))
#define PORTE_CHANNEL(BIT_NUMBER)   (*((volatile uint32*)(BIT_BAND_ALIAS_BASE_ADDRESS + ((CORTEXM4_PORTE_APB_BASE_ADDRESS + 0x3FC - BIT_BAND_BASE_ADDRESS) * 32) + (BIT_NUMBER * 4))))
#define PORTF_CHANNEL(BIT_NUMBER)   (*((volatile uint32*)(BIT_BAND_ALIAS_BASE_ADDRESS + ((CORTEXM4_PORTF_APB_BASE_ADDRESS + 0x3FC - BIT_BAND_BASE_ADDRESS) * 32) + (BIT_NUMBER * 4))))

#define PORTA_FULL_GPIODIR          (*((volatile uint32*)(CORTEXM4_PORTA_APB_BASE_ADDRESS + GPIODIR_OFFSET)))
#define PORTB_FULL_GPIODIR          (*((volatile uint32*)(CORTEXM4_PORTB_APB_BASE_ADDRESS + GPIODIR_OFFSET)))
#define PORTC_FULL_GPIODIR          (*((volatile uint32*)(CORTEXM4_PORTC_APB_BASE_ADDRESS + GPIODIR_OFFSET)))
#define PORTD_FULL_GPIODIR          (*((volatile uint32*)(CORTEXM4_PORTD_APB_BASE_ADDRESS + GPIODIR_OFFSET)))
#define PORTE_FULL_GPIODIR          (*((volatile uint32*)(CORTEXM4_PORTC_APB_BASE_ADDRESS + GPIODIR_OFFSET)))
#define PORTF_FULL_GPIODIR          (*((volatile uint32*)(CORTEXM4_PORTC_APB_BASE_ADDRESS + GPIODIR_OFFSET)))

#define SYSTEM_CONTROL_BASE_ADDRESS 0x400FE000
#define RCGCGPIO_OFFSET 0x608
#define SYSCTL_RCGCGPIO             (*((volatile uint32*)(SYSTEM_CONTROL_BASE_ADDRESS + RCGCGPIO_OFFSET)))

/************************************************GPT Registers********************************************************/
#define CORTEXM4_TIMER1632_0_BASE_ADDRESS   0x40030000
#define CORTEXM4_TIMER1632_1_BASE_ADDRESS   0x40031000
#define CORTEXM4_TIMER1632_2_BASE_ADDRESS   0x40032000
#define CORTEXM4_TIMER1632_3_BASE_ADDRESS   0x40033000
#define CORTEXM4_TIMER1632_4_BASE_ADDRESS   0x40034000
#define CORTEXM4_TIMER1632_5_BASE_ADDRESS   0x40035000
#define CORTEXM4_TIMER3264_0_BASE_ADDRESS   0x40036000
#define CORTEXM4_TIMER3264_1_BASE_ADDRESS   0x40037000
#define CORTEXM4_TIMER3264_2_BASE_ADDRESS   0x4004C000
#define CORTEXM4_TIMER3264_3_BASE_ADDRESS   0x4004D000
#define CORTEXM4_TIMER3264_4_BASE_ADDRESS   0x4004E000
#define CORTEXM4_TIMER3264_5_BASE_ADDRESS   0x4004F000

#define GPTMCFG_OFFSET      0x000
#define GPTMTAMR_OFFSET     0x004
#define GPTMCTL_OFFSET      0x00C
#define GPTMIMR_OFFSET      0x018
#define GPTMTAMATCHR_OFFSET 0x030
#define GPTMTAV_OFFSET      0x050

#define TIMER1632_0_GPTMCFG         (*((volatile uint32*)(CORTEXM4_TIMER1632_0_BASE_ADDRESS + GPTMCFG_OFFSET)))
#define TIMER1632_1_GPTMCFG         (*((volatile uint32*)(CORTEXM4_TIMER1632_1_BASE_ADDRESS + GPTMCFG_OFFSET)))
#define TIMER1632_2_GPTMCFG         (*((volatile uint32*)(CORTEXM4_TIMER1632_2_BASE_ADDRESS + GPTMCFG_OFFSET)))
#define TIMER1632_3_GPTMCFG         (*((volatile uint32*)(CORTEXM4_TIMER1632_3_BASE_ADDRESS + GPTMCFG_OFFSET)))
#define TIMER1632_4_GPTMCFG         (*((volatile uint32*)(CORTEXM4_TIMER1632_4_BASE_ADDRESS + GPTMCFG_OFFSET)))
#define TIMER1632_5_GPTMCFG         (*((volatile uint32*)(CORTEXM4_TIMER1632_5_BASE_ADDRESS + GPTMCFG_OFFSET)))
#define TIMER3264_0_GPTMCFG         (*((volatile uint32*)(CORTEXM4_TIMER3264_0_BASE_ADDRESS + GPTMCFG_OFFSET)))
#define TIMER3264_1_GPTMCFG         (*((volatile uint32*)(CORTEXM4_TIMER3264_1_BASE_ADDRESS + GPTMCFG_OFFSET)))
#define TIMER3264_2_GPTMCFG         (*((volatile uint32*)(CORTEXM4_TIMER3264_2_BASE_ADDRESS + GPTMCFG_OFFSET)))
#define TIMER3264_3_GPTMCFG         (*((volatile uint32*)(CORTEXM4_TIMER3264_3_BASE_ADDRESS + GPTMCFG_OFFSET)))
#define TIMER3264_4_GPTMCFG         (*((volatile uint32*)(CORTEXM4_TIMER3264_4_BASE_ADDRESS + GPTMCFG_OFFSET)))
#define TIMER3264_5_GPTMCFG         (*((volatile uint32*)(CORTEXM4_TIMER3264_5_BASE_ADDRESS + GPTMCFG_OFFSET)))

#define TIMER1632_0_GPTMTAMR         (*((volatile GPTMTAMR_TAG*)(CORTEXM4_TIMER1632_0_BASE_ADDRESS + GPTMTAMR_OFFSET)))
#define TIMER1632_1_GPTMTAMR         (*((volatile GPTMTAMR_TAG*)(CORTEXM4_TIMER1632_1_BASE_ADDRESS + GPTMTAMR_OFFSET)))
#define TIMER1632_2_GPTMTAMR         (*((volatile GPTMTAMR_TAG*)(CORTEXM4_TIMER1632_2_BASE_ADDRESS + GPTMTAMR_OFFSET)))
#define TIMER1632_3_GPTMTAMR         (*((volatile GPTMTAMR_TAG*)(CORTEXM4_TIMER1632_3_BASE_ADDRESS + GPTMTAMR_OFFSET)))
#define TIMER1632_4_GPTMTAMR         (*((volatile GPTMTAMR_TAG*)(CORTEXM4_TIMER1632_4_BASE_ADDRESS + GPTMTAMR_OFFSET)))
#define TIMER1632_5_GPTMTAMR         (*((volatile GPTMTAMR_TAG*)(CORTEXM4_TIMER1632_5_BASE_ADDRESS + GPTMTAMR_OFFSET)))
#define TIMER3264_0_GPTMTAMR         (*((volatile GPTMTAMR_TAG*)(CORTEXM4_TIMER3264_0_BASE_ADDRESS + GPTMTAMR_OFFSET)))
#define TIMER3264_1_GPTMTAMR         (*((volatile GPTMTAMR_TAG*)(CORTEXM4_TIMER3264_1_BASE_ADDRESS + GPTMTAMR_OFFSET)))
#define TIMER3264_2_GPTMTAMR         (*((volatile GPTMTAMR_TAG*)(CORTEXM4_TIMER3264_2_BASE_ADDRESS + GPTMTAMR_OFFSET)))
#define TIMER3264_3_GPTMTAMR         (*((volatile GPTMTAMR_TAG*)(CORTEXM4_TIMER3264_3_BASE_ADDRESS + GPTMTAMR_OFFSET)))
#define TIMER3264_4_GPTMTAMR         (*((volatile GPTMTAMR_TAG*)(CORTEXM4_TIMER3264_4_BASE_ADDRESS + GPTMTAMR_OFFSET)))
#define TIMER3264_5_GPTMTAMR         (*((volatile GPTMTAMR_TAG*)(CORTEXM4_TIMER3264_5_BASE_ADDRESS + GPTMTAMR_OFFSET)))

#define TIMER1632_0_GPTMCTL         (*((volatile GPTMCTL_TAG*)(CORTEXM4_TIMER1632_0_BASE_ADDRESS + GPTMCTL_OFFSET)))
#define TIMER1632_1_GPTMCTL         (*((volatile GPTMCTL_TAG*)(CORTEXM4_TIMER1632_1_BASE_ADDRESS + GPTMCTL_OFFSET)))
#define TIMER1632_2_GPTMCTL         (*((volatile GPTMCTL_TAG*)(CORTEXM4_TIMER1632_2_BASE_ADDRESS + GPTMCTL_OFFSET)))
#define TIMER1632_3_GPTMCTL         (*((volatile GPTMCTL_TAG*)(CORTEXM4_TIMER1632_3_BASE_ADDRESS + GPTMCTL_OFFSET)))
#define TIMER1632_4_GPTMCTL         (*((volatile GPTMCTL_TAG*)(CORTEXM4_TIMER1632_4_BASE_ADDRESS + GPTMCTL_OFFSET)))
#define TIMER1632_5_GPTMCTL         (*((volatile GPTMCTL_TAG*)(CORTEXM4_TIMER1632_5_BASE_ADDRESS + GPTMCTL_OFFSET)))
#define TIMER3264_0_GPTMCTL         (*((volatile GPTMCTL_TAG*)(CORTEXM4_TIMER3264_0_BASE_ADDRESS + GPTMCTL_OFFSET)))
#define TIMER3264_1_GPTMCTL         (*((volatile GPTMCTL_TAG*)(CORTEXM4_TIMER3264_1_BASE_ADDRESS + GPTMCTL_OFFSET)))
#define TIMER3264_2_GPTMCTL         (*((volatile GPTMCTL_TAG*)(CORTEXM4_TIMER3264_2_BASE_ADDRESS + GPTMCTL_OFFSET)))
#define TIMER3264_3_GPTMCTL         (*((volatile GPTMCTL_TAG*)(CORTEXM4_TIMER3264_3_BASE_ADDRESS + GPTMCTL_OFFSET)))
#define TIMER3264_4_GPTMCTL         (*((volatile GPTMCTL_TAG*)(CORTEXM4_TIMER3264_4_BASE_ADDRESS + GPTMCTL_OFFSET)))
#define TIMER3264_5_GPTMCTL         (*((volatile GPTMCTL_TAG*)(CORTEXM4_TIMER3264_5_BASE_ADDRESS + GPTMCTL_OFFSET)))

#define TIMER1632_0_GPTMIMR         (*((volatile GPTMIMR_TAG*)(CORTEXM4_TIMER1632_0_BASE_ADDRESS + GPTMIMR_OFFSET)))
#define TIMER1632_1_GPTMIMR         (*((volatile GPTMIMR_TAG*)(CORTEXM4_TIMER1632_1_BASE_ADDRESS + GPTMIMR_OFFSET)))
#define TIMER1632_2_GPTMIMR         (*((volatile GPTMIMR_TAG*)(CORTEXM4_TIMER1632_2_BASE_ADDRESS + GPTMIMR_OFFSET)))
#define TIMER1632_3_GPTMIMR         (*((volatile GPTMIMR_TAG*)(CORTEXM4_TIMER1632_3_BASE_ADDRESS + GPTMIMR_OFFSET)))
#define TIMER1632_4_GPTMIMR         (*((volatile GPTMIMR_TAG*)(CORTEXM4_TIMER1632_4_BASE_ADDRESS + GPTMIMR_OFFSET)))
#define TIMER1632_5_GPTMIMR         (*((volatile GPTMIMR_TAG*)(CORTEXM4_TIMER1632_5_BASE_ADDRESS + GPTMIMR_OFFSET)))
#define TIMER3264_0_GPTMIMR         (*((volatile GPTMIMR_TAG*)(CORTEXM4_TIMER3264_0_BASE_ADDRESS + GPTMIMR_OFFSET)))
#define TIMER3264_1_GPTMIMR         (*((volatile GPTMIMR_TAG*)(CORTEXM4_TIMER3264_1_BASE_ADDRESS + GPTMIMR_OFFSET)))
#define TIMER3264_2_GPTMIMR         (*((volatile GPTMIMR_TAG*)(CORTEXM4_TIMER3264_2_BASE_ADDRESS + GPTMIMR_OFFSET)))
#define TIMER3264_3_GPTMIMR         (*((volatile GPTMIMR_TAG*)(CORTEXM4_TIMER3264_3_BASE_ADDRESS + GPTMIMR_OFFSET)))
#define TIMER3264_4_GPTMIMR         (*((volatile GPTMIMR_TAG*)(CORTEXM4_TIMER3264_4_BASE_ADDRESS + GPTMIMR_OFFSET)))
#define TIMER3264_5_GPTMIMR         (*((volatile GPTMIMR_TAG*)(CORTEXM4_TIMER3264_5_BASE_ADDRESS + GPTMIMR_OFFSET)))

#define TIMER1632_0_GPTMTAMATCHR    (*((volatile uint32*)(CORTEXM4_TIMER1632_0_BASE_ADDRESS + GPTMTAMATCHR_OFFSET)))
#define TIMER1632_1_GPTMTAMATCHR    (*((volatile uint32*)(CORTEXM4_TIMER1632_1_BASE_ADDRESS + GPTMTAMATCHR_OFFSET)))
#define TIMER1632_2_GPTMTAMATCHR    (*((volatile uint32*)(CORTEXM4_TIMER1632_2_BASE_ADDRESS + GPTMTAMATCHR_OFFSET)))
#define TIMER1632_3_GPTMTAMATCHR    (*((volatile uint32*)(CORTEXM4_TIMER1632_3_BASE_ADDRESS + GPTMTAMATCHR_OFFSET)))
#define TIMER1632_4_GPTMTAMATCHR    (*((volatile uint32*)(CORTEXM4_TIMER1632_4_BASE_ADDRESS + GPTMTAMATCHR_OFFSET)))
#define TIMER1632_5_GPTMTAMATCHR    (*((volatile uint32*)(CORTEXM4_TIMER1632_5_BASE_ADDRESS + GPTMTAMATCHR_OFFSET)))
#define TIMER3264_0_GPTMTAMATCHR    (*((volatile uint32*)(CORTEXM4_TIMER3264_0_BASE_ADDRESS + GPTMTAMATCHR_OFFSET)))
#define TIMER3264_1_GPTMTAMATCHR    (*((volatile uint32*)(CORTEXM4_TIMER3264_1_BASE_ADDRESS + GPTMTAMATCHR_OFFSET)))
#define TIMER3264_2_GPTMTAMATCHR    (*((volatile uint32*)(CORTEXM4_TIMER3264_2_BASE_ADDRESS + GPTMTAMATCHR_OFFSET)))
#define TIMER3264_3_GPTMTAMATCHR    (*((volatile uint32*)(CORTEXM4_TIMER3264_3_BASE_ADDRESS + GPTMTAMATCHR_OFFSET)))
#define TIMER3264_4_GPTMTAMATCHR    (*((volatile uint32*)(CORTEXM4_TIMER3264_4_BASE_ADDRESS + GPTMTAMATCHR_OFFSET)))
#define TIMER3264_5_GPTMTAMATCHR    (*((volatile uint32*)(CORTEXM4_TIMER3264_5_BASE_ADDRESS + GPTMTAMATCHR_OFFSET)))

#define TIMER1632_0_GPTMTAV         (*((volatile uint32*)(CORTEXM4_TIMER1632_0_BASE_ADDRESS + GPTMTAV_OFFSET)))
#define TIMER1632_1_GPTMTAV         (*((volatile uint32*)(CORTEXM4_TIMER1632_1_BASE_ADDRESS + GPTMTAV_OFFSET)))
#define TIMER1632_2_GPTMTAV         (*((volatile uint32*)(CORTEXM4_TIMER1632_2_BASE_ADDRESS + GPTMTAV_OFFSET)))
#define TIMER1632_3_GPTMTAV         (*((volatile uint32*)(CORTEXM4_TIMER1632_3_BASE_ADDRESS + GPTMTAV_OFFSET)))
#define TIMER1632_4_GPTMTAV         (*((volatile uint32*)(CORTEXM4_TIMER1632_4_BASE_ADDRESS + GPTMTAV_OFFSET)))
#define TIMER1632_5_GPTMTAV         (*((volatile uint32*)(CORTEXM4_TIMER1632_5_BASE_ADDRESS + GPTMTAV_OFFSET)))
#define TIMER3264_0_GPTMTAV         (*((volatile uint32*)(CORTEXM4_TIMER3264_0_BASE_ADDRESS + GPTMTAV_OFFSET)))
#define TIMER3264_1_GPTMTAV         (*((volatile uint32*)(CORTEXM4_TIMER3264_1_BASE_ADDRESS + GPTMTAV_OFFSET)))
#define TIMER3264_2_GPTMTAV         (*((volatile uint32*)(CORTEXM4_TIMER3264_2_BASE_ADDRESS + GPTMTAV_OFFSET)))
#define TIMER3264_3_GPTMTAV         (*((volatile uint32*)(CORTEXM4_TIMER3264_3_BASE_ADDRESS + GPTMTAV_OFFSET)))
#define TIMER3264_4_GPTMTAV         (*((volatile uint32*)(CORTEXM4_TIMER3264_4_BASE_ADDRESS + GPTMTAV_OFFSET)))
#define TIMER3264_5_GPTMTAV         (*((volatile uint32*)(CORTEXM4_TIMER3264_5_BASE_ADDRESS + GPTMTAV_OFFSET)))

/************************************************NVIC and SCB Registers************************************************/
#define CORTEXM4_PERI_BASE_ADDRESS  0xE000E000
#define STCTRL                      (*((volatile STCTRL_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x010)))
#define STRELOAD                    (*((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS + 0x014)))
#define STCURRENT                   (*((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS + 0x014)))

#define EN0                         (*((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS + 0x100)))
#define EN1                         (*((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS + 0x104)))
#define EN2                         (*((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS + 0x108)))
#define EN3                         (*((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS + 0x10C)))
#define EN4                         (*((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS + 0x110)))
#define DIS0                        (*((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS + 0x180)))
#define DIS1                        (*((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS + 0x184)))
#define DIS2                        (*((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS + 0x188)))
#define DIS3                        (*((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS + 0x18C)))
#define DIS4                        (*((volatile uint32*)(CORTEXM4_PERI_BASE_ADDRESS + 0x190)))
#define PRI0                        (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x400)))
#define PRI1                        (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x404)))
#define PRI2                        (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x408)))
#define PRI3                        (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x40C)))
#define PRI4                        (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x410)))
#define PRI5                        (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x414)))
#define PRI6                        (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x418)))
#define PRI7                        (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x41C)))
#define PRI8                        (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x420)))
#define PRI9                        (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x424)))
#define PRI10                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x428)))
#define PRI11                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x42C)))
#define PRI12                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x430)))
#define PRI13                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x434)))
#define PRI14                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x438)))
#define PRI15                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x43C)))
#define PRI16                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x440)))
#define PRI17                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x444)))
#define PRI18                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x448)))
#define PRI19                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x44C)))
#define PRI20                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x450)))
#define PRI21                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x454)))
#define PRI22                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x458)))
#define PRI23                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x45C)))
#define PRI24                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x460)))
#define PRI25                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x464)))
#define PRI26                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x468)))
#define PRI27                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x46C)))
#define PRI28                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x470)))
#define PRI29                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x474)))
#define PRI30                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x478)))
#define PRI31                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x47C)))
#define PRI32                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x480)))
#define PRI33                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x484)))
#define PRI34                       (*((volatile PRIn_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0x488)))

#define INTCTRL                     (*((volatile INTCTRL_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0xD04)))
#define APINT                       (*((volatile APINT_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0xD0C)))
#define SYSPRI1                     (*((volatile SYSPRI1_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0xD18)))
#define SYSPRI2                     (*((volatile SYSPRI2_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0xD1C)))
#define SYSPRI3                     (*((volatile SYSPRI3_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0xD20)))
#define SYSHNDCTRL                  (*((volatile SYSHNDCTRL_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0xD24)))

/***************************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **************************************************************************************************************************/
 

#endif  /* MCU_HW_H */
 
/****************************************************************************************
 *  END OF FILE: Mcu_Hw.h
 ***************************************************************************************/
 