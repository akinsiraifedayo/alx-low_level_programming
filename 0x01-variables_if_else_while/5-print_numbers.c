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
	char i = 48;

	for (i >= 48, i < 58, i++)
	{
		putchar (i);
	}
	putchar (10);
	return (0);
}
