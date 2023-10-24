#include "lists.h"

/**
* free_listint - Frees the linked list.
* @list: listint_t list getting freed.
* Author: Amira
*/

void free_listint(listint_t *list)
{
	listint_t *current;

	while (list)
	{
		current = list->next;
		free(list);
		list = current;
	}
}
