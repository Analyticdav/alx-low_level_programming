#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory
 *         or NULL if nmemb or size is 0 or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	/* Check for zero nmemb or size */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate the total size to be allocated */
	total_size = nmemb * size;

	/* Allocate memory for the array */
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	/* Set the allocated memory to zero */
	memset(ptr, 0, total_size);

	return (ptr);
}
