#include "main.h"

/**
 * _isalpha - This checks for alphabets
 * @c: This is the character to check
 * Return: 1 for alphabet and 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
