#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the hash table.
 *
 * Return: A pointer to the newly created hash table, or NULL if it fails.
 */
hash_table_t *hash_table_create(unsigned long int size) {
  hash_table_t *hash_table;
  hash_node_t **array;
  unsigned int i;

  hash_table = malloc(sizeof(hash_table_t));
  if (hash_table == NULL)
    return (NULL);
  array = malloc(sizeof(hash_node_t *) * size);
  if (array == NULL)
    return (NULL);

  for (i = 0; i < size; i++)
    array[i] = NULL;

  hash_table->array = array;
  hash_table->size = size;

  return (hash_table);
}
