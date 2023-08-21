#include "main.h"
/**
 * _abs - function to return abs value
 * Return: real value
 * @r: Input
 */
int _abs(int r)
{
	int i;

	if (r < 0)
	{
		i = r * 2;
		r = r - i;

		return (r);
	}
	else
	{
		return (r);
	}
}
