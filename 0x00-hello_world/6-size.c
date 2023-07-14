#include <stdio.h>
/**
 * main - This program prints different data types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %lu bytes\n", (unsigned long)sizeof(a));
printf("size of an int : %lu bytes\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu bytes\n", (unsigned long)sizeof(c));
printf("size of  long long int: %lu bytes\n", (unsigned long)sizeof(d));
0printf("size of a float: %lu bytes\n", (unsigned long)sizeof(f));
	return (0);
}
