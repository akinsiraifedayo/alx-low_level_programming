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
	unsigned int second = 2;
	unsigned int current = 3;
	unsigned int sum = 0;
	unsigned int myResult = 2;
	unsigned int modCheck;

	while (sum < 4000000)
	{
		sum = (current + second);
		second = current;
		current = sum;
		modCheck = (sum % 2);
		if ((sum < 4000000) && (modCheck == 0))
			myResult = (myResult + sum);
	}
	printf("%d\n", myResult);
	return (0);
}
