#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the concatenated string
 *         or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, concat_len;
	char *concat_str;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	/* Determine the length of the concatenated string */
	if (n >= len2)
		concat_len = len1 + len2 + 1;
	/* Include space for null terminator */
	else
		concat_len = len1 + n + 1;

	/* Allocate memory for the concatenated string */
	concat_str = malloc(concat_len * sizeof(char));
	if (concat_str == NULL)
		return (NULL);

	/* Copy s1 to the concatenated string */
	strcpy(concat_str, s1);

/* Concatenate the first n bytes of s2 to the concatenated string */
	strncat(concat_str, s2, n);

	return (concat_str);
}
