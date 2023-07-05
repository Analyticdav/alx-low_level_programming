#include "main.h"
/**
 * _print_rev_recursion - The function to print strings in reverse
 * @s: The string to print
 * Return: A string to s
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(++s);
--s;
_putchar(*s);
}
}
