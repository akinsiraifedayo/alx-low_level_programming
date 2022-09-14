#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 *add - function that add 2 numbers
 *
 * @a: is the first number
 * @b: is second number
 *Description: prints a+b
 *Return: c which is a+b
 */
int add(int a, int b)
{
	int c;

	c = (a+b);
	return (c);
}
