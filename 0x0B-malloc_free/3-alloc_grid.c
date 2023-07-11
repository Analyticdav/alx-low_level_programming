#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - The x and y grid function
 * @width: The first dimension
 * @height: The second dimension
 *
 * Return: pointer to two dimensional  arrays
 */
int **alloc_grid(int width, int height)
{
	int **n;
	int d, a;

	if (width <= 0 || height <= 0)
	return (NULL);
	n = malloc(sizeof(int *) * height);
	if (n == NULL)
	return (NULL);
	for (d = 0; d < height; d++)
{
	n[d] = malloc(sizeof(int) * width);
	if (n[d] == NULL)
{
	for (; d >= 0; d--)
	free(n[d]);
	free(n);
	return (NULL);
}
}
	for (d = 0; d < height; d++)
{
	for (a = 0; a < width; a++)
	n[d][a] = 0;
}
	return (n);
}
