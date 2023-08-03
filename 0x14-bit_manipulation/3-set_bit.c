#include "main.h"
#include <stdlib.h>

/**
 * set_bit - Sets the value of bit
 * @n: Pointer to the number
 * @index: The index of the bit to set, starting from 0.
 *
 * Return: 1 if successful and -1 ifelse
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	*n = (*n | mask);

	return (1);
}

