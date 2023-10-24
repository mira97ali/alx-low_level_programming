#include "lists.h"

/**
* delete_nodeint_at_index - Deletes a node at a specific index.
* @list: Pointer to the first element in the list.
* @index: Index of the node to delete.
* Author: Amira
*
* Return: 1 (Success) or -1 (Failure).
*/

int delete_nodeint_at_index(listint_t **list, unsigned int index)
{
	listint_t *temp = *list;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*list == NULL)
		return (-1);

	if (index == 0)
	{
		*list = (*list)->next;
		free(temp);
		return (1);
	}

	while (i < index)
	{
		if (!temp || !(temp->next))
			return (-1);
		current = temp;
		temp = temp->next;
		i++;
	}

	current->next = temp->next;
	free(temp);

	return (1);
}

