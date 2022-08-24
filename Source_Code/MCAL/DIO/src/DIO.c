/***************************************************************************************************************************
 *  FILE DESCRIPTION
 *  ----------------------------------------------------------------------------------------------------------------------*/
/**        \file DIO.c
 *        \brief General purpose input/output pins driver
 *
 *      \details The driver configures the levels of the input/output pins and ports
 *
 *
 **************************************************************************************************************************/
 
/***************************************************************************************************************************
 *  INCLUDES
 **************************************************************************************************************************/
#include "Std_Types.h"
#include "DIO.h"
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
Dio_LevelType Dio_ReadChannel(Dio_ChannelType channelId)
{
	uint8 level = STD_LOW;
	switch(channelId)
	{
		case PORTA_CHANNEL0:
			level = PORTA_CHANNEL0_GPIODATA;
			break;
		case PORTA_CHANNEL1:
			level = PORTA_CHANNEL1_GPIODATA;
			break;
		case PORTA_CHANNEL2:
			level = PORTA_CHANNEL2_GPIODATA;
			break;
		case PORTA_CHANNEL3:
			level = PORTA_CHANNEL3_GPIODATA;
			break;
		case PORTA_CHANNEL4:
			level = PORTA_CHANNEL4_GPIODATA;
			break;
		case PORTA_CHANNEL5:
			level = PORTA_CHANNEL5_GPIODATA;
			break;
		case PORTA_CHANNEL6:
			level = PORTA_CHANNEL6_GPIODATA;
			break;
		case PORTA_CHANNEL7:
			level = PORTA_CHANNEL7_GPIODATA;
			break;
		case PORTB_CHANNEL0:
			level = PORTB_CHANNEL0_GPIODATA;
			break;
		case PORTB_CHANNEL1:
			level = PORTB_CHANNEL1_GPIODATA;
			break;
		case PORTB_CHANNEL2:
			level = PORTB_CHANNEL2_GPIODATA;
			break;
		case PORTB_CHANNEL3:
			level = PORTB_CHANNEL3_GPIODATA;
			break;
		case PORTB_CHANNEL4:
			level = PORTB_CHANNEL4_GPIODATA;
			break;
		case PORTB_CHANNEL5:
			level = PORTB_CHANNEL5_GPIODATA;
			break;
		case PORTB_CHANNEL6:
			level = PORTB_CHANNEL6_GPIODATA;
			break;
		case PORTB_CHANNEL7:
			level = PORTB_CHANNEL7_GPIODATA;
			break;
		case PORTC_CHANNEL0:
			level = PORTC_CHANNEL0_GPIODATA;
			break;
		case PORTC_CHANNEL1:
			level = PORTC_CHANNEL1_GPIODATA;
			break;
		case PORTC_CHANNEL2:
			level = PORTC_CHANNEL2_GPIODATA;
			break;
		case PORTC_CHANNEL3:
			level = PORTC_CHANNEL3_GPIODATA;
			break;
		case PORTC_CHANNEL4:
			level = PORTC_CHANNEL4_GPIODATA;
			break;
		case PORTC_CHANNEL5:
			level = PORTC_CHANNEL5_GPIODATA;
			break;
		case PORTC_CHANNEL6:
			level = PORTC_CHANNEL6_GPIODATA;
			break;
		case PORTC_CHANNEL7:
			level = PORTC_CHANNEL7_GPIODATA;
			break;
		case PORTD_CHANNEL0:
			level = PORTD_CHANNEL0_GPIODATA;
			break;
		case PORTD_CHANNEL1:
			level = PORTD_CHANNEL1_GPIODATA;
			break;
		case PORTD_CHANNEL2:
			level = PORTD_CHANNEL2_GPIODATA;
			break;
		case PORTD_CHANNEL3:
			level = PORTD_CHANNEL3_GPIODATA;
			break;
		case PORTD_CHANNEL4:
			level = PORTD_CHANNEL4_GPIODATA;
			break;
		case PORTD_CHANNEL5:
			level = PORTD_CHANNEL5_GPIODATA;
			break;
		case PORTD_CHANNEL6:
			level = PORTD_CHANNEL6_GPIODATA;
			break;
		case PORTD_CHANNEL7:
			level = PORTD_CHANNEL7_GPIODATA;
			break;
		case PORTE_CHANNEL0:
			level = PORTE_CHANNEL0_GPIODATA;
			break;
		case PORTE_CHANNEL1:
			level = PORTE_CHANNEL1_GPIODATA;
			break;
		case PORTE_CHANNEL2:
			level = PORTE_CHANNEL2_GPIODATA;
			break;
		case PORTE_CHANNEL3:
			level = PORTE_CHANNEL3_GPIODATA;
			break;
		case PORTE_CHANNEL4:
			level = PORTE_CHANNEL4_GPIODATA;
			break;
		case PORTE_CHANNEL5:
			level = PORTE_CHANNEL5_GPIODATA;
			break;
		case PORTF_CHANNEL0:
			level = PORTF_CHANNEL0_GPIODATA;
			break;
		case PORTF_CHANNEL1:
			level = PORTF_CHANNEL1_GPIODATA;
			break;
		case PORTF_CHANNEL2:
			level = PORTF_CHANNEL2_GPIODATA;
			break;
		case PORTF_CHANNEL3:
			level = PORTF_CHANNEL3_GPIODATA;
			break;
		case PORTF_CHANNEL4:
			level = PORTF_CHANNEL4_GPIODATA;
			break;
	}
	return level;
}

