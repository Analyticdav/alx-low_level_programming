#include <stdio.h>
/**
 * main - The function
 * @argc: The counter
 * @argv: The vector
 * Return: 0 (successful)
 */
int main(int argc, char *argv[])
{
int p;

for (p = 0; p < argc; p++)
{
printf("%s\n", argv[p]);
}
return (0);
}
