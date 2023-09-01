#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds new node to a doubly linked list
 * @head: dlist head
 * @n: data
 * Return: NULL or a new address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *c = malloc(sizeof(dlistint_t));

	dlistint_t *temp;

	if (c == NULL)
		return (NULL);

	c->n = n;
	c->next = NULL;

	if (*head == NULL)
	{
		c->prev = NULL;
		*head = c;
		return (*head);
	}
	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = c;
		c->prev = temp;
	}
	return (*head);
}
