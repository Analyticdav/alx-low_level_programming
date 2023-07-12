#include "main.h"
/**
 * *_strcpy - the copy string function
 * @dest: The copy destination
 * @src: the copy source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int p;

for (p = 0; src[p] != '\0'; p++)
{
dest[p] = src[p];
}
dest[p++] = '\0';
return (dest);
}
