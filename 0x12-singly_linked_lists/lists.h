#ifndef LIST_H
#define LIST_H

#include <stddef.h>
/**
 * struct list_s - node structure
 * @str: string
 * @len: str lenght
 * @next: pointer to node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char);
size_t print_list(const list_t *h);
#endif /*LIST_H*/
