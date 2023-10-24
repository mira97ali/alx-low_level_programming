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
	listint_t *temp_node = *list;
	listint_t *prev_node = NULL;
	unsigned int current_index = 0;

	if (*list == NULL)
		return (-1);

	if (index == 0)
	{
		*list = (*list)->next;
		free(temp_node);
		return (1);
	}

	while (current_index < index - 1)
	{
		if (!temp_node || !(temp_node->next))
			return (-1);
		prev_node = temp_node;
		temp_node = temp_node->next;
		current_index++;
	}

	prev_node->next = temp_node->next;
	free(temp_node);

	return (1);
}

