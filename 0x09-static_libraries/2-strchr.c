#include "main.h"
/**
 * _strcat - The function
 * @dest: The destination
 * @src: The source
 */
int strlength(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}

	return (i);
}
