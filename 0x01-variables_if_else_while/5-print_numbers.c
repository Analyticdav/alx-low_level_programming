#include <stdio.h>
/**
 * main - This code will print numbers in base ten.
 * Return: 0 (success)
 */
int main(void)
{
	int number;

	while (number < 10)
	{
		printf("%d", number);
		number += 1;
	}
	printf("\n");
	return (0);
}
