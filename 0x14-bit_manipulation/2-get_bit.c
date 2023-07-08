#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int printer_binary(unsigned long int n);

/**
 *get_bit - return the value of a bit at a given index
 *@n: number to be worked on
 *@index: index to be returned
 *Return: index or -1
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;
	unsigned int max_bit = 64;

	if (index > max_bit)
	{
		return (-1);
	}

	bit = (n >> index) & 1;

	return (bit);
}
