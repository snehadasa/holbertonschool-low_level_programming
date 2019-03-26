#include "lists.h"

/**
 * add_nodeint - adds a new node at the beggining of
 * a linked "listint_t" list
 * @head: ponter to the first node.
 * @n: The integer (the data) of a node listint_t
 * Return: Returns the address of the new allocated node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;
	int new_node;

	temp = malloc(sizeof(listint_t));

	if (!temp)
	{
		return (NULL);
	}

	new_node = n;
	temp->n = new_node;
	temp->next = (*head);
	(*head) = temp;

	return (temp);
}
