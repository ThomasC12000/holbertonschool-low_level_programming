#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a node at the beginning of a list
 * @head: Pointer to address of a list
 * @str: Pointer to string
 * Return: Address of new element or NULL on error
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
