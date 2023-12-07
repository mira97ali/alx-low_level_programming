#include "lists.h"

/**
* get_dnodeint_at_index - Returns the
* nth node of a dlistint_t linked list.
*
* @head: The head of the list.
* @index: The index of the nth node.
* Return: The nth node.
* Author: Amira
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	current_index = 0;

	while (head != NULL)
	{
		if (current_index == index)
			break;
		head = head->next;
		current_index++;
	}

	return (head);
}
