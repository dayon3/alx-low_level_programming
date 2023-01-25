#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Number of parameters
 * @...: Variable list of integers
 *
 * Return: The sum of all the integers pass as parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
