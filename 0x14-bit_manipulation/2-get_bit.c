#include "main.h"

/**
 * get_bit - returns the value at an index
 * @n: numbers
 * @index: index to return
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int get_val;

	if (index > 63)
		return (-1);

	get_val = (n >> index) & 1;

	return (get_val);
}
