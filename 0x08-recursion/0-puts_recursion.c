#include "main.h"
/**
 * _puts_recursion - The function to print recursion string
 * @s: The string to print
 * Return: A string 0 to s
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
s++;
_puts_recursion(s);
}
else
_putchar('\n');
}
