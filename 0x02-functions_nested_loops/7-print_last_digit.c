#include "main.h"
/**
 * print_last_digit - returns last digit of each input
 * Return: Last digit
 * @i: input
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;

	if (j < 0)
	{
		j = -j;

		_putchar(j + '0');
		return (j);
	}
	else
	{
		_putchar(j + '0');
		return (j + '0');
	}
}
