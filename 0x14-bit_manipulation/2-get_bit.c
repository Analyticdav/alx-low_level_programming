#include "main.h"
#include <stdlib.h>
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to check the bit in.
 * @index: The index of the bit to get.
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	if (n & mask)
		return (1);
	else
		return (0);
}

