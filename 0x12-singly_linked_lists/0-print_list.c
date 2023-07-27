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
	size_t l = 0;

	while (h)
	{
	if (!h->str)
	printf("[0] (nil)\n");

	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	l++;
	}
	return (l);
}
