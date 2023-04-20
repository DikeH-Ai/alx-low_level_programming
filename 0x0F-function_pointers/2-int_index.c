#include "function_pointers.h"
/**
 *int_index- finds the index of an int in an array
 *@array: array to be parsed
 *@size: array size
 *@cmp: function pointer
 *Return: returns Index of sucessful else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		x = cmp(array[i]);

		if (x != 0)
			return (i);
	}
	return (-1);
}
