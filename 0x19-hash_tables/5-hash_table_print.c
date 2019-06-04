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
	int flag = 0;

	if (!ht)
		return;

	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		temp = ht->array[j];
		while (temp)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
