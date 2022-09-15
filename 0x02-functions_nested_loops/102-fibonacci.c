#include <stdio.h>
/**
 *main - Fabonnici
 *
 *Description: prints first 100 fabonnici numbers
 *Return: returns 0
 */
int main(void)
{
	int first = 1;
	int second = 2;
	int current = 3;
	int sum;
	int i = 0;

	printf("%d ,%d ,%d", first, second, current)
	while (i < 100)
	{
		sum = (current + second);
		printf(" ,%d", sum);
		second = current;
		current = sum;
		i++;
	}
	printf("\n");
	return (0);
}
