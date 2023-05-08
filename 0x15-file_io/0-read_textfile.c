#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 *read_textfile - reads and prints file content
 *@filename: name of file
 *@letters: number of bytes to read and print
 *Return: returns number of bytes written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *letter;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	letter = malloc(sizeof(char) * letters);

	if (fd == -1)
		return (0);
	bytes_read = read(fd, letter, sizeof(char) * letters);

	if (bytes_read == -1)
		return (0);

	if (close(fd) == -1)
		return (0);
	bytes_written = write(STDOUT_FILENO, letter, bytes_read);

	if (bytes_written == -1)
		return (0);
	free(letter);
	return (bytes_written);
}
