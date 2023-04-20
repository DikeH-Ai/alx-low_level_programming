#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - executes function for each array element
 *@array: list of elements
 *@size: size of the array
 *@action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
