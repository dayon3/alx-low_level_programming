#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list.
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = *head;
	listint_t *previous = NULL;

	if (*head == NULL)
		return (-1);

	for (i = 0; current != NULL && i < index; i++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	if (previous == NULL)
		*head = current->next;
	else
		previous->next = current->next;

	free(current);
	return (-1);
}
