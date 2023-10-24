#include "lists.h"

/**
* find_listint_loop - Finds the loop in a linked list.
* @pointer: Linked list to search for a loop
*
* Return: Address of the node where the loop starts, or NULL if no loop exists
*
* Author: Amira
*/

listint_t *find_listint_loop(listint_t *pointer)
{
	listint_t *slowPointer = pointer;
	listint_t *fastPointer = pointer;

	if (!pointer)
		return (NULL);

	while (slowPointer && fastPointer && fastPointer->next)
	{
		fastPointer = fastPointer->next->next;
		slowPointer = slowPointer->next;
		if (fastPointer == slowPointer)
		{
			slowPointer = pointer;
			while (slowPointer != fastPointer)
			{
				slowPointer = slowPointer->next;
				fastPointer = fastPointer->next;
			}
			return (fastPointer);
		}
	}

	return (NULL);
}

