#include "main.h"
#include <stdio.h>
/**
 *print_diagsums -  sums the diagonal values of an array
 *@a: array value
 *@size: size of the array
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;

	int sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i * size + i];
	}
	printf("%d, ", sum);
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + (size - i - 1)];
	}
	printf("%d\n", sum1);
}
