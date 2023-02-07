#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number whose bit value is to be obtained
 * @index: the index starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at the index or -1 there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n & mask) == 0 ? 0 : 1);
}
