#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: return either 15,-15 or 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	int result1 = 0;

	int result2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		result1 = result1 + ((int) s1[i]);
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		result2 = result2 + ((int) s2[i]);
	}
	if ((result1 - result2) > 0)
		return (15);
	else if ((result1 - result2) < 0)
		return (-15);
	else
		return (0);
}
