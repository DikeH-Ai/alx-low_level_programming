#include "lists.h"
/**
 *add_nodeint_end - add new node to the end of a linked list
 *@head: list head
 *@n: data
 *Return: returns new_node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	while (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp)
	{
		if (tmp->next == NULL)
		{
			tmp->next = new_node;
			return (new_node);
		}
		tmp = tmp->next;
	}
	return (new_node);
}
