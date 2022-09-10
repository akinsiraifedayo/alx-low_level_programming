#include<stdio.h>
/**
 *main - Where all the code runs
 *
 *Description: This program prints a-zA-Z
 *
 *Return: returns 0
 */
int main(void)
{
	char aStart = 97;
	char bEnd = 122;
	char Astart = 65;
	char Bstart = 90;

	while (aStart <= bEnd)
	{
		putchar (aStart);
		aStart++;
	}
	while (Astart <= Bstart)
	{
		putchar (Astart);
		Astart++;
	}
	putchar (10);
	return (0);
}
