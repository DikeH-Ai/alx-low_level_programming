#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
/**
 *sum_them_all - calculates the sum of a series of digits
 *@n: argument count
 *Return: returns the summed value
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x = 0;

	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	for (i = 0; i < n; i++)
		x += va_arg(ptr, int);
	va_end(ptr);
	return (x);
}
