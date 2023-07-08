#include <stdio.h>
#include <stdlib.h>
/**
 * main - The function
 * @argc: The counter
 * @argv: The vector
 * Return: 1 if error and 0 on success
*/
int main(int argc, char *argv[])
{
int cents, num_coins;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
num_coins = 0;
num_coins += cents / 25;
cents = cents % 25;
num_coins += cents / 10;
cents = cents % 10;
num_coins += cents / 5;
cents = cents % 5;
num_coins += cents / 2;
cents = cents % 2;
num_coins += cents;
printf("%d\n", num_coins);
return (0);
}
