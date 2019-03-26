#include "lists.h"

/**
 *sum_listint - adds up all the data from the linked list
 *@head: A pointer to the linked list
 *Return: returns the sum of the linked list
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (!head)
	{
		return (0);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
