#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenates strings with a given limt
 * @dest: destination string
 * @src: source string
 * @n: string lint
 * Return: returned dest variable
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int j;

	while (2 == 2)
	{
		if (dest[i] == '\0')
		{
			for (j = 0; j <= n && src[j] != '\0'; j++)
			{
				dest[i] = src[j];
				i++;
			}
			break;
		}
		i++;
	}
	return (dest);
}
