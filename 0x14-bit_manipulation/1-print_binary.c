#include "main.h"
#include <stdio.h>

/**
 * print_binary -  print the binary value of n
 * @n: unsigned long int value
 * Returns: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int size = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leading_zeros = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (size != 0)
	{
		if ((n & size) != 0)
		{
			leading_zeros = 0;
			_putchar('1');
		} else if (!leading_zeros)
		{
			_putchar('0');
		}

		size >>= 1;
	}
}

