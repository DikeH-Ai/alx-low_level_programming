#include <stdio.h>
#include "main.h"

/**
 * _puts - print strings
 * @str: strings pointer
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (*(str + i) == '\0')
		{
			break;
		}
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
