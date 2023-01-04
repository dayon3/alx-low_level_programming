#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: char
 * @needle: char
 *
 * Return: a pointer to the beginning of the
 * located substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1 = haystack;
	char *p2 = needle;
	char *p1_advance = haystack;

	while (*p1_advance != '\0')
	{
		char *p1_old = p1_advance;

		p2 = needle;

		while (*p1_advance == *p2)
		{
			p1_advance++;
			p2++;

			if (*p2 == '\0')
			{
				return (p1_old);
			}
		}
		p1_advance = p1_old + 1;
	}

	return (NULL);
}
