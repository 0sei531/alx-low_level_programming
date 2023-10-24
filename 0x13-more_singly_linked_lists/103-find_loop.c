#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 * Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *vampire, *werewolf;

	vampire = head, werewolf = head;
	while (head && vampire && vampire->next)
	{
		head = head->next;
		vampire = vampire->next->next;

		if (head == vampire)
		{
			head = werewolf;
			werewolf = vampire;
			while (1)
			{
				vampire = werewolf;
				while (vampire->next != head && vampire->next != werewolf)
				{
					vampire = vampire->next;
				}
				if (vampire->next == head)
					break;

				head = head->next;
			}
			return (vampire->next);
		}
	}

	return (NULL);
}

