#include "main.h"
/**
 * _puts_recursion - Function that prints a string followed by a new line
 *
 * @s: This is the string to accept
 * Description: This is a program that prints a strings
 *
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
		s++;

	if (*s)
	{
		/*_putchar(*s); */
		_print_rev_recursion(s - 1);
		s--;
	}
}
