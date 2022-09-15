#include <stdio.h>
/**
 *_isupper - check for uppercase
 *
 * @c: This is the character to check for
 *Description: This function checks for uppercase
 *
 */
int _isupper(int c)
{
	c = char c;

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
