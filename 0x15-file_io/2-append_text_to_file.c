#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 *append_text_to_file - append text to file
 *@filename: file name
 *@text_content: text content
 *Return: return 1 or -1 if passed or failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, byte_written, i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		return (1);
	}
	else
	{
		while (text_content[i] != '\0')
			i++;
	}
	byte_written = write(fd, text_content, i);

	if (byte_written == -1)
		return (-1);
	close(fd);
	return (1);
}
