#include "main.h"
#include <stdio.h>
/**
* reset_to_98 - function that change value of a variable pointer is pointing to to 98
*
* @n: takes in the integer input
*/
void reset_to_98(int *n)
{
	int *p;

	p = &n;
	*p = 98;
}
