#include <stdlib.h>
#include <string.h>
/**
* str_concat - The function
* @s1: First string
* @s2: Second string
* Return: Null byte
*/
char *str_concat(char *s1, char *s2)
{
	int len1, len2, concatLen;
	char result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	concatLen = len1 + len2 + 1;
	result = malloc(concatLen * sizeof(char));
	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
