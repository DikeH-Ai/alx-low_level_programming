#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - convert binary to decimal
 * @b: string literals
 * Return: returns decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = (result << 1) | (b[i] - '0');
	}
	return (result);
}

