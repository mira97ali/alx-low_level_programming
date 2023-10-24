#include "lists.h"

/**
* sum_listint - Computes the sum of all the data in a listint_t list.
* @list: The first node in the linked list.
* Author: Amira
*
* Return: The resulting sum.
*/

int sum_listint(listint_t *list)
{
	int total_sum = 0;
	listint_t *current_node = list;

	while (current_node)
	{
		total_sum += current_node->n;
		current_node = current_node->next;
	}

	return (total_sum);
}
