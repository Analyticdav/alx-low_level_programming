#include "main.h"
/**
 * _isdigit - The function
 * @c: The character to test
 * Return: 0 (success)
 */
int _isdigit(int c)
{
	if (c >= 1 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
