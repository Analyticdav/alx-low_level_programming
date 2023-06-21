#include "main.h"

/**
 * print_last_digit -Prints last digits of numbers
 * @n: The digit to print
 * Return: The last_digit of nunber
 */

print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
