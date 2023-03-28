#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copy data from an adress to another
 * @dest: destination
 * @src: string pointer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src);

	int i;

	for (i = 0; i < len; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

/**
 * _strlen - count lenght of a string
 * @s: string pointer
 * Return: int count
 *
 *
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
