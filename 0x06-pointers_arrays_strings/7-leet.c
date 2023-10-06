#include "main.h"
/** 
* leet - the function for  string into 1337
 * @str: The string to encode
 *
 * Return: Pointer to the resulting encoded string
 */
char *leet(char *str)
{
char *leetspeak = "AEGOTLaegotl";
char *leetreplace = "436017436017";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leetspeak[j] != '\0'; j++)
{
if (str[i] == leetspeak[j])
{
str[i] = leetreplace[j];
break;
}
}
}

return str;
}
