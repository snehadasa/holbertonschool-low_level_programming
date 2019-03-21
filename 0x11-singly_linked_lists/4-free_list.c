#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *tmp = head;
	list_t *new;

	while (tmp)
	{
		new = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = new;
	}

}
