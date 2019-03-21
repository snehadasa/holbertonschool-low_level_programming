#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds the new node at the end of the list.
 * @head: double pointer to the head node.
 * @str: new string to add in the node.
 * Return: address of the new element or null if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *p = *head;
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

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (p->next)
	{
		p = p->next;
	}
	p->next = new;

	return (new);

}
