#include "main.h"
int prime_num(int, int);
/**
 *is_prime_number - return the value of the prime_num function
 *@n: integer parameter
 *Return: prime_num function int value
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else
		return (prime_num(2, n));
}
/**
 *prime_num - i dentify prime numbers
 *@i: integer parameter
 *@j: int parameter
 *Return: return 0 for non_prime numbers and 1 for prime digits
 */
int prime_num(int i, int j)
{
	if (((j % i) == 0) && (j != i))
		return (0);
	else if ((i % i == 0) && (j == i))
		return (1);
	else if (i > j)
		return (0);
	else
		return (prime_num(i + 1, j));
}
