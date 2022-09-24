/***************************************************************************************************************************
 *  FILE DESCRIPTION
 *  ----------------------------------------------------------------------------------------------------------------------*/
/**        File: Button_Cfg.h
 *       Module: Button_Cfg
 *
 *  Description: A header file for the Button pre-compile configuration
 *
 *
 **************************************************************************************************************************/
#ifndef Button_Cfg_H
#define Button_Cfg_H

/***************************************************************************************************************************
 *  INCLUDES
 **************************************************************************************************************************/
#include "Std_Types.h"
#include "DIO.h"

/***************************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **************************************************************************************************************************/
#define BUTTON_1_CH  PORTB_CHANNEL0
#define BUTTON_2_CH	 PORTB_CHANNEL1

#define BUTTON_OFF STD_LOW
#define BUTTON_ON  STD_HIGH

#define Button_LevelType   Dio_LevelType
#define Button_ChannelType Dio_ChannelType
/***************************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **************************************************************************************************************************/


#endif  /* Button_Cfg_H */
 
/****************************************************************************************
 *  END OF FILE: Button_Cfg.h
 ***************************************************************************************/
 