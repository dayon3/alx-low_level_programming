#include "main.h"

/**
 * is_prime_number_recursive - checks if n is prime.
 * @n: int
 * @i: int
 *
 * Return: integer
 */

int is_prime_number_recursive(int n, int i)
{
	if (n == i)
		return (1);

	if (n % i == 0)
		return (0);

	if (i * i > n)
		return (1);

	return (is_prime_number_recursive(n, i + 1));
}

/**
 *is_prime_number - checks if n is a prime number
 * @n: number to check
 *
 * Return: returns 1 if the input integer is
 * a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	if (n == 2)
		return (1);

	if (n % 2 == 0)
		return (0);

	return (is_prime_number_recursive(n, 3));
}
