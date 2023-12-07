#include "lists.h"

/**
* free_dlistint - Frees a dlistint_t list.
*
* @head: The head of the list.
* Return: No return.
* Author: Amira
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temporary_node;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((temporary_node = head) != NULL)
	{
		head = head->next;
		free(temporary_node);
	}
}
