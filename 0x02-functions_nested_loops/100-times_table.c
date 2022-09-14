#include <stdio.h>
/**
 *print_times_table - function that prints time
 *
 *Description: prints time
 *@n: n times table
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		printf("\n");
	else
	{
	int startVert = 0;
	int endVert = n;

	while (startVert <= endVert)
	{
		int startHoriz = 0;
		int endHoriz = n;

		while (startHoriz <=  endHoriz)
		{
			int mResult = (startVert * startHoriz);

			if (mResult < 100)
			{
			if (startHoriz == 0)
				printf("%d", mResult);
			else
			{
			if (startHoriz <= endHoriz)
			{
				if (mResult <= 9 && startHoriz != n)
					printf(",  %d", mResult);
				else if (mResult <= 9 && startHoriz == n)
					printf(",  %d\n", mResult);
				else if (mResult > 9 && startHoriz == n)
					printf(", %d\n", mResult);
				else
					printf(", %d", mResult);
			}
			}
			startHoriz++;
			}

			if (mResult >= 100)
			{
			if (startHoriz == 0)
				printf("%d", mResult);
			else
			{
			if (startHoriz <= endHoriz)
			{
				if (mResult <= 9 && startHoriz != n)
					printf(", %d", mResult);
				else if (mResult <= 9 && startHoriz     == n)
					printf(", %d\n", mResult);
				else if (mResult > 9 && startHoriz =    = n)
					printf(", %d\n", mResult);
				else
					printf(", %d", mResult);
			}
			}
			startHoriz++;
			}










		}
		startVert++;
	}
	}
}
