#include "lists.h"

/**
* get_nodeint_at_index - Retrieves the node at a specific index.
* @list: The first node in the linked list.
* @index: The index of the node to retrieve.
* Author: Amira
*
* Return: Pointer to the requested node, or NULL if not found.
*/

listint_t *get_nodeint_at_index(listint_t *list, unsigned int index)
{
	unsigned int current_index = 0;
	listint_t *current_node = list;

	while (current_node && current_index < index)
	{
		current_node = current_node->next;
		current_index++;
	}

	return (current_node ? current_node : NULL);
}
