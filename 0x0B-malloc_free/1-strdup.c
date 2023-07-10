#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
* _strdup - The function that duplocates strings
* @str: The string to copy
* Return: NULL
*/
char *_strdup(char *str)
{
	char *s;
	int size, d;

	size = strlen(str) + 1;
	s = malloc(sizeof(char) * size);
	if (str == NULL || size <= 0)
		return (NULL);

	for (d = 0; *str != '\0' && d < size; d++, str++)
	{
		s[d] = *str;
	}
	return (s);
}
