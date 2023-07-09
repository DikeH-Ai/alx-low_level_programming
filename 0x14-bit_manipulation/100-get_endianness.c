#include "main.h"
#include <stdio.h>

/**
 *get_endianness - to discover how different systems store data
 *
 *Return: 1 or 0
 */
int get_endianness(void)
{
	int num = 1;
	int *ptr = &num;

	if (*ptr)
	{
		return (1);
	}else
	{
		return (0);
	}
}
