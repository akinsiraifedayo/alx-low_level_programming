#include<stdio.h>
/**
 *main - Where all the code runs
 *
 *Description: This program prints a-z
 *
 *Return: returns 0
 */
int main(void)
{
	char aStart = 97;
	char bEnd = 122;

	while (aStart <= bEnd)
	{
		putchar (aStart);
		aStart++;
	}
	putchar (10);
	return (0);
}
