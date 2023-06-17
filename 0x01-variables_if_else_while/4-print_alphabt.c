#include <stdio.h>
/**
 * main - this block of code will output a-z except q and e
 * Return: 0 (success)
 */
int main(void)
{
	int lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase == 'e' || lowercase == 'q')
		{
			lowercase += 1;
		}
		else
		{
			putchar(lowercase);
			lowercase += 1;
		}}
	putchar('\n');
	return (0);
}
