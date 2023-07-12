#include "main.h"
/**
 * _memcpy - The function
 * @dest: destination
 * @src: The source
 * @n: The counter
 * Return: result to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[+i] = src[i];
		i++;
	}

	return (dest);
}
