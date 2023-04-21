#include <stdio.h>
#include <stdlib.h>
/**
 *print_opcodes - prints opcodes
 *@func_ptr: main function
 *@size: byte size
 *Return: returns void
 */
void print_opcodes(void *func_ptr, size_t size)
{
	unsigned char *ptr = (unsigned char *)func_ptr;

	for (size_t i = 0; i < size; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");
}
/**
 *main -  Entry function
 *@argc: argument count
 *@argv: argument vector
 *Return: always zero for success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(&main, (size_t)size);
	return (0);
}
