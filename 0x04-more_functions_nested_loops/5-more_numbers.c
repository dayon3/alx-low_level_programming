#include "main.h"
/**
 * most_numbers - prints the numbers, from (0 to 14), 10 times.
 *
 * Return: void
 */

void most_numbers(void)
{
	int i;
	char j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
			}
		}
		_putchar('\n');
	}
}
