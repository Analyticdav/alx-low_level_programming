#include "main.h"
/**
 * num - The function to print natural square root
 * @n: The integer to check
 * @root: The root to examine
 * Return: Square root of natural numbers
 */
int num(int n, int root)
{
if (n * n == root)
return (n);
if (n == root)
return (-1);
return (1 * num(n + 1, root));
}
/**
 * _sqrt_recursion - The function to return natural square roots
 * @n: The integer
 * Return: Natural square root of num
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (num(1, n));
}
