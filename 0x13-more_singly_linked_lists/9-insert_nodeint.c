#include "lists.h"
/**
 *insert_nodeint_at_index- insert node
 *@head: linked list head
 *@idx: index
 *@n: int data
 *Return: returns pointer to node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int i = 1;

	new_node =  malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	tmp = *head;

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (tmp)
	{
		if (i == idx)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;

			return (new_node);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
