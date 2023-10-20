#include "lists.h"
#include <string.h>
#include "lists.h"


/**
 * add_node - creates a new node at the start of a linked list.
 * @head: A pointer to the head of the list_t list.
 * @str: string that will be kept in the list.
 *
 * Return: the address of the new element
 * Otherwise: NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new
	int len;
	
	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new

	return (new);
}
