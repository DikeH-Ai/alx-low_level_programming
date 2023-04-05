#include "main.h"
/**
 *_pow_recursion - calculate x raised to the value of y
 *@x: integer
 *@y: raised value
 *Return: x rasied to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
