#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string pointer
 * Return: void
 */
void rev_string(char *s)
{
	int i =  _strlen(s) - 1;

	int j;
	char tmp;

	for (j = 0; j < i; j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
	}
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
