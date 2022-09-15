#include "main.h"
/**
* print_triangle - prints a triangle
* @size: takes in a integer for size of triangle
*/
void print_triangle(int size)
{
	int heighth, baseh, k;

	if (size <= 0)
		_putchar('\n');
	for (heighth = 0; heighth < size; heighth++)
	{
		for (baseh = size - heighth; baseh > 1; baseh--)
			_putchar(' ');
		for (i = heighth + baseh; i >= 1; i--)
			_putchar('#');
		_putchar('\n');
	}
}
