#include <stdlib.h>
#include "main.h"

/**
 * loader - fills memory
 * @s: memory in areas to be filled
 * @b: char to copy
 * @n:number of things to copy
 * Return: pointer
 */
char *loader(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory for array
 * @nmemb: number of elements in the array
 * @size: each element size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	loader(ptr, 0, nmemb * size);

	return (ptr);
}
