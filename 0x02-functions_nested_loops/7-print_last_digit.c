#include <stdio.h>
#include "main.h"
/**
 *print_last_digit - prints last digit
 *
 * @c - the integer we are checking
 *
 *Description: This function prints last digit of a number
 *Return: returns last digit
 */
int print_last_digit(int c)
{
	int lastDigit;

	lastDigit = (c % 10);
	printf("%d", lastDigit);
	return (lastDigit);
}
