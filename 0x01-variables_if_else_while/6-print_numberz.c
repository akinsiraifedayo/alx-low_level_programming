#include<stdio.h>
/**
 *main - Where all the code runs
 *
 *Description: This program prints 0-9 using char
 *
 *Return: returns 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar(10);
	return (0);
}
