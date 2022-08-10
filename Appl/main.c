#include "Std_Types.h"
#include "Led.h"

#define 	LED_1	LED1_CHANNEL_ID

int main(void)
{
	
	uint8 onTime = 2;//2 seconds
	
	
	uint8 offTime = 2;//2 seconds
	
	while(1)
	{
		LedBlink(TIMER0_16BIT, LED_1, 200, onTime, offTime);
	}

	return 0;
}