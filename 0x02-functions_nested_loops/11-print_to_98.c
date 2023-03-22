#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print to stdout
 * Return: no return value
 * @n: input
 */
void print_to_98(int n)
{
	int i;
	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d", i);
			printf(", ");
		}
		printf("%d", 98);
		printf("\n");
	}
	else if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d", i);
			printf(", ");
		}
		printf("%d", 98);
		printf("\n");
	}
	else
	{
		printf("%d", 98);
		printf("\n");
	}
}
