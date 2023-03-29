#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source sting
 * Return: returns the dest varibale
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	int j = 0;

	while (2 == 2)
	{
		if (dest[i] == '\0')
		{
			while (src[j] != '\0')
			{
				dest[i] = src[j];
				j++;
				i++;
			}
			break;
		}
		i++;
	}
	return (dest);
}
