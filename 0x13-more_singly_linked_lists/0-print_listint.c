#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - The funtion to output listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes present in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count_nodes;

	count_nodes = 0;
	while (h)
	{
	count_nodes++;
	printf("%d\n", h->n);
	h = h->next;

	}
	return (count_nodes);
}
