#include "main.h"
#include <stdio.h>
int _strlen_recursion(char *);
int check(char *s, int a, int b);
/**
 *is_palindrome - identify a palindrome
 *@s: sting
 *Return: check function value
 */
int is_palindrome(char *s)
{
	if (*s == ' ')
		return (1);
	else
		return (check(s, 0, (_strlen_recursion(s) - 1)));
}
/**
 *check - checks if a word is a palandrin
 *@s: string value
 *@a: integer
 *@b: integer
 *Return: return check value
 */
int check(char *s, int a, int b)
{
	if (s[a] != s[b])
		return (0);
	if ((a == b) || (b - a == 1))
		return (1);
	else
		return (check(s, (a + 1), (b - 1)));
}
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
