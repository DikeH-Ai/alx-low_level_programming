#include "lists.h"

/**
 * print_dlistint - Prints elements of a dlistint_t list.
 * @h: head node
 * Return: num_node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_node = 0;
	dlistint_t *c;

	c = h;
	while (c != NULL)
	{
		printf("%d\n", c->n);
		c = h->next;
		num_node++;
	}

	return (num_node);
}
