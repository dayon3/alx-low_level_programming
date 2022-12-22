#include "main.h"

/**
 * *_strncat - concatenates two strings.
 * @dest: string
 * @src: string
 * @n: bytes from src
 *
 * Return: pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	while (*p != '\0')
		p++;

	for (i = 0; i < n && *src != '\0'; i++)
		*p++ = *src++;

	*p = '\0';

	return (dest);
}
