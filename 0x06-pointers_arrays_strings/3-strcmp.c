#include "main.h"
/**
 * _strcmp - the function
 * @s1: first string
 * @s2: Second string
 * Return: 0  and any other value
 */
int _strcmp(char *s1, char *s2)
{
int counter, compare_value;

counter = 0;
while (s1[counter] == s2[counter] && s1[counter] != '\0')
{
counter++;
}
compare_value = s1[counter] - s2[counter];
return (compare_value);
}
