#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at nth index.
 * @head: head of the doubly linked list.
 * @index: place holder.
 * Return: return nth node if present, null if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (!head)
			return (NULL);

		head = head->next;
	}
	return (head);
}
