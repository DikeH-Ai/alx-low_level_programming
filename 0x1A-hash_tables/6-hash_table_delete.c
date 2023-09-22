#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_delete - prints hash tables
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{

	hash_node_t *tmp, *nextp;
	size_t i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			nextp = tmp;
			tmp = tmp->next;
			if(nextp->key)
				free(nextp->key);
			if(nextp->value)
				free(nextp->value);
			free(nextp);
		}
	}
	free(ht->array);
	free(ht);
}