void Dio_WriteChannel(Dio_ChannelType channelId, Dio_LevelType level)
{
	switch(channelId)
	{
		case PORTA_CHANNEL0:
			PORTA_CHANNEL0_GPIODATA = level;
			break;
		case PORTA_CHANNEL1:
			PORTA_CHANNEL1_GPIODATA = level;
			break;
		case PORTA_CHANNEL2:
			PORTA_CHANNEL2_GPIODATA = level;
			break;
		case PORTA_CHANNEL3:
			PORTA_CHANNEL3_GPIODATA = level;
			break;
		case PORTA_CHANNEL4:
			PORTA_CHANNEL4_GPIODATA = level;
			break;
		case PORTA_CHANNEL5:
			PORTA_CHANNEL5_GPIODATA = level;
			break;
		case PORTA_CHANNEL6:
			PORTA_CHANNEL6_GPIODATA = level;
			break;
		case PORTA_CHANNEL7:
			PORTA_CHANNEL7_GPIODATA = level;
			break;
		case PORTB_CHANNEL0:
			PORTB_CHANNEL0_GPIODATA = level;
			break;
		case PORTB_CHANNEL1:
			PORTB_CHANNEL1_GPIODATA = level;
			break;
		case PORTB_CHANNEL2:
			PORTB_CHANNEL2_GPIODATA = level;
			break;
		case PORTB_CHANNEL3:
			PORTB_CHANNEL3_GPIODATA = level;
			break;
		case PORTB_CHANNEL4:
			PORTB_CHANNEL4_GPIODATA = level;
			break;
		case PORTB_CHANNEL5:
			PORTB_CHANNEL5_GPIODATA = level;
			break;
		case PORTB_CHANNEL6:
			PORTB_CHANNEL6_GPIODATA = level;
			break;
		case PORTB_CHANNEL7:
			PORTB_CHANNEL7_GPIODATA = level;
			break;
		case PORTC_CHANNEL0:
			PORTC_CHANNEL0_GPIODATA = level;
			break;
		case PORTC_CHANNEL1:
			PORTC_CHANNEL1_GPIODATA = level;
			break;
		case PORTC_CHANNEL2:
			PORTC_CHANNEL2_GPIODATA = level;
			break;
		case PORTC_CHANNEL3:
			PORTC_CHANNEL3_GPIODATA = level;
			break;
		case PORTC_CHANNEL4:
			PORTC_CHANNEL4_GPIODATA = level;
			break;
		case PORTC_CHANNEL5:
			PORTC_CHANNEL5_GPIODATA = level;
			break;
		case PORTC_CHANNEL6:
			PORTC_CHANNEL6_GPIODATA = level;
			break;
		case PORTC_CHANNEL7:
			PORTC_CHANNEL7_GPIODATA = level;
			break;
		case PORTD_CHANNEL0:
			PORTD_CHANNEL0_GPIODATA = level;
			break;
		case PORTD_CHANNEL1:
			PORTD_CHANNEL1_GPIODATA = level;
			break;
		case PORTD_CHANNEL2:
			PORTD_CHANNEL2_GPIODATA = level;
			break;
		case PORTD_CHANNEL3:
			PORTD_CHANNEL3_GPIODATA = level;
			break;
		case PORTD_CHANNEL4:
			PORTD_CHANNEL4_GPIODATA = level;
			break;
		case PORTD_CHANNEL5:
			PORTD_CHANNEL5_GPIODATA = level;
			break;
		case PORTD_CHANNEL6:
			PORTD_CHANNEL6_GPIODATA = level;
			break;
		case PORTD_CHANNEL7:
			PORTD_CHANNEL7_GPIODATA = level;
			break;
		case PORTE_CHANNEL0:
			PORTE_CHANNEL0_GPIODATA = level;
			break;
		case PORTE_CHANNEL1:
			PORTE_CHANNEL1_GPIODATA = level;
			break;
		case PORTE_CHANNEL2:
			PORTE_CHANNEL2_GPIODATA = level;
			break;
		case PORTE_CHANNEL3:
			PORTE_CHANNEL3_GPIODATA = level;
			break;
		case PORTE_CHANNEL4:
			PORTE_CHANNEL4_GPIODATA = level;
			break;
		case PORTE_CHANNEL5:
			PORTE_CHANNEL5_GPIODATA = level;
			break;
		case PORTF_CHANNEL0:
			PORTF_CHANNEL0_GPIODATA = level;
			break;
		case PORTF_CHANNEL1:
			PORTF_CHANNEL1_GPIODATA = level;
			break;
		case PORTF_CHANNEL2:
			PORTF_CHANNEL2_GPIODATA = level;
			break;
		case PORTF_CHANNEL3:
			PORTF_CHANNEL3_GPIODATA = level;
			break;
		case PORTF_CHANNEL4:
			PORTF_CHANNEL4_GPIODATA = level;
			break;
	}
}

