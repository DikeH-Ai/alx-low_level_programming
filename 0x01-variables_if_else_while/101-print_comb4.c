#include <stdio.h>
/**
 * main - Entry point
 * Return: returns 0
*/
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				if ((c > b) && (b > a))
				{
					putchar(48 + a);
					putchar(48 + b);
					putchar(48 + c);
					if (a < 7)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n')
	return (0);
}
