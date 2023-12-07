#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts a new node at
* a given position.
*
* @head: The head of the list.
* @index: The index of the new node.
* @n: The value of the new node.
* Return: The address of the new node, or NULL if it failed.
* Author: Amira
*/

dlistint_t *insert_dnodeint_at_index(
	dlistint_t **head,
	unsigned int index,
	int n
)
{
	dlistint_t *new_node;
	dlistint_t *current_head;
	unsigned int current_index;

	new_node = NULL;
	current_head = *head;
	current_index = 0;

	if (index == 0)
	{
		new_node = add_dnodeint(head, n);
	}
	else
	{
		while (current_head != NULL && current_index < index - 1)
		{
			current_head = current_head->next;
			current_index++;
		}

		if (current_head == NULL)
		{
			return NULL;
		}

		new_node = malloc(sizeof(dlistint_t));
		if (new_node != NULL)
		{
			new_node->n = n;
			new_node->prev = current_head;
			new_node->next = (current_head->next != NULL) ? current_head->next : NULL;

			if (current_head->next != NULL)
			{
				current_head->next->prev = new_node;
			}

			current_head->next = new_node;
		}
	}

	return new_node;
}
