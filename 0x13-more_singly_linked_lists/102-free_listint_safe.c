#include "lists.h"

/**
* free_listint_safe - Frees a linked list and ensures safe deallocation.
* @pointer: Pointer to the first node in the linked list
*
* Return: The number of elements in the freed list
*
* Author: Amira
*/

size_t free_listint_safe(listint_t **pointer)
{
	size_t elementCount = 0;
	int addressDifference;
	listint_t *tempNode;

	if (!pointer || !*pointer)
		return (0);

	while (*pointer)
	{
		addressDifference = *pointer - (*pointer)->next;
		if (addressDifference > 0)
		{
			tempNode = (*pointer)->next;
			free(*pointer);
			*pointer = tempNode;
			elementCount++;
		}
		else
		{
			free(*pointer);
			*pointer = NULL;
			elementCount++;
			break;
		}
	}

	*pointer = NULL;

	return (elementCount);
}
