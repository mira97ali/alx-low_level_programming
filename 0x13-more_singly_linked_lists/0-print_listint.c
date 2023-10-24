#include "lists.h"

/**
* print_listint - prints all the elements
* @head: linked list of type listint_t to be printed
*
* Return: num of nodes
*/

size_t print_listint(const listint_t *head)
{
	size_t node_count = 0;

	while (head)
	{
		printf("%d\n", head->n);
		node_count++;
		head = head->next;
	}

	return (node_count);
}
