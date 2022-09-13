#include <stdio.h>
/**
 *_islower - function that checks lower case
 *
 *Description:
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
