#include <stdio.h>
/**
 *main - naturan numbers printer
 *
 *Description: This function prints common multiples of 3 and 5
 *Return: 0
 */
int main(void)
{
	int z = 1024;
	int a = 0;
	int sum = 0;

	while (a < z)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum = (sum + a);
		}
		a++;
	}
printf("%d\n", sum);
return (0);
}
