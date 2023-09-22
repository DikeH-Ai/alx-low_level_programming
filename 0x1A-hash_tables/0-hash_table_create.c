#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 *
 * @size: table size
 * Return: returns hash table pointer or null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = calloc(1, sizeof(hash_table_t));

	if (ht == NULL || size == 0)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
