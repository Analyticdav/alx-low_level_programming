#include "main.h"
/**
 * puts2 - The function to print
 * @str: The string
 * Return: string
 */
void puts2(char *str)
{
int p = 0;
while (str[p] != '\0')
{
if (p % 2 == 0)
{
_putchar(str[p]);
}
p++;
}
_putchar('\n');
}
