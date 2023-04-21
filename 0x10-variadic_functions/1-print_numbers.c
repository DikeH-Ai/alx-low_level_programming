#include <stdio.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdarg.h>
/**
 *print_numbers - prints numbers
 *@separator: function parameter
 *@n: parameter
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (n == 0)
		return;
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator != NULL)
			if (i != (n - 1))
				printf("%c", *separator);
	}
	printf("\n");
}
