#include <stdio.h>
#include <stdlib.h>
unsigned int change(unsigned int);
/**
 * main- count number of change
 * @argc: arg count
 * @argv: arg vector
 * Return: o or 1
 */
int main(int argc, char *argv[])
{
	long int cent;
	unsigned int count;

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
	count = change(cent);
	printf("%u\n", count);
	return (0);
}
/**
 *change- returns change count
 *@cent: change
 *Return: int
 */
unsigned int change(unsigned int cent)
{
	int count = 0;

	while (cent > 0)
	{
		if (cent >= 25)
			cent = cent - 25;
		else if (cent >= 10)
			cent = cent - 10;
		else if (cent >= 5)
			cent = cent - 5;
		else if (cent >= 2)
			cent = cent - 2;
		else
			cent = cent - 1;
		count++;
	}
	return (count);
}
