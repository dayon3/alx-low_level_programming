#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: char
 * @src: char
 * @n: unsigned int
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n-- > 0)
		*p++ = *src++;

	return (dest);
}
