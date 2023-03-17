#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 for success
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if ((a != 'e') && (a != 'q'))
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
