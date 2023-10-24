#include "lists.h"

/**
* print_listint_safe - Safely prints a linked list even if it has loops.
* @pointer: Pointer to the first node of the linked list
*
* Return: The number of nodes in the list
*
* Author: Amira
*/

size_t print_listint_safe(const listint_t *pointer)
{
	const listint_t *currentNode = NULL;
	const listint_t *loopNode = NULL;
	size_t nodeCount = 0;
	size_t positionInList;

	currentNode = pointer;
	while (currentNode)
	{
		printf("[%p] %d\n", (void *)currentNode, currentNode->n);
		nodeCount++;
		currentNode = currentNode->next;
		loopNode = pointer;
		positionInList = 0;
		while (positionInList < nodeCount)
		{
			if (currentNode == loopNode)
			{
				printf("-> [%p] %d\n", (void *)currentNode, currentNode->n);
				return (nodeCount);
			}
			loopNode = loopNode->next;
			positionInList++;
		}
		if (!pointer)
			exit(98);
	}
	return (nodeCount);
}

