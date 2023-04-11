#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 *main -entry point
 *@argc: argument count
 *@argv: argument vector
 *Return: returns 1 or 0 for success or faliure
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	int i, j;

	if (argc == 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
