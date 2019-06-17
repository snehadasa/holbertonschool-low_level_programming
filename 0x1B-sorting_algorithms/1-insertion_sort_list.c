#include "sort.h"

/**
 * find_insert_node - Insertion sort
 * @list: Linked list to be sorted
 * Return: Node before which current node has to be inserted.
 */
listint_t *find_insert_node(listint_t *list)
{
	listint_t *temp = list;

	if (!list)
		return NULL;

	while (temp->prev && list->n < temp->prev->n)
		temp = temp->prev;
	return (temp);
}

/**
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node1 = NULL, *node2 = *list, *node3 = NULL;

	if (!(*list) || !(*list)->next)
		return;

	while(node2)
	{
		node3 = node2->next;
		node1 = find_insert_node(node2);
		if (node1 == node2)
		{
			print_list(*list);
			node2 = node3;
			continue;
		}
		if (node2->next)
			node2->next->prev = node2->prev;
		if (node2->prev)
			node2->prev->next = node2->next;
		node2->next = node1;
		node2->prev = node1->prev;
		node1->prev = node2;
		if (!node2->prev)
			*list = node2;
		else
			node2->prev->next = node2;
		print_list(*list);
		node2 = node3;
	}
}
