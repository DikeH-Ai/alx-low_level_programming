#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * a - lowwercase letters
 * b - capitalcase letters
 * Return: 0 when successful
 */
int main(void)
{
	char a;
	char b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
