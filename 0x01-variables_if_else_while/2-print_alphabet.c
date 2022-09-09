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
	char aStart = 65;
	char bEnd = 104;

	while (aStart <= bEnd)
	{
		putchar (aStart);
		aStart++;
	}
	return (0);
}
