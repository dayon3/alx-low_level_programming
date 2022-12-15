#include <stdlib.h>
#include "main.h"
/**
 * print_row - prints a single row of the times table
 * @row: row number
 *
 * Return: void
 */

void print_row(int row)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + atoi(row * i));
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		print_row(i);
	}
}
