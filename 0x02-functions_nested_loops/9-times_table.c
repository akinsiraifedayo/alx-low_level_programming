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

			if (startHoriz == 0)
				printf("%d", mResult);
			else
			{
			if (startHoriz <= endHoriz)
				if (mResult <= 9 && startHoriz != 9)
					printf(",  %d", mResult);
				else if (mResult <= 9 && startHoriz == 9)
					printf(",  %d\n", mResult);
				else if (mResult > 9 && startHoriz ==9)
					printf(", %d\n", mResult);
				else
					printf(", %d", mResult);
			}
			startHoriz++;
		}
		startVert++;
	}
}
