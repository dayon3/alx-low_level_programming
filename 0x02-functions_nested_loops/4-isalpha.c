#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: The character
 *
 * Return: Always 0 or 1 if c is a letter, lowercase or uppercase
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
