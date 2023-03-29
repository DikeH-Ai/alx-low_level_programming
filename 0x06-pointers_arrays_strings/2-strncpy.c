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
	unsigned long int i;

	int j;

	for (i = 0; i <= sizeof(*(dest)); i++)
	{
		dest[i] = '\0';
	}

	for (j = 0; j != n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
