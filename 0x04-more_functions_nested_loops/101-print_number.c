#include "main.h"
/**
 * print_number - function to print number
 * @n: the integer to test
 */
void print_number(int n)
{
unsigned int N;

if (n < 0)
{
N = -n;
_putchar('_');
}
else
{
N = n;
}
if (N / 10)
{
print_number(N / 10);
}
_putchar((N % 10) + '0');
}
