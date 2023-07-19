#include "function_pointers.h"
/**
 * print_name - The function thatbprints name
 * @name: name pointer.
 * @f: Pointer to name function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
	f(name);
}

