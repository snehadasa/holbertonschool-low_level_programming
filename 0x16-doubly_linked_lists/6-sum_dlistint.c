#include "lists.h"

/**
 * sum_dlistint - sum of all the data of the doubly linked list.
 * @head: head of the doubly linked list.
 * Return: sum of the list else 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
