#include <stdio.h>
#include "main.h"
/**
 * rot13 - encode string using rot13 method
 * @str: string
 * Return: returns str
 */
char *rot13(char *str)
{
	char *c = str;

	char upper[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char lower[27] = "abcdefghijklmnopqrstuvwxyz";

	int i, j;

	while (*c)
	{
		if (*c >= 'A' && *c <= 'Z')
		{
			i = (*c - 'A' + 13) % 26;
			*c = upper[i];
		}
		else if (*c >= 'a' && *c <= 'z')
		{
			j = (*c - 'a' + 13) % 26;
			*c = lower[j];
		}
		c++;
	}
	return (str);
}

