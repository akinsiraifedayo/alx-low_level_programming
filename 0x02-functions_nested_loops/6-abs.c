#include <stdio.h>
#include "main.h"
/**
 *int _abs - function that prints abs
 *
 * @c: is the input of abs
 *Description: prints abs
 *Return: 0
 */
int _abs(int c)
{
	if (c >= 0)
		printf ("%d", c);
	else if (c < 0)
	{
		c = (c * -1);
		printf ("%d", c);
	}
	return (0);
}
