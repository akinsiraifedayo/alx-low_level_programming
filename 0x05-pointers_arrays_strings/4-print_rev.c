#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev- prints a string
*
* @s: takes in the string
* Return: 0
*/
void print_rev(char *s)
{
	int i = 0;

	for (i = 0; s[i] != 0; i++)
	{

	}
	i--;
	if (i != 0)
	{
		while (i >= 0)
		{
			printf("%c", s[i]);
			i--;
		}
		printf("\n");
	}
	else
		printf("\n");
}
