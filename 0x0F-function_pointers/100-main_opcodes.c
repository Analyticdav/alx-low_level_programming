#include <stdio.h>
#include <stdlib.h>

/**
 * main - The function
 * @argc: The argument counter
 * @argv: An array vector
 *
 * Return:  0 (if successful).
 */
int main(int argc, char *argv[])
{
	int bytes, d;
	unsigned char *main_addr = (unsigned char *)main;

	if (argc != 2)
{
	printf("Error\n");
	return (1);
}

	bytes = atoi(argv[1]);
	if (bytes < 0)
{
	printf("Error\n");
	return (2);
}

for (d = 0; d < bytes; d++)
{
printf("%02x", main_addr[d]);
	if (d != bytes - 1)
	printf(" ");
}
	printf("\n");

return (0);
}
