#include "main.h"
/**
 * print_diagonal - A function that prints diagonals
 * @n: The integer to print
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int p, q;
for (p = 0; p < n; p++)
{
for (q = 0; q < n; q++)
{
if (q == p)
_putchar('\\');
else if (q < p)
_putchar(' ');
}
_putchar('\n');
}
}}
