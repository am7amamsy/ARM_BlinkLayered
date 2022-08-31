/***************************************************************************************************************************
 *  FILE DESCRIPTION
 *  ----------------------------------------------------------------------------------------------------------------------*/
/**        \file GPT_Lcfg.c
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
#include "GPT_Lcfg.h"

/***************************************************************************************************************************
 *  LOCAL MACROS CONSTANT\FUNCTION
 **************************************************************************************************************************/
 
/***************************************************************************************************************************
 *  LOCAL DATA
 **************************************************************************************************************************/
const Gpt_ConfigType Gpt_ChannelConfig[NUMBER_OF_CHANNELS];
 
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
/*void Gpt_Init(const Gpt_ConfigType* configPtr)
{
	
	switch(configPtr->GptChannelId)
	{
		case TIMER1632_0:
			TIMER1632_0_GPTMCTL.B.TAEN = STD_LOW;
			TIMER1632_0_GPTMCFG = INDIVIDUAL;
			TIMER1632_0_GPTMTAMR.B.TAMR = configPtr->ChannelMode;
			TIMER1632_0_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER1632_1:
			TIMER1632_1_GPTMCTL.B.TAEN = STD_LOW;
			TIMER1632_1_GPTMCFG = INDIVIDUAL;
			TIMER1632_1_GPTMTAMR.B.TAMR = configPtr->ChannelMode;
			TIMER1632_1_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER1632_2:
			TIMER1632_2_GPTMCTL.B.TAEN = STD_LOW;
			TIMER1632_2_GPTMCFG = INDIVIDUAL;
			TIMER1632_2_GPTMTAMR.B.TAMR = configPtr->ChannelMode;
			TIMER1632_2_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER1632_3:
			TIMER1632_3_GPTMCTL.B.TAEN = STD_LOW;
			TIMER1632_3_GPTMCFG = INDIVIDUAL;
			TIMER1632_3_GPTMTAMR.B.TAMR = configPtr->ChannelMode;
			TIMER1632_3_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER1632_4:
			TIMER1632_4_GPTMCTL.B.TAEN = STD_LOW;
			TIMER1632_4_GPTMCFG = INDIVIDUAL;
			TIMER1632_4_GPTMTAMR.B.TAMR = configPtr->ChannelMode;
			TIMER1632_4_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER1632_5:
			TIMER1632_5_GPTMCTL.B.TAEN = STD_LOW;
			TIMER1632_5_GPTMCFG = INDIVIDUAL;
			TIMER1632_5_GPTMTAMR.B.TAMR = configPtr->ChannelMode;
			TIMER1632_5_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER3264_0:
			TIMER3264_0_GPTMCTL.B.TAEN = STD_LOW;
			TIMER3264_0_GPTMCFG = INDIVIDUAL;
			TIMER3264_0_GPTMTAMR.B.TAMR = configPtr->ChannelMode;
			TIMER3264_0_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER3264_1:
			TIMER3264_1_GPTMCTL.B.TAEN = STD_LOW;
			TIMER3264_1_GPTMCFG = INDIVIDUAL;
			TIMER3264_1_GPTMTAMR.B.TAMR = configPtr->ChannelMode;
			TIMER3264_1_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER3264_2:
			TIMER3264_2_GPTMCTL.B.TAEN = STD_LOW;
			TIMER3264_2_GPTMCFG = INDIVIDUAL;
			TIMER3264_2_GPTMTAMR.B.TAMR = configPtr->ChannelMode;
			TIMER3264_2_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER3264_3:
			TIMER3264_3_GPTMCTL.B.TAEN = STD_LOW;
			TIMER3264_3_GPTMCFG = INDIVIDUAL;
			TIMER3264_3_GPTMTAMR.B.TAMR = configPtr->ChannelMode;
			TIMER3264_3_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER3264_4:
			TIMER3264_4_GPTMCTL.B.TAEN = STD_LOW;
			TIMER3264_4_GPTMCFG = INDIVIDUAL;
			TIMER3264_4_GPTMTAMR.B.TAMR = configPtr->ChannelMode;
			TIMER3264_4_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER3264_5:
			TIMER3264_5_GPTMCTL.B.TAEN = STD_LOW;
			TIMER3264_5_GPTMCFG = INDIVIDUAL;
			TIMER3264_5_GPTMTAMR.B.TAMR = configPtr->ChannelMode;
			TIMER3264_5_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
	}
}

void Gpt_DisableNotification(Gpt_ChannelType channel)
{
	switch(channel)
	{
		case TIMER1632_0:
			TIMER1632_0_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER1632_1:
			TIMER1632_1_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER1632_2:
			TIMER1632_2_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER1632_3:
			TIMER1632_3_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER1632_4:
			TIMER1632_4_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER1632_5:
			TIMER1632_5_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER3264_0:
			TIMER3264_0_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER3264_1:
			TIMER3264_1_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER3264_2:
			TIMER3264_2_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER3264_3:
			TIMER3264_3_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER3264_4:
			TIMER3264_4_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
		case TIMER3264_5:
			TIMER3264_5_GPTMTAMR.B.TAMIE = STD_LOW;
			break;
	}
}

void Gpt_EnableNotification(Gpt_ChannelType channel)
{
	switch(channel)
	{
		case TIMER1632_0:
			TIMER1632_0_GPTMTAMR.B.TAMIE = STD_HIGH;
			break;
		case TIMER1632_1:
			TIMER1632_1_GPTMTAMR.B.TAMIE = STD_HIGH;
			break;
		case TIMER1632_2:
			TIMER1632_2_GPTMTAMR.B.TAMIE = STD_HIGH;
			break;
		case TIMER1632_3:
			TIMER1632_3_GPTMTAMR.B.TAMIE = STD_HIGH;
			break;
		case TIMER1632_4:
			TIMER1632_4_GPTMTAMR.B.TAMIE = STD_HIGH;
			break;
		case TIMER1632_5:
			TIMER1632_5_GPTMTAMR.B.TAMIE = STD_HIGH;
			break;
		case TIMER3264_0:
			TIMER3264_0_GPTMTAMR.B.TAMIE = STD_HIGH;
			break;
		case TIMER3264_1:
			TIMER3264_1_GPTMTAMR.B.TAMIE = STD_HIGH;
			break;
		case TIMER3264_2:
			TIMER3264_2_GPTMTAMR.B.TAMIE = STD_HIGH;
			break;
		case TIMER3264_3:
			TIMER3264_3_GPTMTAMR.B.TAMIE = STD_HIGH;
			break;
		case TIMER3264_4:
			TIMER3264_4_GPTMTAMR.B.TAMIE = STD_HIGH;
			break;
		case TIMER3264_5:
			TIMER3264_5_GPTMTAMR.B.TAMIE = STD_HIGH;
			break;
	}
}

void Gpt_StartTimer(Gpt_ChannelType channel, Gpt_ValueType value)
{
	switch(channel)
	{
		case TIMER1632_0:
			TIMER1632_0_GPTMCTL.B.TAEN = STD_HIGH;
			TIMER1632_0_GPTMTAMATCHR = value;
			break;
		case TIMER1632_1:
			TIMER1632_1_GPTMCTL.B.TAEN = STD_HIGH;
			TIMER1632_1_GPTMTAMATCHR = value;
			break;
		case TIMER1632_2:
			TIMER1632_2_GPTMCTL.B.TAEN = STD_HIGH;
			TIMER1632_2_GPTMTAMATCHR = value;
			break;
		case TIMER1632_3:
			TIMER1632_3_GPTMCTL.B.TAEN = STD_HIGH;
			TIMER1632_3_GPTMTAMATCHR = value;
			break;
		case TIMER1632_4:
			TIMER1632_4_GPTMCTL.B.TAEN = STD_HIGH;
			TIMER1632_4_GPTMTAMATCHR = value;
			break;
		case TIMER1632_5:
			TIMER1632_5_GPTMCTL.B.TAEN = STD_HIGH;
			TIMER1632_5_GPTMTAMATCHR = value;
			break;
		case TIMER3264_0:
			TIMER3264_0_GPTMCTL.B.TAEN = STD_HIGH;
			TIMER3264_0_GPTMTAMATCHR = value;
			break;
		case TIMER3264_1:
			TIMER3264_1_GPTMCTL.B.TAEN = STD_HIGH;
			TIMER3264_1_GPTMTAMATCHR = value;
			break;
		case TIMER3264_2:
			TIMER3264_2_GPTMCTL.B.TAEN = STD_HIGH;
			TIMER3264_2_GPTMTAMATCHR = value;
			break;
		case TIMER3264_3:
			TIMER3264_3_GPTMCTL.B.TAEN = STD_HIGH;
			TIMER3264_3_GPTMTAMATCHR = value;
			break;
		case TIMER3264_4:
			TIMER3264_4_GPTMCTL.B.TAEN = STD_HIGH;
			TIMER3264_4_GPTMTAMATCHR = value;
			break;
		case TIMER3264_5:
			TIMER3264_5_GPTMCTL.B.TAEN = STD_HIGH;
			TIMER3264_5_GPTMTAMATCHR = value;
			break;
	}
}*/
/*
void Gpt_StopTimer(Gpt_ChannelType channel);
void Gpt_Notification(void);
Gpt_ValueType Gpt_GetTimeElapsed(Gpt_ChannelType channel);
Gpt_ValueType Gpt_GetTimeRemaining(Gpt_ChannelType channel);*/
//Std_ReturnType Gpt_GetPredefTimerValue(Gpt_PredefTimerType predefTimer, uint32* timeValuePtr){}

 
/****************************************************************************************
 *  END OF FILE: GPT_Lcfg.c
 ***************************************************************************************/
 