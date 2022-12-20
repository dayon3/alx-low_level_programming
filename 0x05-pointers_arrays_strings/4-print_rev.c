#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int strlen = 0, index;

	while (s[index++])
		strlen++;

	for (index = strlen - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
