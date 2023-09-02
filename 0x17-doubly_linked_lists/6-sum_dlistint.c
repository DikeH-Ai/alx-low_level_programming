#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - sums data of a double linked list
 * @head: dlist head
 * Return: NULL or a new address
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *c;
	int total = 0;

	if (head == NULL)
		return (0);

	c = head;

	while (c != NULL)
	{
		total += c->n;
		c = c->next;
	}
	return (total);
}
