#include "main.h"

/**
 * main - program to print lower case letters
 * Return: 0 (Succes)
 */
void print_alphabet(void);
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
	return (0);
}
