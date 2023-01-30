#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the head of the list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	count list_t *current;
	unsigned int count;

	current = h;
	count = 0;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
