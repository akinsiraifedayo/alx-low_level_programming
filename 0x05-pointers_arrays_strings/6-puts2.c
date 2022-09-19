#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* puts2: prints a string
*
* @str: takes in the string
* Return: 0
*/
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
			printf("%c", str[i]);
	}
	printf("\n");
}
