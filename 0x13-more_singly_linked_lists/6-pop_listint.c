#include "lists.h"

/**
* pop_listint - Removes the head node of a linked list.
* @list: Pointer to the first element in the linked list.
* Author: Amira
*
* Return: The data inside the element that was removed,
* or 0 if the list is empty.
*/

int pop_listint(listint_t **list)
{
	listint_t *current;
	int data;

	if (!list || !*list)
		return (0);

	data = (*list)->n;
	current = (*list)->next;
	free(*list);
	*list = current;

	return (data);
}
