#include "lists.h"
/**
 *pop_listint - remove and return the linked list head data
 *@head: head of the linked list
 *Return: returns data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	tmp = *head;
	n = tmp->n;

	tmp = tmp->next;
	free(*head);
	*head = tmp;

	return (n);
}
