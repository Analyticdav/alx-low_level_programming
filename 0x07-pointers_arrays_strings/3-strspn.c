#include "main.h"
/**
 * _strspn - The function
 * @s: The string
 * @accept: The condition to accept
 * Return: The length of string
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int length;
int prefix;

while (*s)
{
for (prefix = 0; accept[prefix]; prefix++)
{
if (*s == accept[prefix])
{
length++;
break;
}
else if (accept[prefix + 1] == '\0')
return (length);
}
s++;
}
return (length);
}
