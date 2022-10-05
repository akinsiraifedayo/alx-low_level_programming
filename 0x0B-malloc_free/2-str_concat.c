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
	int i, conc_len, b, c, a;

	for(i = 0; s1[i] || s2[i]; i++)
		conc_len++;
	ptr = malloc(conc_len * sizeof(char));
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
