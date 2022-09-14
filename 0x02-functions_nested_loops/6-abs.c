#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 *int _abs - function that checks lower case
 *
 * @c: is the input of function lower
 *Description: checks lowercase
 *Return: either 1 or 0
 */
int _abs(int c)
{
	int preAbs;
	int newAbs;

	preAbs = (c*c);
	newAbs = sqrt(preAbs);
	printf ("%d", newAbs);
}
