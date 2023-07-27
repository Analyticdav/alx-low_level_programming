#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - The function to elements of a list_t list
 * @h: Pointer to the head
 * Return: The number of nodes
 * Format: The format to print elements
 * If string is NULL, print [0] which is (nil)
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_tp count = 0;

	printf("[");
	while (current != NULL)
	{
	if (current->str != NULL)
	printf("%s", current->str);
	else
	printf("[0] (nil)");

	if (current->next != NULL)
	printf(", ");

	current = current->next;
	count++;
	}
	printf("]\n");

	return (count);
}
