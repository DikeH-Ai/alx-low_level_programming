#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - gets the nth index of a double linked list
 * @head: dlist head
 * @index: nth index
 * Return: NULL or a new address
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *c;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	if (index < 0)
		return (NULL);

	c = head;

	while (c->next != NULL)
	{
		/* code */
		if (counter == index)
			return (c);
		c = c->next;
		counter++;
	}

	return (NULL);
}
