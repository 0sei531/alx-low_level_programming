#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *cat, *mouse;
	size_t nodes = 1;

	if (!head || !head->next)
		return (0);

	cat = head->next;
	mouse = (head->next)->next;

	while (mouse)
	{
		if (cat == mouse)
		{
			cat = head;
			while (cat != mouse)
			{
				nodes++;
				cat = cat->next;
				mouse = mouse->next;
			}

			cat = cat->next;
			while (cat != mouse)
			{
				nodes++;
				cat = cat->next;
			}

			return (nodes);
		}

		cat = cat->next;
		mouse = (mouse->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *brf;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			brf = (*h)->next;
			free(*h);
			*h = brf;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			brf = (*h)->next;
			free(*h);
			*h = brf;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
