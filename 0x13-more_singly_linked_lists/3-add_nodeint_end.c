#include "lists.h"

/**
* add_nodeint_end - Adds a node at the end.
* @head: Pointer to the first element.
* @data: Data to be inserted into the new element.
* Author: Amira
*
* Return: Pointer to the new node, or NULL if it fails.
*/

listint_t *add_nodeint_end(listint_t **head, const int data)
{
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = data;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current->next)
		current = current->next;

	current->next = new_node;

	return (new_node);
}
