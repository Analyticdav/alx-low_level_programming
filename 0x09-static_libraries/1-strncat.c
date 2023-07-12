#include "main.h"
/**
 *_strncat - Concatenates two strings up to n bytes.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of bytes to be appended from src.
 *
 * Description: This function appends at most n bytes
 * to the end of the destination string dest.
 * always null-terminated. If src contains n or more bytes.
 * be null-terminated. The function assumes that dest has space
 * accommodate the appended bytes.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}

