#include "main.h"
#include <stdio.h>
/**
 * main - The function
 * Return: 0 (Success)
 */
int main(void)
{
int p;

for (p = 1; p <= 100; p++)
{
if (p % 3 == 0 && p % 5 != 0)
{
printf(" Fizz");
}
else if (p % 5 == 0 && p % 3 != 0)
{
printf(" Buzz");
}
else if (p % 3 == 0 && p % 5 == 0)
{
printf(" FizzBuzz");
}
else if (p == 1)
{
printf("%d", p);
}
else
{
printf(" %d", p);
}
}
printf("\n");
return (0);
}

