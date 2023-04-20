#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects the correct function to perform
 * @s: operator
 * Return: A pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (*(ops[i].op) == *s && *(s + 1) == '\0')
			return (ops[i].f);
	}
	return (NULL);
}
