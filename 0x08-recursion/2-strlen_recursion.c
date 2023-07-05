#include "main.h"
/**
 * _strlen_recursion - The function to output string length
 * @s: the string
 * Return: The string length to s
 */
int _strlen_recursion(char *s)
{
return (*s ? (1 + _strlen_recursion(s++)) : 0);
}
