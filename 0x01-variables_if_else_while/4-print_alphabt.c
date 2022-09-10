#include<stdio.h>
/**
 *main - Where all the code runs
 *
 *Description: This program prints A-Z
 *
 *Return: returns 0
 */
int main(void)
{
	char aStart = 97;
	char bEnd = 122;

	while (aStart <= bEnd && aStart != 101 && aStart != 113)
	{
		putchar (aStart);
		aStart++;
	}
	putchar (10);
	return (0);
}
