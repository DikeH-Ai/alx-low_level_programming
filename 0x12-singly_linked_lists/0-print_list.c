#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints node data
 * @h: head node
 * Return: returns size_t
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
