#include "lists.h"

/**
 * print_dlistint - prints elements present in the list.
 * @h: list to be printed
 * Return: elements in the list "h".
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
