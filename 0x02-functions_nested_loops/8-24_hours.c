#include <stdio.h>
#include "main.h"
/**
 *jack_bauer - function that prints time
 *
 *Description: prints time
 */
void jack_bauer(void)
{
	int startHour = 0;
	int endHour = 23;

	while (startHour <= endHour)
	{
		int startMin = 0;
		int endMin = 59;

		while (startMin <=  endMin)
		{
			printf("%02d:%02d\n", startHour, startMin);
			startMin++;
		}
		startHour++;
	}

}
