#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"
#include <string.h>
/**
 * is_valid_number - Checks if a string is a valid number
 * @str: The string to check
 *
 * Return: true if the string is a valid number, false otherwise
 */
bool is_valid_number(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (str[i] < '0' || str[i] > '9')
return (false);
i++;
}
return (true);
}

/**
 * multiply - Multiplies two positive numbers
 * @num1: The first number
 * @num2: The second number
 */
void multiply(char *num1, char *num2)
{
int len1, len2, i, j, carry, product, sum;
int *result;

len1 = strlen(num1);
len2 = strlen(num2);
result = calloc(len1 + len2, sizeof(int));

for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
product = (num1[i] - '0') * (num2[j] - '0') + carry;
sum = result[i + j + 1] + product;
result[i + j + 1] = sum % 10;
carry = sum / 10;
}
result[i] += carry;
}
i = 0;
while (result[i] == 0)
i++;

if (i == len1 + len2)
printf("0\n");
else
{
for (; i < len1 + len2; i++)
printf("%d", result[i]);
printf("\n");
}
free(result);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}
if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
{
printf("Error\n");
return (98);
}
multiply(argv[1], argv[2]);
return (0);
}
