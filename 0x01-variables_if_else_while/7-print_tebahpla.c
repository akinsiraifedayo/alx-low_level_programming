#include<stdio.h>
/**
 *main - Where all the code runs
 *
 *Description: This program prints alphabets in reverse
 *
 *Return: returns 0
 */
int main(void)
{
	char aStart = 122;
	char bEnd = 97;

	while (aStart >= bEnd)
	{
		putchar (aStart);
		aStart--;
	}
	putchar (10);
	return (0);
}
