#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - Function that prints a string followed by a new line
 *
 * @s: This is the string to accept
 * Description: This is a program that prints a strings
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s = (s+1);
	}
}
