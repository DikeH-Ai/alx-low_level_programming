#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free list recursively
 * @head: dlist head
 * Return: Non
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
		free(temp);
	}
}
