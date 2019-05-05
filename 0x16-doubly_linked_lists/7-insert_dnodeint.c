#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at the given index.
 * @h: head of the doubly linked list.
 * @idx: index at which the node is to be added.
 * @n: new node(data).
 * Return: address of the new node else NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		if (new->next)
			new->next->prev = new;
		return (new);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (temp->next == NULL)
		{
			free(new);
			return (NULL);
		}

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;
	new->prev = temp;

	if (new->next)
		new->next->prev = new;
	return (new);
}
