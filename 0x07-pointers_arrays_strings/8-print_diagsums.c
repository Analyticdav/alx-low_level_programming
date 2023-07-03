#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - The function for diagonal sun
 * @a: The character to use
 * @size: The size of diagonal
 */
void print_diagsums(int *a, int size)
{
int index, diagonal_sum1 = 0, diagonal_sum2 = 0;

for (index = 0; index < size; index++)
{
diagonal_sum1 += a[index];
a += size;
}
a -= size;
for (index = 0; index < size; index++)
{
diagonal_sum2 += a[index];
a -= size;
}
printf("%d, %d\n", diagonal_sum1, diagonal_sum2);
}
