#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the linked listint_t list's element count.
 * @h: A pointer to listint_t list's head.
 *
 * Return: elements count in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
