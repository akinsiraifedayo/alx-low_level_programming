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
	int i;
	for (i = 0; i < 10; i++)
	{
		putchar(i);
		if (i < 10)
			putchar(10);
	}
	return (0);
}
