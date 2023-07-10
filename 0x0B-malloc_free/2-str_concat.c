#include <stdlib.h>
#include <string.h>
/**
* str_concat - The function
* @s1: First string
* @s2: Second string
* Return: Null byte
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	int size1, size2, d, a;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	size1 = strlen(s1) + 1;
	size2 = strlen(s2) + 1;
	s = malloc(sizeof(char) * (size1 + size2 - 1));

	if (s == NULL)
	return (NULL);

	d = a = 0;
	while (s1[d] != '\0')
	{
	s[d] = s1[d];
	d++;
	}
	while (s2[a] != '\0')
	{
	s[d] = s2[a];
	d++, a++;
	}
	s[d] = '\0';

	return (s);
}
