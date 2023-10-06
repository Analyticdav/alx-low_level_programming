#include "hash_tables.h"
#include <stdio.h>

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, first_printed = 1;
	hash_node_t *hash_node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			hash_node = ht->array[i];
			if (i != 0 && !first_printed)
				printf(", ");
			while (hash_node != NULL)
			{
				printf("'%s': '%s'", hash_node->key, hash_node->value);
				first_printed = 0;
				hash_node = hash_node->next;
			}
		}
	}
	printf("}\n");
}
