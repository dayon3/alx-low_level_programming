#include "main.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to a newly allocated space in memory
 * which contains the contents of s1, followed by the
 * contents of s2, and null terminated.
 * return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	concat = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}
