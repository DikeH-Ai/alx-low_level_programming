#include <stdlib.h>
/**
 *argstostr - concatenates all command line arguments
 *@ac: argument count
 *@av: argument vector
 *Return: Returns a pointer to the new array
 */
char *argstostr(int ac, char **av)
{
	int i = 0;

	int count  = 0;

	int j;
	char *ptr;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	while (i < ac)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
		i++;
	}
	ptr = malloc(sizeof(*ptr) * count + 1);
	i = 1;

	count = 0;

	if (!ptr)
		return (NULL);


	while (i < ac)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[count] = av[i][j];
			count++;
		}
		if (ptr[count] == '\0')
			ptr[count++] = '\n';
		i++;
	}
	return (ptr);
}
