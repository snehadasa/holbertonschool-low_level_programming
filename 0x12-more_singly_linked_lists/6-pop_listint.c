#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a linked list and returns
 * the node's data
 * @head: A pointer to the pointer of the linked list
 * Return: returns the deleted node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	temp = (*head)->next;
	data = (*head)->n;
	free(*head);
	(*head) = temp;

	return (data);
}
