#include<stdio.h>
/**
 *main - Where all the code runs
 *
 *Description: This program prints all digits 0-9
 *
 *Return: returns 0
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar (10);
	return (0);
}
