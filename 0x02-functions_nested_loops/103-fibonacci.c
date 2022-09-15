#include <stdio.h>
/**
 *main - Fabonnici
 *
 *Description: prints sum of fabonicci numbers
 *Return: returns 0
 */
int main(void)
{
	double first = 1;
	double second = 2;
	double current = 3;
	double sum = 0;
	double myResult = 6;
	double modCheck = 2;

	while (sum < 4000000)
	{
		sum = (current + second);
		second = current;
		current = sum;
		if ((sum < 4000000) && (sum % modCheck < 1))
			myResult = (myResult + sum);
	}
	printf("%.0f\n", myResult);
	return (0);
}
