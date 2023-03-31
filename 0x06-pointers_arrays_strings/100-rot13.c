#include <stdio.h>
#include "main.h"
/**
 * rot13 - encode string using rot13 method
 * @str: string
 * Return: returns str
 */
char *rot13(char *str)
{
	char alpha[52] = {
		'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e', 'F', 'f',
		'G', 'g', 'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k', 'L', 'l',
		'M', 'm', 'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r',
		'S', 's', 'T', 't', 'U', 'u', 'V', 'v', 'W', 'w', 'X', 'x',
		'Y', 'y', 'Z', 'z'};

	char value[52] = {
		'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', 'r', 'S', 's',
		'T', 't', 'U', 'u', 'V', 'v', 'W', 'w', 'X', 'x', 'Y', 'y',
		'Z', 'z', 'A', 'a', 'B', 'b', 'C', 'c', 'D', 'd', 'E', 'e',
		'F', 'f', 'G', 'g', 'H', 'h', 'I', 'i', 'J', 'j', 'K', 'k',
		'L', 'l', 'M', 'm'};

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha[j])
			{
				*(str + i) = value[j];
				break;
			}
		}
	}
	return (str);
}

