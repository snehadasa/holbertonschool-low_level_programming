#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp1, *temp2;

	temp = *head;
	temp1 = (*head)->next;
	temp2 = (*head)->next->next;

	temp->next = NULL;

	while (*head && temp1 && temp2)
	{
		temp1->next = temp;
		temp = temp1;
		temp1 = temp2;
		temp2 = temp2->next;
	}
	temp1->next = temp;
	*head = temp1;

	return (*head);
}
