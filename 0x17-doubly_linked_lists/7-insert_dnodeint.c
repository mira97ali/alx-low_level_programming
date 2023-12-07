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

	if (index == 0)
	{
		new_node = add_dnodeint(head, n);
	}
	else
	{
		current_head = *head;
		current_index = 1;

		if (current_head != NULL)
		{
			while (current_head->prev != NULL)
				current_head = current_head->prev;
		}

		while (current_head != NULL)
		{
			if (current_index == index)
			{
				if (current_head->next == NULL)
				{
					new_node = add_dnodeint_end(head, n);
				}
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = current_head->next;
						new_node->prev = current_head;
						current_head->next->prev = new_node;
						current_head->next = new_node;
					}
				}
				break;
			}

			current_head = current_head->next;
			current_index++;
		}
	}

	return new_node;
}
