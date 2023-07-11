#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates file, trncate file if it already exsit
 * @filename: name fof the file
 * @text_content: content to be written to the file
 * Return: 1 or -1 for succes or failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int cnt, written_byte = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	cnt = 1;

	if (text_content != NULL)
	{
		while (text_content[cnt] != '\0')
		{
			cnt++;
		}
	}
	else
	{
		cnt = 0;
	}

	written_byte = write(fd, text_content, cnt);
	if (fd == -1)
		return (-1);
	if (written_byte == -1)
		return (-1);

	close(fd);
	return (1);
}
