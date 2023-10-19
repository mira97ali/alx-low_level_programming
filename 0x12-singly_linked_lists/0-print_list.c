#include <stdio.h>
#include "lists.h"

/**
* print_list - Printing all the elements of the linked list.
* @current: Pointer to the list_t list to be printed.
*
* Return: The num of nodes getting printed.
*/

size_t print_list(const list_t *current)
{
	size_t nodeCount = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}

		nodeCount++;
		current = current->next;
	}

	return (nodeCount);
}

