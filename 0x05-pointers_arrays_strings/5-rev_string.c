#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string pointer
 * Return: void
 */
void rev_string(char *s)
{
	int i = sizeof(s);

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
