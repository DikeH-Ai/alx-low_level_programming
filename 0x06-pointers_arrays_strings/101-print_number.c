#include <stdio.h>
#include "main.h"
/**
 * print_number - prints digits to stdout
 * @n: digit
 * Return: void
 */
void print_number(int n)
{
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / div >= 10)
	{
		div *= 10;
	}
	while (div > 0)
	{
		_putchar((n / div) + '0');
		n %= div;
		div /= 10;
	}
}
