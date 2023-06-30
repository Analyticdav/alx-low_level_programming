#include "main.h"
/**
 * reverse_array - The function to reverse arays
 * @a: the character to test
 * @n: The counter value
 * Return: void.
 */
void reverse_array(int *a, int n)
{
int temp, counter;
n = n - 1;
counter = 0;
while (counter <= n)
{
temp = a[counter];
a[counter++] = a[n];
a[n--] = temp;
}
}
