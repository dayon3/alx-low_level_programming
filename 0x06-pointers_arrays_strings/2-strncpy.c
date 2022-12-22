#include "main.h"

/**
 * *_strncpy - copies a` string.
 * @dest: string
 * @src: string
 * @n: bytes from src
 *
 * Return: pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (n-- > 0 && *src != '\0')
		*p++ = *src++;

	while (n-- > 0)
		*p++ = '\0';

	return (dest);
}
