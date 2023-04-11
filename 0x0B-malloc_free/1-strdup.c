#include <stdlib.h>
/**
 *_strdup - create pointer to an array
 *@str: str parameter
 *Return: returns NULL or pointer
 */
char *_strdup(char *str)
{
	int a, b;

	char *dup;

	if (!str)
		return (NULL);
	a = 0;

	while (str[a] != '\0')
		a++;
	dup = malloc(sizeof(*dup) * (a + 1));

	if (!dup)
		return (NULL);
	for (b = 0; b < a; b++)
	{
		dup[b] = str[b];
	}
	return (dup);
}
