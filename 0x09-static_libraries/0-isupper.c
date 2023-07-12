#include "main.h"

/**
 * _isupper - This function prints uppe case letters
 * @c: This is the character to check
 * Return: 1 for uppercase and 0 for anything else
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
