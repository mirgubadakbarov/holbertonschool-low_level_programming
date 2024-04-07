#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position
 * @head: Pointer to the pointer to the head node of the list
 * @index: Index of the node to delete
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i;

	if (!head || !*head)
		return -1;

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return 1;
	}

	for (i = 0; temp && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (!temp)
		return -1;

	prev->next = temp->next;
	if (temp->next)
		temp->next->prev = prev;
	free(temp);

	return 1;
}
