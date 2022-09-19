#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strlen - change value of a variable pointer is pointing to to 98
*
* @s: takes in the char input
* Return: 0
*/
int _strlen(char *s)
{
	int cnt, i;
	char z;

	for (i = 0; s[i]; i++)
	{
		cnt++;
	}
	return (cnt);
}
