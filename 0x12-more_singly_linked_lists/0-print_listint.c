#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed(i)
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
