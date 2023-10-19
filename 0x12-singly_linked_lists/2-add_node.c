#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    char *str_copy;

    if (str == NULL)
        return NULL;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return NULL;

    str_copy = strdup(str);
    if (str_copy == NULL)
    {
        free(new_node);
        return NULL;
    }

    new_node->str = str_copy;
    new_node->len = strlen(str_copy);
    new_node->next = *head;
    *head = new_node;

    return new_node;
}
