#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * i: last digit
 * n: generated number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
	if (i > 5)
	{
		printf("Last digit of %ld is %ld and is greater than 5\n", n, i);
	}
	else if (i == 0)
	{
		printf("Last digit of %ld is %ld and is 0\n", n, i);
	}
	else if ((i != 0) && (i < 6))
	{
		printf("Last digit of %ld is %ld and is less than 6 and not 0\n");
	}
	return (0);
}
