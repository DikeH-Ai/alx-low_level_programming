#include "main.h"
/**
 * print_line - prints a stright line
 * @n: number input
 * Return: returns void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
