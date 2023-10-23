#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 * end of a listint_t list.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @n: The integer to be contained in the new node.
 * Return:  the address of the new element, or NULL if it failed
 * 
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *omega;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;

	else
	{
		omega = *head;
		while (omega->next != NULL)
			omega = omega->next;
		omega->next = new;
	}

	return (new);
}
