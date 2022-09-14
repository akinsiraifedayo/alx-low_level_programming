#include <stdio.h>
#include "main.h"
/**
 *_print_sign - function that prints sign of a number
 *
 * @n: is the input of function
 *Description: checks for sign
 *Return: either 1 or 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1,"+");
	}
	else if (n ==0)
	{
		return (0);
		printf("0");
	}
	else if (n < 0)
	{
		return(-1);
		printf("-");
	}
	else
		return(0);
}
