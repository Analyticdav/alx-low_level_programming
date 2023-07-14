#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words), or NULL if str == NULL
 *         or str == "" or if it fails
 */
char **strtow(char *str)
{
	 int i, j, k;
	 char **words;
	int len;
	int word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = 0;
		len = 0;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			word_count++;

	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			len = 0;
			for (k = i; str[k] != '\0' && str[k] != ' '; k++)
				len++;

			words[j] = malloc((len + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}

			strncpy(words[j], &str[i], len);
			words[j][len] = '\0';
			j++;
			i += len;
		}
		else
			i++;
	}

	words[word_count] = NULL;

	return (words);
}

