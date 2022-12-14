#include <ctype.h>
#include "main.h"
/**
 * _islower - checks for lowercase character.
 *
 * @c: The character
 *
 * Return: Always 0 or 1
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
