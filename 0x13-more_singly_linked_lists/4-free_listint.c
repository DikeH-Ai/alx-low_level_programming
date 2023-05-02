#include "lists.h"
/**
 *free_listint - free linked list
 *@head: list head
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;

	while (head)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
