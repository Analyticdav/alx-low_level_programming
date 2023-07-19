#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - The function to add a and b
* @a: The first integer
* @b: The sclecond integer
* Return: The sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - The function to subtract a and b
* @a: The first integer
* @b: The sclecond integer
* Return: The sum of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - The function to multiply a and b
* @a: The first integer
* @b: The sclecond integer
* Return: The multiplication of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - The function to divide a and b
* @a: The first integer
* @b: The scecond integer
* Return: The division of a and b
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - The function for modulus of a and b
* @a: The first integer
* @b: The sclecond integer
* Return: The modulus of a and b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
