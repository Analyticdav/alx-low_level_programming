#include "main.h"
/**
 * _strcmp - The function
 * @s1: The first character
 * @s2: second character
 * Return: j
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int j = 0;
	char l1, l2;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		l1 = s1[i];
		l2 = s2[i];
		j += l1 - l2;
	}

	return (j);
}
