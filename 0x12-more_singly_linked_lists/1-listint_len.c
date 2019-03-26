#include "lists.h"

/**
 * listint_len - counts the amount of elements in a linked list
 * @h: A pointer to a node of type listint_h
 * Return: returns the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
