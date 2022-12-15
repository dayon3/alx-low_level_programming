#include <ctype.h>
#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: character
 *
 * Return: 1 if c is a digit & 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}

	return (0);
}
