#include "lists.h"
/**
 *get_nodeint_at_index - get node at index
 *@head: link list head
 *@index: index number to et node from
 *Return: returns the said node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	tmp = head;
	while (tmp)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
