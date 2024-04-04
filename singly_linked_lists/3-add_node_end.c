#include "lists.h"

/**
 * _strlen - Returns the length of a string.
 * @s: String.
 * Return: Value of a.
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * add_node_end - Adds a node at the end of a list
 * @head: Pointer to address of a list
 * @str: Pointer to string
 *
 * Return: Address of new element
 * On error, NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *old = *head;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (*head);
	}
	while (old->next)
	{
		old = old->next;
	}
	old->next = new;
	return (new);
}
