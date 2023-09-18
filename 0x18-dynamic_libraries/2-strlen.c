#include "main.h"
/**
 * _strlen - A function to check string length
 * @s: string
 * Return: l
 */
int _strlen(char *s)
{
int l = 0;

while (*s != '\0')
{
l++;
s++;
}
return (l);
}
