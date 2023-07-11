#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * read_textfile -  print the binary value of n
 * @filename: file to be operated on
 * @letters: number ofletters to be read
 * Return: number of read letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t read_byte = 0;
	int fd = 0;
	int print_byte = 0;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL) 
	{
		close(fd);
		return 0;
	}
	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	read_byte = read(fd, buffer, letters);

	if (read_byte == -1)
	{
		close(fd);
		return (0);
	}

	print_byte = write(STDOUT_FILENO, buffer, read_byte);

	close(fd);
	if ((print_byte == -1) || (print_byte != read_byte))
	{
		return (0);
	}

	return (read_byte);

}
