#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - includes a new node at the end
 * of a linked list.
 * @head: A pointer the head of the linked list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	signed int len = 0;
	list_t *x;
	list_t *end;

	x = malloc(sizeof(list_t));
	if (!x)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(x);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	x->str = dup;
	x->len = len;
	x->next = NULL;

	if (*head == NULL)
		*head = x;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = x;
	}

	return (end);
}
