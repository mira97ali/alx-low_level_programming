#include "lists.h"

/**
* print_dlistint - displays all the elements of a
* dlistint_t list
*
* @head: head of the list
* Return: the number of nodes
* Author: Amira
*/

size_t print_dlistint(const dlistint_t *head)
{
	int node_count;

	node_count = 0;

	if (head == NULL)
		return (node_count);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		node_count++;
		head = head->next;
	}

	return (node_count);
}
