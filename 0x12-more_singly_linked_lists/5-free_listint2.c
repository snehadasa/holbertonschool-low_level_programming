#include "lists.h"

/**
 * free_listint2 - frees the linked list from memory
 * @head: The pointer to the linked list
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
