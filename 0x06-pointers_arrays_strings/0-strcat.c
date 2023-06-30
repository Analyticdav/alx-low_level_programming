#include "main.h"
/**
 * _strcat - The function
 * @dest: The output
 * @src: The input
 * Return: point to dest
 */
char *_strcat(char *dest, char *src)
{
int y, z;

y = 0;
while (dest[y] != '\0')
{
y++;
}
for (z = 0; src[z] != '\0'; z++, y++)
{
dest[y] = src[z];
}
dest[y] = '\0';
return (dest);
}
