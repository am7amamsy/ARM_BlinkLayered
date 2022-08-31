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
void GPIO_Init(void)
{
	SYSCTL_RCGCGPIO |= 0x3F;
}

Dio_LevelType Dio_ReadChannel(Dio_ChannelType channelId)
{
	Dio_LevelType level = STD_LOW;
	switch(channelId)
	{
		case PORTA_CHANNEL0:
			level = PORTA_CHANNEL(0);
			break;
		case PORTA_CHANNEL1:
			level = PORTA_CHANNEL(1);
			break;
		case PORTA_CHANNEL2:
			level = PORTA_CHANNEL(2);
			break;
		case PORTA_CHANNEL3:
			level = PORTA_CHANNEL(3);
			break;
		case PORTA_CHANNEL4:
			level = PORTA_CHANNEL(4);
			break;
		case PORTA_CHANNEL5:
			level = PORTA_CHANNEL(5);
			break;
		case PORTA_CHANNEL6:
			level = PORTA_CHANNEL(6);
			break;
		case PORTA_CHANNEL7:
			level = PORTA_CHANNEL(7);
			break;
		case PORTB_CHANNEL0:
			level = PORTB_CHANNEL(0);
			break;
		case PORTB_CHANNEL1:
			level = PORTB_CHANNEL1;
			break;
		case PORTB_CHANNEL2:
			level = PORTB_CHANNEL(2);
			break;
		case PORTB_CHANNEL3:
			level = PORTB_CHANNEL(3);
			break;
		case PORTB_CHANNEL4:
			level = PORTB_CHANNEL(4);
			break;
		case PORTB_CHANNEL5:
			level = PORTB_CHANNEL(5);
			break;
		case PORTB_CHANNEL6:
			level = PORTB_CHANNEL(6);
			break;
		case PORTB_CHANNEL7:
			level = PORTB_CHANNEL(7);
			break;
		case PORTC_CHANNEL0:
			level = PORTC_CHANNEL(0);
			break;
		case PORTC_CHANNEL1:
			level = PORTC_CHANNEL1;
			break;
		case PORTC_CHANNEL2:
			level = PORTC_CHANNEL(2);
			break;
		case PORTC_CHANNEL3:
			level = PORTC_CHANNEL(3);
			break;
		case PORTC_CHANNEL4:
			level = PORTC_CHANNEL(4);
			break;
		case PORTC_CHANNEL5:
			level = PORTC_CHANNEL(5);
			break;
		case PORTC_CHANNEL6:
			level = PORTC_CHANNEL(6);
			break;
		case PORTC_CHANNEL7:
			level = PORTC_CHANNEL(7);
			break;
		case PORTD_CHANNEL0:
			level = PORTD_CHANNEL(0);
			break;
		case PORTD_CHANNEL1:
			level = PORTD_CHANNEL1;
			break;
		case PORTD_CHANNEL2:
			level = PORTD_CHANNEL(2);
			break;
		case PORTD_CHANNEL3:
			level = PORTD_CHANNEL(3);
			break;
		case PORTD_CHANNEL4:
			level = PORTD_CHANNEL(4);
			break;
		case PORTD_CHANNEL5:
			level = PORTD_CHANNEL(5);
			break;
		case PORTD_CHANNEL6:
			level = PORTD_CHANNEL(6);
			break;
		case PORTD_CHANNEL7:
			level = PORTD_CHANNEL(7);
			break;
		case PORTE_CHANNEL0:
			level = PORTE_CHANNEL(0);
			break;
		case PORTE_CHANNEL1:
			level = PORTE_CHANNEL1;
			break;
		case PORTE_CHANNEL2:
			level = PORTE_CHANNEL(2);
			break;
		case PORTE_CHANNEL3:
			level = PORTE_CHANNEL(3);
			break;
		case PORTE_CHANNEL4:
			level = PORTE_CHANNEL(4);
			break;
		case PORTE_CHANNEL5:
			level = PORTE_CHANNEL(5);
			break;
		case PORTF_CHANNEL0:
			level = PORTF_CHANNEL(0);
			break;
		case PORTF_CHANNEL1:
			level = PORTF_CHANNEL1;
			break;
		case PORTF_CHANNEL2:
			level = PORTF_CHANNEL(2);
			break;
		case PORTF_CHANNEL3:
			level = PORTF_CHANNEL(3);
			break;
		case PORTF_CHANNEL4:
			level = PORTF_CHANNEL(4);
			break;
	}
	return level;
}

