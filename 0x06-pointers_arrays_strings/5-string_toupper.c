#include <stdio.h>
#include "main.h"
/**
 * string_toupper - convert lowwercase strings to upper
 * @str: string
 * Return: returns str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((int) str[i] > 96 && (int) str[i] < 123)
		{
			str[i] = (int) str[i] - 32;
		}
	}
	return (str);
}
