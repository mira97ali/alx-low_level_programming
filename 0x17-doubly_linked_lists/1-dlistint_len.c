#include "lists.h"

/**
* dlistint_len - Counts the number of elements in
* a double linked list.
*
* @head: The head of the list.
* Return: The count of nodes.
* Author: Amira
*/

size_t dlistint_len(const dlistint_t *head)
{
	int node_count;

	node_count = 0;

	if (head == NULL)
		return (node_count);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		node_count++;
		head = head->next;
	}

	return (node_count);
}
