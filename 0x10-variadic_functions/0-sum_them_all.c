#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - The function that sums of all its parameters.
 * @n: The number of arguments sent to the function.
 *  If n == 0, return NULL.
 * @...: The variable arguments.
 *
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int d = 0;
	int sum = 0;

	va_list args;

	va_start(args, n);

	for (; d < n; d++)
	{
	sum += va_arg(args, int);
	}

	 va_end(args);

	return (sum);
}
