#include <stdlib.h>
/**
 * counter - count the number of words in a string
 * @str:input string
 * Return: the number of words in the string
 */
int counter(char *str)
{
	int count = 0;

	while (*str)
	{	
		while (*str && (*str == ' '))
			str++;
		if (*str)
			count++;
		while (*str && *str != ' ')
			str++;
	}

	return count;
}
/**
 * strtow - spliting into words
 * @str: string
 * Return: returns NULL or double pointer to string
 */
char **strtow(char *str)
{
	char **words;
	int count, i, j, k, len;

	if (str == NULL || *str == '\0')
		return NULL;

	count = counter(str);
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return NULL;

	i = 0;
	while (*str)
	{
		while (*str && (*str == ' '))
			str++;
		len = 0;
		while (str[len] && str[len] != ' ')
			len++;
	}
	if (len > 0)
	{
		words[i] = malloc(sizeof(char) * (len + 1));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
			free(words[k]);
			free(words);
			return NULL;
		}
		for (j = 0; j < len; j++)
			words[i][j] = str[j];
		words[i][len] = '\0';
		i++;
	}
	str += len;

	words[i] = NULL;

	return words;
}
