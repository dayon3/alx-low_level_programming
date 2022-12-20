#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	print_rev(s + 1);
	_putchar(*s);
}
