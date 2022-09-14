#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 *print_last_digit - prints last digit of num
 *
 *Description: This function prints last digit of a number
 *@c: the integer we are checking
 *Return: returns last digit
 */
int print_last_digit(int c)
{
	int lastDigit;

	lastDigit = (c % 10);
	if (c >= 0)
	{
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	if (c < 0)
	{
		_putchar(-lastDigit + '0');
		return (lastDigit);
	}
	return (lastDigit);
}
