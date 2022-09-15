#include <stdio.h>
/**
 *_isupper - check for uppercase
 *
 * @c: This is the character to check for
 *Description: This function checks for uppercase
 *Return: 0
 */
int _isupper(int c)
{
	char d;
	d = c;

	if (d >= 65 && d <= 90)
		return (1);
	else
		return (0);
	return (0);
}
