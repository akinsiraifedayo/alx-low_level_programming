#include <stdio.h>
#include "main.h"
/**
 *times_table - function that prints time
 *
 *Description: prints time
 */
void times_table(void)
{
	int startVert = 0;
	int endVert = 9;

	while (startVert <= endVert)
	{
		int startHoriz = 0;
		int endHoriz = 9;

		while (startHoriz <=  endHoriz)
		{
			int mResult = (startVert * startHoriz);

			printf("%d", mResult);
			if (startHoriz < endHoriz)
				printf(", ");
			else
				printf("\n");
			startHoriz++;
		}
		startVert++;
	}

}
