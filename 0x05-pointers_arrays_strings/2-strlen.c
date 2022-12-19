#include "main.h"
/**
 * _strlen - return the length of a string.
 * @s: string
 *
 * Description: func works by iterating thru the chars of the str
 * until it encounters the null terminator,
 * which indicates the end of the str.
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
