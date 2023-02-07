#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: number one
 * @m: number two
 *
 * Return: number of bits you need
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
		if (xor_result & 1)
			count++;

		xor_result = xor_result >> 1;
	}

	return (count);
}
