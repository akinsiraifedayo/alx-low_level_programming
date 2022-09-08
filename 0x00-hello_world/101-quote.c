#include <stdio.h>
#include <unistd.h>

/**
 *main - Main Function
 *
 *Description: prints without print f or put
 *
 *Return: 1 if its successful
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
