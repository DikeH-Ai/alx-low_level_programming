#include "main.h"

/**
 * flip_bits - lenght of number of bits to change
 * @n: first number
 * @m: second number
 * Return: nmber of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, len = 0;
	unsigned long int active;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		active = exclusive >> i;
		if (active & 1)
			len++;
	}

	return (len);
}
