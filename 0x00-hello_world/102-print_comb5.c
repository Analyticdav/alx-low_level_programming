#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program prints number combo
 * Return: 0 (Success)
 */
int main(void)
{
	int p;
	int q;

	for (p = 0; p <= 98; p++)
	{
		for (q = p + 1; q <= 99; q++)
		{
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar(' ');
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');
			if ((p == 98 && q == 99));
			continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
	
