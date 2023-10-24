#include "lists.h"

/**
 * get_nodeint_at_index - finds a specified node of
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to find 
 *
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;
	listint_t *brf;

	brf = head;
	while (node != index && brf != NULL)
	{
		brf = brf->next;
		node++;
	}

	if (node != index)
		return (NULL);
	return (brf);
}
