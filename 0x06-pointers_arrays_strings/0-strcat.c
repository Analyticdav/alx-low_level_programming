#include "main.h"
/**
* _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	/* Find the end of the destination string */
	while (*dest != '\0')
		dest++;

	/* Append the source string to the destination string */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Add a terminating null byte */
	*dest = '\0';

	return (dest_start);
}
