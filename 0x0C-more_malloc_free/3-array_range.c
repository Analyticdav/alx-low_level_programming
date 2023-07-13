#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: Minimum value (inclusive)
 * @max: Maximum value (inclusive)
 *
 * Return: Pointer to the newly created array
 *         or NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
	int *arr, size, i;

	/* Check if min > max */
	if (min > max)
		return (NULL);

	/* Calculate the size of the array */
	size = max - min + 1;

	/* Allocate memory for the array */
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	/* Populate the array with values from min to max */
	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
