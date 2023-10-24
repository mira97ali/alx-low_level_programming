#include "lists.h"

/**
* free_listint2 - Deallocates a linked list.
* @list: Pointer to the listint_t list to be deallocated.
* Author: Amira
*/

void free_listint2(listint_t **list)
{
	listint_t *current;

	if (list == NULL)
		return;

	while (*list)
	{
		current = (*list)->next;
		free(*list);
		*list = current;
	}

	*list = NULL;
}
