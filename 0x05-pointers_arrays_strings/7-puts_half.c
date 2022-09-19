#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _puts- prints a string
*
* @str: takes in the string
* Return: 0
*/
void _puts(char *str)
{
	int i, j = 0;


	for (i = 0; str[i] != 0; i++)
	{
		//printf("%c", str[i]);
	}
	j = (i / 2);
	int i = 0;

	for (i = 0; str[i] > j; i++)
	{

		printf("%c", str[i]);
	}
	printf("\n");
}
