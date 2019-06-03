#include "hash_tables.h"

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

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	i = key_index((unsigned char *)key, ht->size);

	new->value = strdup(value);
	new->key = strdup(key);

	head = ht->array[i];
	new->next = head;
	ht->array[i] = new;
	return (1);
}
