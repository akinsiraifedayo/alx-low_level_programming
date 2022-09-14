#include <stdio.h>
#include "main.h"
/**
 *_isalpha - function that checks for alphabet
 *
 * @c: is the input of function lower
 *Description: checks for alphabet
 *Return: either 1 or 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
