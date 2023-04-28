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
	while (head)
	{
		temp = head->next;
		free(head->str);
		head->len = '\0' ;
		free(head);
		head = temp;
	}
}
