#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Appends a new node at the end of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
    char *str_copy;
    int str_length;
    list_t *new_node, *last_node;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    str_copy = strdup(str);
    if (str_copy == NULL)
    {
        free(new_node);
        return (NULL);
    }

    for (str_length = 0; str[str_length];)
        str_length++;

    new_node->str = str_copy;
    new_node->len = str_length;
    new_node->next = NULL;

    if (*head == NULL)
        *head = new_node;
    else
    {
        last_node = *head;
        while (last_node->next != NULL)
            last_node = last_node->next;
        last_node->next = new_node;
    }

    return (*head);
}

