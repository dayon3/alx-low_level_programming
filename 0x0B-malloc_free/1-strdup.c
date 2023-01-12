#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter.
 *
 * @str: string
 *
 * Return: a pointer to the new string which is a
 * duplicate of the string str.
 */

char *_strdup(char *str)
{
	size_t len;
	char *dup;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup = (char *)malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	strcpy(dup, str);

	return (dup);
}
