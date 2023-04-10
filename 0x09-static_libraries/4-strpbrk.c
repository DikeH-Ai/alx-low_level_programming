#include <stdio.h>
#include "main.h"
/**
 *_strpbrk - returns pointer to the first instance of a substring
 *@s: string to be scanned
 *@accept: substrings to be searched for
 *Return: pointer (s + i)
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		i++;
	}
	return (NULL);
}
