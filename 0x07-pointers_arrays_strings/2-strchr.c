#include "main.h"
#include <stdio.h>
/**
 *_strchr - return the first occurance of a character in a string
 *@s: string to be scanned
 *@c: character to be checked
 *Return: returned ptr pointer
 */
char *_strchr(char *s, char c)
{
	int i;
	if (c == '\0')
	{
		return (s);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] ==  c)
		{
			return (s);
		}
	}
	return (NULL);
}
