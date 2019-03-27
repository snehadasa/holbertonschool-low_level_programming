#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev, *next;

	current = *head; /*setting the variable current to head*/

	prev = NULL; /*prev variable to null*/

	while (current != NULL)
	{
		next = current->next; /*storing the value of current in next so we dont loose it*/
		current->next = prev; /*reversing the link and pointing &current to prev*/
		prev = current; /*moving the prev variable to current*/
		current = next; /*moving the current to next variable*/
	}

	*head = prev; /*setting the head to prev*/

	return (*head);
}
