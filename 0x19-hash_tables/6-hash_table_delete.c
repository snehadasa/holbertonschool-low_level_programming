#include "hash_tables.h"

/**
 * hash_table_delete - delete each & every element of the hash table & itself
 * @ht: hash table.
 * Return: nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *temp2;

	if (!ht)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			temp2 = temp->next;
			free(temp);
			temp = temp2;
		}
		temp2 = temp;
		free(temp);
	}
}
