#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (close(fd) == -1 ? -1 : 1);

	written = write(fd, text_content, strlen(text_content));
	if (written == -1 || (size_t) written != strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	return (close(fd) == -1 ? -1 : 1);
}
