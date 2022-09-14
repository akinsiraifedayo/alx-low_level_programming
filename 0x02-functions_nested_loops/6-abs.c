#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 *int _abs - function that prints abs
 *
 * @c: is the input of abs
 *Description: prints abs
 *Return: 0
 */
int _abs(int c)
{
	int preAbs;
	int newAbs;

	preAbs = (c*c);
	newAbs = sqrt(preAbs);
	printf ("%d", newAbs);
	return (0);
}
