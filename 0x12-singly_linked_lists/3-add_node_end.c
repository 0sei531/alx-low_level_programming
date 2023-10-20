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
	list_t *x;
	list_t *end = *head;
	signed int len = 0;

	while (str[len])
	len++;

	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);

	x->str = strdup(str);
	x->len = len;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (x);
	}

	while (end->next)
		end = end->next;

	end->next = x;

	return (*head);
}
