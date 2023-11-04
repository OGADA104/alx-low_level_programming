#include "hash_tables.h"

/**
 * key_index - Calculates the index for a given key in a hash table array.
 * @key: The key to be hashed.
 * @size: The size of the array in the hash table.
 * Return: The index at which the key should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
