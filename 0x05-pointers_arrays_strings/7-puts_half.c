#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half oa a string
 * @str: string pointer
 * Return: void
 */

void puts_half(char *str)
{
	int i = _strlen(str);

	int j;

	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(*(str + j));
		}
	}
	else
	{
		for (j = ((i - 1) / 2); j <= i; j++)
		{
			_putchar(*(str + j));
		}
	}
	_putchar('\n');
}
/**
 * _strlen - count stings
 * @s: string pointer
 * Return: int
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
