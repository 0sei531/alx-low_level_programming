#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *brf;
	int val;

	if (!*head)
		return (0);

	brf = *head;
	val = (*head)->n;
	*head = (*head)->next;

	free(brf);

	return (val);
}
