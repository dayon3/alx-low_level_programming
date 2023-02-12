#include "main.h"

#define BUFSIZE 1024

/**
 * main - entry point for the program that copies the content of a file
 * to another file
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 on success, error code otherwise
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t read_count, write_count;
	char buf[BUFSIZE];

	if (Argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dpreintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((read_count = read(fd_from, buf, BUFSIZE)) > 0)
	{
		write_count = write(fd_to, buf, read_count);
		if (write_count != read_count)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
