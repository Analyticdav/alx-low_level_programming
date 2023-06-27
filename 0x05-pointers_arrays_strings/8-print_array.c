#include <stdio.h>
/**
 * print_array - function to print arrays
 * i represents the inde_of_number
 * @a: output
 * @n: input
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != (n - 1))
{
printf(",");
}
}
printf("\n");
}
