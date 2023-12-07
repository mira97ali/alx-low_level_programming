#include "lists.h"

/**
* add_dnodeint_end - Adds a new node at the end
* of a dlistint_t list.
*
* @head: The head of the list.
* @n: The value of the element.
* Return: The address of the new element.
* Author: Amira
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current_node;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	current_node = *head;

	if (current_node != NULL)
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	new_node->prev = current_node;

	return (new_node);
}
