#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that calculates how many elements are in a linked list
 * list_t list
 * @h: header pointer
 * Return: amount of elements
 */

size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
