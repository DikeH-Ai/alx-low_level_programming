#include <stdio.h>
/**
 * main- Entry point
 * Return: return 0
*/
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					if (((c + d) > (a + b) && (a <= c)))
					{
						putchar(48 + a);
						putchar(48 + b);
						putchar(32);
						putchar(48 + c);
						putchar(48 + d);
					}
					if (b < 8)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	return (0);
}
