. C - Hash tables
hash_tables.h


#ifndef _HASH_TABLES_H_

#define _HASH_TABLES_H_


#include <stdlib.h>

#include <string.h>

#include <stdio.h>

/**

 * struct hash_node_s - Node of a hash table

 *

 * @key: The key, string

 * The key is unique in the HashTable

 * @value: The value corresponding to a key

 * @next: A pointer to the next node of the List

 */

typedef struct hash_node_s

{

         char *key;

         char *value;

         struct hash_node_s *next;

} hash_node_t;


/**

 * struct hash_table_s - Hash table data structure

 *

 * @size: The size of the array

 * @array: An array of size @size

 * Each cell of this array is a pointer to the first node of a linked list,

 * because we want our HashTable to use a Chaining collision handling

 */

typedef struct hash_table_s

{

         unsigned long int size;

         hash_node_t **array;

} hash_table_t;


/*functions*/

hash_table_t *hash_table_create(unsigned long int size);

unsigned long int hash_djb2(const unsigned char *str);

unsigned long int key_index(const unsigned char *key, unsigned long int size);

int hash_table_set(hash_table_t *ht, const char *key, const char *value);

char *hash_table_get(const hash_table_t *ht, const char *key);

void hash_table_print(const hash_table_t *ht);

void hash_table_delete(hash_table_t *ht);


/**

 * struct shash_node_s - Node of a sorted hash table

 *

 * @key: The key, string

 * The key is unique in the HashTable

 * @value: The value corresponding to a key

 * @next: A pointer to the next node of the List

 * @sprev: A pointer to the previous element of the sorted linked list

 * @snext: A pointer to the next element of the sorted linked list

 */

typedef struct shash_node_s

{

        char *key;

        char *value;

        struct shash_node_s *next;

        struct shash_node_s *sprev;

        struct shash_node_s *snext;

} shash_node_t;


/**

 * struct shash_table_s - Sorted hash table data structure

 *

 * @size: The size of the array

 * @array: An array of size @size

 * Each cell of this array is a pointer to the first node of a linked list,

 * because we want our HashTable to use a Chaining collision handling

 * @shead: A pointer to the first element of the sorted linked list

 * @stail: A pointer to the last element of the sorted linked list

 */

typedef struct shash_table_s

{

        unsigned long int size;

        shash_node_t **array;

        shash_node_t *shead;

        shash_node_t *stail;

} shash_table_t;


shash_table_t *shash_table_create(unsigned long int size);

int shash_table_set(shash_table_t *ht, const char *key, const char *value);

void shash_table_print(const shash_table_t *ht);

char *shash_table_get(const shash_table_t *ht, const char *key);

void shash_table_print_rev(const shash_table_t *ht);

void shash_table_delete(shash_table_t *ht);

#endif /*_HASH_TABLES_H_*/




________________________________




0-main.c


#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include "hash_tables.h"


/**

 * main - check the code for

 *

 * Return: Always EXIT_SUCCESS.

 */

int main(void)

{

    hash_table_t *ht;


    ht = hash_table_create(1024);

    printf("%p\n", (void *)ht);

    return (EXIT_SUCCESS);

}



________________________________



0-hash_table_create.c


#include "hash_tables.h"


/**

 * hash_table_create - creates a hash table

 * @size: size of the hash table

 *

 * Return: pointer to hash table

 */


hash_table_t *hash_table_create(unsigned long int size)

{

        hash_table_t *table;


        if (size == 0)

                return (NULL);


        table = calloc(1, sizeof(hash_table_t));

        if (table == NULL)

                return (NULL);


        table->size = size;

        table->array = calloc(size, sizeof(hash_node_t *));

        if (table->array == NULL)

        {

                free(table);

                return (NULL);

        }

        return (table);

}



________________________________




1-djb2.c


#include "hash_tables.h"


/**

 * hash_djb2 - function to compute hash of 'str' using djb2

 * @str: string to hash

 *

 * Return: value of 64 bits hash

 */


unsigned long int hash_djb2(const unsigned char *str)

{

        unsigned long int hash;

        int c;


        hash = 5381;

        while ((c = *str++))

        {

                hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

        }

        return (hash);

}



________________________________



1-main.c


#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include "hash_tables.h"


/**

 * main - check the code

 *

 * Return: Always EXIT_SUCCESS.

 */

int main(void)

{

    char *s;


    s = "cisfun";

    printf("%lu\n", hash_djb2((unsigned char *)s));

    s = "Don't forget to tweet today";

    printf("%lu\n", hash_djb2((unsigned char *)s));

    s = "98";

    printf("%lu\n", hash_djb2((unsigned char *)s));

    return (EXIT_SUCCESS);

}



