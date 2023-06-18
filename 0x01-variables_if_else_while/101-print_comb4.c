#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Do what you do bette and: do more of what you do
 * Return: 0(Success)
 */
int main(void)
{
	int d;
	int p;
	int q;

	for ( d = '0', d <= '9'; d++)
	{
		for (p = d + 1; p <= '9'; p++)
		{
			for (q = p+1; q <= '9'; q++)
			{
				if ((p != d) !=q)
				{
					putchar(d);
					putchar(p);
					putchar(q);
					if (d == '7' && p == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

