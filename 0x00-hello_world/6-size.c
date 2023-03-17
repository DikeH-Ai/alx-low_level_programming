#include <stdio.h>

/**
 * main- Entry point
 *
 * printf - Print to stdout
 *
 * Return - Always return 0 (success)
 */
int main(void)
{
	int i;
	char j;
	float f;
	long int li;
	long long int ld;

	printf("Size of a char: %ld byte(s)\n", sizeof(j));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(ld));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));

	return (0);
}