#include "function_pointers.h"
/**
 * array_iterator - The function to iterate numbers
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function to take acrltion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t d;

	if (array != NULL && action != NULL)
	{
		for (d = 0; d < size; d++)
		{
			action(array[d]);
		}
	}
}

