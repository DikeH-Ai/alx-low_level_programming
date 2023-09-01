#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds new node to a doubly linked list
 * @head: dlist head
 * @n: data
 * Return: NULL or a new address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *c = malloc(sizeof(dlistint_t));

	if (c == NULL)
		return (NULL);
	c->n = n;
	c->next = *head;
	c->prev = NULL;

	if (*head != NULL)
		(*head)->prev = c;

	*head = c;
	return (*head);
}
