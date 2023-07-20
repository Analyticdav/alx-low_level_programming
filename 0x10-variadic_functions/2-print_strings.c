#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - The function Print strings,followed by a new line.
 * @separator: The string printed between the strings.
 * @n: strings passed to the function.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int d = 0;
	char *str;

	va_start(args, n);

	for (; d < n; d++)
	{
	str = va_arg(args, char *);

	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);

	if (d < n - 1 && separator != NULL)
	printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
