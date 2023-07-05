#include "main.h"
/**
 * _pow_recursion - the function to print recursion power
 * @x: First integer
 * @y: Second integer
 * Return: The power of factorial
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 1)
return (x);
if (y == 0)
return (1);
return (x * _pow_recursion(x, (y - 1)));
}
