#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the provided format.
 * @format: The list of types of arguments.
 * Return: void
 */
void print_all(const char * const format, ...)

{
	va_list args;
	unsigned int d = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[d])
	{
		switch (format[d])
	{
		case 'c':
		printf("%s%c", separator, va_arg(args, int));
		break;
		case 'i':
		printf("%s%d", separator, va_arg(args, int));
		break;
		case 'f':
		printf("%s%f", separator, va_arg(args, double));
		break;
		case 's':
		separator = va_arg(args, char *);
		if (separator == NULL)
		separator = "(nil)";
		printf("%s%s", separator, va_arg(args, char *));
		break;
		default:
		break;
	}

		separator = ",";
		d++;
	}

		va_end(args);

		printf("\n");
}
