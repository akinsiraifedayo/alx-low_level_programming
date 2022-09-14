#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 *print_sign - function that prints sign of a number
 *
 * @n: is the input of function
 *Description: checks for sign
 *Return: either 1 or 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		char c = '+';

		return (write(1, &c, 1));
		return (1);
	}
	else if (n == 0)
	{
		char c = 'S';

		return(write(1, &c, 2));
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		return (0);
}
