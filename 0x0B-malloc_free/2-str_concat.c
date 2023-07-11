#include <string.h>
#include "main.h"
/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 * Return: Pointer to the newly allocated memory
 * containing the duplicated string.
 * or NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *dupli;
	int length = 0, i;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Allocate memory for the duplicate string */
	dupli = malloc((length + 1) * sizeof(char));
	if (dupli == NULL)
		return (NULL);

	/* Copy the string to the duplicate */
	for (i = 0; i <= length; i++)
		dupli[i] = str[i];

	return (dupli);
}
