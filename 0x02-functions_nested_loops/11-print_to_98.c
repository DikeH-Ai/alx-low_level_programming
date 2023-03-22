#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print to stdout
 * Return: no return value
 * @n: input
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%d", n - 1);
			printf(", ");
			n--;
		}
		else
		{
			printf("%d", n + 1);
			printf(", ");
			n++;
		}
	}
	printf("%d\n", 98);
}
