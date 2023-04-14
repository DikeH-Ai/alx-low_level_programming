#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a string to another
 * @s1: string to append
 * @s2: string to concatenate
 * @n: number of bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len = 0, len1 = 0;

	while (s1 && s1[len])
		len++;
	while (s2 && s2[len1])
		len1++;

	if (n < len1)
		s = malloc(sizeof(char) * (len + n + 1));
	else
		s = malloc(sizeof(char) * (len + len1 + 1));

	if (!s)
		return (NULL);

	while (i < len)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < len1 && i < (len + n))
		s[i++] = s2[j++];

	while (n >= len && i < (len + len1))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
