/***************************************************************************************************************************
 *  FILE DESCRIPTION
 *  ----------------------------------------------------------------------------------------------------------------------*/
/**        File: DIO.h
 *       Module: DIO
 *
 *  Description: A header file for DIO driver
 *
 *
 **************************************************************************************************************************/
#ifndef DIO_H
#define DIO_H

/***************************************************************************************************************************
 *  INCLUDES
 **************************************************************************************************************************/
#include "Std_Types.h"
#include "DIO_Cfg.h"

/***************************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **************************************************************************************************************************/
typedef uint8 Dio_ChannelType;
typedef uint8 Dio_PortType;
typedef uint8 Dio_LevelType;
typedef uint8 Dio_PortLevelType; 

/***************************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **************************************************************************************************************************/
 

/***************************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **************************************************************************************************************************/
enum
{
    PORTA_CHANNEL0,
    PORTA_CHANNEL1,
    PORTA_CHANNEL2,
    PORTA_CHANNEL3,
    PORTA_CHANNEL4,
    PORTA_CHANNEL5,
    PORTA_CHANNEL6,
    PORTA_CHANNEL7,
    PORTB_CHANNEL0,
    PORTB_CHANNEL1,
    PORTB_CHANNEL2,
    PORTB_CHANNEL3,
    PORTB_CHANNEL4,
    PORTB_CHANNEL5,
    PORTB_CHANNEL6,
    PORTB_CHANNEL7,
    PORTC_CHANNEL0,
    PORTC_CHANNEL1,
    PORTC_CHANNEL2,
    PORTC_CHANNEL3,
    PORTC_CHANNEL4,
    PORTC_CHANNEL5,
    PORTC_CHANNEL6,
    PORTC_CHANNEL7,
    PORTD_CHANNEL0,
    PORTD_CHANNEL1,
    PORTD_CHANNEL2,
    PORTD_CHANNEL3,
    PORTD_CHANNEL4,
    PORTD_CHANNEL5,
    PORTD_CHANNEL6,
    PORTD_CHANNEL7,
    PORTE_CHANNEL0,
    PORTE_CHANNEL1,
    PORTE_CHANNEL2,
    PORTE_CHANNEL3,
    PORTE_CHANNEL4,
    PORTE_CHANNEL5,
    PORTF_CHANNEL0,
    PORTF_CHANNEL1,
    PORTF_CHANNEL2,
    PORTF_CHANNEL3,
    PORTF_CHANNEL4
}DIO_ChannelId;

enum
{
    PORTA,
    PORTB,
    PORTC,
    PORTD,
    PORTE,
    PORTF
}DIO_PortId;

/***************************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **************************************************************************************************************************/
 

/***************************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
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
Dio_LevelType Dio_ReadChannel(Dio_ChannelType channelId);
void Dio_WriteChannel(Dio_ChannelType channelId, Dio_LevelType level);
Dio_PortLevelType Dio_ReadPort(Dio_PortType portId);
void Dio_WritePort(Dio_PortType portId, Dio_PortLevelType level);
Dio_LevelType Dio_FlipChannel(Dio_ChannelType channelId);

#endif  /* DIO_H */
 
/****************************************************************************************
 *  END OF FILE: DIO.h
 ***************************************************************************************/
 