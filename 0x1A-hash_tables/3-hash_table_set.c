#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node;
	hash_node_t *temp;
	char *val_cpy;
	int i;

	if (ht == NULL || *key == '\0')
		return (0);

	val_cpy = malloc(strlen(value) + 1);
	if (val_cpy == NULL)
		return (0);

	for (i = 0; value[i] != '\0'; i++)
		val_cpy[i] = value[i];
	val_cpy[i] = '\0';

	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);
	hash_node->key = (char *)key;
	hash_node->value = val_cpy;
	index = key_index((unsigned const char *) key, ht->size);
	if (ht->array == NULL)
		return (0);
	if (ht->array[index] == NULL)
	{
		hash_node->next = NULL;
		ht->array[index] = hash_node;
	} else
	{
		temp = ht->array[index];
		hash_node->next = temp;
		ht->array[index] = hash_node;
	}
	return (1);
}
