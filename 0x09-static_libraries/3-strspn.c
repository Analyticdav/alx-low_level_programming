#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be checked.
 * @accept: Pointer to the string containing the characters
 *
 * Description: This function calculates the length of the longest initial
 * segment in the string 's' consisting only of character strings
 * 'accept'. It returns the number of bytes in the initial segment of 's'
 * that consist only of characters from 'accept'.
 *
 * Return: The number of bytes in the initial segment 's'
 * of bytes from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int accept_len = 0;

	while (accept[accept_len] != '\0')
		accept_len++;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}

		if (j == accept_len)
			break;
	}

	return (count);
}

