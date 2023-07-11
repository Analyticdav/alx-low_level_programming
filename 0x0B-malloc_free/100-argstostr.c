#include <stdlib.h>
#include "main.h"
/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: A pointer to a new string with all arguments concatenated,
 *         or NULL if ac == 0 or av == NULL or if it fails
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, len, total_len = 0;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
total_len++;
total_len++; /* Account for the new line character */
}
str = malloc(sizeof(char) * (total_len + 1));
if (str == NULL)
return (NULL);
len = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[len] = av[i][j];
len++;
}
str[len] = '\n'; /* Add new line character */
len++;
}
str[len] = '\0'; /* Add null terminator */
return (str);
}
