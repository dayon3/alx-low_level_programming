#include <stdio.h>
/**
 * main - Entry point
 *
 * Print all sing digit numbers of base 10
 * starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
