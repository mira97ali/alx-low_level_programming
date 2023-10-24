#include "lists.h"

/**
* deleteNodeAtIndex - Removes a node at a specified list
* @pointer: Pointer to the first element in the list
* @index: Index of the node to be deleted
*
* Return: 1 (Success) or -1 (Failure)
*
* Author: Amira
*/

int deleteNodeAtIndex(listint_t **pointer, unsigned int index)
{
	listint_t *currentNode = *pointer;
	listint_t *previousNode = NULL;
	unsigned int i = 0;

	if (*pointer == NULL)
		return (-1);

	if (index == 0)
	{
		*pointer = (*pointer)->next;
		free(currentNode);
		return (1);
	}

	while (i < index - 1)
	{
		if (!currentNode || !(currentNode->next))
			return (-1);
		currentNode = currentNode->next;
		i++;
	}

	previousNode = currentNode;
	currentNode = currentNode->next;
	previousNode->next = currentNode->next;
	free(currentNode);

	return (1);
}

