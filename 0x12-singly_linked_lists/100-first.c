#include <stdio.h>
void intro(void) __attribute__ ((constructor));

/**
 * intro - The introductory comment
 *Return: void
 */

void intro(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
