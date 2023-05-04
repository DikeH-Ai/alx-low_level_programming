#include "main.h"

/**
 * set_bit - sets specific bit to a given value
 * @n: pointer
 * @index: index of the bit to update
 * Return: 1 ,-1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
