
#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 *@head: A pointer to the head node of type listint_t list
 *@n: The data to add to the node
 *Return: returns a newly allocated node at the end of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp1, *temp2;

	temp1 = malloc(sizeof(listint_t));

	if (!temp1)
	{
		return (NULL);
	}

	temp1->n = n;
	temp1->next = NULL;

	if (*head == NULL)
	{
		temp1->next = *head;
		*head = temp1;
		return (temp1);
	}

	temp2 = *head;
	while (temp2->next)
	{
		temp2 = temp2->next;
	}

	temp1->next = temp2->next;
	temp2->next = temp1;

	return (temp1);
}
