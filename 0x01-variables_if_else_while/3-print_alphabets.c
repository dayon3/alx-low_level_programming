#include <stdio.h>
/**
 * main - Entry point
 *
 * Print the alphabet in lowercase & uppercase
 * followed by a newline.
 * Only use `putchar` 3 times
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
