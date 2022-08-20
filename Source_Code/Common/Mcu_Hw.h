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

/***************************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **************************************************************************************************************************/
#define CORTEXM4_PERI_BASE_ADDRESS  0xE000E000
#define APINT                       (*((volatile APINT_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0xD0C)))
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
#define SYSPRI1                     (*((volatile SYSPRI1_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0xD18)))
#define SYSPRI2                     (*((volatile SYSPRI2_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0xD1C)))
#define SYSPRI3                     (*((volatile SYSPRI3_TAG*)(CORTEXM4_PERI_BASE_ADDRESS + 0xD20)))

/***************************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **************************************************************************************************************************/
 

#endif  /* MCU_HW_H */
 
/****************************************************************************************
 *  END OF FILE: Mcu_Hw.h
 ***************************************************************************************/
 