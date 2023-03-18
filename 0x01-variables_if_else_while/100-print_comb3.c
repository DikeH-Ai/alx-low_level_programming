#include <stdio.h>
/**
 * main - Entry point
 * Return: alway return o
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a != b) && (b > a))
			{
				putchar(48 + a);
				putchar(48 + b);
				if (a < 8)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
