#include "lists.h"

/**
 * add_dnodeint - to add the node at the beginning of the list.
 * @head: head of the doubly linked list.
 * @n: number to be added.
 * Return: doubly linked list of type "dlistint_t".
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);

	temp->n = n;

	temp->next = *head;
	temp->prev = NULL;

	if (*head)
		(*head)->prev = temp;

	*head = temp;

	return (temp);

}
