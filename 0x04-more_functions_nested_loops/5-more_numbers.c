#include "main.h"
/**
 * most_numbers - prints the numbers, from (0 to 14), 10 times.
 */

void most_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
