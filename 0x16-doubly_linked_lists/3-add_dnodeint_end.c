#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of the linked list.
 * @head: head of the doubly linked list.
 * @n: node to be added.
 * Return: the new added node or null if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new = *head;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);

	temp->n = n;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}

	while (new->next != NULL)
		new = new->next;

	new->next = temp;
	temp->prev = new;

	return (temp);
}
