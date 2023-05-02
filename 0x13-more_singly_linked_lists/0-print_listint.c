#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_listint - print thr value of n in the linked list
 *@h: head
 *Return: returns n
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
