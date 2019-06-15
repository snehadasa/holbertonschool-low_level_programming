#include "sort.h"

/**
 * swap - Swaps two numbers
 * @n1: First number
 * @n2: Second number
 * Return: Nothing
 */
void swap_node(listint_t **head)
{
	listint_t *prev;

	prev = (*head)->prev;
	if ((*head)->prev->prev)
		(*head)->prev->prev->next = *head;
	(*head)->prev = (*head)->prev->prev;
	prev->prev = *head;
	prev->next = (*head)->next;
	(*head)->next = prev;
	(*head)->next = prev;
}

/**
 * insertion_sort_list - Insertion sort
 * @list: Linked list to be sorted
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head  = NULL;
	/* listint_t *prev = NULL; */
	/* listint_t *tmp = NULL; */
	listint_t *iter = NULL;
	/* listint_t *newList = NULL; */

	if (!list || !*list || !(*list)->next)
		return;

	head = (*list);
	while(head)
	{
		head = head->next;
		if (head->n < head->prev->n)
		{
			swap_node(&head);
			iter = head;
			head = head->next;
			while (iter)
			{
				if (iter->prev && iter->n < iter->prev->n)
				{
					swap_node(&iter);
					iter = iter->prev;
					print_list(*list);
					return;
				}
				else
					break;
			}
		}
	}
}
