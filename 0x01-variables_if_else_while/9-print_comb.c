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
	char i;
	char comma = 44;
	char space = 32;

	for (i = 48; i < 57; i++)
	{
		putchar((i)(comma)(space));
	}
	putchar (10);
	return (0);
}
