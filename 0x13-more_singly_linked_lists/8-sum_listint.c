#include "lists.h"
/**
 *sum_listint - sums the values of n in all the nodes in the linked list
 *@head: linked list head
 *Return: returns the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head == NULL)
		return (0);
	tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
