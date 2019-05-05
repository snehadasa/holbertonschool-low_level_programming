#include "lists.h"

/**
 * dlistint_len - length of the doubly linked list.
 * @h: the doubly linked list.
 * Return: the length of the linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
