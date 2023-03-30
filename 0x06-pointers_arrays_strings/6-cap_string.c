#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalize all words in a string excluding special characters
 * @str: string
 * Return: return str
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 'a' + 'A';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' ||
				str[i] == '.' || str[i] == '!' ||
				str[i] == '?' || str[i] == '\"' ||
				str[i] == '(' || str[i] == ')' ||
				str[i] == '{' || str[i] == '}')
		{
			if ((int) str[i + 1] > 96 && (int) str[i + 1] < 123)
			{
				str[i + 1] = (int) str[i + 1] - 32;
			}
		}
	}
	str[i] = '\0';
	return (str);
}
