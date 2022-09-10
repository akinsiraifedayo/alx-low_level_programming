#include<stdio.h>
/**
 *main - Where all the code runs
 *
 *Description: This program prints all base 16 numbers
 *
 *Return: returns 0
 */
int main(void)
{
	char aStart = 0x30;
	char bEnd = 0x39;
	char cStart = 0x61;
	char dEnd = 0x066;

	while (aStart <= bEnd)
	{
		putchar (aStart);
		aStart++;
	}
	while (cStart <= dEnd)
	{
		putchar (cStart);
		cStart++;
	}
	putchar (10);
	return (0);
}
