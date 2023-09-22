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
	if(ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			nextp = tmp;
			tmp = tmp->next;
			free(nextp->key);
			free(nextp->value);
			free(nextp);
		}
	}
	free(ht->array);
	free(ht);
}
