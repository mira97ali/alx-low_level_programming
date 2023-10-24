#include "lists.h"

/**
* listint_len - returns the num of elements
* @head: linked list of type listint_t to traverse
*
* Return: num of nodes
* Author: Amira
*/

size_t listint_len(const listint_t *head)
{
	size_t node_count = 0;

	while (head)
	{
		node_count++;
		head = head->next;
	}

	return (node_count);
}

