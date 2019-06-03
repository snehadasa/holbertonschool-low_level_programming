#include "hash_tables.h"

/**
 * key_index - gives the index of a key.
 * @key: pointer to the key.
 * @size: Size of the array of the hash table.
 *
 * Return: return key of the type UL int.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;

	hash_key = hash_djb2(key);

	return (hash_key % size);
}
