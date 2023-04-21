#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *main -  Entry function
 *@argc: argument count
 *@argv: argument vector
 *Return: always zero for success
 */
int main(int argc, char *argv[])
{
	int num, i;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		return (2);
	}
	ptr = (char *)main;

	for (i = 0; i < num; i++)
	{
		if (i == num - 1)
		{
			printf("%02hhx\n", ptr[i]);
			break;
		}
		printf("%02hhx ", ptr[i]);
	}
	return (0);
}
