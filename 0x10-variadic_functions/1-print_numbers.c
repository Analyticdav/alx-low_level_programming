#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - The function to print numbers.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers enterred .
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int d = 0;

	va_start(args, n);

	for (; d < n; d++)
	{
		printf("%d", va_arg(args, int));

		if (d < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
