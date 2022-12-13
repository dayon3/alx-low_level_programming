#include <stdio.h>
/**
 * main - Entry point
 *
 * Prints the alphabet in lowercase
 * only use `putchar` twice
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
	putchar('\n');

	return (0);
}
