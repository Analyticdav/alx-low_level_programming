#include "main.h"
/**
 * _strcat - The function
 * @s: The string
 * Return: point s to i
 */
int _strcat(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		i++;
	}

	return (i);
}
