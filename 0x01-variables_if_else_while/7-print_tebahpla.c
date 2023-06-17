#include <stdio.h>
/**
 * main - Printing alphabets in reverse order
 * Return: 0 (Success)
 */
int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
		putchar(letters);
	putchar('\n');
	return (0);
}
