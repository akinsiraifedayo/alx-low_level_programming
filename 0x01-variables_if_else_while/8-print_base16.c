#include<stdio.h>
/**
 *main - Where all the code runs
 *
 *Description: This program prints a-z of base 16
 *
 *Return: returns 0
 */
int main(void)
{
	char aStart = 0x61;
	char bEnd = 0x7A;

	while (aStart <= bEnd)
	{
		putchar (aStart);
		aStart++;
	}
	putchar (10);
	return (0);
}
