#include <stdio.h>
/**
 *_islower - function that checks lower case
 *
 * @c: is the input of function lower
 *Description: checks lowercase
 *Return: either 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 112)
		return (1);
	else
		return (0);
}
