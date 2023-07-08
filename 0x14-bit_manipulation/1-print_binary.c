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
	int zeros_leading = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (size != 0)
	{
		if ((n & size) != 0)
		{
			zeros_leading = 0;
			_putchar('1');
		} else if (!zeros_leading)
		{
			_putchar('0');
		}

		size >>= 1;
	}
}

