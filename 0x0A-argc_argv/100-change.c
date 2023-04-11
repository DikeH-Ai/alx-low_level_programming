#include <stdio.h>
#include <stdlib.h>
/**
 * main - count number of change
 * @argc: arg count
 * @argv: arg vector
 * Return: o or 1
 */
int change(int);
int main(int argc, char *argv[])
{
	int cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", change(cent));
	return (0);
}
/**
 *change - returns change count
 *@cent: change
 *Return: int
 */
int change(int cent)
{
	if (cent <= 0)
		return (0);
	else if (cent >= 25)
		return (change(cent - 25) + 1);
	else if (cent >= 10)
		return (change(cent - 10) + 1);
	else if (cent >= 5)
		return (change(cent - 5) + 1);
	else if (cent >= 2)
		return (change(cent - 2) + 1);
	else
		return (change(cent - 1) + 1);
}
