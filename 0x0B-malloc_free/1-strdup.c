#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies an array of characters
 * @str: The specific string to be duplicated
 *
 * Return: If size = 0 or malloc fails- NULL else it a pointer to the array.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(str));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}


	return (ptr);
}
