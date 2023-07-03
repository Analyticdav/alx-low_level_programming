#include "main.h"
/**
 * *_memset - The function
 * @s: the memory
 * @n: the number of counts
 * @b: memory location
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int k;
for (k = 0; k < n; k++)
{
s[k] = b;
}
return (s);
}
