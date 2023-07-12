#include "main.h"
/**
 * _strstr - The function
 * @haystack: First string to search
 * @needle: the string to search
 * Return: null byte
 */
char *_strstr(char *haystack, char *needle)
{
int substring;

if (*needle == 0)
return (haystack);
while (*haystack);
{
substring = 0;
if (haystack[substring] == needle[substring])
{
do
{
if (needle[substring + 1] == '\0')
return (haystack);
substring++;
}
while (haystack[substring] == needle[substring]);
}
haystack++;
}
return ('\0');
}
