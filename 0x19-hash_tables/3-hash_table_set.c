#include "hash_tables.h"

/**
 * find_key - finds key.
 * @head: head of the list.
 * @key: key.
 * Return: 1 if found, 0 if not.
 */
int find_key(hash_node_t *head, const char *key)
{
	hash_node_t *temp = head;

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (1);
		temp = temp->next;
	}
	return (0);
}

/**
 * update_value - updates value of the node if the key is called again.
 * @head: head of the list.
 * @key: key of the list.
 * @value: value associated with the key.
 */
void update_value(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *temp;

	temp = head;

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			temp->value = strdup(value);
		temp = temp->next;
	}
}

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table.
 * @key: key.
 * @value: value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new;
	hash_node_t *head;

	if (ht->size == 0)
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	head = ht->array[i];

	if (find_key(head, key))
	{
		update_value(head, key, value);
		return (1);
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->value = strdup(value);
	new->key = strdup(key);
	if (new->value == NULL || new->key ==NULL)
		return (0);
	new->next = head;
	ht->array[i] = new;
	return (1);
}
