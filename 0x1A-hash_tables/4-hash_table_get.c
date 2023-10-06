#include "hash_tables.h"
#include <stdio.h>

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *selected_node;

	idx = key_index((unsigned char *)key, ht->size);

	if (idx >= ht->size)
		return (NULL);

	selected_node = ht->array[idx];

	if (selected_node == NULL)
		return (NULL);

	return (selected_node->value);
}
