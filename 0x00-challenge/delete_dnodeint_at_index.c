#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_head = *head;
	unsigned int p = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current_head->next;
		if (current_head->next != NULL)
			current_head->prev = NULL;
		free(current_head);
		return (1);
	}

	while (current_head != NULL && p < index)
	{
		current_head = current_head->next;
		p++;
	}

	if (current_head == NULL)
		return (-1);

	current_head->prev->next = current_head->next;

	if (current_head->next != NULL)
		current_head->next->prev = current_head->prev;

	free(current_head);
	return (1);
}
