#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: char
 * @b: char
 * @n: unsigned int
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
		*p++ = b;

	return (s);
}
