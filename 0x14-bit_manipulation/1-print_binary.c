#include "main.h"
#include <stdlib.h>
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number.
 * Return: Null byte
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int found_one = 0;

	while (mask)
	{
		if (n & mask)
		{
			found_one = 1;
			_putchar('1');
		}
		else if (found_one)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

	if (!found_one)
		_putchar('0');
}
