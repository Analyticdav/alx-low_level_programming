#include "main.h"

/**
 * print_alphabet_x10 - This program prints alphabets 10x
 * Return: void
 */

void print_alphabet_x10(void)

{
	char alp
		;
	int j
		;
	j = 0;


	while (j < 10)

	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
		j++;
	}
}

