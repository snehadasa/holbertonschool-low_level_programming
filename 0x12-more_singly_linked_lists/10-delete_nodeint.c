
#include "lists.h"
#include <stdio.h>

/**
 *delete_nodeint_at_index - removed a node at a specified index
 *@head: The pointer to the pointer of a linked list
 *@index: The index to remove the node from the linked list
 *Return: returns the data before being deleted
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2;
	unsigned int i;
	int data;

	temp1 = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		data = temp1->n;
		*head = temp1->next;
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
	data = temp2->n;
	temp1->next = temp2->next; /*(n+1)th node*/
	free(temp2); /*delete temp2*/

	return (data);
}
