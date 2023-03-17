#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * putchar = print char to stdout
 * Return: 0 for success
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
