#include <stdio.h>
/**
 * main - A program to print in base 16
 * followed by a new line
 * only putchar can be used
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar(num % 10 + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
