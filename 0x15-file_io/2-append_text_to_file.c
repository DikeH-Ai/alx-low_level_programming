#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - append text to file
 * @filename: file to operate on
 * @text_content: content to append
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, cnt, write_byte;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (cnt = 1; text_content[cnt];)
			cnt++;
	}

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
		return (-1);

	write_byte = write(fd, text_content, cnt);

	if (write_byte == -1)
		return (-1);

	return (1);
}
