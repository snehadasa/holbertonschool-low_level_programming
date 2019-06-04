#include "hash_tables.h"

/**
 * hash_table_print - print each and every element of the hash table.
 * @ht: hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *temp;

	if (!ht)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		temp = ht->array[j];
		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			if (j != ht->size - 1 && temp->next != NULL)
				printf(", ");
			temp = temp->next;
		}
	}
	printf("}\n");
}
