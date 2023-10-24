#include "lists.h"

/**
* deleteNodeAtIndex - Removes a node at a specified list
* @head: pointer to the first element in the list
* @index: Index of the node to be deleted
*
* Return: 1 (Success) or -1 (Failure)
*
* Author: Amira
*/

int deleteNodeAtIndex(listint_t **head, unsigned int index)
{
        listint_t *currentNode = *head;
        listint_t *previousNode = NULL;
        unsigned int i = 0;

        if (*head == NULL)
                return (-1);

        if (index == 0)
        {
                *head = (*head)->next;
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

