#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with a key.
 * @ht: head of the list.
 * @key: key.
 * Return: value associated with element or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *temp;

	if (!ht)
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	temp = ht->array[i];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
