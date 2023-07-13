#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory block to be reallocated
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the memory block
 *
 * Return: Pointer to the reallocated memory block
 *         or NULL if new_size is zero and ptr is not NULL
 *         or NULL if malloc fails to allocate the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	/* If new_size is zero and ptr is not NULL, free ptr and return NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, equivalent to malloc(new_size) */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

/* If new_size == old_size, do not do anything and return ptr */
	if (new_size == old_size)
		return (ptr);

	/* Allocate memory for the new memory block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Copy the contents from ptr to the new memory block */
	/* Copy up to the minimum of old_size and new_size */
	if (new_size > old_size)
		memcpy(new_ptr, ptr, old_size);
	else
		memcpy(new_ptr, ptr, new_size);

	/* Free the old memory block */
	free(ptr);

	return (new_ptr);
}
