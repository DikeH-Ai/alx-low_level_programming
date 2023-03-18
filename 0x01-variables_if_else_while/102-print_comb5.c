#include <stdio.h>
/**
 * main -Entry point
 * Return: always 0
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			int tens_a = a / 10;
			int ones_a = a % 10;
			int tens_b = b / 10;
			int ones_b = b % 10;

			if (a != b)
			{
				putchar(tens_a + 48);
				putchar(ones_a + 48);
				putchar(32);
				putchar(tens_b + 48);
				putchar(ones_b + 48);
				if (a < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
