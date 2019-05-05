#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given index.
 * @head: head of the doubly linked list.
 * @index: index at which the node should be deleted.
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *delete_node = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(delete_node);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!temp->next)
			return (-1);
		temp = temp->next;
	}

	delete_node = temp->next;
	temp->next = delete_node->next;
	if (temp->next)
		temp->next->prev = temp;
	free(delete_node);

	return (1);
}
