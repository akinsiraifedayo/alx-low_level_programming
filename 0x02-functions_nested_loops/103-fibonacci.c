#include <stdio.h>
#include <math.h>
/**
 *main - Fabonnici
 *
 *Description: prints sum of fabonicci numbers
 *Return: returns 0
 */
int main(void)
{
	double second = 2;
	double current = 3;
	double sum = 0;
	double myResult = 6;
	double modCheck;

	while (sum < 4000000)
	{
		sum = (current + second);
		second = current;
		current = sum;
		modCheck = sum - (sum * (sum / 2));
		if ((sum < 4000000) && (modCheck < 0.001))
			myResult = (myResult + sum);
	}
	printf("%.0f\n", myResult);
	return (0);
}
