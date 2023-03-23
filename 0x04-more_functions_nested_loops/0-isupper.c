#include "main.h"
/**
 * _isupper - Function checks is letter is uppercase or lower
 * @c: letter to be checked
 * Return: returns 1 if true else 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