Dio_PortLevelType Dio_ReadPort(Dio_PortType portId)
{
	uint8 level = STD_LOW;
	switch(portId)
	{
		case PORTA:
			level = PORTA_FULL_GPIODATA;
			break;
		case PORTB:
			level = PORTB_FULL_GPIODATA;
			break;
		case PORTC:
			level = PORTC_FULL_GPIODATA;
			break;
		case PORTD:
			level = PORTD_FULL_GPIODATA;
			break;
		case PORTE:
			level = PORTE_FULL_GPIODATA;
			break;
		case PORTF:
			level = PORTF_FULL_GPIODATA;
			break;
	}
	return level;
}

void Dio_WritePort(Dio_PortType portId, Dio_PortLevelType level)
{
	switch(portId)
	{
		case PORTA:
			PORTA_FULL_GPIODATA = level;
			break;
		case PORTB:
			PORTB_FULL_GPIODATA = level;
			break;
		case PORTC:
			PORTC_FULL_GPIODATA = level;
			break;
		case PORTD:
			PORTD_FULL_GPIODATA = level;
			break;
		case PORTE:
			PORTE_FULL_GPIODATA = level;
			break;
		case PORTF:
			PORTF_FULL_GPIODATA = level;
			break;
	}
}

Dio_LevelType Dio_FlipChannel(Dio_ChannelType channelId)
{
	/*TODO: Use the bit alias region to be reentrant*/
	return STD_LOW;
}

/****************************************************************************************
 *  END OF FILE: FileName.c
 ***************************************************************************************/
 