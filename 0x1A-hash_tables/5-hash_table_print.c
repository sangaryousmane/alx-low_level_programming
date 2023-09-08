#include "./hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int count;
	unsigned char space = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (count = 0; count < ht->size; count++)
	{
		if (ht->array[count] != NULL)
		{
			if (space == 1)
				printf(", ");

			node = ht->array[count];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			space = 1;
		}
	}
	printf("}\n");
}
