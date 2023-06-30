#include "main.h"
/**
 * _strncat - The function to concatenate
 * @dest: The output
 * @src: The input
 * @n: The counter
 * Return: string to the destination
 */
char *_strncat(char *dest, char *src, int n)
{
int y, z;

y = 0;
while (dest[y] != '\0')
{
y++;
}
for (z = 0; z < n && src[z] != '\0'; z++, y++)
{
dest[y] = src[z];
}
dest[y] = '\0';
return (dest);
}
