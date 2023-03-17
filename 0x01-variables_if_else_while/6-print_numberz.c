#include <stdio.h>
/**
 * main - Entry point
 * Return: returns 0 for success
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(48 + a);
		a++;
	}
	putchar('\n');
	return (0);
}
