#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - return key index
 *
 * @size: table size
 * @key: table size
 * Return: returns key index or null
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	index = index % size;
	return (index);
}
