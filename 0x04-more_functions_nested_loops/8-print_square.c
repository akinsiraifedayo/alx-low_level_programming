#include "main.h"
/**
* print_square - function to print a square
* @size: takes in the size of the square
*/
void print_square(int size)
{
	int width, length;

	if (size <= 0)
		_putchar('\n');
	for (width = 0; width < size; i++)
	{
		for (length = 0; length < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
