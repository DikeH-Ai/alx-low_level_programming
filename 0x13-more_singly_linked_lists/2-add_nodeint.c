#include "lists.h"
/**
 *add_nodeint - add new node to the beginning of a linked list
 *@head: list head
 *@n: data
 *Return: returns pointer to new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n  = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
