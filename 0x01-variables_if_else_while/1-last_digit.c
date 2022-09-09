#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - where all code runs from
 *
 *Descripton: This program prints if a number is positive or negative
 *
 *
 *
 *Return: returns 0
 */
int main(void)
{
	int n;
	int z;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = (n % 10);
	
	printf("Last digit of %d is ", n);
	if (n > 5)
		printf("%d and is greater than 5\n", z);
	else if (n == 0)
		printf("%d and is zero\n", z);
	else if (n < 6 && n != 0)
		printf("%d is less than 6 and not 0\n", z);

	return (0);
}
