
#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - remove a node at a specified index
 * @head: The pointer to the pointer of a linked list
 * @index: The index to remove the node from the linked list
 * Return: returns the data before being deleted
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2;
	unsigned int i;
	int data;

	if (*head == NULL)
		return (-1);

	temp1 = *head;

	if (index == 0)
	{
		*head = temp1->next;
		data = temp1->n;
		free(temp1);
		return (data);
	}


	for (i = 0; i < index - 1; i++)
	{
		if (temp1->next == NULL)
			return (-1);
		temp1 = temp1->next; /*temp1 points to (n-1) node*/
	}

	temp2 = temp1->next; /*nth node*/
	if (temp2->next)
	{
		temp1->next = temp2->next; /*(n+1)th node*/
	}
	data = temp2->n; /*setting the data for tenp2*/
	free(temp2); /*delete temp2*/

	return (data);
}
