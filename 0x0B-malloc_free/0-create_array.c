#include <main.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @c: char to initialize
 * @size: the size of the memory
 *
 * Return: a pointer to the arrya, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
		return ('\0');

	char *arr = (char *)malloc(sizeof(char) * size);

	if (arr == '\0')
		return ('\0');

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
