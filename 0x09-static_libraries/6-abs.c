#include "main.h"
/**
 * _abs - This function compute absolute value of integers
 * @c: The integer check
 * Return: Absolute values or zero
 */
int _abs(int c)
{
        if (c < 0)
        {
                int abs_val;
                abs_val = c * -1;
                return (abs_val);
        }
        return (c);
}
