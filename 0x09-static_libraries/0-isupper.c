#include <stdio.h>
#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: Variable text
* Return: Always 0.
*/
int _isupper(int c)
{
	char d;

	d = c;
	if (d >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
