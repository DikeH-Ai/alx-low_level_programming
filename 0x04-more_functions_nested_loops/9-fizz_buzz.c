#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: void
 */
int main(void)
{
	int i = 100;
	int j;

	for (j = 1; j <= i; j++)
	{
		if ((j % 3 == 0) && (j % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (j % 5 == 0)
		{
			printf("Buzz");
		}
		else if (j % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", j);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
