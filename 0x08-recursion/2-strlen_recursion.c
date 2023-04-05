#include "main.h"
/**
 *_strlen_recursion - count characters in a string
 *@s: string
 *Return: number of characters
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + (_strlen_recursion(s + 1)));
	}
}
