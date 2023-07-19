#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - The function to perform the right operation
 * @s: The argument
 *
 * Return: A pointer to the right operation
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

int d = 0;

while (ops[d].op != NULL)
{
	if (*(ops[d].op) == *s && *(s + 1) == '\0')
	return (ops[d].f);
	d++;
}

return (NULL);
}
