#include "main.h"
/**
 * print_most_numbers - prints all digits from 1 to 9 excluding 4,2
 * Return: returns void
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i != 10)
	{
		if (i != 4 && i != 2)
		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
