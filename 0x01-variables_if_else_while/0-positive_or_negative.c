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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive");
	else if (n == 0)
		printf("is zero");
	else if (n < 0)
		printf("is negative");

	return (0);
}
