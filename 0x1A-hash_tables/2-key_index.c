#include "hash_tables.h"

/**
 * key_index - Gets the index of a key
 * @key: The key that gives the index
 * @size: The hash table array's size.
 * Return: The key's index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
