#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings
 *@separator: parameter
 *@n: argument count
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *string;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ptr, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);

}
