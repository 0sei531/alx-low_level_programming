#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 */

void free_list(list_t *head)
{
	list_t *brief_node;
        while (head)
	{
		brief_node = head->next;
		free(brief_node->str);
		free(brief_node);
	}
}
