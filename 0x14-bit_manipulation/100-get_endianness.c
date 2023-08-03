#include "main.h"
#include <stdlib.h>
/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 or 1.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	return (int)(*ptr);
}

