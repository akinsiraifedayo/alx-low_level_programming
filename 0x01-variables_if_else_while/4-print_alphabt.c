#include<stdio.h>
/**
 *main - Where all the code runs
 *
 *Description: prints all letters except q and e
 *
 *Return: returns 0
 */
int main(void)
{
	char aStart = 97;
	char bEnd = 122;

	while (aStart <= bEnd)
	{
		if (aStart == 101)
			aStart++;
		else if (aStart == 113)
			aStart++;
		putchar (aStart);
		aStart++;
	}
	putchar (10);
	return (0);
}
