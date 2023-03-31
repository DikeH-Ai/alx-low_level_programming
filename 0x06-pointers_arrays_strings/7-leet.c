#include <stdio.h>
#include "main.h"
/**
 * leet - encode strings using the leet encoding method
 * @s: string
 * Return: returns s variable
 */
char *leet(char *s)
{
	char  str[] = {'a', 'e', 'o', 't', 'l'};

	char cap[] = {'A', 'E', 'O', 'T', 'L'};

	char val[] = {'4', '3', '0', '7', '1'};

	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == str[j] || s[i] == cap[j])
				s[i] = val[j];
		}
	}
	s[i] = '\0';
	return (s);
}
