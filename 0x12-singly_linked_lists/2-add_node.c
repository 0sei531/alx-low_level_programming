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
	list_t *n_node;
	int len = 0;
	
	while (str[len])
		len++;

	n_node = malloc(sizeof(list_t));
	if (!n_node)
		return (NULL);

	n_node->str = strdup(str);
	n_node->len = len;
	n_node->next = (*head);
	(*head) = n_node

	return (n_node);
}
