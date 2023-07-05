#include "main.h"
/**
 * factorial - The function to print the factorial of numbers n
 * @n: The integer to check
 * Return: The factorial of n
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
