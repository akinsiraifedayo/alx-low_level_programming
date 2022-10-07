#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Creates an array of chars and
 * @b: The specific char to intialize the array with.
 *
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = &b;

	if (ptr == 0)
		exit(98);

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
