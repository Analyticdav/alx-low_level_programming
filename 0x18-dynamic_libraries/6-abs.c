#include "main.h"

/**
 * _abs - This function compute absolute value of integers
 * @c: The integer check
 * Return: Absolute values or zero
 */

int _abs(int c)
{
int abs_val;

if (c < 0)
{
abs_val = c * -1;
return (abs_val);
}
return (c);
}
