#include <stdio.h>
#include "main.h"
/**
 * rot13 - encode string using rot13 method
 * @str: string
 * Return: returns str
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((((int)str[i] < 91) && ((int)str[i] > 77)) ||
				(((int)str[i] < 123) && ((int)str[i] > 109)))
		{
			*(str + i) = (int)str[i] - 13;
		}
		else if ((((int)str[i] > 64) && (int)str[i] < 78) ||
				(((int)str[i] > 96) && ((int)str[i] < 110)))
		{
			*(str + i) = (int)str[i] + 13;
		}
	}
	str[i] = '\0';
	return (str);
}
