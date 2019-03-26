#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a specific index
 * @head: A pointer to the pointer of a linked list
 * @idx: The index to insert the node in
 * @n: The data value for the node
 * Return: returns a newly allocated node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;

	for (i = 0; i < idx - 1; i++)
	{
		if (temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
