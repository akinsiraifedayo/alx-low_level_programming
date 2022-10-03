#include "main.h"
/**
* _isdigit - function that checks if nsomething is a digit
*
* @c: takes in the integer input
* Return: 1 if its digit and 0 its not
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
