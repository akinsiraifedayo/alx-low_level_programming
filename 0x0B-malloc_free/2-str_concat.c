#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - copies an array of characters
 * @s1: The specific string to be duplicated
 * @s2: The specific string to be duplicated
 * Return: If size = 0 or malloc fails- NULL else it a pointer to the array.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, a, b, c;

	if (str == NULL)
		return (NULL);

	ptr = malloc(((strlen(s1) + 1) + strlen(s2)) * (sizeof(char)));

	if (ptr == NULL)
		return (NULL);

	a = strlen(s1);

	for (i = 0; i < a; i++)
	{
		ptr[i] = s1[i];
	}

	b = strlen(s2);

	for (c = 0; c < b; i++)
	{
		ptr[i] = s2[c];
	}


	return (ptr);
}
