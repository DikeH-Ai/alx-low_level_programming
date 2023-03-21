#include "main.h"
/**
 * _isalpha - returns 1 if input is alpha
 * @c: input
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
