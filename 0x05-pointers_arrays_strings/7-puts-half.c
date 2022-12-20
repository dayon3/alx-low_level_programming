#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = strlen(str), i;

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (length - 1) / 2; i < length; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
