#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @key: item key
 * @ht: hash table
 * Return: value on success or Null on failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];

	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
