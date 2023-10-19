#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 * @h: A pointer to the list_t linked list.
 *
 * Return: The count of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return count;
}

