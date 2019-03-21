#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds the new node at the beginning of the list.
 * @head: double pointer to the head node.
 * @str: new string to add in the node.
 * Return: address of the new element or null if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (head)
		new->next = *head;
	(*head) = new;

	return (*head);
}
