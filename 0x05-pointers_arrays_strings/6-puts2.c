#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints the other stings
 * @str: string pointer
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (2 == 2)
	{
		if (*(str + i) == '\0')
		{
			break;
		}
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
