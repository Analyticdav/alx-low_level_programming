#include "main.h"
/**
 * print_triangle - The function to print triangles
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int p, q;
for (p = 1; p <= size; p++)
{
for (q = p; q <= size; q++)
{
_putchar(' ');
}
for (q = 1; q <= p; q++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

