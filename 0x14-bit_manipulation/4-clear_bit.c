#include "main.h"

/**
 * clear_bit - Update the value of a given bit to 1
 * @n: pointer
 * @index: index of the bit to update
 * Return: 1 ,-1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
