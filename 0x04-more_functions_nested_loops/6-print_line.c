#include "main.h"
/**
* print_line - Write a function that draws a straight line in the terminal.
* @n: counter of lines
* Description: print a straight line
*/
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
