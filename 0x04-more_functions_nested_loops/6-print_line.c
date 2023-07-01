#include "main.h"
/**
 * print_line - A function to print lines
 * Return: void
 * @n: integer to print
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int k;
for (k = 1; k <= n; k++)
{
_putchar('_');
}
_putchar('\n');
}
}
