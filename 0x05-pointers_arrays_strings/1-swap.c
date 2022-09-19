#include "main.h"
#include <stdio.h>
/**
* swap_int - change value of a variable pointer is pointing to to 98
*
* @a: takes in the first integer input
* @b: takes in the second integer input
*/
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
