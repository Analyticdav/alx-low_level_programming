#include "main.h"
/**
 * _puts - The function to print to standard output
 * @str: The string
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
