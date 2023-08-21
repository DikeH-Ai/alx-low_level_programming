#include <stdio.h>
#include "main.h"
/**
 * _strspn - returns thefirst instance of  number of substring in a string
 *@s: string to be scanned
 *@accept: substring
 *
 *Return: returns count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	int j;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		i++;
		if (count != i)
		{
			return (count);
		}
	}
	return (count);
}
