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
	char *lyn;
	unsigned int len = 0;
	list_t *new;
	list_t *end

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	lyn = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = lyn;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (*head);
}
