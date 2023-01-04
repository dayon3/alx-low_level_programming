#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: char
 * @accept: char
 *
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				count++;
				break;
			}
			p++;
		}

		if (*p == '\0')
		{
			break;
		}
		s++;
	}

	return (count);
}
