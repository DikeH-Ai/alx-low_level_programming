#include <stdio.h>
#include "main.h"
/**
 * swap_int - swap the values of two digits
 * @a: first int
 * @b: second int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;

	*a = *b;

	*b = tmp;
}
