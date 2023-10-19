#include <stdlib.h>
#include "lists.h"

/**
* custom_list_len - Counts the number of elements in a linked list.
* @current: A pointer to the list_t linked list.
*
* Return: The count of elements in the linked list.
*/
size_t custom_list_len(const list_t *current)
{
	size_t elementCount = 0;

	while (current != NULL)
	{
		elementCount++;
		current = current->next;
	}

	return (elementCount);
}
