#include<stdio.h>
/**
 *main - Where all the code runs
 *
 *Description: This program prints all numbers 0-9 seperted by commas
 *
 *Return: returns 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}
	putchar (10);
	return (0);
}
