#include <stdio.h>
#include "main.h"
/**
 *_abs - function that prints abs
 *
 * @c: is the input of abs
 *Description: prints abs
 *Return: 0
 */
int _abs(int c)
{
	if (c >= 0)
		return (c);
	else if (c < 0)
	{
		c = (c * -1);
		return (c);
	}
	return (c);
}
