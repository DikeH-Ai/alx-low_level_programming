#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>
#include <unistd.h>
#include <fcntl.h>

void print_header(Elf64_Ehdr elf_header);
void print_error(const char *message);

int main(int argc, char *argv[])
{
	Elf64_Ehdr elf_header;
	int readlines, fd;
	off_t offset;

	if (argc != 2)
	{
		print_error("Usage: command filename");
	}
	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		print_error("Error: Unable to open file");
	}
	offset = lseek(fd, 0, SEEK_SET);

	if (offset == -1)
	{
		print_error("Error: pointer movement failed");
	}
	readlines = read(fd, &elf_header, sizeof(elf_header));

	if (readlines == -1)
	{
		print_error("Usage: Unable to read file");
	}
	if (elf_header.e_ident[EI_MAG0] != 0x7F ||
			elf_header.e_ident[EI_MAG1] != 'E' ||
			elf_header.e_ident[EI_MAG2] != 'L' ||
			elf_header.e_ident[EI_MAG3] != 'F')
	{
		print_error("Usage: Not an elf file");
	}
	print_header(elf_header);
	close(fd);
	return (0);
}

/**
 * print_header - prints elf file header
 * @elf_header: header file
 * Return: void
 */
void print_header(Elf64_Ehdr elf_header)
{
	printf("Magic: %02x %02x %02x %02x\n",
			elf_header.e_ident[EI_MAG0],
			elf_header.e_ident[EI_MAG1],
			elf_header.e_ident[EI_MAG2],
			elf_header.e_ident[EI_MAG3]);
	printf("Class: %d\n", elf_header.e_ident[EI_CLASS]);
	printf("Data: %d\n", elf_header.e_ident[EI_DATA]);
	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header.e_type);
	printf("Entry point address: 0x%lx\n", elf_header.e_entry);
}

/**
 * print_error- prints error message to stderr
 * @message: message to be printed
 * Return: void
 */
void print_error(const char *message)
{
	write(STDERR_FILENO, message, 100);
	exit(98);
}
