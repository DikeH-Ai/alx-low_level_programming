#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * fwrite - print stderr
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			58, 1, stderr);
	return (1);
}
