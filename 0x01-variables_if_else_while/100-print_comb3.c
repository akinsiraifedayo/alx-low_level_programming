#include <stdio.h>

/**
 * main - Print combinations of two digit numbers in ascending order
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int myDoubles;
	int mySingles;

	for (myDoubles = 0; myDoubles <= 9; myDoubles++)
	{
		for (mySingles = myDoubles + 1; mySingles <= 9; mySingles++)
		{
			putchar(myDoubles + '0');
			putchar(mySingles + '0');

			if (myDoubles < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
