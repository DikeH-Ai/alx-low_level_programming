#include "main.h"
#include <stdio.h>

/**
 *set_bit - sets the bit at position index to 1
 *@n: digit to operate on
 *@index: position to switch to 1
 *Return: return 1 or -1
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
	{
		return (-1);
	}
	*n = *n | (mask << (index));
	return (1);
}
