#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints hash tables
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	size_t i = 0;
	int pos = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (pos)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			pos = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
