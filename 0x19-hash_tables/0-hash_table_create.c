#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table.
 * @size: Size of the hash table which is of the type unsigned long int.
 *
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);

	new->size = size;
	new->array = calloc(size, sizeof(hash_node_t));
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
