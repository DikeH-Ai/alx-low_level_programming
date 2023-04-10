#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints time tables.
 * @n: input
 *
 * leading_space - prints spaces.
 */
void leading_space(int,int,int);

void print_times_table(int n)
{
	if (n < 15 && n >= 0)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				int a = i * j;
				int ceil = a / 10;
				int div = a % 10;

				leading_space(a);
			}
			_putchar('\n');
		}
	}
}
void leading_space(int a, int ceil, int div)
{
	if (a < 10 && a != 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(a + '0');
	}
	else if (a < 100 && a != 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(ceil + '0');
		_putchar(div + '0');
	}
	else if (a < 1000 && a != 0)
	{
		_putchar(',');
		_putchar(' ');
		_putchar((ceil / 10) + '0');
		_putchar((ceil % 10) + '0');
		_putchar(div + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(a + '0');
				}
}
