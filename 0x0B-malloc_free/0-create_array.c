#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - a function that creates an array of chars
 *@size: size of the characters
 *@c: character for initialization
 *Return: returns null or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * size);
	if (ptr)
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;
		return (ptr);
	}
	return (NULL);
}
