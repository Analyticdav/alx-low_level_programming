#include "main.h"
/**
 * _strchr - The function
 * @c: The character to use
 * @s: The string
 * Return: null for 0
 */
char *_strchr(char *s, char c)
{
int string_character;

for (string_character = 0; s[string_character] >= '\0'; string_character++)
{
if (s[string_character] == c)
return (s + string_character);
}
return ('\0');
}
