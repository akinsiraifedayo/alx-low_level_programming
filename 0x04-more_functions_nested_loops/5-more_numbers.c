#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14.
*
* Description: prints numbers from 0-14
*/
void more_numbers(void)
{
	int countr;
	char c;

	for (countr = 0; countr < 10; countr++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
