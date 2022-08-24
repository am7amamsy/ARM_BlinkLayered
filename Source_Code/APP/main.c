#include "blink.h"

#define ON_TIME 		1000
#define OFF_TIME 		500
#define LED_CHANNEL PORTD_CHANNEL2

int main(void)
{
	void IntCtrl_init();
	void GPT_Init();
	
	while(1)
	{
		
	}
	return 0;
}

ISR(SysTick_Handler)
{
	LED_Blink(LED_Channel, ON_Time, OFF_Time);
}
