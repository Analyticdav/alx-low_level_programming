#include "main.h"
/**
 * puts2 - The function to print
 * @str: The string
 * Return: string
 */
void puts2(char *str)
{
int l = 0;
int t = 0;
int o;
char *y = str;

while (*y != '\n')
{
y++;
l++;
}
t = l - 1;
for (o = 0; o <= t; o++)
{
if (o % 2 == 0)
{
_putchar(str[0]);
}
}
_putchar('\n');
}
