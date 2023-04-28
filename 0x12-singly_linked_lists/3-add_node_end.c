#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 *add_node_end - add node to the end of the list
 *@head: head of the list
 *@str: strings
 *Return: returns new_node pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int count = 0;

	new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);

	while (str[count])
		count++;
	new_node->len = count;
	new_node->next = NULL;
	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;

		return (new_node);
	}
	return (NULL);
}
