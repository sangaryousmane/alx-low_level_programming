#include "hash_tables.h"


/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table's pointer.
 * @key: The key to add
 * @value: The value of the given key
 * Return: 0 on success, otherwise 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *new_value;
	unsigned long int index, counter;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	new_value = strdup(value);
	if (new_value == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = new_value;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_value);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = new_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
