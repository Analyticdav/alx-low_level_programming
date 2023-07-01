#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * main - The function
 * Return: 0 (Success)
 */
int main(void)
{
long int p;
long int max;
long int q;

p = 612852475143;
max = -1;
while (p % 2 == 0)
{
max = 2;
p /= 2;
}
for (q = 3; q <= sqrt(p); q = q + 2)
{
while (p % q == 0)
{
max = q;
p = p / q;
}
}
if (p > 2)
max = p;
printf("%ld\n", max);
return (0);
}
