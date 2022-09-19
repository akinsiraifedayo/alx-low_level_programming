#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* puts_half- prints a string
*
* @str: takes in the string
* Return: 0
*/
void puts_half(char *str)
{
	int i, j = 0;


	for (i = 0; str[i] != 0; i++)
	{

	}
	j = (i / 2);
	i = 0;

	for (i = 0; str[i] > j; i++)
	{
		if ( i >= j)
			printf("%c", str[i]);
	}
	printf("\n");
}
