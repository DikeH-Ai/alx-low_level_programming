#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary numbers to unsigned ints.
 *
 * @b: binary characters.
 * Return: returns unint or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int binary_length = 0;
	int i = 0;
	int character_value = 0;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[binary_length] != '\0')
	{
		if ((b[binary_length] != '1') && (b[binary_length] != '0'))
		{
			return (0);
		}
		binary_length++;
	}
	while (b[i] != '\0')
	{
		character_value = b[i] - '0';
		result += character_value * (1 << (binary_length - 1 - i));
		i++;
	}
	return (result);
}
