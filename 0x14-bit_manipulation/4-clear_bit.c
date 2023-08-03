#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - Sets the value of bit
 * @n: Pointer to the number whose bit needs to be cleared.
 * @index: The index of the bit to clear, starting from 0.
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	mask = ~(1UL << index);
	*n = (*n & mask);

	return (1);
}
