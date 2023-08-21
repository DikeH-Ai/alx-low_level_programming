#include <stdio.h>
#include "main.h"
/**
 *_memset - this function replaces the values in an array with a specific value
 *@s: pointer to the array
 *@b: specific value to be replaced with
 *@n: number of times the value is to be replaced
 *Return: returns a pointer to the array (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
