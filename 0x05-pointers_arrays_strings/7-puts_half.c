#include "main.h"
/**
 * puts_half - The function to print half 
 * @str: The string
 */
void puts_half(char *str)
{
int f, h;
f = 0;
while (str[f] != '\0')
f++;
h = f / 2;
if (f % 2 == 1)
h++;
while (h < f)
{
_putchar(str[h]);
h++;
}
_putchar('\n');
}
