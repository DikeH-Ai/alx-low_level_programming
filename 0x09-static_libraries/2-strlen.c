#include <stdio.h>
#include "main.h"
/**
 * _strlen - count the lenght of a string
 * @s: pointer to the string
 * Return: the count total
 */
int _strlen(char *s)
{
	int i = 0;

	while (2 == 2)
	{
		if (*(s + i) == '\0')
		{
			break;
		}
		i++;
	}
	return (i);
}
