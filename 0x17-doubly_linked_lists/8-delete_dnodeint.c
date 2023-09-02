#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes node to index in a double linked list
 * @head: dlist head
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *c;
	unsigned int counter = 0;

	if (head == NULL)
		return (-1);


	c = *head;

	while (c != NULL)
	{

		if (counter == index)
		{
			if (index == 0)
			{
				*head = c->next;
				return (1);
			}

			c->prev->next = c->next;

			c->next->prev = c->prev;
			return (1);
		}
		c = c->next;
		counter++;
	}

	return (-1);
}
