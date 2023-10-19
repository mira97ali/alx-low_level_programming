#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - Adding a new node at the beginning
* @head: A pointer to the head
* @str: The string to be added
*
* Return: If the function fails - NULL.
*         Otherwise - the address of the new element.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
