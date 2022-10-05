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
	int i, a;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(*str) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	a = sizeof(*str);

	for (i = 0; i < a; i++)
	{
		ptr[i] = str[i];
	}


	return (ptr);
}
