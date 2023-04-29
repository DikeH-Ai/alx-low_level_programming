#include <stdlib.h>
#include "lists.h"
/**
 *free_list - to free each node memory
 *@head: head node
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;
	list_t *current = head;

	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}
