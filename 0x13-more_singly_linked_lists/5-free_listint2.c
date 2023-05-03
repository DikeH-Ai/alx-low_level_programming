#include "lists.h"
/**
 *free_listint2 - free linked list and set head to NULL
 *@head: linked list head
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
