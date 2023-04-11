#include <stdlib.h>
/**
 *str_concat - concatenate two strings
 *@s1: first value
 *@s2: second string value
 *Return: returns pointers
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, c, d;
	char *ptr;

	a = 0;
	while (s1[a] != '\0')
		a++;
	b = 0;
	while (s2[b] != '\0')
		b++;
	ptr = malloc(sizeof(*ptr) * (a + b + 1));

	if (!ptr)
		return (NULL);
	else
	{
		for (c = 0; c < a; c++)
			ptr[c] = s1[c];
		for (d = 0; d < b; d++, c++)
			ptr[c] = s2[d];
		ptr[c] = '\0';
		return (ptr);
	}
	return (NULL);
}
