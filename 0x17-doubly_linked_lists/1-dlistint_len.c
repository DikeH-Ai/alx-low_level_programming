#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - counts elements of a dlistint_t list.
 * @h: head node
 * Return: num_node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_node = 0;
	const dlistint_t *c;

	c = h;
	while (c != NULL)
	{
		c = c->next;
		num_node++;
	}

	return (num_node);
}
