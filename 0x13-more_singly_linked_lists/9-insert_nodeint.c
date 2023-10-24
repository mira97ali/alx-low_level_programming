#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node at a specified position.
* @list: Pointer to the first node in the list.
* @index: Index at which the new node is added.
* @data: Data to insert in the new node.
* Author: Amira
*
* Return: Pointer to the new node, or NULL if it fails.
*/

listint_t *insert_nodeint_at_index(listint_t **list,
			unsigned int index, int data)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current_node = *list;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !list)
		return (NULL);

	new_node->n = data;
	new_node->next = NULL;

	if (index == 0)
	{
		new_node->next = *list;
		*list = new_node;
		return (new_node);
	}

	for (i = 0; current_node && i < index; i++)
	{
		if (i == index - 1)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		else
			current_node = current_node->next;
	}

	return (NULL);
}
