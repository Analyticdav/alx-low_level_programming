#include "main.h"
/**
 * is_prime_number - The function to check prime numbers
 * @n: The test integer
 * Return: The prime number
 */
int is_prime_number(int n)
{
int Prime_Number = 0;
if (n < 2)
Prime_Number = 0;
else if (n == 2)
Prime_Number = 1;
else if (n % 2 == 1)
Prime_Number = 1;
return (Prime_Number);
}
