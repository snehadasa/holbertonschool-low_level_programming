#include "lists.h"

/**
 * free_dlistint - free the doubly linked list.
 * @head: head of the doubly linked list.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head)
	{
		temp = (head)->next;
		free(head);
		head = temp;
	}
	head = NULL;
}
