#include "main.h"
/**
* cap_string - Capitalizes all words of a string
 * @str: The string to capitalize
 *
 * Return: Pointer to the resulting string
 */
char *cap_string(char *str)
{
int i = 0;

/* Capitalize first character if it's a letter */
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;

/* Iterate through the string */
while (str[i] != '\0')
{
/* Check for separators */
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
/* Capitalize next character if it's a letter */
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] -= 32;
}

i++;
}

return (str);
}
