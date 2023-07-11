#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void close_fd(int fd1, int fd2)
{
	int close_fd1, close_fd2;

	close_fd1 = close(fd1);
	if (close_fd1 != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	close_fd2 = close(fd2);
	if (close_fd2 != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
void copy_file(const char *file_from, const char *file_to)
{
	int fd1, fd2;
	char buffer[1024];
	ssize_t fd1_read, fd2_write;

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd2 = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, 0644);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	do {
		fd1_read = read(fd1, buffer, sizeof(buffer));
		if (fd1_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}

		fd2_write = write(fd2, buffer, fd1_read);
		if (fd2_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}

	} while (fd1_read != 0);
	close_fd(fd1, fd2);
}

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(av[1], av[2]);

	return (0);
}

