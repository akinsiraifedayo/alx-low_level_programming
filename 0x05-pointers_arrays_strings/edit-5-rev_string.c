#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* rev_string- prints a string
*
* @s: takes in the string
* Return: 0
*/
void rev_string(char *s)
{
	int i,j = 0;


	for (i = 0; s[i] != 0; i++)
	{
		j++;
	}
	if (i != 0)
	{
		while (i >= 0)
		{
			printf("%c", s[i]);
			i--;
		}
	}

	else
		printf("\n");
	i = j;
}
