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
	list_t *temp1, *temp2;
	unsigned int len = 0;

	while (str[len])
		len++;

	temp1 = malloc(sizeof(list_t));

	if (!temp1)
	{
		return (NULL);
	}

	temp1->str = strdup(str);
	temp1->len = len;
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
