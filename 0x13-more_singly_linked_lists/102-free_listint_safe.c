#include "lists.h"
/**
 * free_listint_safe - frees  linked list
 * @h: head
 * Return: number of elements freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	int sub;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		sub = *h - (*h)->next;
		if (sub > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			num++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num++;
			break;
		}
	}
	*h = NULL;
	return (num);
}
