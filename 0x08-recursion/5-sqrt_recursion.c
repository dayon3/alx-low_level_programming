#include "main.h"

/**
 * _sqrt_recursion_helper - helper function that does the recursive work
 * @n: int
 * @i: int
 *
 * Return: integer (natural square root of a number)
 */

int _sqrt_recursion_helper(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (_sqrt_recursion_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find the square root of
 *
 * Return: The natural square root of n, or -1 if n does not
 * have a natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1));
}
