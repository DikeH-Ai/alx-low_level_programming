#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *list_len - count list lenght
 *@h: list head
 *Return: returns list count
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	if (h == NULL)
		return ('\0');
	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
