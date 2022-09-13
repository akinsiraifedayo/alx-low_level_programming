#include <stdio.h>
/**
 *print_alphabet_x10 - Prints the alphabet a number of times
 *
 *Description: This function prints a-z ten times on different lines
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char startPrint = 'a';
		char stopPrint = 'z';

		while (startPrint <= stopPrint)
		{
			putchar(startPrint);
			startPrint++;
		}
		putchar(10);
		i++;
	}
}
