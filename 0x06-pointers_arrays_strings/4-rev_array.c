#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses the values in an array
 * @a: array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;

	int tmp;

	for (i = 0; i < (n / 2) && j != 0; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
