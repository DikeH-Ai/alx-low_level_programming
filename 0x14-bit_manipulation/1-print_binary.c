#include "main.h"

/**
 * print_binary - prints binary digits of a decimal number
 * @n: number
 */
void print_binary(unsigned long int n)
{
	int i, len = 0;
	unsigned long int active;

	for (i = 63; i >= 0; i--)
	{
		active = n >> i;

		if (active & 1)
		{
			_putchar('1');
			len++;
		}
		else if (len)
			_putchar('0');
	}
	if (!len)
		_putchar('0');
}
