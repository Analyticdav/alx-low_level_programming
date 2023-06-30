#include "main.h"
/**
 * _strncpy - The function for string catenation
 * @src: The input
 * @dest: the output
 * @n: The counter
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int bytes_count;

for (bytes_count = 0; bytes_count < n && src[bytes_count] != '\0'; bytes_count++)
dest[bytes_count] = src[bytes_count];
for (; bytes_count < n; bytes_count++)
dest[bytes_count] = '\0';
return (dest);
}
