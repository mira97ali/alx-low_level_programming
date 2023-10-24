#include "lists.h"

/**
* add_nodeint - adding a new node at the beginning 
* @head: pointer to the first node
* @data: data to insert in the new node
* Author: Amira
*
* Return: pointer to the new node, or NULL if it fails
*/

listint_t *add_nodeint(listint_t **head, const int data)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = data;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
