#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 *create_file - create and write to file
 *@filename: file name
 *@text_content: file content
 *Return: returns 1 or -1 if passed or failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t bytes_read = 0;

	if (filename == NULL)
		return (-1);

	if (open(filename, O_RDWR) == -1)
		fd = open(filename, O_RDWR | O_CREAT, 0600);
	else
		fd = open(filename, O_RDWR | O_TRUNC);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[bytes_read] != '\0')
		{
			bytes_read++;
		}
	}

	bytes_written = write(fd, text_content, bytes_read);

	if (bytes_written == -1)
		return (-1);
	close(fd);

	return (1);
}
