#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: input number
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar('0' + last_digit);
	_putchar('\n');

	return (last_digit);
}
