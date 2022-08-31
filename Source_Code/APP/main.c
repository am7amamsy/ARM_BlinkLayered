#include "Blink.h"
#include "IntCtrl.h"
#include "SysTick.h"

extern void (*SysTick_NotificationFunctionPtr)(void);

int main(void)
{
	IntCtrl_Init();
	
	SysTick_EnableNotification();
	SysTick_Notification(LED_Blink);
	
	GPIO_Init();
	
	SysTick_StartTimer(timeOn);

	while(1)
	{
		
	}
}

void SVC_Handler(void)
{
	__asm(" LDR R4, 0x04");
	__asm(" MSR CONTROL, R4");
}

void SysTick_Handler(void)
{	
	
	(*SysTick_NotificationFunctionPtr)();
}
