#include "hash_tables.h"

/**
 * hash_djb2 - Implements the djb2 algorithm.
 * @str: The string to hash.
 * Return: The hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int count;

	hash = 5381;
	while ((count = *str++))
	{
		hash = ((hash << 5) + hash) + count;
	}
	return (hash);
}
