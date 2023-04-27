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

	const list_t *temp;

	temp = malloc(sizeof(list_t));

	if (h == NULL)
		return ('\0');
	temp = h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	return (i);
}