void Dio_WriteChannel(Dio_ChannelType channelId, Dio_LevelType level)
{
	switch(channelId)
	{
		case PORTA_CHANNEL0:
			PORTA_FULL_GPIODIR |= (1 << (PORTA_CHANNEL0 - PORTA_CHANNEL0));
			PORTA_CHANNEL(0) = level;
			break;
		case PORTA_CHANNEL1:
			PORTA_FULL_GPIODIR |= (1 << (PORTA_CHANNEL1 - PORTA_CHANNEL0));
			PORTA_CHANNEL(1) = level;
			break;
		case PORTA_CHANNEL2:
			PORTA_FULL_GPIODIR |= (1 << (PORTA_CHANNEL2 - PORTA_CHANNEL0));
			PORTA_CHANNEL(2) = level;
			break;
		case PORTA_CHANNEL3:
			PORTA_FULL_GPIODIR |= (1 << (PORTA_CHANNEL3 - PORTA_CHANNEL0));
			PORTA_CHANNEL(3) = level;
			break;
		case PORTA_CHANNEL4:
			PORTA_FULL_GPIODIR |= (1 << (PORTA_CHANNEL4 - PORTA_CHANNEL0));
			PORTA_CHANNEL(4) = level;
			break;
		case PORTA_CHANNEL5:
			PORTA_FULL_GPIODIR |= (1 << (PORTA_CHANNEL5 - PORTA_CHANNEL0));
			PORTA_CHANNEL(5) = level;
			break;
		case PORTA_CHANNEL6:
			PORTA_FULL_GPIODIR |= (1 << (PORTA_CHANNEL6 - PORTA_CHANNEL0));
			PORTA_CHANNEL(6) = level;
			break;
		case PORTA_CHANNEL7:
			PORTA_FULL_GPIODIR |= (1 << (PORTA_CHANNEL7 - PORTA_CHANNEL0));
			PORTA_CHANNEL(7) = level;
			break;
		case PORTB_CHANNEL0:
			PORTB_FULL_GPIODIR |= (1 << (PORTB_CHANNEL0 - PORTB_CHANNEL0));
			PORTB_CHANNEL(0) = level;
			break;
		case PORTB_CHANNEL1:
			PORTB_FULL_GPIODIR |= (1 << (PORTB_CHANNEL1 - PORTB_CHANNEL0));
			PORTB_CHANNEL(1) = level;
			break;
		case PORTB_CHANNEL2:
			PORTB_FULL_GPIODIR |= (1 << (PORTB_CHANNEL2 - PORTB_CHANNEL0));
			PORTB_CHANNEL(2) = level;
			break;
		case PORTB_CHANNEL3:
			PORTB_FULL_GPIODIR |= (1 << (PORTB_CHANNEL3 - PORTB_CHANNEL0));
			PORTB_CHANNEL(3) = level;
			break;
		case PORTB_CHANNEL4:
			PORTB_FULL_GPIODIR |= (1 << (PORTB_CHANNEL4 - PORTB_CHANNEL0));
			PORTB_CHANNEL(4) = level;
			break;
		case PORTB_CHANNEL5:
			PORTB_FULL_GPIODIR |= (1 << (PORTB_CHANNEL5 - PORTB_CHANNEL0));
			PORTB_CHANNEL(5) = level;
			break;
		case PORTB_CHANNEL6:
			PORTB_FULL_GPIODIR |= (1 << (PORTB_CHANNEL6 - PORTB_CHANNEL0));
			PORTB_CHANNEL(6) = level;
			break;
		case PORTB_CHANNEL7:
			PORTB_FULL_GPIODIR |= (1 << (PORTB_CHANNEL7 - PORTB_CHANNEL0));
			PORTB_CHANNEL(7) = level;
			break;
		case PORTC_CHANNEL0:
			PORTC_FULL_GPIODIR |= (1 << (PORTC_CHANNEL0 - PORTC_CHANNEL0));
			PORTC_CHANNEL(0) = level;
			break;
		case PORTC_CHANNEL1:
			PORTC_FULL_GPIODIR |= (1 << (PORTC_CHANNEL1 - PORTC_CHANNEL0));
			PORTC_CHANNEL(1) = level;
			break;
		case PORTC_CHANNEL2:
			PORTC_FULL_GPIODIR |= (1 << (PORTC_CHANNEL2 - PORTC_CHANNEL0));
			PORTC_CHANNEL(2) = level;
			break;
		case PORTC_CHANNEL3:
			PORTC_FULL_GPIODIR |= (1 << (PORTC_CHANNEL3 - PORTC_CHANNEL0));
			PORTC_CHANNEL(3) = level;
			break;
		case PORTC_CHANNEL4:
			PORTC_FULL_GPIODIR |= (1 << (PORTC_CHANNEL4 - PORTC_CHANNEL0));
			PORTC_CHANNEL(4) = level;
			break;
		case PORTC_CHANNEL5:
			PORTC_FULL_GPIODIR |= (1 << (PORTC_CHANNEL5 - PORTC_CHANNEL0));
			PORTC_CHANNEL(5) = level;
			break;
		case PORTC_CHANNEL6:
			PORTC_FULL_GPIODIR |= (1 << (PORTC_CHANNEL6 - PORTC_CHANNEL0));
			PORTC_CHANNEL(6) = level;
			break;
		case PORTC_CHANNEL7:
			PORTC_FULL_GPIODIR |= (1 << (PORTC_CHANNEL7 - PORTC_CHANNEL0));
			PORTC_CHANNEL(7) = level;
			break;
		case PORTD_CHANNEL0:
			PORTD_FULL_GPIODIR |= (1 << (PORTD_CHANNEL0 - PORTD_CHANNEL0));
			PORTD_CHANNEL(0) = level;
			break;
		case PORTD_CHANNEL1:
			PORTD_FULL_GPIODIR |= (1 << (PORTD_CHANNEL1 - PORTD_CHANNEL0));
			PORTD_CHANNEL(1) = level;
			break;
		case PORTD_CHANNEL2:
			PORTD_FULL_GPIODIR |= (1 << (PORTD_CHANNEL2 - PORTD_CHANNEL0));
			PORTD_CHANNEL(2) = level;
			break;
		case PORTD_CHANNEL3:
			PORTD_FULL_GPIODIR |= (1 << (PORTD_CHANNEL3 - PORTD_CHANNEL0));
			PORTD_CHANNEL(3) = level;
			break;
		case PORTD_CHANNEL4:
			PORTD_FULL_GPIODIR |= (1 << (PORTD_CHANNEL4 - PORTD_CHANNEL0));
			PORTD_CHANNEL(4) = level;
			break;
		case PORTD_CHANNEL5:
			PORTD_FULL_GPIODIR |= (1 << (PORTD_CHANNEL5 - PORTD_CHANNEL0));
			PORTD_CHANNEL(5) = level;
			break;
		case PORTD_CHANNEL6:
			PORTD_FULL_GPIODIR |= (1 << (PORTD_CHANNEL6 - PORTD_CHANNEL0));
			PORTD_CHANNEL(6) = level;
			break;
		case PORTD_CHANNEL7:
			PORTD_FULL_GPIODIR |= (1 << (PORTD_CHANNEL7 - PORTD_CHANNEL0));
			PORTD_CHANNEL(7) = level;
			break;
		case PORTE_CHANNEL0:
			PORTE_FULL_GPIODIR |= (1 << (PORTE_CHANNEL0 - PORTE_CHANNEL0));
			PORTE_CHANNEL(0) = level;
			break;
		case PORTE_CHANNEL1:
			PORTE_FULL_GPIODIR |= (1 << (PORTE_CHANNEL1 - PORTE_CHANNEL0));
			PORTE_CHANNEL(1) = level;
			break;
		case PORTE_CHANNEL2:
			PORTE_FULL_GPIODIR |= (1 << (PORTE_CHANNEL2 - PORTE_CHANNEL0));
			PORTE_CHANNEL(2) = level;
			break;
		case PORTE_CHANNEL3:
			PORTE_FULL_GPIODIR |= (1 << (PORTE_CHANNEL3 - PORTE_CHANNEL0));
			PORTE_CHANNEL(3) = level;
			break;
		case PORTE_CHANNEL4:
			PORTE_FULL_GPIODIR |= (1 << (PORTE_CHANNEL4 - PORTE_CHANNEL0));
			PORTE_CHANNEL(4) = level;
			break;
		case PORTE_CHANNEL5:
			PORTE_FULL_GPIODIR |= (1 << (PORTE_CHANNEL5 - PORTE_CHANNEL0));
			PORTE_CHANNEL(5) = level;
			break;
		case PORTF_CHANNEL0:
			PORTF_FULL_GPIODIR |= (1 << (PORTF_CHANNEL0 - PORTF_CHANNEL0));
			PORTF_CHANNEL(0) = level;
			break;
		case PORTF_CHANNEL1:
			PORTF_FULL_GPIODIR |= (1 << (PORTF_CHANNEL1 - PORTF_CHANNEL0));
			PORTF_CHANNEL(1) = level;
			break;
		case PORTF_CHANNEL2:
			PORTF_FULL_GPIODIR |= (1 << (PORTF_CHANNEL2 - PORTF_CHANNEL0));
			PORTF_CHANNEL(2) = level;
			break;
		case PORTF_CHANNEL3:
			PORTF_FULL_GPIODIR |= (1 << (PORTF_CHANNEL3 - PORTF_CHANNEL0));
			PORTF_CHANNEL(3) = level;
			break;
		case PORTF_CHANNEL4:
			PORTF_FULL_GPIODIR |= (1 << (PORTF_CHANNEL4 - PORTF_CHANNEL0));
			PORTF_CHANNEL(4) = level;
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
	Dio_LevelType level = STD_LOW;
	switch(channelId)
	{
		case PORTA_CHANNEL0:
			if(PORTA_CHANNEL(0) == STD_LOW)
			{
				PORTA_CHANNEL(0) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTA_CHANNEL(0) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTA_CHANNEL1:
			if(PORTA_CHANNEL(1) == STD_LOW)
			{
				PORTA_CHANNEL(1) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTA_CHANNEL(1) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTA_CHANNEL2:
			if(PORTA_CHANNEL(2) == STD_LOW)
			{
				PORTA_CHANNEL(2) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTA_CHANNEL(2) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTA_CHANNEL3:
			if(PORTA_CHANNEL(3) == STD_LOW)
			{
				PORTA_CHANNEL(3) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTA_CHANNEL(3) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTA_CHANNEL4:
			if(PORTA_CHANNEL(4) == STD_LOW)
			{
				PORTA_CHANNEL(4) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTA_CHANNEL(4) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTA_CHANNEL5:
			if(PORTA_CHANNEL(5) == STD_LOW)
			{
				PORTA_CHANNEL(5) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTA_CHANNEL(5) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTA_CHANNEL6:
			if(PORTA_CHANNEL(6) == STD_LOW)
			{
				PORTA_CHANNEL(6) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTA_CHANNEL(6) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTA_CHANNEL7:
			if(PORTA_CHANNEL(7) == STD_LOW)
			{
				PORTA_CHANNEL(7) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTA_CHANNEL(7) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTB_CHANNEL0:
			if(PORTB_CHANNEL(0) == STD_LOW)
			{
				PORTB_CHANNEL(0) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTB_CHANNEL(0) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTB_CHANNEL1:
			if(PORTB_CHANNEL(1) == STD_LOW)
			{
				PORTB_CHANNEL(1) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTB_CHANNEL(1) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTB_CHANNEL2:
			if(PORTB_CHANNEL(2) == STD_LOW)
			{
				PORTB_CHANNEL(2) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTB_CHANNEL(2) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTB_CHANNEL3:
			if(PORTB_CHANNEL(3) == STD_LOW)
			{
				PORTB_CHANNEL(3) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTB_CHANNEL(3) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTB_CHANNEL4:
			if(PORTB_CHANNEL(4) == STD_LOW)
			{
				PORTB_CHANNEL(4) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTB_CHANNEL(4) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTB_CHANNEL5:
			if(PORTB_CHANNEL(5) == STD_LOW)
			{
				PORTB_CHANNEL(5) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTB_CHANNEL(5) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTB_CHANNEL6:
			if(PORTB_CHANNEL(6) == STD_LOW)
			{
				PORTB_CHANNEL(6) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTB_CHANNEL(6) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTB_CHANNEL7:
			if(PORTB_CHANNEL(7) == STD_LOW)
			{
				PORTB_CHANNEL(7) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTB_CHANNEL(7) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTC_CHANNEL0:
			if(PORTC_CHANNEL(0) == STD_LOW)
			{
				PORTC_CHANNEL(0) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTC_CHANNEL(0) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTC_CHANNEL1:
			if(PORTC_CHANNEL(1) == STD_LOW)
			{
				PORTC_CHANNEL(1) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTC_CHANNEL(1) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTC_CHANNEL2:
			if(PORTC_CHANNEL(2) == STD_LOW)
			{
				PORTC_CHANNEL(2) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTC_CHANNEL(2) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTC_CHANNEL3:
			if(PORTC_CHANNEL(3) == STD_LOW)
			{
				PORTC_CHANNEL(3) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTC_CHANNEL(3) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTC_CHANNEL4:
			if(PORTC_CHANNEL(4) == STD_LOW)
			{
				PORTC_CHANNEL(4) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTC_CHANNEL(4) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTC_CHANNEL5:
			if(PORTC_CHANNEL(5) == STD_LOW)
			{
				PORTC_CHANNEL(5) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTC_CHANNEL(5) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTC_CHANNEL6:
			if(PORTC_CHANNEL(6) == STD_LOW)
			{
				PORTC_CHANNEL(6) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTC_CHANNEL(6) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTC_CHANNEL7:
			if(PORTC_CHANNEL(7) == STD_LOW)
			{
				PORTC_CHANNEL(7) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTC_CHANNEL(7) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTD_CHANNEL0:
			if(PORTD_CHANNEL(0) == STD_LOW)
			{
				PORTD_CHANNEL(0) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTD_CHANNEL(0) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTD_CHANNEL1:
			if(PORTD_CHANNEL(1) == STD_LOW)
			{
				PORTD_CHANNEL(1) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTD_CHANNEL(1) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTD_CHANNEL2:
			if(PORTD_CHANNEL(2) == STD_LOW)
			{
				PORTD_CHANNEL(2) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTD_CHANNEL(2) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTD_CHANNEL3:
			if(PORTD_CHANNEL(3) == STD_LOW)
			{
				PORTD_CHANNEL(3) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTD_CHANNEL(3) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTD_CHANNEL4:
			if(PORTD_CHANNEL(4) == STD_LOW)
			{
				PORTD_CHANNEL(4) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTD_CHANNEL(4) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTD_CHANNEL5:
			if(PORTD_CHANNEL(5) == STD_LOW)
			{
				PORTD_CHANNEL(5) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTD_CHANNEL(5) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTD_CHANNEL6:
			if(PORTD_CHANNEL(6) == STD_LOW)
			{
				PORTD_CHANNEL(6) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTD_CHANNEL(6) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTD_CHANNEL7:
			if(PORTD_CHANNEL(7) == STD_LOW)
			{
				PORTD_CHANNEL(7) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTD_CHANNEL(7) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTE_CHANNEL0:
			if(PORTE_CHANNEL(0) == STD_LOW)
			{
				PORTE_CHANNEL(0) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTE_CHANNEL(0) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTE_CHANNEL1:
			if(PORTE_CHANNEL(1) == STD_LOW)
			{
				PORTE_CHANNEL(1) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTE_CHANNEL(1) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTE_CHANNEL2:
			if(PORTE_CHANNEL(2) == STD_LOW)
			{
				PORTE_CHANNEL(2) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTE_CHANNEL(2) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTE_CHANNEL3:
			if(PORTE_CHANNEL(3) == STD_LOW)
			{
				PORTE_CHANNEL(3) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTE_CHANNEL(3) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTE_CHANNEL4:
			if(PORTE_CHANNEL(4) == STD_LOW)
			{
				PORTE_CHANNEL(4) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTE_CHANNEL(4) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTE_CHANNEL5:
			if(PORTE_CHANNEL(5) == STD_LOW)
			{
				PORTE_CHANNEL(5) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTE_CHANNEL(5) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTF_CHANNEL0:
			if(PORTF_CHANNEL(0) == STD_LOW)
			{
				PORTF_CHANNEL(0) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTF_CHANNEL(0) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTF_CHANNEL1:
			if(PORTF_CHANNEL(1) == STD_LOW)
			{
				PORTF_CHANNEL(1) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTF_CHANNEL(1) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTF_CHANNEL2:
			if(PORTF_CHANNEL(2) == STD_LOW)
			{
				PORTF_CHANNEL(2) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTF_CHANNEL(2) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTF_CHANNEL3:
			if(PORTF_CHANNEL(3) == STD_LOW)
			{
				PORTF_CHANNEL(3) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTF_CHANNEL(3) = STD_LOW;
				level = STD_LOW;
			}
			break;
		case PORTF_CHANNEL4:
			if(PORTF_CHANNEL(4) == STD_LOW)
			{
				PORTF_CHANNEL(4) = STD_HIGH;
				level = STD_HIGH;
			}
			else
			{
				PORTF_CHANNEL(4) = STD_LOW;
				level = STD_LOW;
			}
			break;
	}
	return level;
}

/****************************************************************************************
 *  END OF FILE: FileName.c
 ***************************************************************************************/
 