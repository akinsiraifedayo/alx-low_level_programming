#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 *print_to_98 - function that prints natural numbers
 *
 *Description: prints 0-98
 *@n: is the number
 */
void print_to_98(int n)
{
	lastNumber = 98;

	while (n < lastNumber)
	{
		printf("%d, ", n);
		n++;
	}
	printf("%d", lastNumber);
}
