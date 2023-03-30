#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalize all words in a string excluding special characters
 * @str: string
 * Return: return str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' &&
				str[i] != ',' && str[i] != ';' &&
				str[i] != '.' && str[i] != '!' &&
				str[i] != '?' && str[i] != '\"' &&
				str[i] != '(' && str[i] != ')' &&
				str[i] != '{' && str[i] != '}')
		{
			if ((int) str[i] > 96 && (int) str[i] < 123)
			{
				str[i] = (int) str[i];
			}
		}
	}
	return (str);
}
