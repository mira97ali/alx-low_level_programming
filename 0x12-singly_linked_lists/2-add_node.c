#include "lists.h"
#include <string.h>
#include <stdlib.h>

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
	list_t *newElement;
	char *strCopy;

	if (str == NULL)
		return NULL;

	newElement = malloc(sizeof(list_t));
	if (newElement == NULL)
		return NULL;

	strCopy = strdup(str);
	if (strCopy == NULL)
	{
		free(newElement);
		return NULL;
	}

	newElement->str = strCopy;
	newElement->len = strlen(strCopy);
	newElement->next = *head;
	*head = newElement;

	return newElement;
}
