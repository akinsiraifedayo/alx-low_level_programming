#include <stdio.h>
/**
 *main - Fabonnici
 *
 *Description: prints first 100 fabonnici numbers
 *Return: returns 0
 */
int main(void)
{
	double first = 1;
	double second = 2;
	double current = 3;
	double sum;
	int i = 0;

	printf("%.0f, %.0f, %.0f", first, second, current);
	while (i < 97)
	{
		sum = (current + second);
		printf(", %.0f", sum);
		second = current;
		current = sum;
		i++;
	}
	printf("\n");
	return (0);
}
