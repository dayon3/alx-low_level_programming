#include <unistd.h>
#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string
 *
 * Return: void
 */
void _puts(char *str);
{
	size_t length = _strlen(str);

	write(STDOUT_FILENO, str, length);
	write(STDOUT_FILENO, "\n", 1);
}
