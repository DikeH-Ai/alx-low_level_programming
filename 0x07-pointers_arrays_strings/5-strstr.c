#include "main.h"
#include <stdio.h>
/**
 *_strstr - search for substing in string
 *@haystack: sting to be scanned
 *@needle: substring to be searched for
 *Return: haystack pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			else
			{
				return ((haystack + i));
			}
		}
	}
	return (NULL);
}
