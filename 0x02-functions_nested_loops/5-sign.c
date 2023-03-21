#include "main.h"
/**
 * print_sign - prints +,0 or - for positive, zero and negative digits
 * Return: 1,0,-1
 * @n: input
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
