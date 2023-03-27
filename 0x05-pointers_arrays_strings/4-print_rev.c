#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints strings in reverse
 * @s: string pointer
 * Return: print_rev returns void
 */
int _strlen(char *s);

void print_rev(char *s)
{
	int j = (_strlen(s) - 1);

	while (j >= 0)
	{
		_putchar(*(s + j));
		j--;
	}
	_putchar('\n');
}
/**
 * _strlen -count string
 * @s: string pointer
 * Return: int count
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
