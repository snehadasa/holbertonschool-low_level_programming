
#include <stdio.h>
#include "lists.h"

/**
 * list_len - gives the length of the list
 * @h: pointer to the list_t list to get the length.
 * Return: the number of elements in the linked list(i).
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
