#include <stdio.h>
#include "lists.h"
/**
 *listint_len - returns lenght of linked list
 *@h: linked list head
 *Return: returns n
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
