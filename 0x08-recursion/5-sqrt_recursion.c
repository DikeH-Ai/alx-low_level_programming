#include "main.h"
int square(int, int);
/**
 *_sqrt_recursion - returns the value of square
 *@n: integer parameter
 *Return: value of sunction square
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else
		return	(square(1, n));
}
/**
 *square - checks and finds the square root of a number
 *@i: square parameter
 *@j: int n from the _sqrt_recussion function
 *Return: retursn the square root
 */
int square(int i, int j)
{
	if (i * i == j)
		return (i);
	else if (i > j)
		return (-1);
	else
		return (square(i + 1, j));
}
