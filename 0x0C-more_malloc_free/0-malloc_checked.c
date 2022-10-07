#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: If size = 0 or malloc fails- NULL else it a pointer to the array.
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
