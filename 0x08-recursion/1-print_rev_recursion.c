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
	if (*s)
	{
		++s;
	}
	else
	{
	void _puts_recursions(char *s)
	{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s - 1);
	}
	else
		_putchar('\n');
	}
	}
}
