#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node - add node to the beginning of the list
 * @head: double pointer to the head of the list
 * @str: sting
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->str = strdup(str);

		while (str[count])
			count++;
		new_node->len = count;

		new_node->next = *head;

		*head = new_node;

		return (new_node);
	}
	return (NULL);
}
