#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - memory allocation using malloc
 * @b: number of bytes
 * Return: Returns pointer
 */
void *malloc_checked(unsigned int b)
{
	void *addr;

	addr = malloc(b);

	if (addr == NULL)
		exit(98);

	return (addr);
}

