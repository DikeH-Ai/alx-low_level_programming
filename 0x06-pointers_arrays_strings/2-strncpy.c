#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copy dtring from src to dest
 * @dest: string destination
 * @src: string source
 * @n: copy limit
 * Return: dest variable
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
