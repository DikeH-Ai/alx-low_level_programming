#include <stdio.h>
#include "main.h"
/**
 * clear_bit - changes bit from 1 to 0
 * @n: unsigned long int value
 * @index: position index
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
	{
		return (-1);
	}

	*n = *n & (~(mask << index));
	return (1);
}
