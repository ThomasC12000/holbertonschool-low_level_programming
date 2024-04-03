#include "lists.h"
#include <string.h>

/**
 * free_list - frees a list_t list.
 * @head: pointer to list_t
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list;
	}
}
