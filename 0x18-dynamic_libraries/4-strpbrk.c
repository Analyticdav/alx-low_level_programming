#include "main.h"
/**
 * _strpbrk - The function
 * @accept: The condition to accept the null
 * @s: The string to check
 * Return: The null bite to reach
 */
char *_strpbrk(char *s, char *accept)
{
int string_index;

while (*s)
{
for (string_index = 0; accept[string_index]; string_index++)
{
if (*s == accept[string_index])
return (s);
}
s++;
}
return ('\0');
}
