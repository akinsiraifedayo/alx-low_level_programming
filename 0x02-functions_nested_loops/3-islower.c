#include <stdio.h>
/**
 *_islower - function that checks lower case
 *
 *Description: checks lowercase
 *
 */
int _islower(int c)
{

	if (c >= 97 && c <= 112)
		return (1);
	else
		return (0);

}