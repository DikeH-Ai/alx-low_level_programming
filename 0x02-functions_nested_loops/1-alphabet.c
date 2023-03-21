#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - print all lowwercae alphabets
 * _putchar to return char values
 * Return: this function does not rutern anything
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i < '{'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
