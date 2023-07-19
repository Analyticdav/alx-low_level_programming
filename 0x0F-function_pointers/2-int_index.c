#include "function_pointers.h"
/**
* int_index - The function to search an integer in an array.
* @array: Pointer to the array.
* @size: Number of elements in the array.
* @cmp: Pointer  function for comparing.
* Return: first element for which the cmp function does not return 0,
*  -1 if no element matches or size is <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
if (array != NULL && cmp != NULL && size > 0)
{
int d;
for (d = 0; d < size; d++)
{
if (cmp(array[d]) != 0)
{
return (d);
}
}
}
return (-1);
}

