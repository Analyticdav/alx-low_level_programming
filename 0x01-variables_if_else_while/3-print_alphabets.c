#include <stdio.h>
/**
 * main - This program prints alphabets in lower and upper case
 * Return: 0 (Success)
 */
int main(void)
{
	int l = 'a';
	int u = 'A';

	while (l <= 'z')
{
	putchar(l);
	l += 1;
}
while (u <= 'Z')
{
	putchar(u);
	u += 1;
}
putchar('\n');
return (0);
}
