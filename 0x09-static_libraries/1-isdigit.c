#include "main.h"
/**
 * _isdigit - returns if a number is figit or alpha
 * @c: character to be checked
 * Return: returns 1 if character is digits else 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
