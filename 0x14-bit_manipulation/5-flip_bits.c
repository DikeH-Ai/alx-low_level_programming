#include "main.h"
#include <stdio.h>

/**
 *flip_bits - count the total number of bits to be flip to get to a number
 *@n: unsigned long int to compare(first oprand)
 *@m: unsigned long int to compare(second oprand)
 *Return: returns flip counter variable
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int n_bit = 0;
	int m_bit = 0;
	int flip_counter = 0;

	while ((n != 0) || (m != 0))
	{
		n_bit = n  & 1;
		m_bit = m & 1;
		if (n_bit != m_bit)
		{
			flip_counter++;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (flip_counter);
}
