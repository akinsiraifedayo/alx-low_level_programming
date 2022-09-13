#include <stdio.h>
/**
 *print_alphabet - a-z printer
 *
 *Description: This function prints A -Z
 *
 */
void print_alphabet(void)
{
	char startPrint = 'a';
	char stopPrint = 'z';

	while (startPrint <= stopPrint)
	{
		putchar(startPrint);
		startPrint++;
	}
	putchar(10);
}
