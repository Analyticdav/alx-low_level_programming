#include "main.h"

/**
 * print_sign - This prints the signs of numbers
 * @n: The number to be checked
 * Return: 1 for positive, -1 for negative and 0 for others
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
