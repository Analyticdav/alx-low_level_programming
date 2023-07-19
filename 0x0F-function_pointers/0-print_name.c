/**
 * print_name - The function thatbprints name
 * @name: name pointer.
 * @f: Pointer to name function.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

