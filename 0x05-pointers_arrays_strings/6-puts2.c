#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _puts: prints a string
*
* @str: takes in the string
* Return: 0
*/
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0);
			printf("%c", str[i]);
	}
	printf("\n");
}
