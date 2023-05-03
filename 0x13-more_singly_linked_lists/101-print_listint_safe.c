#include "lists.h"
#include <stdio.h>

/**
 * check_nodes - returns number of unique nodes
 * @head: linked list head
 * Return: size_t
 */
size_t check_nodes(const listint_t *head)
{
	const listint_t *node1, *node2;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	node1 = head->next;
	node2 = (head->next)->next;

	while (node2)
	{
		if (node1 == node2)
		{
			node1 = head;
			while (node1 != node2)
			{
				nodes++;
				node1 = node1->next;
				node2 = node2->next;
			}

			node1 = node1->next;
			while (node1 != node2)
			{
				nodes++;
				node1 = node1->next;
			}

			return (nodes);
		}

		node1 = node1->next;
		node2 = (node2->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list
 * @head:head of the listint_t list.
 * Return: returns number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = check_nodes(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

