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
	int aStart = 65;
	int bEnd = 104;

	while (bEnd <= aStart)
	{
		putchar (bEnd);
		bEnd++;
	}
	return (0);
}
