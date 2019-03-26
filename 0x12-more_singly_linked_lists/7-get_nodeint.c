#include "lists.h"

/**
 *get_nodeint_at_index - returns the node at a specified index
 *@head: The pointer to the linked list
 *@index: The index for the returned node
 *Return: returns the node from a given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (!head)
		{
			return (NULL);
		}

		head = head->next;
	}
	return (head);
}
