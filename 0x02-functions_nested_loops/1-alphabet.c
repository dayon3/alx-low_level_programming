#include "main.h"
/**
 * print_alphabet
 *
 * Prints the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
 */

int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
