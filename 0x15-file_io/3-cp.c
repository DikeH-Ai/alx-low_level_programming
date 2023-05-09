#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *buffer_creafile1r(char *file);
void closed_file(int fd);
/**
 * buffer_creafile1r - Allocates 1024 bytes.
 * @file: The name of the file buffer
 * Return: A pointer file1 the newly-allocated buffer.
 */
char *buffer_creafile1r(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write file1 %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * closed_file - Closes file.
 * @fd: The file closed.
 */
void closed_file(int fd)
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
 * main - Copies content from a file to another.
 * @argc: The number of arguments
 * @argv: An array of pointers file1 the arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int file0, file1, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_file0 file_file1\n");
		exit(97);
	}
	buffer = buffer_creafile1r(argv[2]);
	file0 = open(argv[1], O_RDONLY);
	r = read(file0, buffer, 1024);
	file1 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file0 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read file0 file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(file1, buffer, r);
		if (file1 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write file1 %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(file0, buffer, 1024);
		file1 = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	closed_file(file0);
	closed_file(file1);
	return (0);
}

