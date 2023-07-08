#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - the function
 * @argc: The coumter
 * @argv: The vector
 * Return: 0 is successful
 */
int main(int argc, char *argv[])
{
int num, i, j, sum;

if (argc == 1)
{
printf("0\n");
return (0);
}
sum = 0;
for (i = 1; i < argc; i++)
{
j = 0;
while (argv[i][j] != '\0')
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
j++;
}
num = atoi(argv[i]);
sum += num;
}
printf("%d\n", sum);
return (0);
}
