#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times, in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; c <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
