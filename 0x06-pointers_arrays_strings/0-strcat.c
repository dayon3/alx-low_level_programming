#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: string
 * @src: string
 *
 * Return: pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
		p++;

	while (*src != '\0')
		*p++ = *src++;

	*p = '\0';

	return (dest);
}
