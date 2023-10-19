#include <stdlib.h>
#include "lists.h"

/**
* list_len - Counts the num of elements in a linked list.
* @current: A pointer to the list_t list.
*
* Return: The count of elements in the linked list.
*/

size_t list_len(const list_t *current)
{
	size_t elementCount = 0;

	while (current != NULL)
	{
		elementCount++;
		current = current->next;
	}

	return (elementCount);
}
