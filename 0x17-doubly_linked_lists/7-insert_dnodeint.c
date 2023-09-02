#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insersts node to index in a double linked list
 * @h: dlist head
 * @idx: index
 * @n: node data
 * Return: NULL or a new address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *c = malloc(sizeof(dlistint_t));
	unsigned int counter = 0;
	dlistint_t *ptr;

	if (h == NULL)
		return (NULL);

	c->n = n;
	ptr = *h;

	while (ptr != NULL)
	{
		if (counter == (idx - 1))
		{
			c->next = ptr->next;
			c->prev = ptr;
			ptr->next = c;
			return (c);
		}
		ptr = ptr->next;
		counter++;
	}
	return (NULL);
}
