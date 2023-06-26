#include "main.h"
/**
 * rev_strin - Function that reverses steings
 * @s: The string
 * Return: string
 */
void rev_string(char *s)
{
char rev = [0];
int counter = 0;
int i;

while (s[counter] != '\0')
counter++;
for (i = 0; i < counter; i++)
{
counter--;
rev = s[i];
s[i] = s[counter];
s[counter] = rev;
}
}

