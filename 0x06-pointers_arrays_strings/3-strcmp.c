#include "main.h"

/**
 * *_strcmp - compares two strings.
 * @s1: string one
 * @s2: string two
 *
 * Return: If the two strings are equal, the function will return 0.
 * If the strings are not equal, the function will return a positive
 * or negative value depending on which string is
 * lexicographically greater or lesser.
 */

int *_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
