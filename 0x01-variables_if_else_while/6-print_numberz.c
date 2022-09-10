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
	char i;

	for (i = 48; i < 57; i++)
	{
		putchar(i);
		if (i <58)
			putchar(10);
	}
	putchar (10);
	return (0);
}
