#include "main.h"
/**
 * _islower - returns 1 if the value is lowercase else return 0
 * Return: 1 for lowercase, 0 for anything else
 * @c: input
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
