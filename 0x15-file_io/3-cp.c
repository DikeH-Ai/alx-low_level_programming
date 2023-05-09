#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *init_buffer(char *file);
void close_func(int fd);

/**
 * init_buffer - Allocates 1024
 * @file: The name of the file buffer
 * Return: A pointer to buffer.
 */
char *init_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_func - Close descriptors.
 * @fd: The file descriptor to closed.
 */
void close_func(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another
 * @argc: The number of arguments
 * @argv: An array of pointers
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file1, file2, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = init_buffer(argv[2]);
	file1 = open(argv[1], O_RDONLY);
	r = read(file1, buffer, 1024);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(file2, buffer, r);
		if (file2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(file1, buffer, 1024);
		file2 = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_func(file1);
	close_func(file2);

	return (0);
}

