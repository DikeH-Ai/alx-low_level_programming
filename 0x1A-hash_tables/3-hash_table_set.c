#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - create hash table
 * @key: item key
 * @ht: hash table
 * @value: table size
 * Return: 1 on success or 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *keycpy, *valuecpy;
	hash_node_t *new_node  = malloc(sizeof(hash_node_t));
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	if (new_node == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	keycpy = strdup(key);

	valuecpy = (value != NULL) ? strdup(value) : strdup("");
	tmp = ht->array[index];

	if (valuecpy == NULL || keycpy == NULL)
	{
		free(new_node);
		return (0);
	}
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			free(new_node);
			tmp->value = valuecpy;
			return (1);
		}
		tmp = tmp->next;
	}
	new_node->key = keycpy;
	new_node->value = valuecpy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
