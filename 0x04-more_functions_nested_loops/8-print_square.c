#include "main.h"
/**
 * print_square - The square funcyion
 * @size: The shape to examine
 * Return: void
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int p, q;
for (p = 0; p < size; p++)
{
for (q = 0; q < size; q++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
