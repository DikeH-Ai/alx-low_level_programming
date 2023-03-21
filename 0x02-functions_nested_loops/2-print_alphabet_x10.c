#include "main.h"
/**
 * print_alphabet_x10 - function to prin alphabets 10 times
 * _putchar prits out character to stdout
 * Return: there is return value
 */
void print_alphabet_x10(void)
{
	int i = 0;
	while (i != 10)
	{
		int j;

		for (j = 'a'; j < '{'; j++ ) 
		{
			_putchar(j);
		}
		i++;
		_putchar('\n');
	}
}
