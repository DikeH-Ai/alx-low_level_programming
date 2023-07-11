#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <errno.h>
/**
 * create_file - creates file, trncate file if it already exsit
 * @filename: name fof the file
 * @text_content: content to be written to the file
 * Return: 1 or -1 for succes or failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, cnt, written_byte;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);

	if (fd == -1)
	{
		if (errno == EEXIST)
		{
			fd = open(filename, O_TRUNC);

			if (fd == -1)
			{
				return (-1);
			}
		}
		else
		{
			return (-1);
		}
	}
	cnt = 0;

	while (text_content[cnt] != '\0')
	{
		cnt++;
	}

	written_byte = write(fd, text_content, cnt);

	if (written_byte == -1)
		return (-1);

	close(fd);
	return (1);
}
