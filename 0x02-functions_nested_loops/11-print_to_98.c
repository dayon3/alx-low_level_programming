#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: number to start counting at.
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
		for (; n > 98; n--)
		{
			printf("%d, ", n--);
		}
	else if (n < 98)
		for (; n < 98; n++)
		{
			printf("%d, " n++);
		}
	printf("\n", n);
}
